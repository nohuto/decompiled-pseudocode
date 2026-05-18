/*
 * XREFs of sub_18010FA20 @ 0x18010FA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D22AC @ 0x1800D22AC (sub_1800D22AC.c)
 *     sub_1800D25B4 @ 0x1800D25B4 (sub_1800D25B4.c)
 *     sub_1800D25C4 @ 0x1800D25C4 (sub_1800D25C4.c)
 *     sub_1800D25F4 @ 0x1800D25F4 (sub_1800D25F4.c)
 *     sub_1800D2634 @ 0x1800D2634 (sub_1800D2634.c)
 *     sub_1800D2654 @ 0x1800D2654 (sub_1800D2654.c)
 */

__int64 __fastcall sub_18010FA20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = sub_1800D25B4(5, 4LL, 0LL);
  v3 = sub_1800D22AC(4, 4, 0LL) | v2;
  v4 = v3 | sub_1800D25C4(4, 4LL, 0LL);
  v5 = v4 | sub_1800D25F4(0, 3, 0LL);
  v6 = v5 | sub_1800D2634(0, 2, 0LL);
  result = v6 | sub_1800D2654(0, 2, 0LL);
  *(_QWORD *)(a1 + 112) = result;
  return result;
}
