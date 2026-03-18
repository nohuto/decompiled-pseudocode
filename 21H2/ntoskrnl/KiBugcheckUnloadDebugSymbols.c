/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405675F4
 * Callers:
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x140578830 (KeRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140429850 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
    return DebugService2();
  return result;
}
