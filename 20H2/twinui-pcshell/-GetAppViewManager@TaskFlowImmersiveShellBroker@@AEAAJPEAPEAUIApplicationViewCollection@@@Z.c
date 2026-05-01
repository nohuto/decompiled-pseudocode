/*
 * XREFs of ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x1802317C0
 * Callers:
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18023550C (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088A68 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetAppViewManager(
        TaskFlowImmersiveShellBroker *this,
        struct IApplicationViewCollection **a2)
{
  HRESULT v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&ppv);
  v3 = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        725LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, struct IApplicationViewCollection **))(*(_QWORD *)ppv + 24LL))(
           ppv,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
           a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        726LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2D9,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v5);
  }
  return result;
}
