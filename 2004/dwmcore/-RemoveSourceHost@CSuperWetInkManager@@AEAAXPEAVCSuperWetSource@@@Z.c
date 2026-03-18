/*
 * XREFs of ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180196C44
 * Callers:
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x180196C04 (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180186514 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C5104 (-SendMessageToHostForDestruction@CSuperWetSource@@QEAAJ_K@Z.c)
 */

void __fastcall CSuperWetInkManager::RemoveSourceHost(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  __int64 i; // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *((_QWORD *)this + 4); i != *((_QWORD *)this + 5) && *(struct CSuperWetSource **)i != a2; i += 88LL )
    ;
  if ( i != *((_QWORD *)this + 5) )
  {
    v4 = CSuperWetSource::SendMessageToHostForDestruction(*(CSuperWetSource **)i, *(_QWORD *)(i + 16));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)v4);
    memmove_0((void *)i, (const void *)(i + 88), *((_QWORD *)this + 5) - (i + 88));
    *((_QWORD *)this + 5) -= 88LL;
  }
}
