/*
 * XREFs of ?QueryProcessSegmentGroupStatistics@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C002F990
 * Callers:
 *     ?VidMmQueryProcessSegmentGroupStatistics@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION@@@Z @ 0x1C002CEF0 (-VidMmQueryProcessSegmentGroupStatistics@@YAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@P.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000209C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00024A4 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0014F50 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0085A38 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1C00E0084 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentGroupStatistics(
        struct _KTHREAD **this,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_GROUP_INFORMATION *a4)
{
  unsigned int v8; // eax
  unsigned __int64 *v9; // rdx
  unsigned __int64 *v10; // r9
  unsigned __int64 *v11; // r10
  unsigned int v12; // ebx
  unsigned __int64 v14; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+70h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+80h] [rbp-18h]

  if ( (unsigned int)a2 > D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL )
    return 3221225485LL;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 5130, 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v18 = 1;
  v8 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)this);
  v12 = VIDMM_PROCESS::QueryVideoMemoryInfo(
          a3,
          (struct VIDMM_GLOBAL *)this,
          v8,
          0,
          a2,
          (unsigned __int64 *)a4,
          v11,
          &v15,
          &v14,
          v9,
          v10);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v12;
}
