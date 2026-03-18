/*
 * XREFs of VidSchiVirtualizeFlipInterval @ 0x1C0017A90
 * Callers:
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0040864 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003818C (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiVirtualizeFlipInterval(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d

  v2 = *(_DWORD *)(a2 + 1312);
  if ( !v2 )
  {
    *(_DWORD *)(a2 + 1312) = 1;
    v2 = 1;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 1040) + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 16) + 130LL) )
  {
    v7 = *(_DWORD *)(a1 + 82724);
    if ( v2 != v7 && (*(_DWORD *)(a2 + 1136) & 0x100) == 0 && *(_DWORD *)(a1 + 4) != 3 )
    {
      v8 = *(_DWORD *)(a2 + 1072);
      if ( v2 >= v7 )
      {
        LOBYTE(v7) = v8 / v2;
        *(_DWORD *)(a2 + 1072) = v8 / v2;
      }
      else
      {
        if ( v8 )
          v7 *= v8;
        *(_DWORD *)(a2 + 1072) = v7;
      }
      if ( (byte_1C006E944 & 1) != 0 )
        McTemplateK0qqqq_EtwWriteTransfer(
          v5,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v8,
          v2,
          *(_DWORD *)(a1 + 82724),
          v8,
          v7);
    }
  }
  result = *(unsigned int *)(a1 + 82724);
  *(_DWORD *)(a2 + 1312) = result;
  return result;
}
