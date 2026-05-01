/*
 * XREFs of ?IsEnterprisePolicyEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18020599C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA6F8 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsEnterprisePolicyEnabled(CortanaAvailability *this, unsigned __int8 *a2)
{
  char v3; // bl
  int ExperiencePolicy_AllowCortana; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)this = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_AllowCortana) )
    goto LABEL_5;
  v3 = 1;
  v8 = 1;
  ExperiencePolicy_AllowCortana = PolicyManager_GetExperiencePolicy_AllowCortana(&v8);
  v5 = ExperiencePolicy_AllowCortana;
  if ( ExperiencePolicy_AllowCortana < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)ExperiencePolicy_AllowCortana);
    return v5;
  }
  if ( !v8 )
LABEL_5:
    v3 = 0;
  *(_BYTE *)this = v3;
  return 0LL;
}
