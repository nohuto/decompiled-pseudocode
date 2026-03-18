/*
 * XREFs of VidSchiCompletePendingFlipOnPlane @ 0x1C003CBD8
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004640 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000C610 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00384F4 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C003CB40 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C00346EC (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchiCompletePendingFlipOnPlane(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 && !*(_BYTE *)(a4 + 56) )
  {
    v9 = *(int *)(*(_QWORD *)(a2 + 8LL * a3 + 3104) + 216LL * *(unsigned int *)(a4 + 60) + 172);
    if ( (int)v9 <= -1 )
      v10 = 0LL;
    else
      v10 = *(_QWORD *)(a2 + 3232) + 152 * v9;
    if ( v10 && (unsigned int)(*(_DWORD *)(v10 + 112) - 1) <= 1 )
    {
      v13[0] = 0LL;
      v11 = *(_QWORD *)(v10 + 8);
      v14 = 0;
      VidSchExitIndependentFlipInternal(a1, a2, (_DWORD *)v10, v11, 0, 0, &v14, v13);
    }
  }
  VidSchiCompleteFlipEntry((__int64)a1, a2, a3, a4, 0, 63, a5, 0LL);
  return 0LL;
}
