/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___::Run @ 0x1800B3D10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034BEB0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180362098 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637c0604b81c4c87768a883b7ac642c1___::Run(
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
          (void *)0x917,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
  }
}
