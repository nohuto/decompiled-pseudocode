/*
 * XREFs of ?IsVtcAppSharingToolBar@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B6A0C
 * Callers:
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1803915C0 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800B67F4 (-GetWindowfromView@PPISideBarHelpers@@SAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 */

bool __fastcall PPISideBarHelpers::IsVtcAppSharingToolBar(struct IApplicationView *a1)
{
  char v1; // bl
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)PPISideBarHelpers::GetWindowfromView(a1, &hWnd) >= 0 )
    return GetPropA(hWnd, "SHARING_TOOLBAR") != 0LL;
  return v1;
}
