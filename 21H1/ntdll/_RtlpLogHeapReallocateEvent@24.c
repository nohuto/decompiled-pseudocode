/*
 * XREFs of _RtlpLogHeapReallocateEvent@24 @ 0x4B36F15A
 * Callers:
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpLogHeapReallocateEvent(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-3Ch] BYREF
  __int16 v9; // [esp+Ah] [ebp-36h]
  int v10; // [esp+24h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  int v13; // [esp+30h] [ebp-10h]
  int v14; // [esp+34h] [ebp-Ch]
  int v15; // [esp+38h] [ebp-8h]

  v10 = a1;
  v11 = a2;
  v12 = a3;
  if ( !a3 )
    v12 = a2;
  v14 = a4;
  v13 = a5;
  v15 = a6;
  v9 = 4130;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v6 = 2147353472;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x18u, Fields);
}
