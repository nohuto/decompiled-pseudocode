/*
 * XREFs of ?get_Current@TabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUITabSetMediator@2345@@Z @ 0x18027BC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics::get_Current(
        Windows::Internal::ComposableShell::Tabs::TabSetMediatorStatics *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabSetMediator **a2)
{
  HRESULT v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         4u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        145LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(LPVOID, __int128 *, GUID *, struct Windows::Internal::ComposableShell::Tabs::ITabSetMediator **))(*(_QWORD *)ppv + 24LL))(
           ppv,
           &xmmword_18050F6D8,
           &GUID_c9be375e_5163_4871_9380_1c4a5982d480,
           a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        146LL,
        (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95,
                           (__int64)"pcshell\\twinui\\tabsetmediator\\lib\\tabsetmediator.cpp",
                           v5);
  }
  return result;
}
