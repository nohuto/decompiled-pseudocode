/*
 * XREFs of ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800CF8B4
 * Callers:
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CF6C8 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@0AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x18008D2F0 (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>((__int64)v6, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 24 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL));
  }
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
