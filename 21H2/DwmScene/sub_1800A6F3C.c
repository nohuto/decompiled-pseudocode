/*
 * XREFs of sub_1800A6F3C @ 0x1800A6F3C
 * Callers:
 *     sub_1800AAE44 @ 0x1800AAE44 (sub_1800AAE44.c)
 * Callees:
 *     memmove @ 0x180123982 (memmove.c)
 */

_QWORD *__fastcall sub_1800A6F3C(_QWORD *a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  char *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  const char *v10; // rdx
  _BYTE *v11; // rsi
  int v12; // edx
  int v13; // edx
  int v14; // edx
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi

  if ( a2 > 5 )
  {
    v12 = a2 - 6;
    if ( !v12 )
    {
      a1[2] = 0LL;
      v9 = a1;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 0x10uLL )
        v9 = (_BYTE *)*a1;
      v10 = "Shader";
      goto LABEL_46;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      a1[2] = 0LL;
      v9 = a1;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 0x10uLL )
        v9 = (_BYTE *)*a1;
      v10 = "Volume";
      goto LABEL_46;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      a1[2] = 0LL;
      v7 = a1;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 0x10uLL )
        v7 = (__int64 *)*a1;
      a1[2] = 8LL;
      v8 = 0x676E696E6E696B53LL;
      goto LABEL_14;
    }
    if ( v14 != 1 )
    {
LABEL_31:
      a1[2] = 0LL;
      v15 = a1;
      a1[3] = 15LL;
      *(_BYTE *)a1 = 0;
      if ( a1[3] >= 0x10uLL )
        v15 = (_BYTE *)*a1;
      a1[2] = 9LL;
      memmove(v15, "<unknown>", 9uLL);
      v15[9] = 0;
      return a1;
    }
    a1[2] = 0LL;
    v16 = a1;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 0x10uLL )
      v16 = (_BYTE *)*a1;
    a1[2] = 14LL;
    memmove(v16, "LightingGlobal", 0xEuLL);
    v16[14] = 0;
  }
  else
  {
    if ( a2 != 5 )
    {
      if ( a2 )
      {
        v3 = a2 - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              if ( v5 == 1 )
              {
                a1[2] = 0LL;
                v6 = (char *)a1;
                a1[3] = 15LL;
                *(_BYTE *)a1 = 0;
                if ( a1[3] >= 0x10uLL )
                  v6 = (char *)*a1;
                a1[2] = 4LL;
                strcpy(v6, "View");
                return a1;
              }
              goto LABEL_31;
            }
            a1[2] = 0LL;
            v7 = a1;
            a1[3] = 15LL;
            *(_BYTE *)a1 = 0;
            if ( a1[3] >= 0x10uLL )
              v7 = (__int64 *)*a1;
            a1[2] = 8LL;
            v8 = 0x676E69746867694CLL;
          }
          else
          {
            a1[2] = 0LL;
            v7 = a1;
            a1[3] = 15LL;
            *(_BYTE *)a1 = 0;
            if ( a1[3] >= 0x10uLL )
              v7 = (__int64 *)*a1;
            a1[2] = 8LL;
            v8 = 0x6C6169726574614DLL;
          }
LABEL_14:
          *v7 = v8;
          *((_BYTE *)v7 + 8) = 0;
          return a1;
        }
        a1[2] = 0LL;
        v9 = a1;
        a1[3] = 15LL;
        *(_BYTE *)a1 = 0;
        if ( a1[3] >= 0x10uLL )
          v9 = (_BYTE *)*a1;
        v10 = "Global";
      }
      else
      {
        a1[2] = 0LL;
        v9 = a1;
        a1[3] = 15LL;
        *(_BYTE *)a1 = 0;
        if ( a1[3] >= 0x10uLL )
          v9 = (_BYTE *)*a1;
        v10 = "Object";
      }
LABEL_46:
      a1[2] = 6LL;
      memmove(v9, v10, 6uLL);
      v9[6] = 0;
      return a1;
    }
    a1[2] = 0LL;
    v11 = a1;
    a1[3] = 15LL;
    *(_BYTE *)a1 = 0;
    if ( a1[3] >= 0x10uLL )
      v11 = (_BYTE *)*a1;
    a1[2] = 5LL;
    memmove(v11, "Debug", 5uLL);
    v11[5] = 0;
  }
  return a1;
}
