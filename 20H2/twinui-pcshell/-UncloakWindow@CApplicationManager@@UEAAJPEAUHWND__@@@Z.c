/*
 * XREFs of ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180154190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180159B90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18046A00C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UncloakWindow(CApplicationManager *this, HWND a2)
{
  __int64 v3; // rcx
  int CallingProcessHandle; // eax
  int v5; // ebx
  __int64 v6; // rdx
  DWORD ProcessId; // eax
  int v8; // eax
  unsigned __int64 v9; // r9
  _DWORD v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+20h] BYREF

  Process = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &Process,
    0LL);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, 0LL, &Process);
  v5 = 0;
  if ( CallingProcessHandle < 0 )
    v5 = CallingProcessHandle;
  if ( v5 < 0 )
  {
    v6 = 2498LL;
LABEL_19:
    v9 = (unsigned int)v5;
    goto LABEL_20;
  }
  if ( !(unsigned int)GetProcessUIContextInformation(Process, v11) )
  {
    v5 = -2147024890;
    v6 = 2501LL;
    goto LABEL_19;
  }
  if ( v11[0] != 2 )
  {
    v5 = -2089418751;
    v6 = 2502LL;
    goto LABEL_19;
  }
  if ( !GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v5 = -2147024890;
    v6 = 2506LL;
    goto LABEL_19;
  }
  ProcessId = GetProcessId(Process);
  if ( dwProcessId != ProcessId )
  {
    v6 = 2507LL;
LABEL_18:
    v5 = -2147024809;
    goto LABEL_19;
  }
  if ( !(unsigned int)IsShellManagedWindow(a2) || GetWindow(a2, 4u) )
  {
    v6 = 2510LL;
    goto LABEL_18;
  }
  v8 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                      + 24LL))(
         CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
         a2,
         0LL);
  v5 = v8;
  if ( v8 >= 0 )
    goto LABEL_21;
  v9 = (unsigned int)v8;
  v6 = 2513LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v9);
LABEL_21:
  if ( (char *)Process - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(Process);
  return (unsigned int)v5;
}
