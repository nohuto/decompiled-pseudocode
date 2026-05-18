/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x180008464
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x18000A064 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     DwmpCreateSessionProcess @ 0x18000A0E0 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x18000A560 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
