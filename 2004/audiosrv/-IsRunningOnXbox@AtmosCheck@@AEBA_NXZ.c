/*
 * XREFs of ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18000A258
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180039460 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800603E8 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073C54 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 *     ?IsMultiUserSKU@AtmosCheck@@AEBA_NXZ @ 0x180074388 (-IsMultiUserSKU@AtmosCheck@@AEBA_NXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800743B4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180074514 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x180074834 (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 *     ?OnAppServicesReady@AtmosCheck@@AEAAXXZ @ 0x180136E00 (-OnAppServicesReady@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall AtmosCheck::IsRunningOnXbox(AtmosCheck *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 48);
  v2 = 1;
  if ( v1 != 5 )
    return (unsigned int)(v1 - 11) <= 1;
  return v2;
}
