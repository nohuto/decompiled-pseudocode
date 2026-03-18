/*
 * XREFs of ?Dispose@FxChildList@@MEAAEXZ @ 0x1C005BCE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxChildList::Dispose(FxChildList *this)
{
  if ( this->m_IsAdded )
    this->m_DeviceBase->RemoveChildList(this->m_DeviceBase, this);
  return 1;
}
