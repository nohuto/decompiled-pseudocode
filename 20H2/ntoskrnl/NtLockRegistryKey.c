/*
 * XREFs of NtLockRegistryKey @ 0x1407BEB50
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
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
