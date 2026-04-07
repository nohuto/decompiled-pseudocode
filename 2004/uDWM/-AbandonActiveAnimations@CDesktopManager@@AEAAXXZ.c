/*
 * XREFs of ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180085C18
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18002595C (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CDesktopManager::AbandonActiveAnimations(CDesktopManager *this)
{
  struct _SINGLE_LIST_ENTRY *i; // rbx

  for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
  {
    if ( !*(_BYTE *)(((unsigned __int64)&i[-2] & -(__int64)(i != 0LL)) + 0x48) )
      CTimelineBase::JumpToFinalValue((CTimelineBase *)((unsigned __int64)&i[-2] & -(__int64)(i != 0LL)));
  }
}
