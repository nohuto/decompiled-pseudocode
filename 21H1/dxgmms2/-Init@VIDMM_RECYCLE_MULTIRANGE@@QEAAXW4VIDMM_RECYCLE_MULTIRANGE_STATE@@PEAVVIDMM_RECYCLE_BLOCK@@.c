/*
 * XREFs of ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0085BB8
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007D5B0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0085B40 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 * Callees:
 *     ?NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C0012B78 (-NotifyMultirangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  __int64 v9; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v11; // r14
  __int64 v12; // rcx

  v7 = a2;
  v9 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdEvent(v9);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_DWORD *)(a1 + 216) = v7;
  *(_WORD *)(a1 + 128) = 0;
  ++*(_QWORD *)(a3 + 8);
  LeastSignificantBit = RtlFindLeastSignificantBit(*(_QWORD *)(a1 + 32));
  if ( LeastSignificantBit < 0 )
    v11 = 0LL;
  else
    v11 = 1LL << LeastSignificantBit;
  *(_QWORD *)(a1 + 56) = v11;
  v12 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = 3LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 130) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  return VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v12, 0, a1);
}
