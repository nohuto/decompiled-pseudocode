/*
 * XREFs of sub_180019980 @ 0x180019980
 * Callers:
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 * Callees:
 *     memset @ 0x18003A7D8 (memset.c)
 */

__int64 __fastcall sub_180019980(char *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  signed __int64 v8; // r8
  _WORD *v9; // r11
  __int16 v10; // ax
  __int64 v11; // r9
  _WORD *v12; // rax
  unsigned __int64 v13; // rdx

  LODWORD(v4) = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    LODWORD(v4) = -2147024809;
  if ( (int)v4 < 0 )
    goto LABEL_8;
  if ( a4 >= 0x7FFFFFFF )
  {
    LODWORD(v4) = -2147024809;
LABEL_8:
    if ( a2 )
      *(_WORD *)a1 = 0;
    return (unsigned int)v4;
  }
  if ( !a3 )
  {
    a3 = (char *)&unk_1800428B8;
    a4 = 0LL;
  }
  v4 = 0LL;
  if ( a2 )
  {
    v6 = a4 - a2;
    v7 = a2;
    v8 = a3 - a1;
    v9 = a1;
    do
    {
      if ( !(v6 + v7) )
        break;
      v10 = *(_WORD *)((char *)v9 + v8);
      if ( !v10 )
        break;
      *v9 = v10;
      ++v4;
      ++v9;
      --v7;
    }
    while ( v7 );
    v11 = v4 - 1;
    v12 = v9 - 1;
    if ( v7 )
    {
      v12 = v9;
      v11 = v4;
    }
    *v12 = 0;
    v13 = a2 - v11;
    LODWORD(v4) = v7 == 0 ? 0x8007007A : 0;
    if ( v7 && v13 > 1 && 2 * v13 > 2 )
      memset(&a1[2 * v11 + 2], 0, 2 * v13 - 2);
  }
  else if ( a4 && *(_WORD *)a3 )
  {
    LODWORD(v4) = a1 != 0LL ? -2147024774 : -2147024809;
  }
  return (unsigned int)v4;
}
