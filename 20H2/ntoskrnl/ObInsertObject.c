/*
 * XREFs of ObInsertObject @ 0x1407096B0
 * Callers:
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1403561D0 (FsRtlCreateSectionForDataScan.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     TtmpDispatchCreateEventQueue @ 0x14090338C (TtmpDispatchCreateEventQueue.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094A16C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095CCDC (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A53A6C (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A598A8 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x140A654A0 (PspInitPhase1.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(
           (PADAPTER_OBJECT)Object,
           PassedAccessState,
           DesiredAccess,
           ObjectPointerBias,
           0,
           (__int64)NewObject,
           Handle);
}
