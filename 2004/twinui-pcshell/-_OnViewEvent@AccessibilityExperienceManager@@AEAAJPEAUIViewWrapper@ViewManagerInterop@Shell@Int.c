/*
 * XREFs of ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803724E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x180370AFC (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x180371E80 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180372150 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnViewEvent(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  struct EventRegistrationToken v6; // r8
  unsigned int v7; // edi
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B3,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
  if ( v12 )
  {
    if ( v12 == 4 )
    {
      AccessibilityExperienceManager::_DismissView(this, (AccessibilityExperienceManager *)((char *)this + 376));
      if ( *((_BYTE *)this + 472) )
      {
        *((_BYTE *)this + 472) = 0;
        v9 = AccessibilityExperienceManager::RelaunchWithDelay(this);
        if ( v9 < 0 )
        {
          v10 = 708LL;
          goto LABEL_6;
        }
      }
    }
  }
  else
  {
    v9 = AccessibilityExperienceManager::_OnViewCreated(this, a2, v6);
    if ( v9 < 0 )
    {
      v10 = 696LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
