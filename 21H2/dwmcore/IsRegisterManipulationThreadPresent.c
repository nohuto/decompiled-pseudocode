/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x180101F04
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x18002E280 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180102CA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1803D2E44 == 1 )
    return 1;
  if ( dword_1803D2E44 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1803D2E44 = 2 - (v1 != 0);
  return result;
}
