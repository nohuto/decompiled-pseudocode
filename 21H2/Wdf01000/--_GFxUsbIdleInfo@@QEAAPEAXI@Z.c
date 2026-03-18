/*
 * XREFs of ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C008A79C
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C008A700 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C008A8C4 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxUsbIdleInfo *__fastcall FxUsbIdleInfo::`scalar deleting destructor'(FxUsbIdleInfo *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_IdleIrp.m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
