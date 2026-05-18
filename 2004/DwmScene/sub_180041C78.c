/*
 * XREFs of sub_180041C78 @ 0x180041C78
 * Callers:
 *     sub_180041788 @ 0x180041788 (sub_180041788.c)
 * Callees:
 *     sub_180031970 @ 0x180031970 (sub_180031970.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_180041C78(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v6 = sub_180031970(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_180041BE8((__int64 *)a1, (__int64)v6, v4, a2);
}
