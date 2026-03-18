/*
 * XREFs of ??1?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAA@XZ @ 0x18027CAB8
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1800213C4 (--1CD3DDevice@@MEAA@XZ.c)
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x18027C7BC (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18027DC58 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1D3D12Resources@CD3DDevice@@QEAA@XZ @ 0x18027CB3C (--1D3D12Resources@CD3DDevice@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18027F710 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::~CAsyncTask<CD3DDevice::D3D12Resources>(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    a1,
    0LL);
  CD3DDevice::D3D12Resources::~D3D12Resources((CD3DDevice::D3D12Resources *)(a1 + 72));
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    LOBYTE(v2) = v3 != a1 + 8;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, v2);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>(a1);
}
