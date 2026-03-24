/*
 * XREFs of NtGetDevicePowerState @ 0x1408F0370
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406C5DFC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PopLockGetDoDevicePowerState @ 0x14056F4EC (PopLockGetDoDevicePowerState.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x14071C4DC (IoGetRelatedTargetDevice.c)
 */

NTSTATUS __fastcall NtGetDevicePowerState(void *a1, _DWORD *a2)
{
  __int64 v3; // rdx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  int RelatedTargetDevice; // ebx
  struct _DMA_ADAPTER *v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v3 = (__int64)a2;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &DmaAdapter);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v7 = DmaAdapter;
      *a2 = PopLockGetDoDevicePowerState((__int64)DmaAdapter[19].DmaOperations);
      HalPutDmaAdapter(v7);
    }
    return RelatedTargetDevice;
  }
  return result;
}
