/*
 * XREFs of ZwQueryInformationThread @ 0x18009D2B0
 * Callers:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x180054650 (TpCheckTerminateWorker.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x180061EAC (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006B5B0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x18007D590 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x180088FD0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CBEE0 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CC660 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D0740 (LdrpDoDebuggerBreak.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83C0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC030 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC060 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DC220 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC390 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC5D8 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DDB68 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180114780 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x180115C90 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x1801165B8 (PsspDumpThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 37;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
