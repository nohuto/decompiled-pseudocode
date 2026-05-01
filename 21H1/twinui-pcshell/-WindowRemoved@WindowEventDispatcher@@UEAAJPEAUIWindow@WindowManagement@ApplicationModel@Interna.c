/*
 * XREFs of ?WindowRemoved@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800585A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAppViewStatics@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180058394 (-GetAppViewStatics@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIAppViewStatics@WindowManagement@A.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1800584F8 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180058B78 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180058D8C (--$WindowEventDispatcher_OnWindowRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::WindowRemoved(RTL_SRWLOCK *this, RTL_SRWLOCK *a2)
{
  __int64 v2; // r14
  __int64 (__fastcall *v3)(__int64, RTL_SRWLOCK *, _QWORD **); // r15
  RTL_SRWLOCK *v4; // rbx
  int v6; // eax
  __int64 *AppViewStatics; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v17; // [rsp+68h] [rbp+10h] BYREF
  char v18; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v6 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, char *))a2->Ptr + 10))(a2, &v18);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x686,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6,
      v14);
  }
  else
  {
    v19 = 0LL;
    AppViewStatics = WindowEventDispatcher::GetAppViewStatics((__int64)&this[-2], v15);
    v2 = *AppViewStatics;
    v3 = *(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD **))(*(_QWORD *)*AppViewStatics + 120LL);
    v8 = v19;
    v19 = 0LL;
    if ( !v8 )
      goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
LABEL_3:
  v9 = v3(v2, v4, &v19);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x689,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v9,
      v14);
  }
  else
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
    v10 = (*(__int64 (__fastcall **)(_QWORD *, int *))(*v19 + 48LL))(v19, &v17);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v4 = this + 57;
      AcquireSRWLockExclusive(this + 57);
      v15[0] = (__int64)&this[57];
      WindowEventDispatcher::GetCachedView((__int64)&this[-2], &v14, v17);
      v12 = v14;
      if ( !v14 )
        goto LABEL_6;
      goto LABEL_13;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v11,
    (void *)0x68C,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
    (const char *)(unsigned int)v10,
    v14);
LABEL_13:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12);
LABEL_6:
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnWindowRemoved<unsigned int &>(&v17);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>(&v14);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return 0LL;
}
