/*
 * XREFs of _RtlTpETWCallbackDequeue@20 @ 0x4B385BB5
 * Callers:
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlTpETWCallbackDequeue(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  _BYTE Fields[6]; // [esp+8h] [ebp-44h] BYREF
  __int16 v8; // [esp+Eh] [ebp-3Eh]
  int v9; // [esp+28h] [ebp-24h]
  int v10; // [esp+2Ch] [ebp-20h]
  int v11; // [esp+30h] [ebp-1Ch]
  int v12; // [esp+34h] [ebp-18h]
  int v13; // [esp+38h] [ebp-14h]

  v9 = 0;
  v10 = a2;
  v8 = 7201;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x14u, Fields);
}
