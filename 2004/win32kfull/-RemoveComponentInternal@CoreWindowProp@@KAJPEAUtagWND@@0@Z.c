/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023E97C
 * Callers:
 *     ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C012A190 (-Delete@CoreWindowProp@@UEAAXXZ.c)
 *     ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C023E950 (-RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C000534C (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C0022F60 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0119404 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z @ 0x1C0224004 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YAXPEAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z @ 0x1C023EA10 (-UnlinkAndDestroyComponent@CoreWindowProp@@IEAAXPEAUComponent@1@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponentInternal(struct tagWND *this, struct tagWND *a2)
{
  unsigned int v4; // edi
  struct CoreWindowProp::Component *Component; // rax
  CoreWindowProp *v6; // rbx
  struct tagWND *v7; // r8
  struct CoreWindowProp::Component *v9; // [rsp+50h] [rbp+18h] BYREF
  CoreWindowProp *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = -1073741275;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)this, (__int64 *)&v10) )
  {
    v9 = 0LL;
    Component = CoreWindowProp::FindComponent(this, a2, &v9);
    if ( Component )
    {
      v6 = v10;
      CoreWindowProp::UnlinkAndDestroyComponent(v10, Component, v9);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 10) )
        CoreWindowProp::ChangeRole((__int64)this, 2, 0);
      PriorityBoostCUI::UpdateProcessPriorityWhenComponentRemoved(this, a2, v7);
    }
  }
  return v4;
}
