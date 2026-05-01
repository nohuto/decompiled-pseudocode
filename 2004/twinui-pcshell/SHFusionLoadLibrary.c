/*
 * XREFs of SHFusionLoadLibrary @ 0x18013F0BC
 * Callers:
 *     DelayLoadCC @ 0x18013F170 (DelayLoadCC.c)
 * Callees:
 *     SHActivateContext @ 0x18013EF2C (SHActivateContext.c)
 */

HMODULE SHFusionLoadLibrary()
{
  HMODULE Library; // rbx
  ULONG_PTR ulCookie; // [rsp+30h] [rbp+8h] BYREF

  ulCookie = 0LL;
  if ( !SHActivateContext(&ulCookie) )
    return 0LL;
  Library = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  if ( ulCookie )
    DeactivateActCtx(0, ulCookie);
  return Library;
}
