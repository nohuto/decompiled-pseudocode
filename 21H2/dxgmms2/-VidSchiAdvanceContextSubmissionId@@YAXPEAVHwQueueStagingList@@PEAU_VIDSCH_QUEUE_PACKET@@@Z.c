/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00344AC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  _QWORD *v2; // r9
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax

  v2 = (_QWORD *)*((_QWORD *)a2 + 11);
  v5 = v2[13];
  v6 = *(_QWORD *)(v2[12] + 24LL);
  v7 = v2[20];
  if ( v7 && *((_QWORD *)a2 + 14) <= v7 )
  {
    if ( !*(_BYTE *)(v5 + 204)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0)
      && (*(_BYTE *)(v6 + 3036) & 1) == 0 )
    {
      WdLogSingleEntry5(0LL, 281LL, 1792LL, *((_QWORD *)a2 + 14), v2[20], 0LL);
      __debugbreak();
    }
    WdLogSingleEntry1(4LL, *((_QWORD *)a2 + 14));
  }
  else
  {
    if ( *(_BYTE *)(v5 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0)
      || (*(_BYTE *)(v6 + 3036) & 1) != 0 )
    {
      WdLogSingleEntry2(4LL, a2, *((_QWORD *)a2 + 14));
    }
    else
    {
      WdLogSingleEntry3(4LL, a2, *((_QWORD *)a2 + 14), v2[20]);
    }
    *(_QWORD *)(*((_QWORD *)a2 + 11) + 160LL) = *((_QWORD *)a2 + 14);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 104LL) + 1576LL) )
      VidSchUnwaitFlipQueue((__int64)a1, v6);
  }
}
