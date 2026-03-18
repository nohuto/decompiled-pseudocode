/*
 * XREFs of ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C0087D80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C007B390 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::FlushTransitions(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5, v2);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 0, 0);
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5, v3);
  return 0LL;
}
