/*
 * XREFs of _RtlpLogHeapAffinityManagerEnable@8 @ 0x4B36ECC8
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpLogHeapAffinityManagerEnable(int a1, int a2)
{
  int v2; // eax
  _DWORD v4[10]; // [esp+Ch] [ebp-2Ch] BYREF

  memset(v4, 0, sizeof(v4));
  v4[8] = a1;
  HIWORD(v4[1]) = 4150;
  v4[9] = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v2 = 2147353472;
  return NtTraceEvent(*(unsigned __int8 *)v2, 132098, 8, (int)v4);
}
