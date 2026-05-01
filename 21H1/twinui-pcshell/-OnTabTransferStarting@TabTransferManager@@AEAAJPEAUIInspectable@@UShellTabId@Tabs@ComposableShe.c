/*
 * XREFs of ?OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026D860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180016B3C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009D580 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4_____lambda_11f4e68007e87e41ff887ccfc1974ff4___ @ 0x18026ADC4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___--CTaskW.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::__lambda_11f4e68007e87e41ff887ccfc1974ff4_ @ 0x18026BD40 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--__lambda_11f4e68007e87e41ff887ccfc1974ff4_.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall TabTransferManager::OnTabTransferStarting(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int128 *, __int64 **); // rbx
  int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, __int64 *, __int64 *); // rdi
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edi
  void *v20; // rax
  __int64 v21; // rbx
  int v22; // edi
  __int64 *v24; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-A0h] BYREF
  void *v28[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v29; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v31; // [rsp+80h] [rbp-68h] BYREF
  __int64 v32; // [rsp+88h] [rbp-60h] BYREF
  __int64 v33; // [rsp+90h] [rbp-58h] BYREF
  __int128 v34; // [rsp+98h] [rbp-50h]
  __int64 v35; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v24 = 0LL;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 **))(*(_QWORD *)v5 + 96LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v24);
  v29 = *a3;
  v7 = v6(v5, &v29, &v24);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      454LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v7);
  v8 = v24;
  if ( !v24 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      455LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)0x80070490LL);
  v25 = 0LL;
  v9 = *v8;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 168))(v8, &v25);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      458LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v10);
  v11 = v25;
  if ( !v25 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      459LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)0x80070490LL);
  v27 = 0LL;
  v12 = *v11;
  v27 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 56))(v11, &v27);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      462LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v13);
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
    (struct IWeakReference **)(a1 + 64),
    v28);
  v26 = 0LL;
  v14 = v28[0];
  v15 = *(__int64 (__fastcall **)(void *, __int64 *, __int64 *))(*(_QWORD *)v28[0] + 24LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v26);
  v16 = v15(v14, v24, &v26);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      466LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v16);
  v17 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
          &v29,
          a1);
  v30[0] = a1;
  v18 = *v17;
  *v17 = 0LL;
  v30[1] = v18;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v31,
    (__int64)v24);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v32,
    v27);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v33,
    (__int64)v28[0]);
  v34 = *a3;
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v35,
    (__int64)v25);
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v36,
    v26);
  v19 = *(_DWORD *)(a1 + 112);
  v20 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = 0LL;
  if ( v20 )
    v21 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4_____lambda_11f4e68007e87e41ff887ccfc1974ff4___(
            (__int64)v20,
            (__int64)v30);
  v22 = SHTaskPoolQueueTask(3LL, 2LL, v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  lambda_11f4e68007e87e41ff887ccfc1974ff4_::__lambda_11f4e68007e87e41ff887ccfc1974ff4_(v30);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v29);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      545LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v28);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
  return 0LL;
}
