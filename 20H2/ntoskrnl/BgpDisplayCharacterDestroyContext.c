/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x1409F6FBC
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1409F6F5C (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140A99B80 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x1409F70EC (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
