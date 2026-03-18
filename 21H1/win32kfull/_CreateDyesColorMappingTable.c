/*
 * XREFs of _CreateDyesColorMappingTable @ 0x1BE5CD
 * Callers:
 *     _AAHalftoneBitmap @ 0x1BAE67 (_AAHalftoneBitmap.c)
 * Callees:
 *     _ComputeChecksum @ 0xED870 (_ComputeChecksum.c)
 *     _CachedHalftonePattern @ 0x1BB975 (_CachedHalftonePattern.c)
 *     _AddBGRMapCache @ 0x1BCA75 (_AddBGRMapCache.c)
 *     _ComputeBGRMappingTable @ 0x1BCF91 (_ComputeBGRMappingTable.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 *     _FindBGRMapCache @ 0x1BE6CB (_FindBGRMapCache.c)
 */

int __thiscall CreateDyesColorMappingTable(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // eax
  void *BGRMapCache; // esi
  PVOID v7; // eax
  int v9; // [esp+10h] [ebp-8h]
  _DWORD *v10; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)this[6];
  v3 = this[1];
  v10 = (_DWORD *)*this;
  v2 = (_DWORD *)*this;
  *(_BYTE *)(v3 + 29) = 4;
  ComputeRGBLUTAA(v2, v3, v2 + 203);
  if ( (*(_DWORD *)(v3 + 56) & 0x40000000) == 0 )
  {
    v4 = ComputeChecksum((unsigned __int8 *)(v3 + 124), 305419896, 0x50u);
    v5 = ComputeChecksum((unsigned __int8 *)(v3 + 204), v4, 0x50u);
    v9 = ComputeChecksum((unsigned __int8 *)v3, v5, 0x18u);
    BGRMapCache = (void *)FindBGRMapCache(0, v9);
    if ( !BGRMapCache )
    {
      v7 = EngAllocMem(0, 0x18006u, 0x31365448u);
      BGRMapCache = v7;
      if ( !v7 )
        return -2;
      if ( ComputeBGRMappingTable((_DWORD *)v3, 0, (int)v7) != 0x8000 )
        return -10005;
      if ( !AddBGRMapCache((int)BGRMapCache, v9) )
      {
        EngFreeMem(BGRMapCache);
        return -2;
      }
    }
    v1[59] = BGRMapCache;
    v2 = v10;
  }
  return CachedHalftonePattern((int)v2, v3, v1 + 61, v1[50], v1[51], *v1 & 2);
}
