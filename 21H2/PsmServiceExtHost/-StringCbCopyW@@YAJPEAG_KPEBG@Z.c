/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EFD0
 * Callers:
 *     CempStringDuplicate @ 0x18002EF40 (CempStringDuplicate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  int v4; // r10d
  unsigned __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return (unsigned int)v4;
  }
  else
  {
    v4 = 0;
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - a1;
      while ( v5 + v3 )
      {
        v7 = *(_WORD *)&a1[v6];
        if ( !v7 )
          break;
        *(_WORD *)a1 = v7;
        a1 += 2;
        if ( !--v3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      a1 -= 2;
      v4 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v4;
}
