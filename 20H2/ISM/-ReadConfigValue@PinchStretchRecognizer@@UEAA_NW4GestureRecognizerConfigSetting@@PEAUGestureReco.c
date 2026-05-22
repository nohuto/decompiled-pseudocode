/*
 * XREFs of ?ReadConfigValue@PinchStretchRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180183DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PinchStretchRecognizer::ReadConfigValue(__int64 a1, int a2, __int64 a3)
{
  char result; // al

  result = 1;
  if ( a2 != 18 )
    return 0;
  *(_WORD *)(a3 + 4) = *(_WORD *)(a1 + 58);
  *(_DWORD *)a3 = 18;
  return result;
}
