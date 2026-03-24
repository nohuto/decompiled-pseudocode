/*
 * XREFs of ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAJXZ @ 0x1C0026C84
 * Callers:
 *     ?VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0026DA0 (-VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETI.c)
 * Callees:
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::GetNumWorkItems(PKSPIN_LOCK SpinLock)
{
  unsigned int v2; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v2 = *((_DWORD *)SpinLock + 8);
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v2;
}
