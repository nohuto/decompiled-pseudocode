/*
 * XREFs of _TppETWCallbackCancel@24 @ 0x4B384938
 * Callers:
 *     _TpWaitForIoCompletion@8 @ 0x4B2ABF80 (_TpWaitForIoCompletion@8.c)
 *     _TppWorkWait@8 @ 0x4B2B1F6A (_TppWorkWait@8.c)
 *     _TppIopCancelPendingCallbacks@4 @ 0x4B3834E0 (_TppIopCancelPendingCallbacks@4.c)
 *     _TppWorkCancelPendingCallbacks@4 @ 0x4B384450 (_TppWorkCancelPendingCallbacks@4.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TppETWCallbackCancel(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  _BYTE Fields[6]; // [esp+10h] [ebp-40h] BYREF
  __int16 v9; // [esp+16h] [ebp-3Ah]
  int v10; // [esp+30h] [ebp-20h]
  int v11; // [esp+34h] [ebp-1Ch]
  int v12; // [esp+38h] [ebp-18h]
  int v13; // [esp+3Ch] [ebp-14h]
  int v14; // [esp+40h] [ebp-10h]
  int v15; // [esp+44h] [ebp-Ch]

  v12 = a3;
  v9 = 7204;
  v10 = a1;
  v11 = a2;
  v13 = a4;
  v14 = a5;
  v15 = a6;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x403u, 0x18u, Fields);
}
