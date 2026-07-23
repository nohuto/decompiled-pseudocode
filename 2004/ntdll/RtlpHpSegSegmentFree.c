/*
 * XREFs of RtlpHpSegSegmentFree @ 0x180004B70
 * Callers:
 *     RtlpHpSegContextCleanup @ 0x180004B10 (RtlpHpSegContextCleanup.c)
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x180006B88 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x180004C10 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180108014 (RtlpHeapLogRangeRelease.c)
 */

int __fastcall RtlpHpSegSegmentFree(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbp
  struct _PEB *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 i; // rcx

  v6 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(
      &BaseAddress,
      2 * ((unsigned __int64)(a2 - qword_18016BC18) >> 20),
      2 * ((unsigned __int64)(unsigned int)v6 >> 20));
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    v10 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      v10 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  RtlpHpSegMgrRelease(a1);
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 558;
  }
  else
  {
    v9 = 2147353480LL;
  }
  if ( *(_BYTE *)v9 )
    LODWORD(v8) = RtlpHeapLogRangeRelease(a1, a2, v6);
  return (int)v8;
}
