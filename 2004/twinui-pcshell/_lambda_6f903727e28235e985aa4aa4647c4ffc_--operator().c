/*
 * XREFs of _lambda_6f903727e28235e985aa4aa4647c4ffc_::operator() @ 0x18025E0DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___::Run @ 0x180261B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007F7A4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009466C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CD498 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180260E8C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18026174C (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_6f903727e28235e985aa4aa4647c4ffc_::operator()(__int64 a1)
{
  __int64 v2; // rbp
  const unsigned __int16 **v3; // rsi
  PeoplePaneViewManager *v4; // r14
  char v5; // di
  PeoplePaneViewManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[24]; // [rsp+60h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = a1 + 72;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 72),
    (wil::ActivityThreadWatcher *)v10);
  v3 = (const unsigned __int16 **)(a1 + 8);
  v4 = *(PeoplePaneViewManager **)a1;
  v5 = 1;
  v7 = PeoplePaneViewManager::LaunchPeoplePaneForContactWithArgs(
         v6,
         *(const unsigned __int16 **)(a1 + 8),
         *(const unsigned __int16 **)(a1 + 40));
  v8 = v7;
  if ( v7 >= 0 )
  {
    wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v8 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v5 )
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v4, *v3);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v10);
  return v8;
}
