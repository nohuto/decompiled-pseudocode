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

NTSTATUS __cdecl NtLockRegistryKey(HANDLE KeyHandle)
{
  __int64 v2; // r8
  NTSTATUS v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return -1073741727;
  if ( !CmpAcquireShutdownRundown() )
    return -1073741431;
  v3 = CmObReferenceObjectByHandle(KeyHandle, 0x20006u, v2, 0, &DmaAdapter, 0LL);
  if ( v3 >= 0 )
  {
    v3 = CmLockKeyForWrite(DmaAdapter);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpReleaseShutdownRundown();
  return v3;
}
