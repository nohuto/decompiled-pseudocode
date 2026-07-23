/*
 * XREFs of ObInsertObject @ 0x1406AB4A0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900C9C (TtmpDispatchCreateEventQueue.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A72C (ExpProfileCreate.c)
 *     PspInitPhase1 @ 0x140A4C338 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x140A56074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5BED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
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
