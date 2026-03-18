/*
 * XREFs of ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C02A7118
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z @ 0x1C02A778C (-pchTranslate@RFONTOBJ@@QEAAPEADPEBD@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vClosePrintKView@@YAXXZ @ 0x1C02A7C1C (-vClosePrintKView@@YAXXZ.c)
 */

int __fastcall MapFontFileInKernel(PVOID Section, PVOID *MappedBase)
{
  int result; // eax
  ULONG_PTR ViewSize; // [rsp+38h] [rbp+10h] BYREF

  *MappedBase = 0LL;
  ViewSize = 0LL;
  result = MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  }
  return result;
}
