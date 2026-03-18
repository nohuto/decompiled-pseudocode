/*
 * XREFs of ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1C008D1E8
 * Callers:
 *     imp_WdfInterruptDisable @ 0x1C0082D20 (imp_WdfInterruptDisable.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000D374 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall FxInterrupt::ForceDisconnect(FxInterrupt *this)
{
  unsigned int Flags; // ebx
  FxObject *v3; // rdx
  const void *_a1; // rax
  const void *_a2; // r8

  Flags = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  FxObject::GetObjectHandleUnchecked(this);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
  WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x1Au, WPP_InterruptObject_cpp_Traceguids, _a1, _a2, this->m_Interrupt);
  this->m_ForceDisconnected = 1;
  return FxInterrupt::Disconnect(this, (Flags & 0x2000) == 0);
}
