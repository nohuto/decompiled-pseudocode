/*
 * XREFs of ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x18004DC80
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004C81C (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180005F80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004A420 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x18004BC38 (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004E1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004E240 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBa_ea_18004E240.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD9C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity(
        __int64 a1,
        MobilityExperience::ActivityWrapper *a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  void *v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  HANDLE Event; // r14
  wil::details *v14; // rdi
  DWORD LastError; // ebx
  void *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // r15
  _DWORD *v20; // rdi
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  DWORD CurrentThreadId; // eax
  int v24; // ebx
  __int64 result; // rax
  __int64 v26; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v28; // [rsp+B8h] [rbp+20h]

  MobilityExperience::ActivityWrapper::SetActivityComplete(a2);
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  LOBYTE(v6) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v6);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18004DF74LL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
LABEL_34:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v10, v11, v12);
    goto LABEL_35;
  }
  GetLastError();
  v14 = *(wil::details **)(a1 + 80);
  if ( v14 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v14, v16);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 80) = Event;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v17 = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::AddRef(a1);
  v28 = *(_DWORD *)a2;
  v18 = *((_QWORD *)a2 + 1);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 8LL))(*((_QWORD *)a2 + 1));
  v19 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v20 = 0LL;
  v21 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  if ( v21 )
  {
    v21[3] = 1;
    *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v17 = 0LL;
    *((_QWORD *)v22 + 2) = a1;
    *((_QWORD *)v22 + 3) = a1;
    v22[8] = v28;
    *((_QWORD *)v22 + 5) = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v19 = 0LL;
    *((_QWORD *)v22 + 6) = a3;
    *(_QWORD *)v22 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_>::`vftable';
    v20 = v22;
  }
  CurrentThreadId = GetCurrentThreadId();
  v24 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v20, 0LL);
  if ( v20 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v17);
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_34;
  }
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(a1);
  v26 = *((_QWORD *)a2 + 1);
  if ( v26 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return result;
}
