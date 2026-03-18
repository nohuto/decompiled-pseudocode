/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180042E9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CKeyframeAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  return CBaseExpression::TelemetrySetAnimationScenarioGUID(this, (const struct _GUID *)((char *)a3 + 8));
}
