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

NTSTATUS __fastcall RtlpLogHeapAffinityManagerEnable(int a1, int a2)
{
  int v2; // eax
  _DWORD Fields[10]; // [esp+Ch] [ebp-2Ch] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[8] = a1;
  HIWORD(Fields[1]) = 4150;
  Fields[9] = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v2 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 8u, Fields);
}
