/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x18002E544
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18002E72C (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@PEAV12@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x18002E648 (--$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@PEAV12@V-$allocator@VDeviceInfo@CDeviceMan.c)
 *     ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x18002E6B0 (-_Change_array@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

unsigned __int64 __fastcall std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
        __int64 *a1,
        __int64 a2,
        CMILCOMBase **a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  CMILCOMBase *v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = *a3;
  v15 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = v13;
  *(_BYTE *)(v15 + v13 + 8) = 0;
  *(_QWORD *)(v15 + v13) = v14;
  if ( v14 )
    CMILCOMBase::InternalAddRef(v14);
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CDeviceManager::DeviceInfo *,CDeviceManager::DeviceInfo *,std::allocator<CDeviceManager::DeviceInfo>>(
      v19,
      a2,
      v16);
    v17 = a1[1];
    v18 = v16 + v15 + 16;
    v19 = a2;
  }
  std::_Uninitialized_move<CDeviceManager::DeviceInfo *,CDeviceManager::DeviceInfo *,std::allocator<CDeviceManager::DeviceInfo>>(
    v19,
    v17,
    v18);
  std::vector<CDeviceManager::DeviceInfo>::_Change_array(a1, v16, v8, v11);
  return v15 + *a1;
}
