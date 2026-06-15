/*
 * XREFs of sub_18000E890 @ 0x18000E890
 * Callers:
 *     sub_18000E560 @ 0x18000E560 (sub_18000E560.c)
 *     sub_18002FB9C @ 0x18002FB9C (sub_18002FB9C.c)
 *     sub_180030814 @ 0x180030814 (sub_180030814.c)
 * Callees:
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_QWORD *__fastcall sub_18000E890(char **a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  _QWORD *v6; // rdi
  char *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char *v14; // r8
  char *v15; // rcx
  _QWORD *result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = sub_180009F20(v5);
  v7 = *a1;
  v8 = v6;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      *v8++ = *(_QWORD *)v7;
      v7 += 8;
      ++v9;
    }
    while ( v9 != v10 );
  }
  v11 = *a1;
  if ( *a1 )
  {
    v12 = (a1[2] - v11) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v12 >= 0x1000 )
    {
      v13 = v12 + 39;
      v14 = (char *)*((_QWORD *)v11 - 1);
      v15 = (char *)(v11 - v14);
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v15, v13);
        __debugbreak();
        JUMPOUT(0x18000E982LL);
      }
      v11 = v14;
    }
    sub_180039D98(v11);
  }
  *a1 = (char *)v6;
  a1[1] = (char *)&v6[v3];
  result = &v6[v4];
  a1[2] = (char *)&v6[v4];
  return result;
}
