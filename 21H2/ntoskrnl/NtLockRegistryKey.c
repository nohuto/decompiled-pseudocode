/*
 * XREFs of NtLockRegistryKey @ 0x1407C3470
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1407C3510 (CmLockKeyForWrite.c)
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
