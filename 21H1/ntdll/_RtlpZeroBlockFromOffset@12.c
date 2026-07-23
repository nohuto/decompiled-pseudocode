/*
 * XREFs of _RtlpZeroBlockFromOffset@12 @ 0x4B2AEA8C
 * Callers:
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

unsigned __int8 __fastcall RtlpZeroBlockFromOffset(int a1, int a2, int a3)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned __int8 result; // al
  int v7; // ecx
  unsigned int v8; // ecx
  size_t v9; // [esp-4h] [ebp-Ch]

  v3 = a2 - 8;
  if ( *(_BYTE *)(a2 - 8 + 7) == 5 )
    v3 -= 8 * *(unsigned __int8 *)(v3 + 6);
  if ( *(char *)(v3 + 7) < 0 )
  {
    v8 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v3 ^ (v3 >> 3);
    if ( (_WORD)v8 )
      v4 = 0;
    else
      v4 = *(_DWORD *)(v3 - (v8 >> 13));
    LOWORD(v4) = *(_WORD *)(v4 + 20);
  }
  else if ( *(_DWORD *)(a1 + 76) )
  {
    v4 = *(_DWORD *)v3;
    if ( (*(_DWORD *)v3 & *(_DWORD *)(a1 + 76)) != 0 )
      v4 ^= *(_DWORD *)(a1 + 80);
  }
  else
  {
    LOWORD(v4) = *(_WORD *)v3;
  }
  v5 = (unsigned __int16)v4;
  result = *(_BYTE *)(v3 + 7);
  v7 = 8 * v5;
  if ( result != 4 )
  {
    if ( (result & 0x3F) == 0x3F )
      v7 -= 4;
    if ( (*(_BYTE *)(v3 + 2) & 2) != 0 )
      v7 -= 8;
    LODWORD(v9) = v7 - a3 - 8;
    return (unsigned __int8)memset((void *)(a2 + a3), 0, v9);
  }
  return result;
}
