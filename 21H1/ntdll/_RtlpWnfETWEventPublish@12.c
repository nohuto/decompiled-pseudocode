/*
 * XREFs of _RtlpWnfETWEventPublish@12 @ 0x4B33C482
 * Callers:
 *     _RtlPublishWnfStateData@24 @ 0x4B2F1FE0 (_RtlPublishWnfStateData@24.c)
 *     _RtlTestAndPublishWnfStateData@28 @ 0x4B33BFD0 (_RtlTestAndPublishWnfStateData@28.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall RtlpWnfETWEventPublish(void *this, int a2, int a3)
{
  int v3; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-34h] BYREF
  __int16 v6; // [esp+6h] [ebp-2Eh]
  int v7; // [esp+20h] [ebp-14h]
  int v8; // [esp+24h] [ebp-10h]
  void *v9; // [esp+28h] [ebp-Ch]

  v6 = 3363;
  v7 = a2;
  v8 = a3;
  v9 = this;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v3 = 2147353486;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0xCu, Fields);
}
