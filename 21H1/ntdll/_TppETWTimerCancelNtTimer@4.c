/*
 * XREFs of _TppETWTimerCancelNtTimer@4 @ 0x4B384D11
 * Callers:
 *     _TppUpdateSubQueueTimer@8 @ 0x4B2B77B9 (_TppUpdateSubQueueTimer@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall TppETWTimerCancelNtTimer(void *this)
{
  int v1; // eax
  _BYTE Fields[6]; // [esp+0h] [ebp-28h] BYREF
  __int16 v4; // [esp+6h] [ebp-22h]
  void *v5; // [esp+20h] [ebp-8h]

  v5 = this;
  v4 = 7213;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v1 = 2147353478;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v1, 0x402u, 0xFFFFFFE4, Fields);
}
