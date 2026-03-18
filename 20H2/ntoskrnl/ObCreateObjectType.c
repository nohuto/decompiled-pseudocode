/*
 * XREFs of ObCreateObjectType @ 0x14078B3B0
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A3F044 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A3F1B4 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A3FB58 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A3FE98 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A409B8 (ObInitSystem.c)
 *     MiInitializeSessionIds @ 0x140A5376C (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140A53A6C (MiSectionInitialization.c)
 *     CmpCreateObjectTypes @ 0x140A56974 (CmpCreateObjectTypes.c)
 *     HalpDmaInitializeDomain @ 0x140A646CC (HalpDmaInitializeDomain.c)
 *     SepTokenInitialization @ 0x140A666FC (SepTokenInitialization.c)
 *     EtwpInitializeCoverageSampler @ 0x140A693E4 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x140A6C7EC (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140A70560 (DbgkpInitializePhase0.c)
 *     PopEtInit @ 0x140A70A24 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A713E8 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A7236C (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A73554 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140A74AA0 (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140A756C4 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140A757B4 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A75D34 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A76390 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140A7657C (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A76620 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14078B3D0 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
