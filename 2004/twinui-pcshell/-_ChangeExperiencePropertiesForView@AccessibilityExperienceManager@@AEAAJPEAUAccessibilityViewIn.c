/*
 * XREFs of ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1803719E4
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x180371A64 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_SetWindowTitle@AccessibilityExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEBG@Z @ 0x1803725B8 (-_SetWindowTitle@AccessibilityExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEBG@Z.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
        AccessibilityExperienceManager *this,
        struct IApplicationFrameWrapper **a2,
        const unsigned __int16 *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = AccessibilityExperienceManager::_SetWindowTitle(this, a2[1], a3);
  if ( v5 < 0 )
  {
    v6 = 800LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, char *))(*(_QWORD *)a2[1] + 64LL))(
         a2[1],
         (char *)this + 440);
  if ( v5 < 0 )
  {
    v6 = 801LL;
    goto LABEL_3;
  }
  return 0LL;
}
