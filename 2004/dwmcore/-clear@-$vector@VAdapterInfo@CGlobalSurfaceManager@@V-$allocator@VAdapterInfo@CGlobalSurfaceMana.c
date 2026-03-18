/*
 * XREFs of ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800345D8
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180033F2C (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800340BC (-EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@0AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x180034604 (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 */

__int64 __fastcall std::vector<CGlobalSurfaceManager::AdapterInfo>::clear(_QWORD *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
