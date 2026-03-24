/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C0001B50
 * Callers:
 *     CiThreadCreate @ 0x1C000A800 (CiThreadCreate.c)
 *     CiThreadCleanup @ 0x1C000B570 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
