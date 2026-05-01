/*
 * XREFs of ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x18046ACA8
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801596C0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1802205F8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x18046AC2C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x18046B760 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

bool __fastcall CallerIdentity::IsShellExperienceAppId(LPCWCH lpString2, const unsigned __int16 *a2)
{
  bool result; // al
  __int64 v4; // rbx
  LPCWCH lpString1[7]; // [rsp+30h] [rbp-48h]

  lpString1[0] = L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App";
  lpString1[1] = L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App";
  lpString1[2] = L"5b04b775-356b-4aa0-aaf8-6491ffea5602_6f5w9sgpe6vgt!WP";
  lpString1[3] = L"StartAppVS_xbqbv2ksdy6ng!App";
  lpString1[4] = L"Microsoft.Windows.Cortana_cw5n1h2txyewy!ppleae38af2e007f4358a809ac99a64a67c1";
  lpString1[5] = L"Microsoft.Cortana_8wekyb3d8bbwe!ppleae38af2e007f4358a809ac99a64a67c1";
  lpString1[6] = L"HoloShell_cw5n1h2txyewy!HoloShell";
  result = 0;
  v4 = 0LL;
  do
  {
    if ( (unsigned int)v4 >= 7 )
      break;
    result = CompareStringOrdinal(lpString1[v4], -1, lpString2, -1, 1) == 2;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( !result );
  return result;
}
