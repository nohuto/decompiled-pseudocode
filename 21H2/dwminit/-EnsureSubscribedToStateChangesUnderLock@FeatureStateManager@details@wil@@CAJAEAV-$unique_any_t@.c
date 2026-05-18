/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x18000605C
 * Callers:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180006214 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     wil_details_NtQueryWnfStateData @ 0x180002654 (wil_details_NtQueryWnfStateData.c)
 *     ??$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z @ 0x180007FC0 (--$invoke@P6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_RTL_SRWLOCK@@@ZAEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18000DED0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  unsigned int v6; // r14d
  __int64 v7; // rbx
  DWORD LastError; // edi
  FARPROC ProcAddress; // rax
  HMODULE ModuleHandleW; // rax
  unsigned int v12; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  void (__fastcall *v15)(wil::details *, struct __WIL__WNF_USER_SUBSCRIPTION *); // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF

  v3 = *a1 == 0;
  v16 = a2;
  if ( !v3 )
    return 0LL;
  v12 = 0;
  v13 = 0;
  wil_details_NtQueryWnfStateData((__int64)&v16, a2, a3, (__int64)&v12, 0LL, (__int64)&v13);
  v6 = v12;
  v7 = v16;
  if ( *a1 )
  {
    v14 = *a1;
    LastError = GetLastError();
    v15 = wil::details::UnsubscribeWilWnf;
    wistd::invoke<void (*)(_RTL_SRWLOCK *),_RTL_SRWLOCK * &>(&v15, &v14);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  ProcAddress = (FARPROC)g_wil_details_pfnRtlSubscribeWnfStateChangeNotification;
  if ( g_wil_details_pfnRtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, void *, __int64, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlSubscribeWnfStateChangeNotification");
  g_wil_details_pfnRtlSubscribeWnfStateChangeNotification = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, void *, __int64, _QWORD, _DWORD, _DWORD))ProcAddress)(
             a1,
             v7,
             v6,
             &_lambda_0ae89f7ca77040da3af7dd229dfecfb4_::_lambda_invoker_cdecl_,
             a3,
             0LL,
             0,
             0);
  else
    return 3221225785LL;
}
