/*
 * XREFs of RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D870
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C0004EF0 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0005020 (RaUnitStartIo.c)
 * Callees:
 *     RaidDmaBuildScatterGatherList @ 0x1C0004E0C (RaidDmaBuildScatterGatherList.c)
 *     RaidDmaGetScatterGatherList @ 0x1C0032EB4 (RaidDmaGetScatterGatherList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0041A60 (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecuteBidirectionalRequest(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rdx
  __int64 BidirectionalData; // rbx
  unsigned int v7; // ebx
  __int64 result; // rax

  v2 = a2[21];
  BidirectionalData = RaidSrbExGetBidirectionalData(v2);
  if ( (*(_DWORD *)(a1 + 532) & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
  {
    LOBYTE(v5) = 1;
    KeFlushIoBuffers(a2[17], v5);
  }
  v7 = *(_DWORD *)(BidirectionalData + 8);
  if ( *(_DWORD *)(v2 + 20) == 23 && *(_DWORD *)(a2[17] + 40LL) > v7 )
    v7 = *(_DWORD *)(a2[17] + 40LL);
  result = RaidDmaBuildScatterGatherList((__int64 *)(a1 + 712), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList(
             (int)a1 + 712,
             *(_QWORD *)(a1 + 8),
             a2[17],
             a2[24],
             v7,
             (__int64)RaidpAdapterContinueDataBufferScatterGather,
             (__int64)a2,
             0);
  return result;
}
