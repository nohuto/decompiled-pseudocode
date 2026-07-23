/*
 * XREFs of LdrpArmProcessRelocation @ 0x14058E428
 * Callers:
 *     LdrpThumbProcessRelocation @ 0x14058E5A4 (LdrpThumbProcessRelocation.c)
 *     LdrProcessRelocationBlockLongLong @ 0x140919408 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  unsigned int v7; // edx

  v3 = a2 + (*a1 & 0xFFC);
  v5 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v6 = (a3
        + (((*(_WORD *)(v3 + 4) & 0xFFF) << 16) | ((unsigned __int16)(*(_DWORD *)(v3 + 4) >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (*(_DWORD *)v3 >> 4)) & 0xFFF)) >> 16;
    v7 = ((a3
         + (((*(_WORD *)(v3 + 4) & 0xFFF) << 16) | ((unsigned __int16)(*(_DWORD *)(v3 + 4) >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (*(_DWORD *)v3 >> 4)) & 0xFFF)) >> 16) & 0xF000;
    *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFF0F000 | ((_WORD)a3
                                                + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xFFF | (16 * (((_WORD)a3 + ((unsigned __int16)(*(_DWORD *)v3 >> 4) ^ ((unsigned __int16)*(_DWORD *)v3 ^ (unsigned __int16)(*(_DWORD *)v3 >> 4)) & 0xFFF)) & 0xF000));
    *(_DWORD *)(v3 + 4) = v6 & 0xFFF | *(_DWORD *)(v3 + 4) & 0xFFF0F000 | (16 * v7);
  }
  else
  {
    return 0;
  }
  return v5;
}
