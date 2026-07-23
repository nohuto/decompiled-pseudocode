/*
 * XREFs of _TppETWPoolThreadMax@8 @ 0x4B384C53
 * Callers:
 *     _TpSetPoolMaxThreads@8 @ 0x4B2B1D10 (_TpSetPoolMaxThreads@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWPoolThreadMax(int a1, int a2)
{
  int v2; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-30h] BYREF
  __int16 v5; // [esp+6h] [ebp-2Ah]
  int v6; // [esp+20h] [ebp-10h]
  int v7; // [esp+24h] [ebp-Ch]

  v6 = a1;
  v5 = 7208;
  v7 = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v2 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 8u, Fields);
}
