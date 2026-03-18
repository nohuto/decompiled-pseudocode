/*
 * XREFs of ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C00C2530
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004124 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004150 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0011AF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00C36E4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v10; // [rsp+60h] [rbp+8h] BYREF
  void *v11; // [rsp+68h] [rbp+10h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328), a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9, v5);
  v6 = a2[10];
  v11 = 0LL;
  VidMmRecycleHeapMapSection(
    *(PVOID *)(v6 + 56),
    a2[6],
    a3,
    ((**(_DWORD **)(v6 + 32) - 4) & 0xFFFFFFFD) == 0,
    &v11,
    &v12,
    1u,
    &v10);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v7);
  return v11;
}
