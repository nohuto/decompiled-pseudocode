/*
 * XREFs of VidMmUnblockUEFIFrameBufferRanges @ 0x1C002D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x1C00DA488 (-UnblockUEFIFrameBufferRanges@VIDMM_GLOBAL@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z.c)
 */

__int64 __fastcall VidMmUnblockUEFIFrameBufferRanges(VIDMM_GLOBAL *a1, const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  return VIDMM_GLOBAL::UnblockUEFIFrameBufferRanges(a1, a2);
}
