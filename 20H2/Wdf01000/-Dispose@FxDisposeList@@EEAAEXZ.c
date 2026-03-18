/*
 * XREFs of ?Dispose@FxDisposeList@@EEAAEXZ @ 0x1C0054820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxDisposeList::Dispose(FxDisposeList *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx

  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  return 1;
}
