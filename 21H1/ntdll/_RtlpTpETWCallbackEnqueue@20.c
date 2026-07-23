/*
 * XREFs of _RtlpTpETWCallbackEnqueue@20 @ 0x4B385C2D
 * Callers:
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackEnqueue(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  _BYTE Fields[6]; // [esp+Ch] [ebp-3Ch] BYREF
  __int16 v8; // [esp+12h] [ebp-36h]
  int v9; // [esp+2Ch] [ebp-1Ch]
  int v10; // [esp+30h] [ebp-18h]
  int v11; // [esp+34h] [ebp-14h]
  int v12; // [esp+38h] [ebp-10h]
  int v13; // [esp+3Ch] [ebp-Ch]

  v8 = 7200;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  v13 = a5;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x20402u, 0x14u, Fields);
}
