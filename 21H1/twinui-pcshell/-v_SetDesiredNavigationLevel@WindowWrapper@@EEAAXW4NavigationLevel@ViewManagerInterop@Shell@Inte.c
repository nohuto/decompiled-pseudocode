/*
 * XREFs of ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180078AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180078B34 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1c848fc40f8d66460ef5049a4e343f17___ @ 0x1802B9518 (Windows--Internal--ComTaskPool--QueueTask__lambda_1c848fc40f8d66460ef5049a4e343f17___.c)
 */

__int64 __fastcall WindowWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  PCWSTR StringRawBuffer; // rbx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  *(_DWORD *)(a1 + 644) = a2;
  v4 = *(int *)(a1 + 304);
  if ( a2 || (int)CoreIsWindowServiceSupported(*(int *)(a1 + 304), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
    return WindowWrapperBase::NavigateInternal(a1, a2);
  WindowWrapperBase::NavigateInternal(a1, 3LL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v11,
    a1);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 312), 0LL);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    v9,
    v11);
  v9[1] = a1 - 8;
  v9[2] = v4;
  v9[3] = (__int64)StringRawBuffer;
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_1c848fc40f8d66460ef5049a4e343f17___(
         a1 - 8,
         v7,
         *(unsigned int *)(a1 + 576),
         v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v8);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
}
