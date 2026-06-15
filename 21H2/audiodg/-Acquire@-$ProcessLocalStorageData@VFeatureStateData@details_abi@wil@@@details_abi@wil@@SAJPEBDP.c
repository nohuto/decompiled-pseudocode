/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140021A7C
 * Callers:
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x14002248C (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000DDD0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400142F0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x140015388 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1400155A8 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140025044 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x14003AD00 (--1-$unique_any_t@V-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@d.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003AD20 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14003B4EC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
        __int64 a1,
        void **a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v6; // rcx
  unsigned int LastErrorFailHr; // ebx
  __int64 v8; // r8
  bool *v9; // r9
  int Pointer; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rax
  wil::details *v14; // [rsp+30h] [rbp-D0h] BYREF
  void *v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  size_t Name[66]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  StringCchPrintfW((unsigned __int16 *)Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  v14 = 0LL;
  Mutex = (wil::details *)CreateMutexExW(0LL, (LPCWSTR)Name, 0, 0x1F0001u);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v14,
    Mutex);
  if ( v14 )
  {
    wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
      (HANDLE *)&v14,
      v16);
    v15 = 0LL;
    Pointer = wil::details_abi::SemaphoreValue::TryGetPointer(Name, &v15, v8, v9);
    LastErrorFailHr = Pointer;
    if ( Pointer < 0 )
    {
      v11 = 294LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v11, (__int64)"wil", (const char *)(unsigned int)Pointer);
      goto LABEL_8;
    }
    v12 = v15;
    if ( v15 )
    {
      *a2 = v15;
      *(_DWORD *)*a2 = *v12 + 1;
    }
    else
    {
      Pointer = wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::MakeAndInitialize((unsigned __int16 *)Name);
      LastErrorFailHr = Pointer;
      if ( Pointer < 0 )
      {
        v11 = 302LL;
        goto LABEL_12;
      }
    }
    LastErrorFailHr = 0;
LABEL_8:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>>(v16);
    goto LABEL_9;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
LABEL_9:
  wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(&v14);
  return LastErrorFailHr;
}
