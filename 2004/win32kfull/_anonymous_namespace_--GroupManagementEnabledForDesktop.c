/*
 * XREFs of _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00BEDD0
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C00BEC38 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C00BEC78 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C00BED60 (_lambda_cb10391b5661d01073277e9ca426a942_--_lambda_invoker_cdecl_.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00BF55C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     NtUserCreateWindowGroup @ 0x1C01F82A0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F8560 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F92D0 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetWindowGroup @ 0x1C0203A40 (NtUserSetWindowGroup.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C0240714 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C02413E0 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::GroupManagementEnabledForDesktop(__int64 a1)
{
  char result; // al

  result = 0;
  if ( `anonymous namespace'::g_windowGroupManager )
  {
    if ( a1 == *(_QWORD *)`anonymous namespace'::g_windowGroupManager )
      return 1;
  }
  return result;
}
