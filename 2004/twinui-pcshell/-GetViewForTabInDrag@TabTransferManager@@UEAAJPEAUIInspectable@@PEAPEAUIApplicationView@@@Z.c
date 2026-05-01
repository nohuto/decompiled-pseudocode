/*
 * XREFs of ?GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x18028EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800AB698 (--$query@UITabViewManager@@@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18026354C (--$-0UIInspectable@@@-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exceptio.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall TabTransferManager::GetViewForTabInDrag(
        TabTransferManager *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  void *v10[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a3 = 0LL;
  wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
    (__int64)&v9,
    a2);
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
    (struct IWeakReference **)this + 8,
    v10);
  v5 = (*(__int64 (__fastcall **)(void *, __int64, struct IApplicationView **))(*(_QWORD *)v10[0] + 24LL))(
         v10[0],
         v9,
         a3);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2147023728 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      734LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)v5);
  if ( *a3 )
    goto LABEL_15;
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  v10[1] = (char *)this + 48;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 48LL))(v9, v11);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      741LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v6);
  v7 = v11[0] - *((_QWORD *)this + 24);
  if ( v11[0] == *((_QWORD *)this + 24) )
    v7 = v11[1] - *((_QWORD *)this + 25);
  if ( !v7 )
  {
    *a3 = (struct IApplicationView *)*((_QWORD *)this + 32);
    if ( this != (TabTransferManager *)-48LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 6);
LABEL_15:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    return 0LL;
  }
  if ( this != (TabTransferManager *)-48LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return 2147943568LL;
}
