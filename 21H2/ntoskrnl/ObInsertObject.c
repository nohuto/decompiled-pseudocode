/*
 * XREFs of ObInsertObject @ 0x14066BA50
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140369ECC (PopPowerRequestCreateUserModeRequest.c)
 *     EtwpCreateUmReplyObject @ 0x1406B8E18 (EtwpCreateUmReplyObject.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     PopEtEnergyTrackerCreate @ 0x140857300 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     TtmiCreateTerminal @ 0x1409A2F78 (TtmiCreateTerminal.c)
 *     TtmpDispatchCreateEventQueue @ 0x1409A6714 (TtmpDispatchCreateEventQueue.c)
 *     MiSectionInitialization @ 0x140B09078 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 *     PspInitPhase1 @ 0x140B1E0A8 (PspInitPhase1.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
