/*
 * XREFs of _RtlpLogHeapDecommit@16 @ 0x4B36EF8E
 * Callers:
 *     _RtlpDeCommitFreeBlock@16 @ 0x4B2AF0D2 (_RtlpDeCommitFreeBlock@16.c)
 *     @RtlpDecommitBlock@8 @ 0x4B2AF71A (@RtlpDecommitBlock@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpLogHeapDecommit(int a1, int a2, int a3, int a4)
{
  int v6; // eax
  _DWORD v8[13]; // [esp+8h] [ebp-38h] BYREF

  memset(v8, 0, 0x30u);
  v8[10] = a3;
  v8[11] = a4;
  v8[8] = a1;
  v8[9] = a2;
  HIWORD(v8[1]) = 4148;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v6 = 2147353480;
  return NtTraceEvent(*(unsigned __int8 *)v6, 132098, 16, (int)v8);
}
