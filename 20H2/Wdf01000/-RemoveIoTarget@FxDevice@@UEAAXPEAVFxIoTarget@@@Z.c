/*
 * XREFs of ?RemoveIoTarget@FxDevice@@UEAAXPEAVFxIoTarget@@@Z @ 0x1C0051C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C0061664 (-Remove@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 */

void __fastcall FxDevice::RemoveIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  FxTransactionedList::Remove(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  IoTarget->Release(IoTarget, this, 1846, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
}
