/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000FDB0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000CCC0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F620 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@KK@Z @ 0x1C000FE8C (-UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_V.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 v9; // rbp
  int v10; // edi
  void *v11; // rbx

  v6 = a3;
  v8 = 1344LL * a5;
  v9 = *(_QWORD *)(a2 + 8 * v6 + 3104);
  if ( (*(_DWORD *)(v8 + a4 + 1224) & 0x10) != 0 )
    v10 = ((unsigned __int16)**(_DWORD **)(v8 + a4 + 1264) | (unsigned __int16)(**(_DWORD **)(v8 + a4 + 1264) >> 10)) & 0x3FF;
  else
    v10 = (1 << *(_DWORD *)(a2 + 144)) - 1;
  v11 = (void *)(*(_QWORD *)(v9 + 120) + 72LL * *(unsigned int *)(v9 + 128));
  memset(v11, 0, 0x48uLL);
  *(_DWORD *)(v9 + 128) = (*(_DWORD *)(v9 + 128) + 1) & (*(_DWORD *)(v9 + 112) - 1);
  return _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v11, a1, v9, a4, v10, a5);
}
