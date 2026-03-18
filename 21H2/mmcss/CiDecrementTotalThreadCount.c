/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C000205C
 * Callers:
 *     CiThreadCleanup @ 0x1C000A680 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AED0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
