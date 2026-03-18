/*
 * XREFs of ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C00607F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0064220 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::FlushTransitions(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7, v4);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 0, 0);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, v5);
  return 0LL;
}
