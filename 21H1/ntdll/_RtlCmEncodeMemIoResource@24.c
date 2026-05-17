/*
 * XREFs of _RtlCmEncodeMemIoResource@24 @ 0x4B356230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCmEncodeMemIoResource(int a1, char a2, unsigned __int64 a3, int a4, int a5)
{
  __int16 v6; // ax
  __int16 v7; // di

  if ( a2 != 3 && a2 != 7 && (a2 != 1 || HIDWORD(a3)) )
    return -1073741811;
  *(_DWORD *)(a1 + 4) = a4;
  *(_DWORD *)(a1 + 8) = a5;
  if ( a2 == 1 )
  {
    *(_BYTE *)a1 = 1;
LABEL_10:
    *(_DWORD *)(a1 + 12) = a3;
    return 0;
  }
  v6 = *(_WORD *)(a1 + 2) & 0xF1FF;
  *(_WORD *)(a1 + 2) = v6;
  if ( !HIDWORD(a3) )
  {
    *(_BYTE *)a1 = 3;
    goto LABEL_10;
  }
  if ( a3 > 0xFFFFFFFF00LL )
  {
    if ( a3 > 0xFFFFFFFF0000LL )
    {
      if ( a3 > 0xFFFFFFFF00000000uLL || (_DWORD)a3 )
        return -1073741823;
      *(_DWORD *)(a1 + 12) = HIDWORD(a3);
      v7 = v6 | 0x800;
    }
    else
    {
      if ( a3 != (unsigned __int64)(unsigned int)(a3 >> 16) << 16 )
        return -1073741823;
      *(_DWORD *)(a1 + 12) = a3 >> 16;
      v7 = v6 | 0x400;
    }
    *(_BYTE *)a1 = 7;
    *(_WORD *)(a1 + 2) = v7;
    return 0;
  }
  if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 8) << 8 )
  {
    *(_BYTE *)a1 = 7;
    *(_DWORD *)(a1 + 12) = a3 >> 8;
    *(_WORD *)(a1 + 2) = v6 | 0x200;
    return 0;
  }
  return -1073741823;
}
