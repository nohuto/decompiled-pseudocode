/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0029FF8
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000C610 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 *v3; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax

  v2 = (_QWORD *)*((_QWORD *)a2 + 11);
  v3 = (unsigned __int64 *)((char *)a2 + 112);
  v6 = v2[13];
  v7 = *(_QWORD *)(v2[12] + 24LL);
  v8 = v2[20];
  if ( v8 && *v3 <= v8 )
  {
    if ( !*(_BYTE *)(v6 + 204)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
      && (*(_BYTE *)(v7 + 2940) & 1) == 0 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v9[3] = 281LL;
      v9[4] = 1792LL;
      v9[5] = *v3;
      v9[6] = v2[20];
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    v10 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v10 + 24) = *v3;
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    if ( *(_BYTE *)(v6 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
      || (*(_BYTE *)(v7 + 2940) & 1) != 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v11[3] = a2;
      v11[4] = *((_QWORD *)a2 + 14);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v11[3] = a2;
      v11[4] = *v3;
      v11[5] = v2[20];
    }
    WdLogEvent5_WdEvent(v11);
    *(_QWORD *)(*((_QWORD *)a2 + 11) + 160LL) = *v3;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 104LL) + 1576LL) )
      VidSchUnwaitFlipQueue((__int64)a1, v7);
  }
}
