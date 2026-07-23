/*
 * XREFs of IoCheckLinkShareAccess @ 0x140644040
 * Callers:
 *     IoCheckShareAccess @ 0x14061FF20 (IoCheckShareAccess.c)
 *     RawCreate @ 0x1406C8AF4 (RawCreate.c)
 *     IoCheckShareAccessEx @ 0x14077D660 (IoCheckShareAccessEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  bool v6; // r13
  bool v7; // al
  int v8; // r11d
  bool v10; // r15
  bool v11; // r12
  unsigned __int8 v12; // si
  _DWORD *v13; // rax
  bool v14; // al
  char v15; // al
  bool v16; // [rsp+50h] [rbp+20h]

  v6 = (a1 & 0x21) != 0;
  v7 = (a1 & 6) != 0;
  v8 = a1 & 0x10000;
  v16 = (a1 & 0x10000) != 0;
  if ( a4 )
  {
LABEL_2:
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 74) = v6;
      *(_BYTE *)(a3 + 75) = v7;
      *(_BYTE *)(a3 + 76) = v8 != 0;
    }
    if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v8 && (a6 & 0x20) == 0 )
      return 0LL;
    v10 = (a2 & 2) != 0;
    v11 = (a2 & 4) != 0;
    v12 = a2 & 1;
    if ( a6 < 0 )
    {
      v15 = a2 & 1;
      if ( !v12 )
        v15 = 1;
      v12 = v15;
    }
    if ( (a6 & 2) == 0 )
    {
      *(_BYTE *)(a3 + 77) = v12;
      *(_BYTE *)(a3 + 78) = v10;
      *(_BYTE *)(a3 + 79) = v11;
    }
    if ( a3 )
    {
      v13 = *(_DWORD **)(a3 + 208);
      if ( v13 )
      {
        if ( (*v13 & 1) != 0 )
          return 0LL;
      }
    }
    v14 = 0;
    if ( (a6 & 4) == 0 )
      v14 = (a1 & 0x21) != 0 && a4[4] < *a4 || a4[1] && !v12;
    if ( (a6 & 8) == 0 && !v14 )
      v14 = (a1 & 6) != 0 && a4[5] < *a4 || a4[2] && (a2 & 2) == 0;
    if ( (a6 & 0x10) == 0 )
    {
      if ( v14 )
        return 3221225539LL;
      if ( a5 && (a6 & 0x40) == 0 )
      {
        if ( v8 && a5[2] < *a5 || a5[1] && (a2 & 4) == 0 )
          return 3221225539LL;
LABEL_31:
        if ( (a6 & 1) != 0 )
        {
          ++*a4;
          a4[3] += v16;
          a4[1] += v6;
          a4[2] += (a1 & 6) != 0;
          a4[4] += v12;
          a4[5] += v10;
          a4[6] += v11;
          if ( a5 )
          {
            ++*a5;
            if ( (a6 & 0x80u) == 0 )
              a5[1] += v16;
            a5[2] += v11;
          }
        }
        return 0LL;
      }
      if ( v8 && a4[6] < *a4 || a4[3] && (a2 & 4) == 0 )
        return 3221225539LL;
      v14 = 0;
    }
    if ( !v14 )
      goto LABEL_31;
    return 3221225539LL;
  }
  if ( (a6 & 0xC) == 0xC && ((a6 & 0x10) != 0 || a5 && (a6 & 0x40) == 0) )
  {
    v7 = (a1 & 6) != 0;
    goto LABEL_2;
  }
  return 3221225485LL;
}
