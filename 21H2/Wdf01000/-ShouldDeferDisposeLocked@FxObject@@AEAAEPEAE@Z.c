/*
 * XREFs of ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C000ADB4
 * Callers:
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C000AB80 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C000ABF0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxObject::ShouldDeferDisposeLocked(FxObject *this, unsigned __int8 *PreviousIrql)
{
  unsigned __int16 m_ObjectFlags; // ax

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) == 0 )
  {
    if ( (m_ObjectFlags & 0x10) == 0 )
      return 0;
    if ( PreviousIrql )
    {
      if ( !*PreviousIrql )
        return 0;
    }
    else if ( !KeGetCurrentIrql() )
    {
      return 0;
    }
  }
  return 1;
}
