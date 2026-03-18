/*
 * XREFs of ?TransitionForegroundPriority@PriorityBoostCUI@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x18BD2
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC (-xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 * Callees:
 *     ??$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z@Z @ 0x1765A (--$ForEachDescendantInComponentHierarchy@P6GXPBUtagWND@@@Z@CoreWindowProp@@SGXPBUtagWND@@P6GX0@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___ @ 0x17674 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2__.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CFA (-GetNearestCoreWindowAncestor@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 *     ?IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x1C92C (-IsHost@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x185373 (_anonymous_namespace_--TransitionForegroundPriority_DeBoostWindowHelper.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z @ 0x19C5BF (-GetNextComponentWindow@CoreWindowProp@@SGPAUtagWND@@PBU2@0@Z.c)
 */

void __fastcall PriorityBoostCUI::TransitionForegroundPriority(int a1, int a2)
{
  int v2; // esi
  struct tagWND *TopLevelHost; // edi
  int v4; // edx
  int v5; // ecx
  struct tagWND *v6; // ebx
  struct tagWND *NextComponentWindow; // eax
  struct tagWND *v8; // esi
  struct tagWND *v9; // eax
  struct tagWND *v10; // esi
  const struct tagWND *v11; // [esp+0h] [ebp-18h]
  const struct tagWND *v12; // [esp+0h] [ebp-18h]
  const struct tagWND *v13; // [esp+0h] [ebp-18h]
  const struct tagWND *v14; // [esp+0h] [ebp-18h]
  const struct tagWND *v15; // [esp+0h] [ebp-18h]
  const struct tagWND *v16; // [esp+0h] [ebp-18h]
  const struct tagWND *v17; // [esp+4h] [ebp-14h]

  v2 = a1;
  CoreWindowProp::GetNearestCoreWindowAncestor(v11);
  TopLevelHost = CoreWindowProp::GetTopLevelHost(v12);
  CoreWindowProp::GetNearestCoreWindowAncestor(v13);
  v6 = CoreWindowProp::GetTopLevelHost(v14);
  if ( TopLevelHost != v6
    || !TopLevelHost
    && (!v2 || (v5 = _gptiForeground) == 0 || *(_DWORD *)(v2 + 232) != *(_DWORD *)(_gptiForeground + 232)) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
    if ( _gptiForeground )
      anonymous_namespace_::RequestPriorityUpdate(_gptiForeground, 1);
    if ( v6 )
    {
      anonymous_namespace_::RequestPriorityUpdate(*((_DWORD *)v6 + 2), 1);
      if ( CoreWindowProp::IsHost(v15) )
      {
        while ( 1 )
        {
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow(v15, v17);
          v8 = NextComponentWindow;
          if ( !NextComponentWindow )
            break;
          anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper(NextComponentWindow);
          CoreWindowProp::ForEachDescendantInComponentHierarchy<void (__stdcall *)(tagWND const *)>(v8);
        }
        v2 = a1;
      }
    }
    if ( v2 )
      anonymous_namespace_::RequestPriorityUpdate(v2, 0);
    if ( TopLevelHost )
    {
      if ( (*(_BYTE *)(*((_DWORD *)TopLevelHost + 5) + 23) & 8) == 0 )
        anonymous_namespace_::RequestPriorityUpdate(*((_DWORD *)TopLevelHost + 2), 0);
      if ( CoreWindowProp::IsHost(v15) )
      {
        while ( 1 )
        {
          v9 = CoreWindowProp::GetNextComponentWindow(v16, v17);
          v10 = v9;
          if ( !v9 )
            break;
          if ( (*(_BYTE *)(*((_DWORD *)v9 + 5) + 23) & 8) == 0 )
            anonymous_namespace_::RequestPriorityUpdate(*((_DWORD *)v9 + 2), 0);
          CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_edf0efb3d7d609a29e2fbe5ff28087a2___(v10, a2);
        }
      }
    }
    ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
    KeLeaveCriticalRegion();
  }
  if ( dword_274B40 != a2 )
  {
    if ( dword_274B40 )
      HMAssignmentUnlock(&dword_274B40);
    if ( a2 )
      HMAssignmentLock(v5, v4);
  }
}
