/*
 * XREFs of KdCheckForDebugBreak @ 0x140381378
 * Callers:
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1404FD230 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1405322C8 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140990A5C (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1403FDCE0 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14050C070 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
