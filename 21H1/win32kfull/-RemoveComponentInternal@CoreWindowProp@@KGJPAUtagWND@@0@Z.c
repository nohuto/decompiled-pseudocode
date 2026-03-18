/*
 * XREFs of ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601
 * Callers:
 *     _NtUserSetCoreWindowPartner@12 @ 0xC4150 (_NtUserSetCoreWindowPartner@12.c)
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 *     ?Delete@CoreWindowProp@@UAEXXZ @ 0xD49BE (-Delete@CoreWindowProp@@UAEXXZ.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     ?FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z @ 0xC43C8 (-FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0xCC6B6 (-ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390 (-UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z @ 0x19C676 (-UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z.c)
 */

int __fastcall CoreWindowProp::RemoveComponentInternal(_DWORD *a1, int a2)
{
  int v4; // edi
  struct CoreWindowProp::Component *Component; // eax
  CoreWindowProp *v6; // esi
  struct tagWND *v8; // [esp+0h] [ebp-18h]
  struct CoreWindowProp::Component **v9; // [esp+4h] [ebp-14h]
  CoreWindowProp *v11; // [esp+10h] [ebp-8h] BYREF
  struct CoreWindowProp::Component *v12; // [esp+14h] [ebp-4h] BYREF

  v11 = 0;
  v4 = -1073741275;
  if ( CWindowProp::GetProp<CoreWindowProp>((int)a1, &v11) )
  {
    v12 = 0;
    Component = CoreWindowProp::FindComponent(a2, (int)a1, (struct tagWND *)&v12, v8, v9);
    if ( Component )
    {
      v6 = v11;
      CoreWindowProp::UnlinkAndDestroyComponent(v11, Component, v12);
      v4 = 0;
      if ( !*((_DWORD *)v6 + 6) )
        CoreWindowProp::ChangeRole((int)a1, 2, 0);
      PriorityBoostCUI::UpdateProcessPriorityWhenComponentRemoved(a1, a2);
    }
  }
  return v4;
}
