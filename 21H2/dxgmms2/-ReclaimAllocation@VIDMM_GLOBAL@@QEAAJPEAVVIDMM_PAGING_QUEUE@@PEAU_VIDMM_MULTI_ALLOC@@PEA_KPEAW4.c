/*
 * XREFs of ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007C854
 * Callers:
 *     ?VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0005620 (-VidMmReclaimAllocation@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007C8F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  int v5; // r10d
  VIDMM_GLOBAL *v7; // r11
  int v8; // r8d
  __int64 v10; // rax

  v5 = dword_1C005048C;
  v7 = this;
  if ( dword_1C005048C == -1 )
    v5 = *((_DWORD *)this + 8) >= 0x5022u ? 2 : 0;
  if ( a5 )
  {
    v8 = *((_DWORD *)this + 1762);
    if ( (v8 & 0x10000) != 0 && (this = **(VIDMM_GLOBAL ***)a3, (*((_DWORD *)this + 21) & 0x80u) != 0) )
      *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    else
      *a5 = ((unsigned __int8)v8 >> 3) & 1;
  }
  if ( !v5 )
    return 0LL;
  if ( v5 == 2 )
  {
    if ( a2 )
      return VIDMM_GLOBAL::ReclaimOneAllocation(v7, a2, a3, a4, a5);
    v10 = WdLogNewEntry5_WdWarning(this, a5);
    WdLogEvent5_WdWarning(v10);
  }
  return 3221225473LL;
}
