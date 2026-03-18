/*
 * XREFs of KdCheckForDebugBreak @ 0x140381BB8
 * Callers:
 *     KeAccumulateTicks @ 0x1402191B0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x1404FD880 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140532918 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x1409917AC (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x1403FEF70 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x14050C6C0 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
