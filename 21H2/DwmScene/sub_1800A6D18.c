/*
 * XREFs of sub_1800A6D18 @ 0x1800A6D18
 * Callers:
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

_QWORD *__fastcall sub_1800A6D18(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  _BYTE *v7; // rsi
  const char *v8; // r9
  _BYTE *v9; // rsi
  const char *v10; // rdx

  a1[3] = 15LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    a1[2] = 0LL;
    v9 = a1;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 0x10uLL )
      v9 = (_BYTE *)*a1;
    v10 = "ShaderModel50";
    goto LABEL_21;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    a1[2] = 0LL;
    v9 = a1;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 0x10uLL )
      v9 = (_BYTE *)*a1;
    v10 = "ShaderModel41";
    goto LABEL_21;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    a1[2] = 0LL;
    v9 = a1;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 0x10uLL )
      v9 = (_BYTE *)*a1;
    v10 = "ShaderModel40";
LABEL_21:
    a1[2] = 13LL;
    memmove(v9, v10, 0xDuLL);
    v9[13] = 0;
    return a1;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    a1[2] = 0LL;
    v8 = "ShaderModel40_Level93";
    *(_BYTE *)a1 = 0;
    goto LABEL_10;
  }
  a1[2] = 0LL;
  *(_BYTE *)a1 = 0;
  if ( v6 == 1 )
  {
    v8 = "ShaderModel40_Level91";
LABEL_10:
    sub_18000FC14(a1, 0x15uLL, 0LL, v8);
    return a1;
  }
  v7 = a1;
  if ( a1[3] >= 0x10uLL )
    v7 = (_BYTE *)*a1;
  a1[2] = 9LL;
  memmove(v7, "<invalid>", 9uLL);
  v7[9] = 0;
  return a1;
}
