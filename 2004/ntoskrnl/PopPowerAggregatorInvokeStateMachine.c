/*
 * XREFs of PopPowerAggregatorInvokeStateMachine @ 0x140763BE8
 * Callers:
 *     PopPowerAggregatorWorker @ 0x140763B60 (PopPowerAggregatorWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     xHalGetInterruptTranslator @ 0x14070AA80 (xHalGetInterruptTranslator.c)
 *     PopPowerAggregatorInvalidStateHandler @ 0x140713F10 (PopPowerAggregatorInvalidStateHandler.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140762570 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140762630 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x140763CE8 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140763D74 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EAAF0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EAD10 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1408EB120 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EB170 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EB390 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EB590 (PopPowerAggregatorScreenOffExitStateHandler.c)
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
  *(_OWORD *)(LogEntry + 24) = xmmword_140C21538;
  UserData.Size = 4;
  v5 = 4;
  *(__m256 *)(LogEntry + 40) = ymmword_140C21548;
  *(_OWORD *)(LogEntry + 72) = xmmword_140C21568;
  *(_OWORD *)(LogEntry + 88) = xmmword_140C21578;
  UserData.Ptr = (ULONGLONG)&xmmword_140C21538;
  v4 = &xmmword_140C21568;
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_HANDLER_INVOKE, 2u, &UserData);
  v1 = ((__int64 (__fastcall *)(__int64 *))*(&PopPowerAggregatorInternalStateContexts[4 * (int)xmmword_140C21568]
                                           + (int)xmmword_140C21538))(&PopPowerAggregatorContext);
  *(_DWORD *)(PopPowerAggregatorAllocateLogEntry(&PopPowerAggregatorContext, 4LL) + 24) = v1;
  return v1;
}
