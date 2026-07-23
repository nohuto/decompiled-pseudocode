/*
 * XREFs of RtlpTpETWCallbackStop @ 0x180112460
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062020 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070B70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071570 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800760B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800784F0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x18007FD90 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180112F60 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpTpETWCallbackStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v8 = 7203;
  v13 = a5;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v12 = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, Fields);
}
