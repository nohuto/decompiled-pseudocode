/*
 * XREFs of _UnmapPrintKView@4 @ 0xD0C72
 * Callers:
 *     ?DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z @ 0xD0B8E (-DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __thiscall UnmapPrintKView(void *this)
{
  int i; // esi
  int v3; // [esp+8h] [ebp-4h] BYREF

  v3 = ghsemPrintKView;
  GreAcquireSemaphore(ghsemPrintKView);
  for ( i = gpPrintKViewList; i; i = *(_DWORD *)(i + 20) )
  {
    if ( *(void **)i == this && *(_DWORD *)(i + 12) )
    {
      MmUnmapViewInSessionSpace(*(PVOID *)(i + 12));
      *(_DWORD *)(i + 12) = 0;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
