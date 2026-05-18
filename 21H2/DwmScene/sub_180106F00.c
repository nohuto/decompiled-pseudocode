/*
 * XREFs of sub_180106F00 @ 0x180106F00
 * Callers:
 *     sub_180106F00 @ 0x180106F00 (sub_180106F00.c)
 *     sub_1801073B4 @ 0x1801073B4 (sub_1801073B4.c)
 * Callees:
 *     sub_18010621C @ 0x18010621C (sub_18010621C.c)
 *     sub_18010645C @ 0x18010645C (sub_18010645C.c)
 *     sub_180106CD8 @ 0x180106CD8 (sub_180106CD8.c)
 *     sub_180106F00 @ 0x180106F00 (sub_180106F00.c)
 */

unsigned __int8 __fastcall sub_180106F00(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_180106CD8(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_180106F00((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_180106F00((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_18010645C(a1, v12, v11, a4);
    sub_18010645C(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_18010621C((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
