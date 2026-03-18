/*
 * XREFs of _EditionSpeedHitTest@20 @ 0xF3DF6
 * Callers:
 *     <none>
 * Callees:
 *     _xxxSpeedHitTest@24 @ 0xF3E36 (_xxxSpeedHitTest@24.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *__stdcall EditionSpeedHitTest(void *a1, int a2, int a3, int a4, BOOL *a5, int a6)
{
  BOOL v6; // eax

  memset(a1, 0, 0x68u);
  v6 = xxxSpeedHitTest(0, a2, a3, a4, a6, a1) != 0;
  if ( a5 )
    *a5 = v6;
  return a1;
}
