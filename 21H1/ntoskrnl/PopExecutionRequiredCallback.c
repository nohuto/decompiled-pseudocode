/*
 * XREFs of PopExecutionRequiredCallback @ 0x1406EC9D0
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14070E454 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(__int64 a1, unsigned int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 3LL);
  return 0LL;
}
