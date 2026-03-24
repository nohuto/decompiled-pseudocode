/*
 * XREFs of NtLockRegistryKey @ 0x1407C2F50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CmpReleaseShutdownRundown @ 0x140655680 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140656AB0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x14066461C (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1407C2FF0 (CmLockKeyForWrite.c)
 */

__int64 __fastcall NtLockRegistryKey(void *a1)
{
  __int64 v2; // r8
  int v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741727;
  }
  else if ( CmpAcquireShutdownRundown() )
  {
    v3 = CmObReferenceObjectByHandle(a1, 0x20006u, v2, 0, &DmaAdapter, 0LL);
    if ( v3 >= 0 )
    {
      v3 = CmLockKeyForWrite(DmaAdapter);
      if ( v3 >= 0 )
        v3 = 0;
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    CmpReleaseShutdownRundown();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v3;
}
