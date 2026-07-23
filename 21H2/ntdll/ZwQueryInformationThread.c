/*
 * XREFs of ZwQueryInformationThread @ 0x18009DAA0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180048BF8 (EtwpAddLogHeaderToLogFile.c)
 *     RtlExitUserThread @ 0x18004EC30 (RtlExitUserThread.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     RtlGetThreadWorkOnBehalfTicket @ 0x18006C6F0 (RtlGetThreadWorkOnBehalfTicket.c)
 *     RtlCheckHeldCriticalSections @ 0x18007E030 (RtlCheckHeldCriticalSections.c)
 *     RtlSetThreadIsCritical @ 0x1800896D0 (RtlSetThreadIsCritical.c)
 *     RtlQueryThreadProfiling @ 0x1800CC040 (RtlQueryThreadProfiling.c)
 *     DbgUiConvertStateChangeStructureWorker @ 0x1800CC7C0 (DbgUiConvertStateChangeStructureWorker.c)
 *     LdrpDoDebuggerBreak @ 0x1800D08A0 (LdrpDoDebuggerBreak.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D84D0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64GetThreadContext @ 0x1800DC140 (RtlWow64GetThreadContext.c)
 *     RtlWow64GetThreadSelectorEntry @ 0x1800DC170 (RtlWow64GetThreadSelectorEntry.c)
 *     RtlWow64SuspendProcess @ 0x1800DC330 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC4A0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC6E8 (RtlpWow64OpenThreadProcess.c)
 *     WerpThreadId @ 0x1800DDC78 (WerpThreadId.c)
 *     PsspSampleCounters @ 0x180114AF0 (PsspSampleCounters.c)
 *     PsspDumpObject_Thread @ 0x180116000 (PsspDumpObject_Thread.c)
 *     PsspDumpThread @ 0x180116928 (PsspDumpThread.c)
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
