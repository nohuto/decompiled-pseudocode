/*
 * XREFs of ?vUnlock@SURFREF@@QAEXXZ @ 0x78568
 * Callers:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 *     _NtGdiDdDDICreateDCFromMemory@4 @ 0x7BD76 (_NtGdiDdDDICreateDCFromMemory@4.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254 (_NtGdiDdDDIDestroyDCFromMemory@4.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 * Callees:
 *     <none>
 */

void __thiscall SURFREF::vUnlock(SURFREF *this)
{
  if ( *(_DWORD *)this )
    DEC_SHARE_REF_CNT(*(_DWORD *)this);
}
