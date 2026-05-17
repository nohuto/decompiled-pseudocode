/*
 * XREFs of _RtlpHeapLogRangeRelease@12 @ 0x4B36D880
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 *     _RtlpDestroyHeapSegment@4 @ 0x4B2AFA04 (_RtlpDestroyHeapSegment@4.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlpHpLargeAllocationDestroy@8 @ 0x4B37A2B4 (_RtlpHpLargeAllocationDestroy@8.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpHeapLogRangeRelease(int a1, int a2, int a3)
{
  int v5; // eax
  _DWORD v7[13]; // [esp+8h] [ebp-3Ch] BYREF

  memset(v7, 0, 0x30u);
  v7[10] = a3;
  v7[8] = a1;
  v7[9] = a2;
  HIWORD(v7[1]) = 615;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v5 = 2147353480;
  return NtTraceEvent(*(unsigned __int8 *)v5, 132098, 16, (int)v7);
}
