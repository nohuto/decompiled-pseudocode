/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x1407BE388
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14075D984 (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406E952C (PopPowerRequestIsExecutionRequiredStatusHeld.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14070099C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14070F8C4 (PopPowerRequestIsExecutionRequiredCapable.c)
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
