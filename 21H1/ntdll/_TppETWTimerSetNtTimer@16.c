/*
 * XREFs of _TppETWTimerSetNtTimer@16 @ 0x4B384F99
 * Callers:
 *     _TppTimerQueueExpiration@16 @ 0x4B2B7250 (_TppTimerQueueExpiration@16.c)
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWTimerSetNtTimer(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-34h] BYREF
  __int16 v7; // [esp+Ah] [ebp-2Eh]
  int v8; // [esp+24h] [ebp-14h]
  int v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+2Ch] [ebp-Ch]
  int v11; // [esp+30h] [ebp-8h]

  v10 = a1;
  v7 = 7212;
  v8 = a3;
  v9 = a4;
  v11 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x402u, 0x10u, Fields);
}
