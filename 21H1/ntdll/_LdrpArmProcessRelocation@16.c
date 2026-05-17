/*
 * XREFs of _LdrpArmProcessRelocation@16 @ 0x4B342928
 * Callers:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 *     _LdrpThumbProcessRelocation@16 @ 0x4B342A6A (_LdrpThumbProcessRelocation@16.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpArmProcessRelocation(_WORD *a1, int a2, int a3, int a4)
{
  unsigned int *v4; // edi
  int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // ecx

  v4 = (unsigned int *)(a2 + (*a1 & 0xFFC));
  v5 = 1;
  if ( (*a1 & 0xF000) != 0x5000 )
    return 0;
  v6 = *v4;
  v7 = (a3
      + (((v4[1] & 0xFFF | (v4[1] >> 4) & 0xF000) << 16) | (unsigned __int16)(v6 >> 4) ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 4)) & 0xFFF)) >> 16;
  v8 = v6 & 0xFFF0F000 | ((_WORD)a3
                        + ((unsigned __int16)(v6 >> 4) ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 4)) & 0xFFF)) & 0xFFF | (16 * (((_WORD)a3 + ((unsigned __int16)(v6 >> 4) ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 4)) & 0xFFF)) & 0xF000));
  LOWORD(v6) = (a3
              + (((v4[1] & 0xFFF | (v4[1] >> 4) & 0xF000) << 16) | (unsigned __int16)(v6 >> 4) ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 4)) & 0xFFF)) >> 16;
  *v4 = v8;
  v4[1] = v7 & 0xFFF | v4[1] & 0xFFF0F000 | (16 * (v6 & 0xF000));
  return v5;
}
