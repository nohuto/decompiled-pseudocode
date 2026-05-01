/*
 * XREFs of DllGetClassObject @ 0x180009680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180009A50 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct _GUID **v6; // rbx
  unsigned __int64 v7; // rdx
  bool i; // cf
  const struct _GUID *v9; // r9
  _QWORD *v10; // rax
  struct IUnknown **v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+50h] [rbp+18h] BYREF

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_18005AE90 = 1;
  *ppv = 0LL;
  v6 = (const struct _GUID **)((*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                 + 32LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
                             + 8);
  v7 = (*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                         + 40LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
  for ( i = (unsigned __int64)v6 < v7; i; i = (unsigned __int64)v6 < v7 )
  {
    v9 = *v6;
    if ( *v6 )
    {
      v10 = *(_QWORD **)v9->Data4;
      if ( *v10 == *(_QWORD *)&rclsid->Data1 && v10[1] == *(_QWORD *)rclsid->Data4 )
      {
        v13 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v13,
                 &riid->Data1,
                 v9,
                 ppv,
                 v12);
      }
    }
    ++v6;
  }
  return -2147221231;
}
