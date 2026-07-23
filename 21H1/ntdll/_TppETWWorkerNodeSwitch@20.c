/*
 * XREFs of _TppETWWorkerNodeSwitch@20 @ 0x4B385006
 * Callers:
 *     _TppWorkerFindTask@12 @ 0x4B2B6930 (_TppWorkerFindTask@12.c)
 *     _TppWorkerSwitchNode@16 @ 0x4B2B6D51 (_TppWorkerSwitchNode@16.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWWorkerNodeSwitch(int a1, int a2, int a3, __int16 a4, __int16 a5)
{
  int v5; // ecx
  int v6; // eax
  _BYTE Fields[6]; // [esp+4h] [ebp-3Ch] BYREF
  __int16 v9; // [esp+Ah] [ebp-36h]
  int v10; // [esp+24h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  __int16 v13; // [esp+30h] [ebp-10h]
  __int16 v14; // [esp+32h] [ebp-Eh]
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]

  v10 = a1;
  v5 = *(_DWORD *)(a1 + 28);
  v9 = 7209;
  v13 = a4;
  v11 = a2;
  v12 = a3;
  v14 = a5;
  v15 = *(_DWORD *)(v5 + 4 * a2);
  v16 = *(_DWORD *)(v5 + 4 * a3);
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x402u, 0x18u, Fields);
}
