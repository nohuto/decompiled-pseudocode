/*
 * XREFs of sub_180101630 @ 0x180101630
 * Callers:
 *     sub_180101630 @ 0x180101630 (sub_180101630.c)
 *     sub_180101AE4 @ 0x180101AE4 (sub_180101AE4.c)
 * Callees:
 *     sub_18010094C @ 0x18010094C (sub_18010094C.c)
 *     sub_180100B8C @ 0x180100B8C (sub_180100B8C.c)
 *     sub_180101408 @ 0x180101408 (sub_180101408.c)
 *     sub_180101630 @ 0x180101630 (sub_180101630.c)
 */

unsigned __int8 __fastcall sub_180101630(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_180101408(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_180101630((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_180101630((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_180100B8C(a1, v12, v11, a4);
    sub_180100B8C(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_18010094C((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
