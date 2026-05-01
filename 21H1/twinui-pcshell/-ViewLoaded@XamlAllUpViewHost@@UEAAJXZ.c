/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802E6F70
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18004FE94 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x1802DDB94 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1802DFA70 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x1802E5CB0 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // r15
  int v4; // r13d
  enum _TABLETMODESTATE *v5; // rdx
  __int64 v6; // rcx
  MonitorFrame **v7; // r14
  MonitorFrame **v8; // r12
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // rdi
  char IsTabletMode; // al
  __int64 v14; // rdx
  _BYTE v15[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-9h] BYREF
  int v17; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = (char *)this - 128;
  v3 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v3, 1);
  v5 = (enum _TABLETMODESTATE *)++*((_QWORD *)this + 28);
  v6 = (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3;
  if ( v5 == (enum _TABLETMODESTATE *)v6 )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (XamlAllUpViewHost *)((char *)this + 240),
      (wil::ActivityThreadWatcher *)v15);
    v7 = (MonitorFrame **)*((_QWORD *)this + 25);
    v8 = (MonitorFrame **)*((_QWORD *)this + 26);
    while ( 1 )
    {
      if ( v7 == v8 )
      {
        *((_DWORD *)this + 144) = 1;
        if ( v17 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
        wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v15);
        v5 = (enum _TABLETMODESTATE *)*((_QWORD *)this + 28);
        goto LABEL_11;
      }
      MonitorFrame::BeginInvokeAnimation(*v7);
      v20 = *((_QWORD *)*v7 + 5);
      v9 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v9 + 96LL))(v9, *((_QWORD *)this + 14), &v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      if ( v10 < 0 )
        break;
      if ( v19 )
      {
        v20 = *((_QWORD *)*v7 + 6);
        v11 = v20;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        if ( v10 < 0 )
        {
          v14 = 366LL;
          goto LABEL_19;
        }
      }
      ++v7;
    }
    v14 = 363LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v10);
    if ( v17 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v15);
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v2);
  }
  else
  {
LABEL_11:
    if ( v5 == (enum _TABLETMODESTATE *)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3) )
    {
      IsTabletMode = TabletModeHelpers::IsTabletMode((TabletModeHelpers *)v6, v5);
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        (XamlAllUpViewHost *)((char *)this + 240),
        (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3,
        IsTabletMode,
        1u);
    }
    v10 = 0;
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
