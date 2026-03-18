/*
 * XREFs of IsImmDisableIMEPresent @ 0x1400047FC
 * Callers:
 *     WinMain @ 0x1400018F0 (WinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400048E0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsImmDisableIMEPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1400159A0 == 1 )
    return 1;
  if ( dword_1400159A0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"*,", &v1) < 0 )
    return 0;
  result = v1;
  dword_1400159A0 = 2 - (v1 != 0);
  return result;
}
