/*
 * XREFs of ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1800E253C
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800F3B20 (_dynamic_atexit_destructor_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    operator delete(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( qword_1803484F8 )
  {
    operator delete(qword_1803484F8);
    qword_1803484F8 = 0LL;
  }
  dword_180348500 = 0;
}
