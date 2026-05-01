/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x18008FDDC
 * Callers:
 *     ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E1FAC (-IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091B80 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805CC3FC == 1 )
    return 1;
  if ( dword_1805CC3FC == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1805CC3FC = 2 - (v1 != 0);
  return result;
}
