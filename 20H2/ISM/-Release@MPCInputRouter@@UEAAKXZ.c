/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x18003B040
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x18004ADF0 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x18004AE00 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x18004AE10 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x18004AE20 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x18004AE30 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x18004AE40 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAA@EAAKXZ @ 0x18004AE50 (-Release@MPCInputRouter@@WDAA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WDAI@EAAKXZ @ 0x18004AE60 (-Release@MPCInputRouter@@WDAI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x18004AE70 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x18004AE80 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  return RefCountedObject::Release((MPCInputRouter *)((char *)this + 64));
}
