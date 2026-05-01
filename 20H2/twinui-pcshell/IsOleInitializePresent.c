/*
 * XREFs of IsOleInitializePresent @ 0x18008F654
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x180214E10 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091780 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOleInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805CB3F8 == 1 )
    return 1;
  if ( dword_1805CB3F8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1805CB3F8 = 2 - (v1 != 0);
  return result;
}
