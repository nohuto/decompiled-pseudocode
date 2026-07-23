/*
 * XREFs of _TppETWTimerExpiration@8 @ 0x4B384DCC
 * Callers:
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWTimerExpiration(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-3Ch] BYREF
  __int16 v6; // [esp+Ah] [ebp-36h]
  int v7; // [esp+24h] [ebp-1Ch]
  int v8; // [esp+28h] [ebp-18h]
  int v9; // [esp+2Ch] [ebp-14h]
  _DWORD *v10; // [esp+30h] [ebp-10h]
  int v11; // [esp+34h] [ebp-Ch]
  int v12; // [esp+38h] [ebp-8h]

  v9 = a1;
  v6 = 7216;
  v7 = a2[50];
  v8 = a2[51];
  v11 = a2[54];
  v2 = a2[53];
  v10 = a2;
  v12 = v2;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x402u, 0x18u, Fields);
}
