/*
 * XREFs of _TppETWTimerSet@8 @ 0x4B384F07
 * Callers:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWTimerSet(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-40h] BYREF
  __int16 v6; // [esp+6h] [ebp-3Ah]
  int v7; // [esp+20h] [ebp-20h]
  int v8; // [esp+24h] [ebp-1Ch]
  int v9; // [esp+28h] [ebp-18h]
  int v10; // [esp+2Ch] [ebp-14h]
  int v11; // [esp+30h] [ebp-10h]
  int v12; // [esp+34h] [ebp-Ch]
  int v13; // [esp+38h] [ebp-8h]

  v9 = a1;
  v6 = 7210;
  v7 = *(_DWORD *)(a2 + 200);
  v8 = *(_DWORD *)(a2 + 204);
  v11 = *(_DWORD *)(a2 + 216);
  v12 = *(_DWORD *)(a2 + 212);
  v2 = (*(unsigned __int8 *)(a2 + 222) >> 1) & 1;
  v10 = a2;
  v13 = v2;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v3, 0x20402u, 0x1Cu, Fields);
}
