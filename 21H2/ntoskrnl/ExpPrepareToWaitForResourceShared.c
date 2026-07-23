/*
 * XREFs of ExpPrepareToWaitForResourceShared @ 0x14024F25C
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1403294A0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038F200 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038F4D0 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405B4FA0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x14024AC04 (RtlInsertHeadCircularList.c)
 */

__int64 __fastcall ExpPrepareToWaitForResourceShared(__int64 a1, __int64 a2, __int64 a3)
{
  ++*(_DWORD *)(a1 + 72);
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 16) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_WORD *)(a3 + 24) = 1;
  *(_BYTE *)(a3 + 26) = 6;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  return RtlInsertHeadCircularList((__int64 *)(a1 + 32), (_QWORD *)a3);
}
