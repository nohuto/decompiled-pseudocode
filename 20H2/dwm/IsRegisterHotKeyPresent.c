/*
 * XREFs of IsRegisterHotKeyPresent @ 0x140004404
 * Callers:
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400018A4 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400048E0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterHotKeyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140015958 == 1 )
    return 1;
  if ( dword_140015958 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_140015958 = 2 - (v1 != 0);
  return result;
}
