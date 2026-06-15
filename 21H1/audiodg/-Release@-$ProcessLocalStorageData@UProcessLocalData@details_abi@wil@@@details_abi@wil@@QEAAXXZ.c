/*
 * XREFs of ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1400313A8
 * Callers:
 *     ??1?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x14001C7B4 (--1-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014630 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1400156B0 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x14001BF54 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x140030498 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400320E0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
 */

void __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Release(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rdx
  void *v5; // rdx
  HANDLE ProcessHeap; // rax
  wil::details *v7; // [rsp+48h] [rbp+10h] BYREF

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_9;
  v2 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v2 = wil::details::g_pfnDllShutdownInProgress();
  if ( v2 )
  {
LABEL_9:
    --*(_DWORD *)lpMem;
  }
  else
  {
    wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
      (HANDLE *)lpMem + 1,
      &v7);
    if ( (*(_DWORD *)lpMem)-- == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)lpMem + 2,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)lpMem + 3,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>::reset(
        &v7,
        0LL);
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::~ProcessLocalStorageData<wil::details_abi::ProcessLocalData>(
        lpMem,
        v5);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
    if ( v7 )
      wil::details::ReleaseMutex(v7, v3);
  }
}
