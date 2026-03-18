/*
 * XREFs of ?vClosePrintKView@@YGXXZ @ 0x209AF9
 * Callers:
 *     ?MapFontFileInKernel@@YGJPAXPAPAX@Z @ 0x208DC1 (-MapFontFileInKernel@@YGJPAXPAPAX@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __stdcall vClosePrintKView()
{
  int i; // esi
  int v1; // [esp+4h] [ebp-4h] BYREF

  v1 = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  for ( i = gpPrintKViewList; i; i = *(_DWORD *)(i + 20) )
  {
    if ( !*(_DWORD *)(i + 8) && *(_DWORD *)(i + 12) )
    {
      MmUnmapViewInSessionSpace(*(PVOID *)(i + 12));
      *(_DWORD *)(i + 12) = 0;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v1);
}
