/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___::Run @ 0x1800A4520
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18032AE14 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803412B8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31afa5824dc70ccdddd77b05669783b6___::Run(
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
          (void *)0x95D,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
  }
}
