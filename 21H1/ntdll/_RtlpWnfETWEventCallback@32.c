/*
 * XREFs of _RtlpWnfETWEventCallback@32 @ 0x4B33C380
 * Callers:
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  _BYTE Fields[6]; // [esp+Ch] [ebp-44h] BYREF
  __int16 v11; // [esp+12h] [ebp-3Eh]
  int v12; // [esp+2Ch] [ebp-24h]
  int v13; // [esp+30h] [ebp-20h]
  int v14; // [esp+34h] [ebp-1Ch]
  int v15; // [esp+38h] [ebp-18h]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h]
  int v18; // [esp+44h] [ebp-Ch]
  int v19; // [esp+48h] [ebp-8h]

  v17 = a1;
  v11 = 3362;
  v12 = a7;
  v18 = a5;
  v13 = a8;
  v14 = a2;
  v15 = a3;
  v16 = a4;
  v19 = a6;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (int)NtCurrentPeb()->SharedData + 564;
  else
    v8 = 2147353486;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
