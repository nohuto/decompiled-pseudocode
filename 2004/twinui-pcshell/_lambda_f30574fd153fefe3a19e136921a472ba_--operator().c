/*
 * XREFs of _lambda_f30574fd153fefe3a19e136921a472ba_::operator() @ 0x1800AFE64
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___::Run @ 0x1800B2690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001340C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18009466C (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1801891FC (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18034987C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18034CAE8 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180350774 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180351684 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180354610 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f30574fd153fefe3a19e136921a472ba_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r14
  int v3; // eax
  unsigned int v4; // ebx
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v6; // rcx
  __int64 v7; // rdx
  std::_Ref_count_base *v8; // rsi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, struct IApplicationFrame **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v15[80]; // [rsp+30h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IApplicationFrame *v17; // [rsp+B0h] [rbp+30h] BYREF
  struct IInspectable *v18; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1 + 10;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 10),
    (wil::ActivityThreadWatcher *)v15);
  v18 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 6), &v18);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x313,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v18 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
    v4 = 0;
    goto LABEL_21;
  }
  *(_OWORD *)v14 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v14);
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 797LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_19;
  }
  v8 = v14[0];
  ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(
               v6,
               *((struct IApplicationFrameWrapper **)v14[0] + 1),
               0LL,
               (const struct tagRECT *)(a1 + 1));
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 798LL;
    goto LABEL_11;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 1) + 96LL))(*((_QWORD *)v8 + 1));
  v4 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v7 = 799LL;
    goto LABEL_11;
  }
  v17 = 0LL;
  v9 = *((_QWORD *)v8 + 1);
  v10 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v9 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v11 = v10(v9, &v17);
  v4 = v11;
  if ( v11 >= 0 )
  {
    v11 = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
            v17,
            *((struct IApplicationFrameWrapper **)v8 + 1),
            *((_BYTE *)v8 + 139));
    v4 = v11;
    if ( v11 >= 0 )
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
      v4 = 0;
      goto LABEL_18;
    }
    v12 = 803LL;
  }
  else
  {
    v12 = 802LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_19:
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
  return v4;
}
