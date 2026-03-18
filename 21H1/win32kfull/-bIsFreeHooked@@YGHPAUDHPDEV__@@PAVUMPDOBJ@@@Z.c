/*
 * XREFs of ?bIsFreeHooked@@YGHPAUDHPDEV__@@PAVUMPDOBJ@@@Z @ 0x20FD4C
 * Callers:
 *     ?UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z @ 0x20DBEF (-UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E (-UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __fastcall bIsFreeHooked(int a1, int a2)
{
  int v2; // esi

  v2 = 1;
  if ( !*(_DWORD *)(a2 + 232) )
    return *(_DWORD *)(*(_DWORD *)a1 + 212) != 0;
  return v2;
}
