/*
 * XREFs of sub_18010A100 @ 0x18010A100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CCCE4 @ 0x1800CCCE4 (sub_1800CCCE4.c)
 *     sub_1800CCCF4 @ 0x1800CCCF4 (sub_1800CCCF4.c)
 *     sub_1800CCD24 @ 0x1800CCD24 (sub_1800CCD24.c)
 */

__int64 __fastcall sub_18010A100(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = sub_1800CCCE4(5, 4LL, 0LL);
  v3 = sub_1800CCCF4(4, 4LL, 0LL) | v2;
  result = v3 | sub_1800CCD24(0, 3, 0LL);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
