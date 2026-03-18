/*
 * XREFs of ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003DAFC
 * Callers:
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003D964 (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x18003DBF0 (-OpenRenderFence@CD3DDevice@@QEBAPEAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_back_with_unused_capacity<_LUID &>(
        CDeviceManager *a1,
        struct _LUID *a2)
{
  struct _LUID *v2; // rax
  struct _LUID v3; // rdx
  struct _LUID *v5; // rsi
  void *v6; // rax
  __int64 result; // rax
  CD3DDevice *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _LUID *)*((_QWORD *)a1 + 1);
  v3 = *a2;
  v8 = 0LL;
  v5 = v2 + 1;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *v2 = v3;
  if ( (int)CDeviceManager::GetExistingDevice(a1, v3, &v8) >= 0 )
  {
    v6 = CD3DDevice::OpenRenderFence(v8);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v5,
      v6);
  }
  if ( v8 )
    CD3DDevice::Release(v8);
  result = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = result + 24;
  return result;
}
