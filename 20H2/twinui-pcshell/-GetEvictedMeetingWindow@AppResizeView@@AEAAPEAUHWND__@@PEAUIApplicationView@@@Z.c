/*
 * XREFs of ?GetEvictedMeetingWindow@AppResizeView@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800BC19C
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180411EEC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800B67F4 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B68CC (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18039BEA0 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

HWND __fastcall AppResizeView::GetEvictedMeetingWindow(AppResizeView *this, struct IApplicationView *a2)
{
  HWND v3; // rdi
  DWORD WindowThreadProcessId; // eax
  DWORD v5; // esi
  DWORD v6; // edi
  struct IApplicationView *v7; // rdx
  HWND v9; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v9 = (HWND)this;
  hWnd = 0LL;
  EnumWindows((WNDENUMPROC)lambda_80491052145e77ceb3046f94cb1891db_::_lambda_invoker_cdecl_, (LPARAM)&hWnd);
  if ( a2
    && (v3 = hWnd) != 0LL
    && !PPISideBarHelpers::IsSideBarView(a2)
    && (WindowThreadProcessId = GetWindowThreadProcessId(v3, 0LL),
        v9 = 0LL,
        v5 = WindowThreadProcessId,
        PPISideBarHelpers::GetWindowfromView(a2, &v9),
        v9)
    && (v6 = GetWindowThreadProcessId(v9, 0LL), TabletModePositionerHelpers::IsOperableView(a2, v7))
    && v5 == v6 )
  {
    return v9;
  }
  else
  {
    return 0LL;
  }
}
