/*
 * XREFs of sub_180018520 @ 0x180018520
 * Callers:
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 *     sub_180031640 @ 0x180031640 (sub_180031640.c)
 * Callees:
 *     sub_180009868 @ 0x180009868 (sub_180009868.c)
 *     sub_180009F20 @ 0x180009F20 (sub_180009F20.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

_DWORD *__fastcall sub_180018520(_QWORD *a1, char *a2, _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  SIZE_T v13; // rcx
  _QWORD *v14; // rdi
  _DWORD *v15; // rsi
  char *v16; // r8
  char *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8
  char *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  char *v23; // r8
  char *v24; // rcx

  v6 = (__int64)&a2[-*a1] >> 2;
  v7 = (__int64)(a1[1] - *a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_18;
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 4 * v11;
  v13 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  v14 = sub_180009F20(v13);
  v15 = (_DWORD *)v14 + v6;
  *v15 = *a3;
  v16 = (char *)a1[1];
  v17 = (char *)*a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove(v14, v17, (size_t)&a2[-*a1]);
    v18 = v15 + 1;
    v19 = a1[1] - (_QWORD)a2;
    v17 = a2;
  }
  memmove(v18, v17, v19);
  v20 = (char *)*a1;
  if ( *a1 )
  {
    v21 = (a1[2] - (_QWORD)v20) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v21 < 0x1000 )
    {
LABEL_15:
      sub_180039D98(v20);
      goto LABEL_16;
    }
    v22 = v21 + 39;
    v23 = (char *)*((_QWORD *)v20 - 1);
    v24 = (char *)(v20 - v23);
    if ( (unsigned __int64)(v24 - 8) <= 0x1F )
    {
      v20 = v23;
      goto LABEL_15;
    }
    o__invalid_parameter_noinfo_noreturn(v24, v22);
    __debugbreak();
LABEL_18:
    sub_180009868();
  }
LABEL_16:
  *a1 = v14;
  a1[1] = (char *)v14 + 4 * v8;
  a1[2] = (char *)v14 + v12;
  return v15;
}
