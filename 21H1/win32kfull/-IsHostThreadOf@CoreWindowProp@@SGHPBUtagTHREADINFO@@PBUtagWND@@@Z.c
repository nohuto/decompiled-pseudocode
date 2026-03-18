/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC31B8
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC317E (-IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 */

BOOL __fastcall CoreWindowProp::IsHostThreadOf(int a1, _DWORD *a2)
{
  BOOL result; // eax
  struct tagWND *Host; // eax

  result = 0;
  if ( CoreWindowProp::IsComponent(a2) )
  {
    Host = CoreWindowProp::GetHost(a2);
    if ( Host )
    {
      if ( a1 == *((_DWORD *)Host + 2) )
        return 1;
    }
  }
  return result;
}
