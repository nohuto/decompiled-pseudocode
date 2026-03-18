/*
 * XREFs of _EditionPointerSpeedHitTest@20 @ 0x17B7E0
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 */

void *__stdcall EditionPointerSpeedHitTest(void *a1, int a2, int a3, int a4, BOOL *a5, int a6)
{
  BOOL v6; // eax

  memset(a1, 0, 0x68u);
  v6 = xxxPointerSpeedHitTest(a4, a2, a3, a6, a1) != 0;
  if ( a5 )
    *a5 = v6;
  return a1;
}
