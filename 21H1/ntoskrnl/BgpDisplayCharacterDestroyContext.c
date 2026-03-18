/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x1409F0FBC
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140A94798 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x1409F10EC (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
