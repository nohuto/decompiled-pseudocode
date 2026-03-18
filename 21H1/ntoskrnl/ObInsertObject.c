/*
 * XREFs of ObInsertObject @ 0x140642820
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402BFEB0 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     NtQueryInformationToken @ 0x140606BA0 (NtQueryInformationToken.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095584C (ExpProfileCreate.c)
 *     MiSectionInitialization @ 0x140A4D6EC (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A532BC (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 *     PspInitPhase1 @ 0x140A60C8C (PspInitPhase1.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
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
