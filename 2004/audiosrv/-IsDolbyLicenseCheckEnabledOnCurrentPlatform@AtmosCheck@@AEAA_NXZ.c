/*
 * XREFs of ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800603E8
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F47C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18000A258 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 */

char __fastcall AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  char result; // al

  if ( *((_DWORD *)this + 48) == 3 )
    return 1;
  result = AtmosCheck::IsRunningOnXbox(this);
  if ( result )
    return 1;
  return result;
}
