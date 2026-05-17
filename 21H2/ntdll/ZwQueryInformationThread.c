/*
 * XREFs of ZwQueryInformationThread @ 0x18009DAE0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006C6F0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x18007E030 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x1800896D0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CC080 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CC800 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D08E0 (LdrpDoDebuggerBreak.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8510 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC180 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC1B0 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DC370 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC4E0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC728 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DDCB8 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180114B30 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x180116040 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180116968 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryInformationThread()
{
  __int64 result; // rax

  result = 37LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
