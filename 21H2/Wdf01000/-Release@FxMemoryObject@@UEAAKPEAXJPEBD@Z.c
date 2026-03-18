/*
 * XREFs of ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C000ABF0
 * Callers:
 *     ?Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z @ 0x1C00370B0 (-Release@FxMemoryObject@@WGI@EAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000ACD0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C000ADB4 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C006AA9C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxMemoryObject::Release(FxMemoryObject *this, void *Tag, int Line, const char *File)
{
  unsigned __int32 v5; // edi
  _LIST_ENTRY *Flink; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Flink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v5 )
  {
    if ( FxObject::ShouldDeferDisposeLocked(this, 0LL) )
    {
      FxObject::SetObjectStateLocked(this, 0xBu);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      FxObject::ProcessDestroy(this);
    }
  }
  return v5;
}
