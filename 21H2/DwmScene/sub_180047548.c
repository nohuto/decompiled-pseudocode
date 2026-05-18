/*
 * XREFs of sub_180047548 @ 0x180047548
 * Callers:
 *     sub_180047058 @ 0x180047058 (sub_180047058.c)
 * Callees:
 *     sub_180037240 @ 0x180037240 (sub_180037240.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_180047548(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v6 = sub_180037240(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_1800474B8((__int64 *)a1, (__int64)v6, v4, a2);
}
