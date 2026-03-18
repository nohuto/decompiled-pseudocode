/*
 * XREFs of ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@0AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x180034604
 * Callers:
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800345D8 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ??$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@PEAV12@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@0PEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x1800D77B4 (--$_Uninitialized_move@PEAVAdapterInfo@CGlobalSurfaceManager@@PEAV12@V-$allocator@VAdapterInfo@C.c)
 *     ?_Change_array@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAXQEAVAdapterInfo@CGlobalSurfaceManager@@_K1@Z @ 0x1800D7814 (-_Change_array@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSur.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180165A2C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rcx
  int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(char **)(v3 + 8);
      result = (_DWORD)v4 - 1;
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = CloseHandle(v4);
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
