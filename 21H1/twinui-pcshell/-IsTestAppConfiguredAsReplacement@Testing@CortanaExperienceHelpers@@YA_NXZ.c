/*
 * XREFs of ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x1801D094C
 * Callers:
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801E2938 (-TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x1801D08B8 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z.c)
 */

char __fastcall CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(
        CortanaExperienceHelpers::Testing *this,
        bool *a2)
{
  int IsTestAppConfiguredAsReplacement; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  IsTestAppConfiguredAsReplacement = CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(
                                       (CortanaExperienceHelpers::Testing *)&v5,
                                       a2);
  if ( IsTestAppConfiguredAsReplacement < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\shellcommonshell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)IsTestAppConfiguredAsReplacement);
  return v5;
}
