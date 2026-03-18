/*
 * XREFs of ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0035760
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C000DC54 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00302A8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C005F1C4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C006ABC8 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDevice::Dispose(FxDevice *this)
{
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDisposeList *m_DisposeList; // rcx

  if ( !this->m_Legacy )
    return 1;
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi);
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
  FxObject::DestroyChildren(this);
  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList);
  FxDevice::Destroy(this);
  return 0;
}
