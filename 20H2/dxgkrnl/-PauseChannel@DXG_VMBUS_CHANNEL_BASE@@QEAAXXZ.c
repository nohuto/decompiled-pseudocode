/*
 * XREFs of ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C02399A0
 * Callers:
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C022F878 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C02846F0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_VMBUS_CHANNEL_BASE::PauseChannel(struct _KTHREAD **this)
{
  char v1; // di

  v1 = 0;
  if ( this[2] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 1));
    v1 = 1;
  }
  if ( *this )
    ((void (*)(void))qword_1C00B20F8)();
  if ( v1 )
  {
    this[2] = 0LL;
    ExReleasePushLockExclusiveEx(this + 1, 0LL);
    KeLeaveCriticalRegion();
  }
}
