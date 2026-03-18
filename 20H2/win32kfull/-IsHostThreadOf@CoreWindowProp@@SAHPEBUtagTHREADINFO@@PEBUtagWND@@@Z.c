/*
 * XREFs of ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C012B64C
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C001432C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsHostThreadOf(const struct tagTHREADINFO *a1, const struct tagWND *a2)
{
  unsigned int v4; // ebx
  struct tagWND *Host; // rax

  v4 = 0;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a2) )
    return 0LL;
  Host = CoreWindowProp::GetHost(a2);
  if ( Host )
    return a1 == *((const struct tagTHREADINFO **)Host + 2);
  return v4;
}
