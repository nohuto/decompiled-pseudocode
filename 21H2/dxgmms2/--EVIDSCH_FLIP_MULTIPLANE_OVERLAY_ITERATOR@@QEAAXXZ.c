/*
 * XREFs of ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001B448
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     ?UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F9C (-UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VI.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0019E68 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0035580 (-VidSchiReleaseFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045990 (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0045B4C (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchCollectDbgInfo @ 0x1C00F64B0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(unsigned int *a1)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // ecx
  __int64 result; // rax

  v2 = -1;
  v3 = a1[7];
  v4 = a1[8];
  if ( v3 < v4 )
  {
    a1[4] &= ~(1 << v3);
    v5 = !_BitScanForward(&v3, a1[4]);
    if ( !v5 )
      v2 = v3;
    result = (unsigned int)v2;
    a1[7] = result;
  }
  else
  {
    a1[5] &= ~(1 << v4);
    v5 = !_BitScanForward((unsigned int *)&v6, a1[5]);
    if ( !v5 )
      v2 = v6;
    result = (unsigned int)v2;
    a1[8] = result;
  }
  ++a1[6];
  return result;
}
