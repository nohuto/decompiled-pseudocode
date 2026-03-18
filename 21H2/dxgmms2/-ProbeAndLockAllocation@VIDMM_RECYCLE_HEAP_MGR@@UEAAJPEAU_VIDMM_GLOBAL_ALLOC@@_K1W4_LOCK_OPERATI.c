/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001344 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001400 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00014D4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007E09C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        char a7)
{
  struct DXGFASTMUTEX *v7; // r15
  VIDMM_RECYCLE_MULTIRANGE *v11; // r14
  int v12; // ebx
  enum _LOCK_OPERATION v14; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v15; // [rsp+20h] [rbp-58h]
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  char v17; // [rsp+48h] [rbp-30h]

  v7 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v11 = *(VIDMM_RECYCLE_MULTIRANGE **)(*((_QWORD *)a2 + 11) + 24LL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v12 = VIDMM_RECYCLE_MULTIRANGE::Lock(v11, a2, a3, a4, v14, a6, a7);
  if ( v17 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( v12 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v7);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v12 = VIDMM_RECYCLE_MULTIRANGE::Lock(v11, a2, a3, a4, v15, a6, a7);
    if ( v17 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  return (unsigned int)v12;
}
