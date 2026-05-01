/*
 * XREFs of ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180009ED0
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180009E40 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180186520 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801867C0 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180009F90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioner.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___ @ 0x18000B150 (ShellPositionerHelpers--PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::IsViewFullScreen(IUnknown **this, struct IApplicationView *a2, int *a3)
{
  int v4; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0;
  *a3 = 0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v9) >= 0 )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetImpl'::`2'::impl,
      v7);
    ShellPositionerHelpers::PerformCallbackOnView__lambda_eff81aa7953cc35c0732a2758107af95___(*(this - 9));
    LOBYTE(v4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) == 3;
    *a3 = v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return 0LL;
}
