/*
 * XREFs of _RtlpLogHeapFreeEvent@12 @ 0x4B36F097
 * Callers:
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpHpFreeHeap@20 @ 0x4B3784F8 (_RtlpHpFreeHeap@20.c)
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpLogHeapFreeEvent(int a1, int a2, int a3)
{
  int v3; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-30h] BYREF
  __int16 v6; // [esp+6h] [ebp-2Ah]
  int v7; // [esp+20h] [ebp-10h]
  int v8; // [esp+24h] [ebp-Ch]
  int v9; // [esp+28h] [ebp-8h]

  v9 = a3;
  v7 = a1;
  v8 = a2;
  v6 = 4132;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0xCu, Fields);
}
