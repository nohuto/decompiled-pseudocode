/*
 * XREFs of ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1C0088D58
 * Callers:
 *     imp_WdfInterruptEnable @ 0x1C0077CB0 (imp_WdfInterruptEnable.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C00174C4 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032328 (WPP_IFR_SF_qqq.c)
 */

int __fastcall FxInterrupt::ForceReconnect(FxInterrupt *this)
{
  unsigned int Flags; // ebx
  FxObject *v3; // rdx
  const void *_a1; // rax
  const void *_a2; // r8

  Flags = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  FxObject::GetObjectHandleUnchecked(this);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
  WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x1Bu, WPP_InterruptObject_cpp_Traceguids, _a1, _a2, this->m_Interrupt);
  this->m_ForceDisconnected = 0;
  return FxInterrupt::Connect(this, (Flags & 0x2000) == 0);
}
