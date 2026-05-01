/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180046E18
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004627C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&_ @ 0x180094BD8 (wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-_.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020BB58 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x18044D50C (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044E2A0 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044E50C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
