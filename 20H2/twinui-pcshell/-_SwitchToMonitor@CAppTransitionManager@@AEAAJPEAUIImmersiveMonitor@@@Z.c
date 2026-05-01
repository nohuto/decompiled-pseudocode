/*
 * XREFs of ?_SwitchToMonitor@CAppTransitionManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803C62CC
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C56EC (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     CAppTransitionTargetManager_CreateInstance @ 0x1803C9244 (CAppTransitionTargetManager_CreateInstance.c)
 */

__int64 __fastcall CAppTransitionManager::_SwitchToMonitor(IUnknown *punkSite, struct IImmersiveMonitor *a2)
{
  int Instance; // eax
  int v5; // ebx
  struct IUnknownVtbl *lpVtbl; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( punkSite[23].lpVtbl
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[23]),
        Instance = CAppTransitionTargetManager_CreateInstance(punkSite),
        v5 = Instance,
        Instance >= 0) )
  {
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)Instance);
  }
  if ( v5 >= 0 )
  {
    v9 = 0;
    lpVtbl = punkSite[22].lpVtbl;
    if ( !lpVtbl
      || (*((int (__fastcall **)(struct IUnknownVtbl *, struct IImmersiveMonitor *, int *))lpVtbl->QueryInterface + 12))(
           lpVtbl,
           a2,
           &v9) >= 0
      && !v9 )
    {
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&punkSite[22], (__int64)a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
