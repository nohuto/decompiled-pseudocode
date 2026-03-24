/*
 * XREFs of KdCheckForDebugBreak @ 0x140383EB0
 * Callers:
 *     KeAccumulateTicks @ 0x140224410 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x140502CD0 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140537DE8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14099481C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1404078B0 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x140511B20 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
