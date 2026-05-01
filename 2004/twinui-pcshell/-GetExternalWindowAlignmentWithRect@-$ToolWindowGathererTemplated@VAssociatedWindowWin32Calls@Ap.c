/*
 * XREFs of ?GetExternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x180194068
 * Callers:
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180192F50 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B538 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetExternalWindowAlignmentWithRect(
        RECT *lprcSrc1,
        HWND hWnd,
        _DWORD *a3)
{
  const char *v5; // r9
  struct tagRECT Rect; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a3 = 0;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x61,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v5);
  rc = Rect;
  InflateRect(&rc, -2, -2);
  if ( IntersectRect(&rcDst, lprcSrc1, &rc) )
  {
    *a3 = 0;
  }
  else if ( Rect.left > lprcSrc1->left + 2 || Rect.right < lprcSrc1->right - 2 )
  {
    if ( Rect.top <= lprcSrc1->top + 2 && Rect.bottom >= lprcSrc1->bottom - 2 )
    {
      if ( (int)abs32(Rect.left - lprcSrc1->right) > 2 )
      {
        if ( (int)abs32(Rect.right - lprcSrc1->left) <= 2 )
          *a3 = 1;
      }
      else
      {
        *a3 = 2;
      }
    }
  }
  else if ( (int)abs32(Rect.top - lprcSrc1->bottom) > 2 )
  {
    if ( (int)abs32(Rect.bottom - lprcSrc1->top) <= 2 )
      *a3 = 4;
  }
  else
  {
    *a3 = 8;
  }
  return 0LL;
}
