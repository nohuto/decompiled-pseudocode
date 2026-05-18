/*
 * XREFs of IsWaitForInputIdlePresent @ 0x18000D244
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180009C00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18000DD80 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWaitForInputIdlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180014890 == 1 )
    return 1;
  if ( dword_180014890 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L":<", &v1) < 0 )
    return 0;
  result = v1;
  dword_180014890 = 2 - (v1 != 0);
  return result;
}
