/*
 * XREFs of sub_180082FB8 @ 0x180082FB8
 * Callers:
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 *     sub_180083328 @ 0x180083328 (sub_180083328.c)
 * Callees:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 *     sub_18008241C @ 0x18008241C (sub_18008241C.c)
 *     sub_180082C38 @ 0x180082C38 (sub_180082C38.c)
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 */

void __fastcall sub_180082FB8(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = a3 >> 1;
    v10 = a3 - (a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_180082FB8((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_180082FB8((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_18008241C((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_18008241C((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_1800822C0((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_180082C38(a1, a2, (__int64 (__fastcall *)(__int128 *, __int64 *))a6);
  }
}
