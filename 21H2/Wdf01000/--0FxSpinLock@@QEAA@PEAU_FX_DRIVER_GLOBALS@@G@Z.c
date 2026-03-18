/*
 * XREFs of ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C0011178
 * Callers:
 *     imp_WdfSpinLockCreate @ 0x1C0011040 (imp_WdfSpinLockCreate.c)
 * Callees:
 *     ?GetHistory@FxSpinLock@@IEAAPEAUFX_SPIN_LOCK_HISTORY@@XZ @ 0x1C00111EC (-GetHistory@FxSpinLock@@IEAAPEAUFX_SPIN_LOCK_HISTORY@@XZ.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0016188 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0036C00 (memset.c)
 */

void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FX_SPIN_LOCK_HISTORY *History; // rax
  int v5; // edx
  FX_SPIN_LOCK_HISTORY *v6; // rbx

  FxObject::FxObject(this, 0x1024u, ((ExtraSize + 15) & 0xFFF0) + 128, FxDriverGlobals);
  this->__vftable = (FxSpinLock_vtbl *)FxSpinLock::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_Irql = 0;
  History = FxSpinLock::GetHistory(this);
  v6 = History;
  if ( History )
  {
    memset(History, v5, sizeof(FX_SPIN_LOCK_HISTORY));
    v6->CurrentHistory = v6->History;
  }
}
