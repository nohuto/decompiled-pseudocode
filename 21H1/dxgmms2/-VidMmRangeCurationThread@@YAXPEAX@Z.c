/*
 * XREFs of ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C007B370
 * Callers:
 *     <none>
 * Callees:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C007B4EC (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 */

void __fastcall VidMmRangeCurationThread(volatile __int32 *a1)
{
  _InterlockedExchange(a1 + 383, 0);
  VIDMM_RECYCLE_HEAP_MGR::CurationThread((VIDMM_RECYCLE_HEAP_MGR *)a1);
}
