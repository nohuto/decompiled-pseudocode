/*
 * XREFs of ZwQueryInformationThread @ 0x18009D550
 * Callers:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpDetectDetour @ 0x180061FBC (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006B6C0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x18007D690 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x1800890D0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CC0C0 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CC840 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D0920 (LdrpDoDebuggerBreak.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8760 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC3D0 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC400 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DC5C0 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC730 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC978 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DDF08 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180114C90 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x1801161A0 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180116AC8 (PsspDumpThread.c)
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
