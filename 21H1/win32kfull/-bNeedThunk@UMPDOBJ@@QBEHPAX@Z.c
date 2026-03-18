/*
 * XREFs of ?bNeedThunk@UMPDOBJ@@QBEHPAX@Z @ 0x1F43DE
 * Callers:
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z @ 0x20B703 (-UMPDDrvDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z.c)
 *     ?UMPDDrvEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z @ 0x20C1E1 (-UMPDDrvEscape@@YGKPAU_SURFOBJ@@KKPAXK1@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall UMPDOBJ::bNeedThunk(UMPDOBJ *this, PVOID a2)
{
  int v2; // edx

  v2 = 0;
  if ( *((_DWORD *)this + 58) || a2 >= _MmSystemRangeStart )
    return 1;
  return v2;
}
