/*
 * XREFs of ?ResetConfigValues@PinchStretchRecognizer@@UEAAXXZ @ 0x18001E6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PinchStretchRecognizer::ResetConfigValues(PinchStretchRecognizer *this)
{
  *((_WORD *)this + 29) = PinchStretchRecognizer::s_minimumUpdateThreshold;
}
