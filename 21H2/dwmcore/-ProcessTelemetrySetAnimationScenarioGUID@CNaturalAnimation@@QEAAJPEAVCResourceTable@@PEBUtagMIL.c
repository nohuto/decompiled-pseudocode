/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180227460
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNaturalAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  return CBaseExpression::TelemetrySetAnimationScenarioGUID(this, (const struct _GUID *)((char *)a3 + 8));
}
