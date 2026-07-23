/*
 * XREFs of LdrpThumbProcessRelocation @ 0x1800E3D0C
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800849C8 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     LdrpArmProcessRelocation @ 0x1800E3C3C (LdrpArmProcessRelocation.c)
 */

__int64 __fastcall LdrpThumbProcessRelocation(unsigned __int16 *a1, __int64 a2, int a3)
{
  int v4; // r9d
  __int16 *v5; // r11
  unsigned int v6; // ebx
  __int16 v7; // r8
  unsigned int v8; // r9d
  __int16 v9; // cx
  int v10; // r10d
  unsigned int v11; // r10d
  unsigned __int8 v12; // al
  __int16 v13; // cx

  v4 = *a1 >> 12;
  v5 = (__int16 *)(a2 + (*a1 & 0xFFE));
  v6 = 1;
  if ( v4 == 5 )
  {
    return (unsigned int)LdrpArmProcessRelocation(a1, a2, a3);
  }
  else if ( v4 == 7 )
  {
    v7 = *v5;
    v8 = (unsigned __int16)v5[1];
    v9 = *v5 & 0x400;
    v10 = (unsigned __int8)v5[3] | ((unsigned __int16)v5[3] >> 4) & 0x700 | (unsigned __int16)(2
                                                                                             * ((v5[2] << 11) | v5[2] & 0x400));
    v5[2] &= 0xFBF0u;
    v11 = a3 + ((unsigned __int8)v8 | (v8 >> 4) & 0x700 | (unsigned __int16)(2 * ((v7 << 11) | v9)) | (v10 << 16));
    v12 = v11;
    v5[3] &= 0x8F00u;
    *v5 = v7 & 0xFBF0 | ((unsigned __int16)(((unsigned __int16)v11 >> 11) | v11 & 0x800) >> 1);
    v13 = v11 & 0x700;
    v11 >>= 16;
    v5[1] = v12 | v8 & 0x8F00 | (16 * v13);
    v5[2] |= (unsigned __int16)(((unsigned __int16)v11 >> 11) | v11 & 0x800) >> 1;
    v5[3] |= (unsigned __int8)v11 | (unsigned __int16)(16 * (v11 & 0x700));
  }
  else
  {
    return 0;
  }
  return v6;
}
