/*
 * XREFs of PoTtmInitiatePowerStateTransition @ 0x1408EB4E8
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1408FB3E8 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     PopFilterCapabilities @ 0x14070FBC4 (PopFilterCapabilities.c)
 *     PopStartStopTtmSxTranstion @ 0x1408E3230 (PopStartStopTtmSxTranstion.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408EC594 (PopTriggerMonitorPowerEvent.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, unsigned int a2)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int started; // eax
  _BYTE v10[80]; // [rsp+20h] [rbp-58h] BYREF

  memset(v10, 0, 0x4CuLL);
  PopAcquirePolicyLock(v4);
  PopFilterCapabilities(&PopCapabilities, (__int64)v10);
  v7 = 0;
  if ( v10[20] )
  {
    LOBYTE(v6) = a1 == 0;
    started = PopTriggerMonitorPowerEvent(v6, a2);
LABEL_7:
    v7 = started;
    goto LABEL_8;
  }
  if ( v10[3] || v10[4] || v10[5] )
  {
    started = PopStartStopTtmSxTranstion(a1);
    goto LABEL_7;
  }
LABEL_8:
  PopReleasePolicyLock(v6, v5);
  return v7;
}
