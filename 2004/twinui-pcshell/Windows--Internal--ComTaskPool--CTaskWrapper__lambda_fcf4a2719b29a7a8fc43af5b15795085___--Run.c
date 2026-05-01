/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___::Run @ 0x1800B26B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034C910 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362958 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcf4a2719b29a7a8fc43af5b15795085___::Run(
        __int64 a1)
{
  ULONGLONG TickCount64; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    TickCount64 = GetTickCount64();
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 824LL);
    if ( TickCount64 <= v3 )
      v4 = 0LL;
    else
      v4 = TickCount64 - v3;
    if ( v4 >= 0x2710 )
    {
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 824LL), TickCount64);
      v5 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 16) + 688LL));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x92F,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
  }
}
