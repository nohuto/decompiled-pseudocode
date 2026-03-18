/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C005FF24
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060090 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFB88 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C9060 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00CAC48 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0064BBC (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGFASTMUTEX *v9; // r15
  DXGFASTMUTEX *v10; // rdi
  DXGFASTMUTEX *v11; // rsi
  _QWORD **v12; // rsi
  _QWORD *v13; // rbx
  struct VIDMM_ALLOC *v14; // rbp

  DXGFASTMUTEX::Acquire(a2[39]);
  v9 = (DXGFASTMUTEX *)(a2 + 36);
  v10 = a2[36];
  while ( v10 != v9 )
  {
    v11 = v10;
    v10 = *(DXGFASTMUTEX **)v10;
    v12 = (_QWORD **)((char *)v11 - 16);
    v13 = *v12;
    if ( *v12 != v12 )
    {
      do
      {
        v14 = (struct VIDMM_ALLOC *)(v13 - 5);
        v13 = (_QWORD *)*v13;
        if ( (*((_BYTE *)v14 + 28) & 3) == 2 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v14;
          VIDMM_GLOBAL::NotifyAllocationEviction(this, v14, 0, a3, a4);
        }
      }
      while ( v13 != v12 );
      v9 = (DXGFASTMUTEX *)(a2 + 36);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v7);
}
