/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x1405182C4
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 *     ExRebootSystemForRecovery @ 0x1405B2844 (ExRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140407AE0 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax
  _QWORD v1[5]; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
  {
    v1[0] = -1LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    return DebugService2(0LL, (__int64)v1, 4u);
  }
  return result;
}
