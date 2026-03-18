/*
 * XREFs of ?VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@IPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C0022070
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C002573C (-QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTIC.c)
 */

__int64 __fastcall VidMmQueryProcessSegmentStatistics(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a4)
{
  return VIDMM_GLOBAL::QueryProcessSegmentStatistics(a1, a2, a3, a4);
}
