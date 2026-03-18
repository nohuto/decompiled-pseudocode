/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?bDisableHalftone@PDEVOBJ@@QAEHXZ @ 0xD3540 (-bDisableHalftone@PDEVOBJ@@QAEHXZ.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ @ 0x1E98A3 (-bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _CleanUpDHI @ 0xAD654 (_CleanUpDHI.c)
 */

void *__thiscall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // esi
  _DWORD *v6; // edi

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = ThreadWin32Thread;
  if ( !ThreadWin32Thread
    || !*(_DWORD *)(ThreadWin32Thread + 52) && !*(_DWORD *)(ThreadWin32Thread + 56)
    || !PDEVOBJ::bAllowShareAccess(this) )
  {
    return *(void **)(*(_DWORD *)this + 936);
  }
  if ( *(_DWORD *)(v4 + 164) != gcModeChanges )
  {
    v6 = *(_DWORD **)(v4 + 160);
    if ( v6 )
    {
      bDeletePalette(*v6, 0, 0);
      if ( v6[8] == 1414021956 )
        CleanUpDHI(v6);
      *(_DWORD *)(v4 + 160) = 0;
    }
  }
  return *(void **)(v4 + 160);
}
