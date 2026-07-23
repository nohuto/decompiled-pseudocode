/*
 * XREFs of _TppETWCallbackStart@20 @ 0x4B384AA9
 * Callers:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppTimerpExecuteCallback@8 @ 0x4B2B56A0 (_TppTimerpExecuteCallback@8.c)
 *     _TppWorkpExecuteCallback@8 @ 0x4B2B6B30 (_TppWorkpExecuteCallback@8.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _TppSimplepExecuteCallback@8 @ 0x4B2EB860 (_TppSimplepExecuteCallback@8.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWCallbackStart(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  _BYTE Fields[6]; // [esp+10h] [ebp-44h] BYREF
  __int16 v8; // [esp+16h] [ebp-3Eh]
  int v9; // [esp+30h] [ebp-24h]
  int v10; // [esp+34h] [ebp-20h]
  int v11; // [esp+38h] [ebp-1Ch]
  int v12; // [esp+3Ch] [ebp-18h]
  int v13; // [esp+40h] [ebp-14h]

  v8 = 7202;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x402u, 0x14u, Fields);
}
