/*
 * XREFs of sub_1800E3474 @ 0x1800E3474
 * Callers:
 *     sub_1800E345C @ 0x1800E345C (sub_1800E345C.c)
 *     sub_1800E3900 @ 0x1800E3900 (sub_1800E3900.c)
 *     sub_1800E3A70 @ 0x1800E3A70 (sub_1800E3A70.c)
 *     sub_1800E3BE0 @ 0x1800E3BE0 (sub_1800E3BE0.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 * Callees:
 *     sub_180002B50 @ 0x180002B50 (sub_180002B50.c)
 */

__int64 __fastcall sub_1800E3474(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return sub_180002B50(2 * v1);
  return result;
}
