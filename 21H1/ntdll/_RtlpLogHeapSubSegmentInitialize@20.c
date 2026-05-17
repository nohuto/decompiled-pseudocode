/*
 * XREFs of _RtlpLogHeapSubSegmentInitialize@20 @ 0x4B36F4DC
 * Callers:
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpLogHeapSubSegmentInitialize(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // eax
  _DWORD v9[13]; // [esp+8h] [ebp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[8] = a1;
  HIWORD(v9[1]) = 4149;
  v9[10] = a3;
  v9[11] = a4;
  v9[9] = a2;
  v9[12] = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472;
  return NtTraceEvent(*(unsigned __int8 *)v7, 132098, 20, (int)v9);
}
