/*
 * XREFs of RtlpHpSegSegmentFree @ 0x140389374
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14023AFB0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentAllocate @ 0x140306F8C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCleanup @ 0x140389314 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x1402CEE38 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitsClear @ 0x140306964 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x1403893FC (RtlpHpSegMgrRelease.c)
 */

__int64 __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *HeapManager; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  if ( a4 )
  {
    v12 = *(_OWORD *)(a1 + 40);
    HeapManager = RtlpHpEnvGetHeapManager(&v12);
    RtlCSparseBitmapBitsClear(
      (__int64)(HeapManager + 2),
      2 * ((unsigned __int64)(v9 - HeapManager[1]) >> 20),
      2 * (v8 >> 20));
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  return RtlpHpSegMgrRelease(a1, a2, a3);
}
