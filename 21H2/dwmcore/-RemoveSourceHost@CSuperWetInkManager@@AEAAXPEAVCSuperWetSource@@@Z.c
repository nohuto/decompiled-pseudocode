/*
 * XREFs of ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7F7C
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7F3C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180193D74 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801A73B8 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x180216BE4 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceHost(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  CSuperWetSource **i; // rbx
  CSuperWetSource *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = (CSuperWetSource **)*((_QWORD *)this + 8); i != *((CSuperWetSource ***)this + 9); i += 15 )
  {
    if ( *i == a2 )
    {
      v4 = *i;
      if ( *i == *((CSuperWetSource **)this + 1) )
      {
        CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
        v4 = *i;
      }
      v5 = CSuperWetSource::SendMessageToHostForDestruction(v4, (unsigned __int64)i[3]);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          141LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
          (const char *)(unsigned int)v5);
      memmove_0(i, i + 15, *((_QWORD *)this + 9) - (_QWORD)(i + 15));
      *((_QWORD *)this + 9) -= 120LL;
      return;
    }
  }
}
