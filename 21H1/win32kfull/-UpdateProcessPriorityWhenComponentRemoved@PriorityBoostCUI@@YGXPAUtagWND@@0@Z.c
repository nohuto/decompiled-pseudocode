/*
 * XREFs of ?UpdateProcessPriorityWhenComponentRemoved@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0x185390
 * Callers:
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x185373 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenComponentRemoved(_DWORD *a1, int a2)
{
  int v4; // ecx
  struct tagWND *TopLevelHost; // eax
  struct tagWND *NextComponentWindow; // eax
  struct tagWND *v7; // edi
  const struct tagWND *v8; // [esp+0h] [ebp-10h]
  const struct tagWND *v9; // [esp+4h] [ebp-Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == _gptiForeground )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(a1);
    if ( TopLevelHost )
    {
      anonymous_namespace_::RequestPriorityUpdate(*((_DWORD *)TopLevelHost + 2), 1);
      if ( CoreWindowProp::IsHost() )
      {
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v8, v9);
          v7 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper((int)NextComponentWindow);
          CoreWindowProp::ForEachDescendantInComponentHierarchy<void (__stdcall *)(tagWND const *)>(v7);
        }
      }
    }
  }
  else if ( (*(_DWORD *)(*(_DWORD *)(a1[2] + 232) + 464) & 0x60000) != 0 )
  {
    anonymous_namespace_::RequestPriorityUpdate(v4, 1);
  }
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  KeLeaveCriticalRegion();
}
