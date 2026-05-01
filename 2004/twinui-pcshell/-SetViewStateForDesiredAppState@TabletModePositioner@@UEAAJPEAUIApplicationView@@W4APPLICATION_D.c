/*
 * XREFs of ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803FB6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803F6E90 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803FF900 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180471E00 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::SetViewStateForDesiredAppState(__int64 a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *ppvOut; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v6 = TabletModePositioner::EvictAppHelper((IUnknown *)(a1 - 96), a2, 1u);
    if ( v6 < 0 )
    {
      v7 = 1652LL;
      goto LABEL_16;
    }
    return 0LL;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    v6 = TabletModePositioner::SwitchToAppHelper(a1 - 96, a2, 0LL, 0LL, 0LL);
    if ( v6 < 0 )
    {
      v7 = 1656LL;
      goto LABEL_16;
    }
    return 0LL;
  }
  if ( v5 != 1 )
  {
    v6 = -2147418113;
    v7 = 1670LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *(IUnknown **)(a1 - 80),
         &stru_180543010,
         &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
         &ppvOut);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = ApplicationViewHelpers::CloseView(a2, ppvOut, 8LL);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 1665LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return 0LL;
  }
  v9 = 1662LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v6;
}
