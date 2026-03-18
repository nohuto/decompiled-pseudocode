/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00023C0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004B84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0004BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C007AB44 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C2BA8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ProbeAndLockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  __int64 v7; // rax
  struct DXGFASTMUTEX *v8; // rdi
  struct VIDMM_RECYCLE_RANGE **v12; // r15
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  enum _LOCK_OPERATION v19; // [rsp+20h] [rbp-58h]
  enum _LOCK_OPERATION v20; // [rsp+20h] [rbp-58h]
  char *v21; // [rsp+40h] [rbp-38h] BYREF
  char v22; // [rsp+48h] [rbp-30h]

  v7 = *((_QWORD *)a2 + 12);
  v8 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328);
  v21 = (char *)this + 1328;
  v22 = 0;
  v12 = *(struct VIDMM_RECYCLE_RANGE ***)(v7 + 24);
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(-1328LL, a2, a3);
    *(_QWORD *)(v16 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21, (__int64)a2);
  v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v19, a6, a7);
  if ( v22 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v21, v13);
  if ( v14 < 0 )
  {
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v21, v8);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21, v17);
    v14 = VIDMM_RECYCLE_MULTIRANGE::Lock(v12, a2, a3, a4, v20, a6, a7);
    if ( v22 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v21, v18);
  }
  return (unsigned int)v14;
}
