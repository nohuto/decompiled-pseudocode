/*
 * XREFs of ?VidSchiUpdateVSyncMultiplier@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C001E62E
 * Callers:
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0038224 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateVSyncMultiplier(
        struct _VIDSCH_GLOBAL *a1,
        int a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4)
{
  int v4; // r10d
  int v6; // r8d

  v4 = *((_DWORD *)a4 + 38);
  v6 = *((_DWORD *)a3 + 20681);
  if ( v6 != v4 && !*(_BYTE *)(*((_QWORD *)a1 + 2) + 2762LL) )
  {
    if ( (byte_1C006E944 & 1) != 0 )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&EventBoostUnboostRefreshRate,
        v6,
        a2,
        *((_DWORD *)a3 + 736),
        v6,
        *((_DWORD *)a4 + 36),
        v4);
      v4 = *((_DWORD *)a4 + 38);
    }
    *((_DWORD *)a3 + 20681) = v4;
  }
}
