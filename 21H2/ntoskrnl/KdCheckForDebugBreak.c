/*
 * XREFs of KdCheckForDebugBreak @ 0x140222368
 * Callers:
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x1403C801C (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140A4D310 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140A4D92C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402223B0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
