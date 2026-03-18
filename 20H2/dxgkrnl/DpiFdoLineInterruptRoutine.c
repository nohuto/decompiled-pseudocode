/*
 * XREFs of DpiFdoLineInterruptRoutine @ 0x1C0051DA0
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoMessageInterruptRoutine @ 0x1C000D8C0 (DpiFdoMessageInterruptRoutine.c)
 */

__int64 __fastcall DpiFdoLineInterruptRoutine(__int64 a1, __int64 a2)
{
  return DpiFdoMessageInterruptRoutine(a1, a2, 0LL);
}
