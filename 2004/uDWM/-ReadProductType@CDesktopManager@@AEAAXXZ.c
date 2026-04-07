/*
 * XREFs of ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18004ABE4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18004AC50 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

void __fastcall CDesktopManager::ReadProductType(CDesktopManager *this)
{
  _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF
  unsigned __int8 v3; // [rsp+13Ah] [rbp-1Eh]

  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
    *((_DWORD *)this + 44) = v3;
}
