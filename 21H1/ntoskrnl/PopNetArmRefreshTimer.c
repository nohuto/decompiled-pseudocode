/*
 * XREFs of PopNetArmRefreshTimer @ 0x1408ED500
 * Callers:
 *     PopNetRefreshTimerWorkerCallback @ 0x1408ED870 (PopNetRefreshTimerWorkerCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408ED9B0 (PopNetWnfLowPowerEpochCallback.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     PopTraceNetRefreshTimerArmed @ 0x1408E7F78 (PopTraceNetRefreshTimerArmed.c)
 */

void __fastcall PopNetArmRefreshTimer(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx

  v4 = 0LL;
  v5 = -a1;
  if ( a2 )
    v5 = a1;
  KeSetTimer2((__int64)&PopNetRefreshTimer, v5, 0LL, 0LL);
  if ( a2 )
  {
    if ( MEMORY[0xFFFFF78000000014] < a1 )
      v4 = a1 - MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v4 = a1;
  }
  PopTraceNetRefreshTimerArmed(v4);
}
