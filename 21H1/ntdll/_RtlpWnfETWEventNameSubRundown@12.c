/*
 * XREFs of _RtlpWnfETWEventNameSubRundown@12 @ 0x4B33C40D
 * Callers:
 *     _RtlpDecRefWnfNameSubscription@4 @ 0x4B2DEC15 (_RtlpDecRefWnfNameSubscription@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall RtlpWnfETWEventNameSubRundown(void *this, int a2, int a3)
{
  int v3; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-38h] BYREF
  __int16 v6; // [esp+6h] [ebp-32h]
  int v7; // [esp+20h] [ebp-18h]
  int v8; // [esp+24h] [ebp-14h]
  void *v9; // [esp+28h] [ebp-10h]

  v6 = 3364;
  v7 = a2;
  v8 = a3;
  v9 = this;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v3 = 2147353486;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0xCu, Fields);
}
