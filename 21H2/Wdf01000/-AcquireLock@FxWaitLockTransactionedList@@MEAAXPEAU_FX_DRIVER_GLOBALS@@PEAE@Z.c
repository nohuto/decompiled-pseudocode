/*
 * XREFs of ?AcquireLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@PEAE@Z @ 0x1C0010820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockTransactionedList::AcquireLock(
        FxWaitLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 *Irql)
{
  FxWaitLockInternal *p_m_StateChangeListLock; // rbx

  p_m_StateChangeListLock = &this->m_StateChangeListLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_StateChangeListLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_StateChangeListLock->m_OwningThread = KeGetCurrentThread();
}
