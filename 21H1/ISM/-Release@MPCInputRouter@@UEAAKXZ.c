/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x18003AF60
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x18004B430 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x18004B440 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x18004B450 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x18004B460 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x18004B470 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x18004B480 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAA@EAAKXZ @ 0x18004B490 (-Release@MPCInputRouter@@WDAA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAI@EAAKXZ @ 0x18004B4A0 (-Release@MPCInputRouter@@WDAI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x18004B4B0 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x18004B4C0 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  return RefCountedObject::Release((MPCInputRouter *)((char *)this + 64));
}
