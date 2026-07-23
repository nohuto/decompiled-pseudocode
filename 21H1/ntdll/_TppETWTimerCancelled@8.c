/*
 * XREFs of _TppETWTimerCancelled@8 @ 0x4B384D6D
 * Callers:
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWTimerCancelled(int a1, int a2)
{
  int v2; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-2Ch] BYREF
  __int16 v5; // [esp+Ah] [ebp-26h]
  int v6; // [esp+24h] [ebp-Ch]
  int v7; // [esp+28h] [ebp-8h]

  v6 = a1;
  v5 = 7211;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 8u, Fields);
}
