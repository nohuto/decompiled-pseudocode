/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180094C4C
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004627C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&_ @ 0x180094BD8 (wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-_.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18020BB58 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x18044D50C (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044E2A0 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18044E50C (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180046894 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        BOOL a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *result; // rax

  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::details::FeatureFunctorHost *)((char *)this + 8), a2);
  *((_QWORD *)this + 3) = a3;
  result = this;
  *((_DWORD *)this + 8) = a2;
  return result;
}
