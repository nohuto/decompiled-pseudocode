/*
 * XREFs of _lambda_c5c9712bfea529d369d9e5c8c75fe7b4_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C2CC
 * Callers:
 *     _lambda_f39b2aea233dc9be0ddf7118a39ff465_::operator() @ 0x18009CB44 (_lambda_f39b2aea233dc9be0ddf7118a39ff465_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800937A8 (-ContinueOnCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_Tl.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18016528C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802309EC (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180232DC8 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall lambda_c5c9712bfea529d369d9e5c8c75fe7b4_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_(
        struct wil::details::IFailureCallback *a1,
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *a2,
        int a3)
{
  int ready; // eax
  unsigned int v7; // ebx
  _BYTE v9[80]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1,
    (wil::ActivityThreadWatcher *)v9);
  if ( a3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x381,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)a3);
  ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(a2, 0);
  v7 = ready;
  if ( ready >= 0 )
  {
    wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x383,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
  }
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v9);
  return v7;
}
