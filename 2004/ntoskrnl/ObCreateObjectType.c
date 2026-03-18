/*
 * XREFs of ObCreateObjectType @ 0x14077DE10
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A39060 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A391CC (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A39AC4 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A39E04 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3A924 (ObInitSystem.c)
 *     MiInitializeSessionIds @ 0x140A530EC (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140A533EC (MiSectionInitialization.c)
 *     CmpCreateObjectTypes @ 0x140A562F4 (CmpCreateObjectTypes.c)
 *     HalpDmaInitializeDomain @ 0x140A5D36C (HalpDmaInitializeDomain.c)
 *     SepTokenInitialization @ 0x140A5F39C (SepTokenInitialization.c)
 *     EtwpInitializeCoverageSampler @ 0x140A62024 (EtwpInitializeCoverageSampler.c)
 *     WmipInitializeSecurity @ 0x140A6551C (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140A69C54 (DbgkpInitializePhase0.c)
 *     PopEtInit @ 0x140A6A118 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A6AADC (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A6BA88 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A6CC74 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6E2C0 (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140A6F1C0 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140A6F2B0 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A6F834 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A6FEE0 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140A700CC (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A70170 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14077DE30 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
