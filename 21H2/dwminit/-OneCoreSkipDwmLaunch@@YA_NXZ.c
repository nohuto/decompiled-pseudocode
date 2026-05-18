/*
 * XREFs of ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x18000A064
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000A0E0 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ?IsRunningInWininit@@YA_NXZ @ 0x180008464 (-IsRunningInWininit@@YA_NXZ.c)
 */

bool OneCoreSkipDwmLaunch(void)
{
  char v0; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  if ( IsRunningInWininit() )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"OneCoreNoBootDWM",
      0x20000010u,
      0LL,
      &pvData,
      &pcbData);
    return pvData != 0;
  }
  return v0;
}
