/*
 * XREFs of ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00C24B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00C1FC8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  void *v10; // rbx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12, v8);
  v10 = VIDMM_RECYCLE_MULTIRANGE::Map(a2, a3, a4, a5);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v9);
  return v10;
}
