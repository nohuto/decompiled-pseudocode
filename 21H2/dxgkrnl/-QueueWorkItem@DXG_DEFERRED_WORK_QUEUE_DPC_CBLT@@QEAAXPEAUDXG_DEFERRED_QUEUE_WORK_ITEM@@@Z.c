/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0026CEC
 * Callers:
 *     ?VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C0026DA0 (-VmBusChannelProcessPacketCblt@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETI.c)
 * Callees:
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::QueueWorkItem(
        PKSPIN_LOCK SpinLock,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2)
{
  PKSPIN_LOCK *v4; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    SpinLock[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v4 = (PKSPIN_LOCK *)SpinLock[3];
    if ( *v4 != SpinLock + 2 )
      __fastfail(3u);
    *(_QWORD *)a2 = SpinLock + 2;
    *((_QWORD *)a2 + 1) = v4;
    *v4 = (PKSPIN_LOCK)a2;
    SpinLock[3] = (KSPIN_LOCK)a2;
    if ( ++*((_DWORD *)SpinLock + 8) == 1 )
    {
      KeResetEvent((PRKEVENT)(SpinLock + 5));
      ExQueueWorkItem((PWORK_QUEUE_ITEM)SpinLock + 2, *((WORK_QUEUE_TYPE *)SpinLock + 24));
    }
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
