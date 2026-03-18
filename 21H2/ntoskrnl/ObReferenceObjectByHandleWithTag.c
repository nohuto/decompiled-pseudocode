/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140732CC0
 * Callers:
 *     NtSignalAndWaitForSingleObject @ 0x14024F140 (NtSignalAndWaitForSingleObject.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     SepReferenceTokenByHandle @ 0x1402F8F70 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     PopCreatePowerThread @ 0x1403B5088 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x140540798 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x1405AC580 (MiReferenceAweHandle.c)
 *     PspTimerDelayProcess @ 0x1405E14E0 (PspTimerDelayProcess.c)
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140690CFC (VrpHandleIoctlLoadDifferencingHive.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     ObWaitForSingleObject @ 0x1407E0200 (ObWaitForSingleObject.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 *     PfSnAppLaunchScenarioControl @ 0x140988EE4 (PfSnAppLaunchScenarioControl.c)
 *     PspCreatePicoProcess @ 0x1409B2390 (PspCreatePicoProcess.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B270C4 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
