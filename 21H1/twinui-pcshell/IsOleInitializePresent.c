/*
 * XREFs of IsOleInitializePresent @ 0x18008F1E4
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801F25C0 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180091220 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOleInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18059F1C8 == 1 )
    return 1;
  if ( dword_18059F1C8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_18059F1C8 = 2 - (v1 != 0);
  return result;
}
