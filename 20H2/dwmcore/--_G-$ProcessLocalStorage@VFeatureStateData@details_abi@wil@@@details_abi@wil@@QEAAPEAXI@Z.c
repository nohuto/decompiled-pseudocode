/*
 * XREFs of ??_G?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1800E283C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800F38A0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18002A1C0 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x18002B530 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x1800DA850 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x18014C5D0 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ @ 0x18014C914 (-Destroy@SemaphoreValue@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18014D814 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18014E334 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-ReleaseMutex@details@wil@@YAX0@ZU-$i.c)
 */

wil *__fastcall wil::details_abi::ProcessLocalStorage<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(
        wil *a1)
{
  HANDLE *v1; // rbx
  bool v3; // zf
  void *v4; // rdx
  HANDLE ProcessHeap; // rax
  wil::details *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (HANDLE *)*((_QWORD *)a1 + 1);
  if ( v1 )
  {
    if ( wil::ProcessShutdownInProgress(a1) )
    {
      v3 = (*(_DWORD *)v1)-- == 1;
      if ( v3 )
        wil::details_abi::FeatureStateData::ProcessShutdown((wil::details_abi::FeatureStateData *)(v1 + 4));
    }
    else
    {
      wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
        v1 + 1,
        &v7);
      v3 = (*(_DWORD *)v1)-- == 1;
      if ( v3 )
      {
        wil::details_abi::SemaphoreValue::Destroy((wil::details_abi::SemaphoreValue *)(v1 + 2));
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>::reset(
          &v7,
          0LL);
        wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::`scalar deleting destructor'(v1);
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v1);
      }
      if ( v7 )
        wil::details::ReleaseMutex(v7, v4);
    }
  }
  return a1;
}
