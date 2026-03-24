/*
 * XREFs of ObInsertObject @ 0x1406D41C0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1402E9010 (FsRtlCreateSectionForDataScan.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     SepInitializationPhase1 @ 0x14079D378 (SepInitializationPhase1.c)
 *     TtmpDispatchCreateEventQueue @ 0x140900B3C (TtmpDispatchCreateEventQueue.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094793C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x14095A55C (ExpProfileCreate.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 *     MiSectionInitialization @ 0x140A55074 (MiSectionInitialization.c)
 *     CmpCreateRegistryRoot @ 0x140A5AED4 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
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
