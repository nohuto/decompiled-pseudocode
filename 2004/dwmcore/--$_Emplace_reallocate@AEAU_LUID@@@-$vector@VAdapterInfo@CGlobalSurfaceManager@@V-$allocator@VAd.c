/*
 * XREFs of ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800D7628
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800340BC (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800342C0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x180034334 (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D2B4 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@PEAV12@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@0PEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800D77B4 (--$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@PEAV12@V-$allocator@VAdapterInfo@C.c)
 *     ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800D7814 (-_Change_array@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSur.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r13
  CDeviceManager *v18; // rcx
  int ExistingDevice; // eax
  CD3DDevice *v20; // rbx
  HANDLE v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  CD3DDevice *v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = (a2 - *a1) / 24;
  v7 = (a1[1] - *a1) / 24;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 24;
  v10 = v9 >> 1;
  if ( v9 > 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v11 = v8;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v12 = 24 * v11;
  if ( v11 > 0xAAAAAAAAAAAAAAALL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = 3 * v6;
  v16 = v13;
  v17 = v13 + 24 * v6;
  *(_QWORD *)(v17 + 8) = 0LL;
  *(_QWORD *)(v13 + 8 * v15) = v14;
  *(_QWORD *)(v13 + 8 * v15 + 16) = 0LL;
  v26 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
  ExistingDevice = CDeviceManager::GetExistingDevice(v18, *(struct _LUID *)(v16 + 24 * v6), &v26);
  v20 = v26;
  if ( ExistingDevice >= 0 )
  {
    v21 = CD3DDevice::OpenRenderFence(v26);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(v17 + 8),
      v21);
  }
  if ( v20 )
    CD3DDevice::Release(v20);
  v22 = a1[1];
  v23 = v16;
  v24 = *a1;
  if ( a2 != v22 )
  {
    std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *,CGlobalSurfaceManager::AdapterInfo *,std::allocator<CGlobalSurfaceManager::AdapterInfo>>(
      v24,
      a2,
      v16);
    v22 = a1[1];
    v23 = v16 + 8 * (v15 + 3);
    v24 = a2;
  }
  std::_Uninitialized_move<CGlobalSurfaceManager::AdapterInfo *,CGlobalSurfaceManager::AdapterInfo *,std::allocator<CGlobalSurfaceManager::AdapterInfo>>(
    v24,
    v22,
    v23);
  std::vector<CGlobalSurfaceManager::AdapterInfo>::_Change_array(a1, v16, v8, v11);
  return *a1 + 8 * v15;
}
