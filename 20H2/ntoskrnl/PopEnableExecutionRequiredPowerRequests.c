/*
 * XREFs of PopEnableExecutionRequiredPowerRequests @ 0x1407CFE38
 * Callers:
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14076E304 (PopHandleExecutionRequiredEnablementUpdate.c)
 * Callees:
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14071EC54 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1407200AC (PopPowerRequestIsExecutionRequiredStatusHeld.c)
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
