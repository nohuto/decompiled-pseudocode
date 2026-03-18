/*
 * XREFs of ?SizeOfDibColorTable@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F99
 * Callers:
 *     ?DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z @ 0x18194A (-DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z @ 0x181F69 (-SizeOfDib@@YGKPAUtagBITMAPINFOHEADER@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall SizeOfDibColorTable(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  unsigned int v5; // ecx

  v1 = *(_DWORD *)(this + 16);
  switch ( v1 )
  {
    case 3:
      v2 = *(unsigned __int16 *)(this + 14);
      if ( v2 == 16 || v2 == 32 )
        return 12;
      return 0;
    case 0:
      v3 = *(_DWORD *)(this + 32);
      if ( v3 )
        return 4 * v3;
      v5 = *(unsigned __int16 *)(this + 14);
      if ( v5 <= 8 )
        return 4 << v5;
      return 0;
    case 2:
      return 64;
  }
  return v1 != 1 ? 0 : 1024;
}
