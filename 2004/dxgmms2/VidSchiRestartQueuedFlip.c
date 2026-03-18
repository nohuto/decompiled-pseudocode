/*
 * XREFs of VidSchiRestartQueuedFlip @ 0x1C003158C
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000CCC0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000F8D4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0038784 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003C20 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiRestartQueuedFlip(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // r9d
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r8

  v6 = *(_DWORD *)(a4 + 40);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = a3;
  if ( v6 != a5 )
  {
    v10 = VidSchiCompleteFlipEntry(a1, v8, a3, a4, v6, ((_BYTE)a5 - 1) & 0x3F, 6, 0LL);
    if ( v10 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                      + 8 * v9
                      + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v9 + 6352) + 8LL), -v10);
      *(_DWORD *)(*(_QWORD *)(v8 + 8 * v9 + 6352) + 4LL) += v10;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), -v10);
      *(_DWORD *)(v11 + 4) += v10;
    }
  }
  *(_DWORD *)(a4 + 40) = a5;
}
