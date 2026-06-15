/*
 * XREFs of ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180008FC0 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180036BF8 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180038D50 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x18005FFA8 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073194 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 *     ?IsMultiUserSKU@AtmosCheck@@AEBA_NXZ @ 0x1800738C8 (-IsMultiUserSKU@AtmosCheck@@AEBA_NXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800738F4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180073A54 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x180073D74 (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 *     ?OnAppServicesReady@AtmosCheck@@AEAAXXZ @ 0x180136170 (-OnAppServicesReady@AtmosCheck@@AEAAXXZ.c)
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
