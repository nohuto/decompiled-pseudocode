/*
 * XREFs of ?MapFontFileInKernel@@YGJPAXPAPAX@Z @ 0x208DC1
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QAEPADPBD@Z @ 0x20967F (-pchTranslate@RFONTOBJ@@QAEPADPBD@Z.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 * Callees:
 *     ?vClosePrintKView@@YGXXZ @ 0x209AF9 (-vClosePrintKView@@YGXXZ.c)
 */

int __fastcall MapFontFileInKernel(void *a1, PVOID *a2)
{
  int result; // eax
  ULONG_PTR ViewSize; // [esp+8h] [ebp-4h] BYREF

  ViewSize = 0;
  *a2 = 0;
  result = MmMapViewInSessionSpace(a1, a2, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return MmMapViewInSessionSpace(a1, a2, &ViewSize);
  }
  return result;
}
