/*
 * XREFs of ObInsertObject @ 0x14060D6D0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140266E80 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     NtQueryInformationToken @ 0x14067EC80 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409443AC (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140956F1C (ExpProfileCreate.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140A533EC (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A59228 (CmpCreateRegistryRoot.c)
 *     PspInitPhase1 @ 0x140A5E140 (PspInitPhase1.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx((PADAPTER_OBJECT)Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
