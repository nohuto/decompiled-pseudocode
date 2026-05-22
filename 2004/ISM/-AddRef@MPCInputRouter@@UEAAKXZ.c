/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18001C4F0
 * Callers:
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x18004AD00 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x18004AD10 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x18004AD20 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x18004AD30 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x18004AD40 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x18004AD50 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDAA@EAAKXZ @ 0x18004AD60 (-AddRef@MPCInputRouter@@WDAA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDAI@EAAKXZ @ 0x18004AD70 (-AddRef@MPCInputRouter@@WDAI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x18004AD80 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x18004AD90 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 18);
}
