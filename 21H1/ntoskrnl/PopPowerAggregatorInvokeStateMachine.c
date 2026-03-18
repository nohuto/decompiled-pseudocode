/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140762308
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140762280 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     xHalGetInterruptTranslator @ 0x1406E6C50 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x140712060 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140760C90 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140760D50 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140762408 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140762494 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408E9870 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408E9A90 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408E9EA0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408E9EF0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EA110 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EA160 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EA310 (PopPowerAggregatorScreenOffExitStateHandler.c)
 */

__int64 PopPowerAggregatorInvokeStateMachine()
{
  __int64 LogEntry; // rax
  unsigned int v1; // ebx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  LogEntry = PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 3LL);
  UserData.Reserved = 0;
  v6 = 0;
  *(_OWORD *)(LogEntry + 24) = xmmword_140C21778;
  UserData.Size = 4;
  v5 = 4;
  *(__m256 *)(LogEntry + 40) = ymmword_140C21788;
  *(_OWORD *)(LogEntry + 72) = xmmword_140C217A8;
  *(_OWORD *)(LogEntry + 88) = xmmword_140C217B8;
  UserData.Ptr = (ULONGLONG)&xmmword_140C21778;
  v4 = &xmmword_140C217A8;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorInternalStateContexts[4 * (int)xmmword_140C217A8]
                                           + (int)xmmword_140C21778))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 4LL) + 24) = v1;
  return v1;
}
