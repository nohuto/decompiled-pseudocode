/*
 * XREFs of _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z @ 0x92328 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YGXK@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWINDOW_GROUP_ID@@PAUtagRECT@@@Z @ 0x9267C (-xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWIND.c)
 *     ?GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ @ 0x9272E (-GroupManagementEnabledForCaller@WindowGroupingUtility@@YG_NXZ.c)
 *     ?FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z @ 0xD3976 (-FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z.c)
 *     _NtUserCreateWindowGroup@4 @ 0x160894 (_NtUserCreateWindowGroup@4.c)
 *     _NtUserDeleteWindowGroup@4 @ 0x160AA9 (_NtUserDeleteWindowGroup@4.c)
 *     _NtUserEnableWindowGroupPolicy@12 @ 0x161581 (_NtUserEnableWindowGroupPolicy@12.c)
 *     _NtUserSetWindowGroup@16 @ 0x16A0E5 (_NtUserSetWindowGroup@16.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z @ 0x19F1FB (-HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z.c)
 *     ?NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x19F31C (-NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE.c)
 * Callees:
 *     <none>
 */

bool __thiscall anonymous_namespace_::GroupManagementEnabledForDesktop(void *this)
{
  return `anonymous namespace'::g_windowGroupManager && this == *(void **)`anonymous namespace'::g_windowGroupManager;
}
