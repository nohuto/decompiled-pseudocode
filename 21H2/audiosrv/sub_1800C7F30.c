/*
 * XREFs of sub_1800C7F30 @ 0x1800C7F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C64F8 @ 0x1800C64F8 (sub_1800C64F8.c)
 */

__int64 __fastcall sub_1800C7F30(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v4 = 0LL;
  sub_1800C64F8((__int64)&v4, (const FILETIME *)(a1 + 412));
  result = 0LL;
  *a2 = v4;
  return result;
}
