/*
 * XREFs of ?GetHistory@FxSpinLock@@IEAAPEAUFX_SPIN_LOCK_HISTORY@@XZ @ 0x1C001965C
 * Callers:
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00195E8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 * Callees:
 *     <none>
 */

FxSpinLock *__fastcall FxSpinLock::GetHistory(FxSpinLock *this)
{
  if ( this->m_ObjectSize == 128 )
    return 0LL;
  else
    return this + 1;
}
