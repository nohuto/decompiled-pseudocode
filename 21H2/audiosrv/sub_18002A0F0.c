/*
 * XREFs of sub_18002A0F0 @ 0x18002A0F0
 * Callers:
 *     sub_18002A02C @ 0x18002A02C (sub_18002A02C.c)
 *     sub_18002A420 @ 0x18002A420 (sub_18002A420.c)
 *     sub_180045570 @ 0x180045570 (sub_180045570.c)
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 *     sub_1800BB7C4 @ 0x1800BB7C4 (sub_1800BB7C4.c)
 *     sub_1800BBA90 @ 0x1800BBA90 (sub_1800BBA90.c)
 *     sub_1800C5260 @ 0x1800C5260 (sub_1800C5260.c)
 *     sub_1800E1F38 @ 0x1800E1F38 (sub_1800E1F38.c)
 *     sub_1800E3D40 @ 0x1800E3D40 (sub_1800E3D40.c)
 *     sub_1800E6350 @ 0x1800E6350 (sub_1800E6350.c)
 *     sub_1800EFB18 @ 0x1800EFB18 (sub_1800EFB18.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 *     sub_1801300AC @ 0x1801300AC (sub_1801300AC.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 */

__int64 __fastcall sub_18002A0F0(char *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  char *v4; // r10
  int v7; // ebx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax
  signed __int64 v10; // r10
  _WORD *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // cx
  unsigned __int64 v14; // r11

  v4 = a3;
  v7 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v7 = -2147024809;
  if ( v7 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v7;
    goto LABEL_28;
  }
  if ( a4 >= 0x7FFFFFFF )
  {
    v7 = -2147024809;
    if ( !a2 )
      return (unsigned int)v7;
LABEL_28:
    *(_WORD *)a1 = 0;
    return (unsigned int)v7;
  }
  if ( !a3 )
  {
    v4 = (char *)&unk_18015C744;
    a4 = 0LL;
  }
  v7 = 0;
  if ( a2 )
  {
    v8 = a4 - a2;
    v9 = a2;
    v10 = v4 - a1;
    v11 = a1;
    v12 = 0LL;
    while ( v8 + v9 )
    {
      v13 = *(_WORD *)((char *)v11 + v10);
      if ( !v13 )
        break;
      *v11 = v13;
      ++v12;
      ++v11;
      if ( !--v9 )
      {
        --v11;
        v7 = -2147024774;
        --v12;
        break;
      }
    }
    v14 = a2 - v12;
    *v11 = 0;
    if ( v7 >= 0 && v14 > 1 && 2 * v14 > 2 )
      memset(&a1[2 * v12 + 2], 0, 2 * v14 - 2);
  }
  else if ( a4 )
  {
    if ( *(_WORD *)v4 )
    {
      v7 = -2147024774;
      if ( !a1 )
        return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v7;
}
