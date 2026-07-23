/*
 * XREFs of _RtlpWnfETWEventSubscribe@28 @ 0x4B33C4EC
 * Callers:
 *     _RtlpAddWnfUserSubToNameSub@8 @ 0x4B2B0767 (_RtlpAddWnfUserSubToNameSub@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventSubscribe(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  _BYTE Fields[6]; // [esp+8h] [ebp-48h] BYREF
  __int16 v10; // [esp+Eh] [ebp-42h]
  int v11; // [esp+28h] [ebp-28h]
  int v12; // [esp+2Ch] [ebp-24h]
  int v13; // [esp+30h] [ebp-20h]
  int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h]

  v13 = a1;
  v10 = 3360;
  v11 = a6;
  v16 = a3;
  v12 = a7;
  v14 = a2;
  v15 = a4;
  v17 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v7 = 2147353486;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x20402u, 0x1Cu, Fields);
}
