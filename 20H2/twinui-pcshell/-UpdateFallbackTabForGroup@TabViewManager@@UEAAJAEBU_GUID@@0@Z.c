/*
 * XREFs of ?UpdateFallbackTabForGroup@TabViewManager@@UEAAJAEBU_GUID@@0@Z @ 0x18027F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18027F4E8 (-UpdateFallbackTabForGroup@TabViewManager@@AEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::UpdateFallbackTabForGroup(
        TabViewManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64 *, int *); // rax
  int v8; // eax
  __int128 v9; // xmm6
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, int *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  int v15[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v17; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v18; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  v5 = (__int64 *)*((_QWORD *)this + 135);
  v6 = *v5;
  v17 = 0LL;
  *(struct _GUID *)v15 = *a2;
  v7 = *(__int64 (__fastcall **)(__int64 *, int *))(v6 + 88);
  try
  {
    v8 = v7(v5, v15);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2007LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    if ( !v17 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2008LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)0x80070490LL);
    v18 = 0LL;
    v9 = (__int128)*a3;
    v10 = *((_QWORD *)this + 135);
    v11 = *(__int64 (__fastcall **)(__int64, int *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v10 + 96LL);
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v18);
    *(_OWORD *)v15 = v9;
    v12 = v11(v10, v15, &v18);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2010LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v12);
    TabViewManager::UpdateFallbackTabForGroup((TabViewManager *)((char *)this - 136), v17, v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7E0,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v13);
  }
  return result;
}
