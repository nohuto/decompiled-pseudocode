/*
 * XREFs of sub_18003185C @ 0x18003185C
 * Callers:
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 * Callees:
 *     sub_180010B0C @ 0x180010B0C (sub_180010B0C.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_18003185C(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = sub_180010B0C(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_1800317CC((__int64 *)a1, (__int64)v6, v4, a2);
}
