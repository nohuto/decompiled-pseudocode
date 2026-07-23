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

NTSTATUS __fastcall RtlpHeapLogRangeRelease(int a1, int a2, int a3)
{
  int v5; // eax
  size_t v7; // [esp-4h] [ebp-48h]
  _BYTE Fields[6]; // [esp+8h] [ebp-3Ch] BYREF
  __int16 v9; // [esp+Eh] [ebp-36h]
  int v10; // [esp+28h] [ebp-1Ch]
  int v11; // [esp+2Ch] [ebp-18h]
  int v12; // [esp+30h] [ebp-14h]

  LODWORD(v7) = 48;
  memset(Fields, 0, v7);
  v12 = a3;
  v10 = a1;
  v11 = a2;
  v9 = 615;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v5 = 2147353480;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x20402u, 0x10u, Fields);
}
