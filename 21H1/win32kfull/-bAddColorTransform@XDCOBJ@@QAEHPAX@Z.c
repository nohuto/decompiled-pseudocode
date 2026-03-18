/*
 * XREFs of ?bAddColorTransform@XDCOBJ@@QAEHPAX@Z @ 0x1F48CA
 * Callers:
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __thiscall XDCOBJ::bAddColorTransform(XDCOBJ *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = PALLOCMEM2(8u, 1650745671, 1);
  if ( !v3 )
    return 0;
  *v3 = a2;
  v3[1] = *(_DWORD *)(*(_DWORD *)this + 1820);
  *(_DWORD *)(*(_DWORD *)this + 1820) = v3;
  return 1;
}
