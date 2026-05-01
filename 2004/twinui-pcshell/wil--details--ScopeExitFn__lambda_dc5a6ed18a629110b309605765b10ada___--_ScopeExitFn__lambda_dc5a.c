/*
 * XREFs of wil::details::ScopeExitFn__lambda_dc5a6ed18a629110b309605765b10ada___::_ScopeExitFn__lambda_dc5a6ed18a629110b309605765b10ada___ @ 0x1800AEFA0
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18034D808 (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnAutoInvokeInDesktopModePolicyChanged_::_1_::dtor$0 @ 0x18034D895 (_TouchKeyboardExperienceManager--OnAutoInvokeInDesktopModePolicyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_dc5a6ed18a629110b309605765b10ada___::_ScopeExitFn__lambda_dc5a6ed18a629110b309605765b10ada___(
        __int64 a1)
{
  int PolicyData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    if ( **(_QWORD **)a1 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData();
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA72,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
