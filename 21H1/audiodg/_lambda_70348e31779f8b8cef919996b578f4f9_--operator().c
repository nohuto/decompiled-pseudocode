/*
 * XREFs of _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14003E844
 * Callers:
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14003EBB0 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70348e31779f8b8cef919996b578f4f9_::operator()(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = *(_QWORD *)(*a1 + 400LL);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v7, a2, a3, a4);
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 40LL))(v5, a1[1], &v7);
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v7);
}
