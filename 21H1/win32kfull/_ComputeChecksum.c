/*
 * XREFs of _ComputeChecksum @ 0xED870
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _ComputeHTCell @ 0x97406 (_ComputeHTCell.c)
 *     _CacheRGBToXYZ @ 0x1BCECA (_CacheRGBToXYZ.c)
 *     _ComputeRGBLUTAA @ 0x1BDE20 (_ComputeRGBLUTAA.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     <none>
 */

int __cdecl ComputeChecksum(unsigned __int8 *a1, int a2, unsigned int a3)
{
  _WORD *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ecx

  v3 = a1;
  v4 = (unsigned __int16)a2;
  v5 = HIWORD(a2);
  if ( a3 & 1 )
  {
    LOWORD(v4) = a2 + *a1;
    v3 = a1 + 1;
  }
  v6 = (a3 >> 1) + 1;
  while ( --v6 )
  {
    LOWORD(v4) = *v3 + v4;
    LOWORD(v5) = v4 + v5;
    ++v3;
  }
  return (v5 << 16) | v4;
}
