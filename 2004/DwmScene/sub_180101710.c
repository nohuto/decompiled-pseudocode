/*
 * XREFs of sub_180101710 @ 0x180101710
 * Callers:
 *     sub_180101710 @ 0x180101710 (sub_180101710.c)
 *     sub_180101BB4 @ 0x180101BB4 (sub_180101BB4.c)
 * Callees:
 *     sub_180100A6C @ 0x180100A6C (sub_180100A6C.c)
 *     sub_180100C74 @ 0x180100C74 (sub_180100C74.c)
 *     sub_1801014A4 @ 0x1801014A4 (sub_1801014A4.c)
 *     sub_180101710 @ 0x180101710 (sub_180101710.c)
 */

unsigned __int8 __fastcall sub_180101710(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_1801014A4(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_180101710((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_180101710((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_180100C74(a1, v12, v11, a4);
    sub_180100C74(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_180100A6C((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
