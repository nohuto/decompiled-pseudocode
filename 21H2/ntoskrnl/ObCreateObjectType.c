/*
 * XREFs of ObCreateObjectType @ 0x140824B10
 * Callers:
 *     IoCreateObjectTypes @ 0x140AFD20C (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140AFD554 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     PspInitializeSiloStructures @ 0x140AFF540 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140AFF6B0 (ExpTimerInitialization.c)
 *     MiInitializeSessionIds @ 0x140B08D58 (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140B09078 (MiSectionInitialization.c)
 *     HalpDmaInitializeDomain @ 0x140B1DB9C (HalpDmaInitializeDomain.c)
 *     SepTokenInitialization @ 0x140B1F300 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140B22DD4 (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140B23400 (DbgkpInitializePhase0.c)
 *     PopPowerRequestInitialize @ 0x140B248EC (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140B28EB0 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140B2A324 (ExpKeyedEventInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140B2DEA8 (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140B2F410 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140B2F564 (ExpMutantInitialization.c)
 *     CmpCreateObjectTypes @ 0x140B2F824 (CmpCreateObjectTypes.c)
 *     EtwpInitializeCoverageSampler @ 0x140B2FABC (EtwpInitializeCoverageSampler.c)
 *     ExpProfileInitialization @ 0x140B2FC64 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B304E0 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140B30628 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140B306CC (ExpEventInitialization.c)
 *     IopCreateIoRingObjectType @ 0x140B30970 (IopCreateIoRingObjectType.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
