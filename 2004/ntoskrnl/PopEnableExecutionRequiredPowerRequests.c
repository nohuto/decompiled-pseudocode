/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x1407C1634
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075FC94 (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x1406A8624 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x1406A8670 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A86F0 (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 */

void __fastcall PopEnableExecutionRequiredPowerRequests(char a1)
{
  __int64 *i; // rbx
  __int64 v3; // rcx

  for ( i = (__int64 *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (__int64 *)*i )
  {
    if ( PopPowerRequestIsExecutionRequiredCapable((__int64)i)
      && PopPowerRequestIsExecutionRequiredStatusHeld((__int64)i) )
    {
      PopUpdatePowerRequestProcessWakeCounter(v3, a1);
    }
  }
}
