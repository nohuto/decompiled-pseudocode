/*
 * XREFs of RtlpHpSegSegmentFree @ 0x140386244
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x14035DCA0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegSegmentAllocate @ 0x140360AC8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCleanup @ 0x1403861E4 (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x1402B3704 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitsClear @ 0x1403604A0 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x1403862CC (RtlpHpSegMgrRelease.c)
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
