/*
 * XREFs of _RtlpHpSegSegmentFree@16 @ 0x4B37D796
 * Callers:
 *     _RtlpHpSegContextCleanup@4 @ 0x4B37B557 (_RtlpHpSegContextCleanup@4.c)
 *     _RtlpHpSegContextCompact@8 @ 0x4B37B591 (_RtlpHpSegContextCompact@8.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegSegmentComputeCommit@8 @ 0x4B37D75D (_RtlpHpSegSegmentComputeCommit@8.c)
 *     _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D (_RtlCSparseBitmapBitsClear@12.c)
 */

NTSTATUS __fastcall RtlpHpSegSegmentFree(int a1, void *a2, int a3, int a4)
{
  unsigned int v6; // esi
  int v7; // eax
  NTSTATUS result; // eax

  v6 = -*(_DWORD *)a1;
  if ( a4 )
    RtlCSparseBitmapBitsClear(2 * (v6 >> 20));
  v7 = a3;
  if ( (*(_BYTE *)(a1 + 9) & 7) != 0 && a3 == 0x7FFFFFFF )
    v7 = RtlpHpSegSegmentComputeCommit(a1, (int)a2);
  RtlpHpSegMgrRelease(a1, a2, v7);
  if ( RtlGetCurrentServiceSessionId() )
    result = (NTSTATUS)NtCurrentPeb()->SharedData + 558;
  else
    result = 2147353480;
  if ( *(_BYTE *)result )
    return RtlpHeapLogRangeRelease(a1, (int)a2, v6);
  return result;
}
