/*
 * XREFs of ??0DXG_DEFERRED_WORK_QUEUE_DPC_CBLT@@QEAA@XZ @ 0x1C00D7F00
 * Callers:
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C0283D14 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 * Callees:
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x1C0036FC8 (--0DXGSPINLOCK@@QEAA@XZ.c)
 */

DXG_DEFERRED_WORK_QUEUE_DPC_CBLT *__fastcall DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::DXG_DEFERRED_WORK_QUEUE_DPC_CBLT(
        DXG_DEFERRED_WORK_QUEUE_DPC_CBLT *this)
{
  DXGSPINLOCK::DXGSPINLOCK(this);
  *((_DWORD *)this + 8) = 0;
  *((_WORD *)this + 56) = 0;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  *((_DWORD *)this + 24) = 1;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 10) = DXG_DEFERRED_WORK_QUEUE_DPC_CBLT::DeferredWorkQueueCallback;
    *((_QWORD *)this + 11) = this;
    KeInitializeEvent((PRKEVENT)((char *)this + 40), NotificationEvent, 1u);
  }
  return this;
}
