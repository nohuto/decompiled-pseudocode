/*
 * XREFs of LdrpArmProcessRelocation @ 0x1800E3C3C
 * Callers:
 *     LdrProcessRelocationBlockLongLong @ 0x1800849C8 (LdrProcessRelocationBlockLongLong.c)
 *     LdrpThumbProcessRelocation @ 0x1800E3D0C (LdrpThumbProcessRelocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r9
  __int16 v4; // r11
  unsigned int v5; // r10d
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // ecx

  v3 = (unsigned int *)(a2 + (*a1 & 0xFFC));
  v4 = a3;
  v5 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v6 = *v3;
    v7 = (a3
        + (((v3[1] & 0xFFF) << 16) | ((unsigned __int16)(v3[1] >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*v3 >> 4) ^ ((unsigned __int16)*v3 ^ (*v3 >> 4)) & 0xFFF)) >> 16;
    v8 = (v4 + ((unsigned __int16)(*v3 >> 4) ^ ((unsigned __int16)*v3 ^ (unsigned __int16)(*v3 >> 4)) & 0xFFF)) & 0xFFF | (16 * ((v4 + ((unsigned __int16)(*v3 >> 4) ^ ((unsigned __int16)*v3 ^ (unsigned __int16)(*v3 >> 4)) & 0xFFF)) & 0xF000));
    v3[1] &= 0xFFF0F000;
    *v3 = v6 & 0xFFF0F000 | v8;
    v3[1] |= v7 & 0xFFF | (16 * (v7 & 0xF000));
  }
  else
  {
    return 0;
  }
  return v5;
}
