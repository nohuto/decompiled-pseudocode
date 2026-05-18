/*
 * XREFs of sub_180106FE0 @ 0x180106FE0
 * Callers:
 *     sub_180106FE0 @ 0x180106FE0 (sub_180106FE0.c)
 *     sub_180107484 @ 0x180107484 (sub_180107484.c)
 * Callees:
 *     sub_18010633C @ 0x18010633C (sub_18010633C.c)
 *     sub_180106544 @ 0x180106544 (sub_180106544.c)
 *     sub_180106D74 @ 0x180106D74 (sub_180106D74.c)
 *     sub_180106FE0 @ 0x180106FE0 (sub_180106FE0.c)
 */

unsigned __int8 __fastcall sub_180106FE0(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_180106D74(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_180106FE0((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_180106FE0((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_180106544(a1, v12, v11, a4);
    sub_180106544(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_18010633C((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
