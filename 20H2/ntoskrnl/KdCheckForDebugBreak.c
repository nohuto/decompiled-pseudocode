/*
 * XREFs of KdCheckForDebugBreak @ 0x140383898
 * Callers:
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1405362E8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x14099781C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140405240 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14050FFF0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
