/*
 * XREFs of ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x180433DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180434494 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall AppUsageTracker::EnumerateExistingViews(AppUsageTracker *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  unsigned int i; // esi
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v10; // [rsp+60h] [rbp+30h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF

  v11 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 9);
  v3 = *v2;
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 24))(v2, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      63LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      66LL,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  for ( i = 0; i < v10; ++i )
  {
    v12 = 0LL;
    v7 = v11;
    v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v11 + 32LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v12);
    if ( v8(v7, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v12) >= 0 )
      AppUsageTracker::UpdateViewState(this, v12, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
}
