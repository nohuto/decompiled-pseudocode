/*
 * XREFs of ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x18025F590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18025F628 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetRectForFlyoutButton(PeoplePaneViewManager *this, struct tagRECT *a2)
{
  int RectFromPropertySet; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RectFromPropertySet = PeoplePaneViewManager::GetRectFromPropertySet(
                          (PeoplePaneViewManager *)((char *)this - 88),
                          L"FlyoutButtonRect",
                          a2);
  v3 = RectFromPropertySet;
  if ( RectFromPropertySet >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)RectFromPropertySet);
  return v3;
}
