/*
 * XREFs of ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18028A550
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180282D60 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18005E478 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180069EE8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x18012D250 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ??1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18027EF14 (--1HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z @ 0x180284C28 (-StartActivity@HandleWindowCreated@ViewManagerInteropTraceLogging@@QEAAXPEAXK@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18028A6C4 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18028AC3C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleWindowCreated(ViewEventDispatcher *a1, HWND a2, int a3)
{
  unsigned int v6; // ebx
  HWND v7; // rdx
  unsigned int PropW; // eax
  int v9; // edi
  int v10; // eax
  int v12[2]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"HandleWindowCreated");
  *(_QWORD *)v12 = &ViewManagerInteropTraceLogging::HandleWindowCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleWindowCreated::StartActivity(
    (ViewManagerInteropTraceLogging::HandleWindowCreated *)v12,
    a2,
    a3);
  v6 = 0;
  if ( !(unsigned int)IsShellManagedWindow(a2)
    || (unsigned int)IsShellFrameWindow(a2)
    || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged((ShellManagedWindowHelper *)a2, v7)
    || GetPropW(a2, L"Shell_Logical_Owner_Window_Prop") )
  {
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
    v9 = 0;
    goto LABEL_12;
  }
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  if ( !PropW )
  {
    if ( a3 )
      goto LABEL_8;
    v9 = ViewEventDispatcher::_HandleWindowCreatedWithNoView(a1, a2);
    if ( v9 >= 0 )
      goto LABEL_8;
LABEL_12:
    v6 = v9;
    goto LABEL_13;
  }
  v10 = ViewEventDispatcher::_HandleWindowCreatedForExistingView(a1, a2, PropW);
  v9 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x783,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_12;
  }
LABEL_8:
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12, 0);
LABEL_13:
  ViewManagerInteropTraceLogging::HandleWindowCreated::~HandleWindowCreated((ViewManagerInteropTraceLogging::HandleWindowCreated *)v12);
  return v6;
}
