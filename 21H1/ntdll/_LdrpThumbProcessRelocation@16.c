/*
 * XREFs of _LdrpThumbProcessRelocation@16 @ 0x4B342A6A
 * Callers:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 * Callees:
 *     _LdrpArmProcessRelocation@16 @ 0x4B342928 (_LdrpArmProcessRelocation@16.c)
 */

int __fastcall LdrpThumbProcessRelocation(unsigned __int16 *a1, int a2, int a3, int a4)
{
  _WORD *v4; // ebx
  unsigned int v6; // edi
  int v7; // edx
  __int16 v8; // ax
  __int16 v9; // cx
  unsigned int v10; // edx
  __int16 v11; // ax

  v4 = (_WORD *)(a2 + (*a1 & 0xFFE));
  if ( *a1 >> 12 == 5 )
    return LdrpArmProcessRelocation(a1, a2, a3, a4);
  if ( *a1 >> 12 != 7 )
    return 0;
  v6 = (unsigned __int16)v4[1];
  v7 = (unsigned __int8)v4[1] | (v6 >> 4) & 0x700 | (unsigned __int16)(2 * ((*v4 << 11) | *v4 & 0x400)) | ((v4[3] & 0x7000 | (16 * ((unsigned __int8)v4[3] | (unsigned __int16)(2 * ((v4[2] << 11) | v4[2] & 0x400))))) << 12);
  v8 = (unsigned __int8)(a3 + v4[1]);
  *v4 = *v4 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)(a3 + v7) >> 11) | (a3 + v7) & 0x800) >> 1);
  v9 = a3 + v7;
  v10 = (unsigned int)(a3 + v7) >> 16;
  v4[1] = v8 | v6 & 0x8F00 | (16 * (v9 & 0x700));
  v11 = v4[3];
  v4[2] = v4[2] & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v10 >> 11) | v10 & 0x800) >> 1);
  v4[3] = (unsigned __int8)v10 | v11 & 0x8F00 | (16 * (v10 & 0x700));
  return 1;
}
