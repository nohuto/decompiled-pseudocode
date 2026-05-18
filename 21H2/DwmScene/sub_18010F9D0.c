/*
 * XREFs of sub_18010F9D0 @ 0x18010F9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D25B4 @ 0x1800D25B4 (sub_1800D25B4.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 *     sub_1800D25F4 @ 0x1800D25F4 (sub_1800D25F4.c)
 */

__int64 __fastcall sub_18010F9D0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = sub_1800D25B4(5, 4LL, 0LL);
  v3 = sub_1800D25C4(4, 4LL, 0LL) | v2;
  result = v3 | sub_1800D25F4(0, 3, 0LL);
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
