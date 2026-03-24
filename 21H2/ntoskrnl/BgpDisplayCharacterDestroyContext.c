/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x1409F3FBC
 * Callers:
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140A96A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9

  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1, v2, v3, v4);
  }
}
