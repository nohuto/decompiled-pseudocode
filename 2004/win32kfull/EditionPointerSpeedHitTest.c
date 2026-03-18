/*
 * XREFs of EditionPointerSpeedHitTest @ 0x1C0217AF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 *     xxxPointerSpeedHitTest @ 0x1C021843C (xxxPointerSpeedHitTest.c)
 */

void *__fastcall EditionPointerSpeedHitTest(void *a1, __int64 a2, __int64 a3, int a4, BOOL *a5)
{
  BOOL v7; // ecx

  memset(a1, 0, 0x70uLL);
  v7 = xxxPointerSpeedHitTest(a4, (__int64)a1) != 0;
  if ( a5 )
    *a5 = v7;
  return a1;
}
