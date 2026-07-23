/*
 * XREFs of _RtlpLogHeapAllocateEvent@16 @ 0x4B36EDB6
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpHpAllocateHeap@16 @ 0x4B37803E (_RtlpHpAllocateHeap@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpLogHeapAllocateEvent(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-34h] BYREF
  __int16 v7; // [esp+Ah] [ebp-2Eh]
  int v8; // [esp+24h] [ebp-14h]
  int v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+2Ch] [ebp-Ch]
  int v11; // [esp+30h] [ebp-8h]

  v9 = a3;
  v11 = a4;
  v8 = a1;
  v10 = a2;
  v7 = 4129;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x20402u, 0x10u, Fields);
}
