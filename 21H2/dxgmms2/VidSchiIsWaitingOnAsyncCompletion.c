/*
 * XREFs of VidSchiIsWaitingOnAsyncCompletion @ 0x1C001BF14
 * Callers:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00346C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiIsWaitingOnAsyncCompletion(int a1)
{
  return a1 == 5 || a1 == 15;
}
