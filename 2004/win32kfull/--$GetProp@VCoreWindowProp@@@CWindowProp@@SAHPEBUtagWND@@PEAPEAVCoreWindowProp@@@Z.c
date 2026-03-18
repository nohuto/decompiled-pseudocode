/*
 * XREFs of ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C0022F60
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C000512C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0005210 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C000534C (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C000803C (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0022A80 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00B2BA0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0118568 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119404 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023E97C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C023EA10 (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 */

_BOOL8 __fastcall CWindowProp::GetProp<CoreWindowProp>(__int64 a1, __int64 *a2)
{
  __int64 Prop; // rax

  Prop = GetProp(a1, CoreWindowProp::s_atom, 1LL);
  *a2 = Prop;
  return Prop != 0;
}
