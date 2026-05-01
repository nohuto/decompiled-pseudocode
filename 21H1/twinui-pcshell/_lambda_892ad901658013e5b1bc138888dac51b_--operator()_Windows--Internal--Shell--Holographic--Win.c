/*
 * XREFs of _lambda_892ad901658013e5b1bc138888dac51b_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C174
 * Callers:
 *     _lambda_3dcd48245164aa834a1499666ccdc6ed_::operator() @ 0x18009CA70 (_lambda_3dcd48245164aa834a1499666ccdc6ed_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_767713866e9597e09a630e18e26fc18b___ @ 0x18009C484 (Windows--Internal--ComTaskPool--QueueTask__lambda_767713866e9597e09a630e18e26fc18b___.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b___ @ 0x18009C7A0 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_892ad90.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18016528C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802291C8 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_1802291C8.c)
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18022A834 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802309EC (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x180232FE4 (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_892ad901658013e5b1bc138888dac51b_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        int a3)
{
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-1B8h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-1B0h]
  _BYTE v15[80]; // [rsp+30h] [rbp-1A8h] BYREF
  _QWORD v16[40]; // [rsp+80h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1,
    (wil::ActivityThreadWatcher *)v15);
  if ( a3 >= 0 )
  {
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
    v16[0] = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
    v11 = holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b___(
            v13,
            a2,
            v16);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_767713866e9597e09a630e18e26fc18b___(v12, v11);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)v16);
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 871LL;
      goto LABEL_11;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)a3);
    v6 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(
           *(struct IWin32ApplicationView **)(a2 + 568),
           1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = (unsigned int)v6;
      v9 = 845LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)v8);
      goto LABEL_6;
    }
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1);
  }
  v7 = 0;
LABEL_6:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v15);
  return (unsigned int)v7;
}
