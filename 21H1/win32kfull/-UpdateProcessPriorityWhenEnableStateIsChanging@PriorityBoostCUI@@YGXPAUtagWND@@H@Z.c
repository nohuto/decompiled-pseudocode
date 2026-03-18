/*
 * XREFs of ?UpdateProcessPriorityWhenEnableStateIsChanging@PriorityBoostCUI@@YGXPAUtagWND@@H@Z @ 0x18B3C
 * Callers:
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x18B9E (-IsPartOfCompositeApplication@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CC2 (-GetTopLevelHost@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     ?GetNearestCoreWindowAncestor@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z @ 0x18CFA (-GetNearestCoreWindowAncestor@CoreWindowProp@@SGPAUtagWND@@PBU2@@Z.c)
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x18D26 (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

void __fastcall PriorityBoostCUI::UpdateProcessPriorityWhenEnableStateIsChanging(
        int a1,
        int a2,
        PriorityBoostCUI *this,
        struct tagWND *a4,
        int a5)
{
  struct tagWND *TopLevelHost; // eax
  int v8; // edx
  const struct tagWND *v9; // [esp+0h] [ebp-Ch]
  const struct tagWND *v10; // [esp+0h] [ebp-Ch]
  const struct tagWND *v11; // [esp+0h] [ebp-Ch]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  CoreWindowProp::GetNearestCoreWindowAncestor(v9);
  if ( CoreWindowProp::IsPartOfCompositeApplication(v10) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(v11);
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)TopLevelHost + 2) + 232) + 464) & 0x60000) == 0 )
        goto LABEL_2;
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    anonymous_namespace_::RequestPriorityUpdate(*(_DWORD *)(a1 + 8), v8);
  }
LABEL_2:
  ExReleasePushLockExclusiveEx(&`anonymous namespace'::boostLock, 0);
  JUMPOUT(0x24DFCC);
}
