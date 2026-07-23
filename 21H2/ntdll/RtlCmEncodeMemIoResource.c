/*
 * XREFs of RtlCmEncodeMemIoResource @ 0x1800F1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCmEncodeMemIoResource(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  __int16 v5; // dx
  unsigned __int64 v6; // r9
  __int16 v7; // ax

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
  }
  else if ( a2 != 1 )
  {
    goto LABEL_7;
  }
  if ( a3 > 0xFFFFFFFF )
    return 3221225485LL;
LABEL_7:
  *(_QWORD *)(a1 + 4) = a4;
  if ( a2 == 1 )
  {
    *(_BYTE *)a1 = 1;
LABEL_9:
    *(_DWORD *)(a1 + 12) = a3;
    return 0LL;
  }
  v5 = *(_WORD *)(a1 + 2) & 0xF1FF;
  *(_WORD *)(a1 + 2) = v5;
  if ( a3 <= 0xFFFFFFFF )
  {
    *(_BYTE *)a1 = 3;
    goto LABEL_9;
  }
  if ( a3 > 0xFFFFFFFF00LL )
  {
    if ( a3 > 0xFFFFFFFF0000LL )
    {
      if ( a3 <= 0xFFFFFFFF00000000uLL )
      {
        v6 = HIDWORD(a3);
        if ( a3 == HIDWORD(a3) << 32 )
        {
          v7 = 2048;
          goto LABEL_16;
        }
      }
    }
    else
    {
      v6 = a3 >> 16;
      if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 16) << 16 )
      {
        v7 = 1024;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = a3 >> 8;
    if ( a3 == (unsigned __int64)(unsigned int)(a3 >> 8) << 8 )
    {
      v7 = 512;
LABEL_16:
      *(_BYTE *)a1 = 7;
      *(_WORD *)(a1 + 2) = v7 | v5;
      *(_DWORD *)(a1 + 12) = v6;
      return 0LL;
    }
  }
  return 3221225473LL;
}
