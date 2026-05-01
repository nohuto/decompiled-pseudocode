/*
 * XREFs of ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1801CB16C
 * Callers:
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1801CB680 (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 * Callees:
 *     InitDPI @ 0x18046D008 (InitDPI.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::AdjustSizeForScale(
        CPeopleBarFlyoutExperienceManager *this,
        struct tagSIZE *a2,
        __int64 a3)
{
  HWND WindowW; // rax
  HANDLE PropW; // rax
  LONG v6; // eax
  int v7; // edx
  LONG cy; // ecx
  CPeopleBarFlyoutExperienceManager *nNumerator; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF

  nNumerator = this;
  InitDPI(this, a2, a3);
  LODWORD(nNumerator) = dword_1805CBBF0;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
  {
    PropW = GetPropW(WindowW, L"TaskbarMonitor");
    GetDpiForMonitor(PropW, 0LL, &nNumerator, &v10);
  }
  v6 = MulDiv(a2->cx, (int)nNumerator, 96);
  v7 = (int)nNumerator;
  cy = a2->cy;
  a2->cx = v6;
  a2->cy = MulDiv(cy, v7, 96);
}
