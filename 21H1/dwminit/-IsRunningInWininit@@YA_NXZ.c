/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x1800016EC
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x1800032E4 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x180003360 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800037E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
