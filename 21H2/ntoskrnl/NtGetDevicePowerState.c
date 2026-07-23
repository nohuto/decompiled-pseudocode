/*
 * XREFs of NtGetDevicePowerState @ 0x1408F04D0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406746EC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PopLockGetDoDevicePowerState @ 0x14056F72C (PopLockGetDoDevicePowerState.c)
 *     IoGetRelatedTargetDevice @ 0x1406FCB4C (IoGetRelatedTargetDevice.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  __int64 v3; // rdx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS RelatedTargetDevice; // ebx
  struct _DMA_ADAPTER *v7; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  DmaAdapter = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)State < 0x7FFFFFFF0000LL )
      v3 = (__int64)State;
    *(_DWORD *)v3 = *(_DWORD *)v3;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Device, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &DmaAdapter);
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v7 = DmaAdapter;
      *State = PopLockGetDoDevicePowerState((__int64)DmaAdapter[19].DmaOperations);
      HalPutDmaAdapter(v7);
    }
    return RelatedTargetDevice;
  }
  return result;
}
