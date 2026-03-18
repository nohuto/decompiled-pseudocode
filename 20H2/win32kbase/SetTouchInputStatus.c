/*
 * XREFs of SetTouchInputStatus @ 0x1C012A5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetTouchInputStatus(int a1)
{
  RawInputManagerObject::bTouchInputAllowed = a1;
}
