/*
 * XREFs of ?SetConfigValue@PinchStretchRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x180184410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PinchStretchRecognizer::SetConfigValue(
        PinchStretchRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  bool result; // al

  result = 1;
  if ( *(_DWORD *)a2 != 18 )
    return 0;
  *((_WORD *)this + 29) = *((_WORD *)a2 + 2);
  return result;
}
