/*
 * XREFs of ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952
 * Callers:
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     ?GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0xAE592 (-GetHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z @ 0xC317E (-IsHostOrComponentThreadOf@CoreWindowProp@@SGHPBUtagTHREADINFO@@PBUtagWND@@@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8 (-AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z @ 0xC43C8 (-FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z.c)
 *     ?GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z @ 0xCC6FC (-GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z @ 0x19C676 (-UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

BOOL __fastcall CWindowProp::GetProp<CoreWindowProp>(int a1, _DWORD *a2)
{
  int Prop; // eax

  Prop = _GetProp(1);
  *a2 = Prop;
  return Prop != 0;
}
