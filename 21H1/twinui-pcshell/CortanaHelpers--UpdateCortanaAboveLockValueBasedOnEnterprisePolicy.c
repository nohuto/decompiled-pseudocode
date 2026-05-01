/*
 * XREFs of CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1801EF97C
 * Callers:
 *     ?LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801EF1B0 (-LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_T.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy @ 0x1801E6A58 (CortanaHelpers--AllowCortanaAboveLockByEnterprisePolicy.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x1801EF3BC (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

void CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy()
{
  HKEY v0; // rcx
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IsPPIEdition() && !CortanaHelpers::AllowCortanaAboveLockByEnterprisePolicy() )
  {
    v1 = SHRegSetBOOL(
           v0,
           L"Software\\Microsoft\\Speech_OneCore\\Preferences",
           L"VoiceActivationEnableAboveLockscreen",
           0);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"internal\\shell\\private\\inc\\CortanaHelpers.h",
        (const char *)(unsigned int)v1);
  }
}
