/*
 * XREFs of _RtlpHpVaMgrRangeCreate@12 @ 0x4B37B05E
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrRegionAllocate@4 @ 0x4B37B334 (_RtlpHpVaMgrRegionAllocate@4.c)
 * Callees:
 *     _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D (_RtlCSparseBitmapBitsClear@12.c)
 *     _RtlSparseArrayElementAllocate@12 @ 0x4B37E34C (_RtlSparseArrayElementAllocate@12.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRangeCreate(int a1, int a2, _DWORD *Src)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _BYTE *v5; // eax
  _BYTE *v6; // ebx
  int v7; // ebx
  _BYTE *v9; // [esp+Ch] [ebp-10h]
  int v12; // [esp+14h] [ebp-8h]
  unsigned int v13; // [esp+18h] [ebp-4h]

  v3 = 0;
  if ( (*(_BYTE *)Src & 4) != 0 )
    v4 = Src[3];
  else
    v4 = *((unsigned __int16 *)Src + 6);
  v13 = v4;
  v5 = (_BYTE *)RtlSparseArrayElementAllocate(Src);
  v6 = v5;
  v9 = v5;
  if ( v5 )
  {
    if ( (*v5 & 4) != 0 )
      return v6;
    *(_BYTE *)Src |= 2u;
    v3 = 1;
    v12 = a2 + 0x100000;
    *((_BYTE *)Src + 1) = *(_BYTE *)(a1 + 24);
    Src[1] = 0;
    Src[2] = 0;
    Src[3] = -1985229329;
    if ( v13 <= 1 )
      return v6;
    v7 = v12;
    do
    {
      if ( !RtlSparseArrayElementAllocate(Src) )
        break;
      ++v3;
      v7 += 0x100000;
    }
    while ( v3 < v13 );
    v6 = v9;
  }
  if ( v3 < v13 )
  {
    for ( ; v3; --v3 )
    {
      RtlCSparseBitmapBitsClear(8 << *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12));
      v6 += 16;
    }
    return 0;
  }
  return v6;
}
