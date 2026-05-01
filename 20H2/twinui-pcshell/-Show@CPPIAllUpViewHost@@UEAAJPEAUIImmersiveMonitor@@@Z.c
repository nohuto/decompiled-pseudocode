/*
 * XREFs of ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18038FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007A004 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A916C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801ABC84 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18038EFE8 (--1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x18038F2B0 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18038FCD8 (-StartActivity@ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x180390144 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@IEAAJPEAUIUnknown@@.c)
 */

__int64 __fastcall CPPIAllUpViewHost::Show(CPPIAllUpViewHost *this, struct IImmersiveMonitor *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  WINBOOL v10; // edx
  __int64 v11; // rcx
  WINBOOL v12; // edx
  int v14[4]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v15[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"ShowPPIAllUpView");
  v15[0] = &MultitaskingViewTelemetry::ShowPPIAllUpView::`vftable';
  MultitaskingViewTelemetry::ShowPPIAllUpView::StartActivity((MultitaskingViewTelemetry::ShowPPIAllUpView *)v15);
  v6 = CMultitaskingViewHostBase<IPPIAllUpViewHost>::_RegisterForMonitorEvents(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 140LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewhost.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 20, (__int64)a2);
  v9 = *(_QWORD *)a2;
  *(_OWORD *)v14 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(v9 + 72))(a2, v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 145LL;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         v14,
         3LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 148LL;
    goto LABEL_13;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 136LL))(*((_QWORD *)this + 19)) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v15,
      v10);
    v7 = -2147019873;
LABEL_14:
    CMultitaskingViewHostBase<IPPIAllUpViewHost>::DismissView((__int64)this);
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 159LL;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)this + 19);
  *((_BYTE *)this + 112) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 163LL;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 24LL))(
    *((_QWORD *)this + 11),
    *((unsigned int *)this + 18));
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v15,
    v12);
  v7 = 0;
LABEL_16:
  MultitaskingViewTelemetry::ShowPPIAllUpView::~ShowPPIAllUpView((MultitaskingViewTelemetry::ShowPPIAllUpView *)v15);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
