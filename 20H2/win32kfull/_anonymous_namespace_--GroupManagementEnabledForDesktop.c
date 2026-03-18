/*
 * XREFs of _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0
 * Callers:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C007F010 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C007F050 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     _lambda_cb10391b5661d01073277e9ca426a942_::_lambda_invoker_cdecl_ @ 0x1C007F140 (_lambda_cb10391b5661d01073277e9ca426a942_--_lambda_invoker_cdecl_.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C007F8EC (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     NtUserCreateWindowGroup @ 0x1C01F7430 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F76F0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F8460 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetWindowGroup @ 0x1C0202BD0 (NtUserSetWindowGroup.c)
 *     _anonymous_namespace_::TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___ @ 0x1C023F474 (_anonymous_namespace_--TryExecuteIfPolicyAllows__lambda_3029ce1d0d0873684df583e6396a0ba0___.c)
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C0240140 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
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
