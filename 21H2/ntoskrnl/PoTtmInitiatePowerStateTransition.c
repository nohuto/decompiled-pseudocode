/*
 * XREFs of PoTtmInitiatePowerStateTransition @ 0x140996DE8
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1409A56A4 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopTriggerMonitorPowerEvent @ 0x1407F20B4 (PopTriggerMonitorPowerEvent.c)
 *     PopStartStopTtmSxTranstion @ 0x1409901F0 (PopStartStopTtmSxTranstion.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int started; // eax
  unsigned int v8; // ebx
  _BYTE v10[88]; // [rsp+40h] [rbp-58h] BYREF

  memset(v10, 0, 0x4CuLL);
  PopAcquirePolicyLock(v4);
  PopFilterCapabilities(&PopCapabilities, (__int64)v10);
  if ( v10[20] )
  {
    started = PopTriggerMonitorPowerEvent(a1 == 0, a2);
LABEL_8:
    v8 = started;
    goto LABEL_9;
  }
  if ( v10[3] || v10[4] || v10[5] )
  {
    started = PopStartStopTtmSxTranstion(a1);
    goto LABEL_8;
  }
  v8 = 0;
LABEL_9:
  PopReleasePolicyLock(v6, v5);
  if ( v10[20]
    && !a1
    && (!v8 || v8 == 259)
    && PopLastStandbyExitScenarioId != PopWdiCurrentScenarioInstanceId
    && !PopConsoleDisplayState )
  {
    PopLastStandbyExitScenarioId = PopWdiCurrentScenarioInstanceId;
    ZwUpdateWnfStateData((__int64)&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, (__int64)&PopWdiCurrentScenarioInstanceId);
  }
  return v8;
}
