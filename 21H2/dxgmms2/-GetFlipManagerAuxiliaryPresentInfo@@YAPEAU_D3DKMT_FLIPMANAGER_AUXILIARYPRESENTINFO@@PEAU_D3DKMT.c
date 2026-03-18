/*
 * XREFs of ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C0034000
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x1C00346C8 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *__fastcall GetFlipManagerAuxiliaryPresentInfo(
        struct _D3DKMT_AUXILIARYPRESENTINFO *a1)
{
  if ( !a1 || *((_DWORD *)a1 + 1) )
    return 0LL;
  if ( *(_DWORD *)a1 != 48 )
  {
    WdLogSingleEntry1(1LL, 1335LL);
    DxgCoreInterface[85](
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pBaseAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
      1335LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return a1;
}
