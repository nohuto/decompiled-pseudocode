/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___::Run @ 0x1800B25C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009466C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1801891FC (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18034C910 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180351684 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035CE38 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b2d628275170c96747651ea7a6282f40___::Run(
        __int64 a1)
{
  int IsReady; // eax
  _BYTE v3[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v3);
  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 824LL), GetTickCount64());
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 16) + 688LL));
    if ( IsReady < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A9,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)IsReady);
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 24);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v3);
}
