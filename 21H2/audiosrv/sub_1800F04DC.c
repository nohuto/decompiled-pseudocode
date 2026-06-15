/*
 * XREFs of sub_1800F04DC @ 0x1800F04DC
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memset @ 0x18006AB8C (memset.c)
 */

_QWORD *__fastcall sub_1800F04DC(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = sub_180055F40(0x48uLL);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x48uLL);
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
