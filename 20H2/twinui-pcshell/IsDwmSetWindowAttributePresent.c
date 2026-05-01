/*
 * XREFs of IsDwmSetWindowAttributePresent @ 0x180090BF4
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18006E3A0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091780 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmSetWindowAttributePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805CB548 == 1 )
    return 1;
  if ( dword_1805CB548 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"8:", &v1) < 0 )
    return 0;
  result = v1;
  dword_1805CB548 = 2 - (v1 != 0);
  return result;
}
