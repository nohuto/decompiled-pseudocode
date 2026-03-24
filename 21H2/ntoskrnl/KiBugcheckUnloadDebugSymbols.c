/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x140518084
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x140524D84 (KiAttemptBugcheckRecovery.c)
 *     ExRebootSystemForRecovery @ 0x1405B2614 (ExRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140407900 (DebugService2.c)
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
