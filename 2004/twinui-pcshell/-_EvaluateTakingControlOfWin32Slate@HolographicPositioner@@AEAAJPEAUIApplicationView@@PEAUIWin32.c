/*
 * XREFs of ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x18024464C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18004DF50 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x18004E0D0 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 * Callees:
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180015A3C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x18023E35C (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x18023E424 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x1802452C4 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3,
        char a4)
{
  __int64 result; // rax
  HWND ForegroundWindow; // rax
  HWND v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  LONG WindowLongW; // eax
  int v14; // ebx
  LONG v15; // eax
  void (__fastcall *v16)(char *, GUID *, IUnknown **); // rbx
  __int64 v17; // rbx
  void *v18; // rdx
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rcx
  int v22; // eax
  void *v23; // rdx
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-18h] BYREF
  IUnknown *v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v30; // [rsp+80h] [rbp+40h] BYREF

  v30 = 0;
  hWnd = 0LL;
  result = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a3 + 24LL))(a3, &hWnd);
  if ( (int)result < 0 )
    return result;
  if ( !hWnd )
    return 2147943568LL;
  if ( GetWindow(hWnd, 4u) )
    return 0LL;
  if ( HolographicPositioner::_IsInputContextHolographic(this) )
    goto LABEL_12;
  ForegroundWindow = GetForegroundWindow();
  v10 = hWnd;
  if ( hWnd != ForegroundWindow )
  {
    if ( !a4 )
      return 0LL;
    v11 = *((_QWORD *)this + 31);
    if ( !v11 )
      return 0LL;
    v30 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v11 + 32LL))(
            v11,
            a3,
            &v30);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92D,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      return 0LL;
    }
    if ( !v30 )
      return 0LL;
LABEL_12:
    v10 = hWnd;
  }
  WindowLongW = GetWindowLongW(v10, -16);
  v14 = WindowLongW;
  if ( (WindowLongW & 0x40000000) != 0 )
    return 0LL;
  if ( (WindowLongW & 0x10000) == 0 )
    return 0LL;
  v15 = GetWindowLongW(hWnd, -20);
  if ( v14 < 0 && (v15 & 0x40000) == 0 && (v14 & 0x80880000) != 0x80880000 )
    return 0LL;
  v27 = 0LL;
  v30 = 2;
  v16 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  v16((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &v27);
  Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v28, v27, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  v17 = v28;
  if ( !v28 )
  {
    if ( a4 )
    {
      v21 = *((_QWORD *)this + 31);
      if ( v21 )
      {
        if ( *((_BYTE *)this + 296) )
        {
          v30 = 0;
          v22 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v21 + 32LL))(
                  v21,
                  a3,
                  &v30);
          if ( v22 >= 0 )
          {
            if ( v30 )
            {
              LODWORD(v25) = (_DWORD)hWnd;
              LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____21__((__int64)a2, v23, &v25);
              v24 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 33)
                                                                                          + 24LL))(
                      *((_QWORD *)this + 33),
                      a2,
                      5LL);
              v20 = v24;
              if ( v24 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x965,
                  (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)(unsigned int)v24);
                goto LABEL_35;
              }
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x962,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v22);
          }
        }
      }
    }
LABEL_23:
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    return 0LL;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 33))(
    *((_QWORD *)this + 33),
    &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
    &v25);
  if ( !v25
    || (v30 = (int)hWnd,
        LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____20__((__int64)a2, v18, &v30),
        v19 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64))(*(_QWORD *)v25 + 40LL))(
                v25,
                a2,
                v17),
        v20 = v19,
        v19 >= 0) )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95C,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
LABEL_35:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v20;
}
