/*
 * XREFs of ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C003FCB4
 * Callers:
 *     ?DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x1C003FE58 (-DisableChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C02389E0 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0238A64 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGAUTOPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        DXGAUTOPUSHLOCKEXCLUSIVE *this,
        struct DXGPUSHLOCK *const a2,
        char a3)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( a3 )
  {
    DXGPUSHLOCK::AcquireExclusive(a2);
    *((_DWORD *)this + 4) = 2;
  }
  return this;
}
