/*
 * XREFs of sub_18003712C @ 0x18003712C
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 * Callees:
 *     sub_180010BEC @ 0x180010BEC (sub_180010BEC.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_18003712C(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp-28h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v6 = sub_180010BEC(a1, a2);
  memmove(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return sub_18003709C((__int64 *)a1, (__int64)v6, v4, a2);
}
