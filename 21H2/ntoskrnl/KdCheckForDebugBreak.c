/*
 * XREFs of KdCheckForDebugBreak @ 0x140384004
 * Callers:
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x140502C50 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140538028 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140407A90 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x140511D60 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
