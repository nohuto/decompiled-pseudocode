/*
 * XREFs of PopExecutionRequiredCallback @ 0x1407104B0
 * Callers:
 *     <none>
 * Callees:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0 (PopHandleConvergedPowerRequestUpdate.c)
 */

__int64 __fastcall PopExecutionRequiredCallback(__int64 a1, unsigned int a2)
{
  PopHandleConvergedPowerRequestUpdate(a2, 3u);
  return 0LL;
}
