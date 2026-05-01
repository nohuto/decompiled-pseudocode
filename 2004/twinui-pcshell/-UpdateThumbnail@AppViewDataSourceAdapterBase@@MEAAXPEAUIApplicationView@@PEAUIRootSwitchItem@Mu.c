/*
 * XREFs of ?UpdateThumbnail@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803415A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewDataSourceAdapterBase::UpdateThumbnail(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 72LL))(a2, &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        496LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v5);
    v6 = *((_QWORD *)this + 7);
    v10 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, v11, &v10);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        500LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, __int64))(*(_QWORD *)a3 + 104LL))(
           a3,
           v10);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        501LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  }
}
