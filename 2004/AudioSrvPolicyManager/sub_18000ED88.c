/*
 * XREFs of sub_18000ED88 @ 0x18000ED88
 * Callers:
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_180025140 @ 0x180025140 (sub_180025140.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_18000ED68 @ 0x18000ED68 (sub_18000ED68.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

char **__fastcall sub_18000ED88(char **a1, unsigned __int64 a2, __int64 a3, const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  char *v14; // rcx
  char *v15; // r8
  char *v16; // rcx
  char **result; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    goto LABEL_15;
  v8 = (unsigned __int64)a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = 2 * (v4 + 1);
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = sub_180009F20(v11);
  a1[3] = (char *)v4;
  a1[2] = (char *)a2;
  v13 = v12;
  memcpy(v12, a4, 2 * a2);
  *((_WORD *)v13 + a2) = 0;
  if ( v8 >= 8 )
  {
    v14 = *a1;
    if ( 2 * v8 + 2 < 0x1000 )
    {
LABEL_12:
      sub_180039D98(v14);
      goto LABEL_13;
    }
    v15 = (char *)*((_QWORD *)v14 - 1);
    v16 = (char *)(v14 - v15);
    if ( (unsigned __int64)(v16 - 8) <= 0x1F )
    {
      v14 = v15;
      goto LABEL_12;
    }
    o__invalid_parameter_noinfo_noreturn(v16, 2 * v8 + 41);
    __debugbreak();
LABEL_15:
    sub_18000ED68();
  }
LABEL_13:
  result = a1;
  *a1 = (char *)v13;
  return result;
}
