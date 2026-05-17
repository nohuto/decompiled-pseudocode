/*
 * XREFs of _RtlpLogHeapAffinitySlotAssign@12 @ 0x4B36ED37
 * Callers:
 *     _RtlpSetSegmentInfo@8 @ 0x4B2F2640 (_RtlpSetSegmentInfo@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpLogHeapAffinitySlotAssign(int a1, int a2, int a3)
{
  int v5; // eax
  _DWORD v7[11]; // [esp+8h] [ebp-30h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[8] = a1;
  HIWORD(v7[1]) = 4153;
  v7[9] = a2;
  v7[10] = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v5 = 2147353472;
  return NtTraceEvent(*(unsigned __int8 *)v5, 132098, 12, (int)v7);
}
