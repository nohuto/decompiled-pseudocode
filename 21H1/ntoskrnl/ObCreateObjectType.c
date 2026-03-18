/*
 * XREFs of ObCreateObjectType @ 0x14077E620
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A391E4 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A39368 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A39C54 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A39F94 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     EtwpInitializeRegistration @ 0x140A465E8 (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A466D4 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140A468A4 (EtwpInitializeCoverageSampler.c)
 *     MiInitializeSessionIds @ 0x140A4D3EC (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140A4D6EC (MiSectionInitialization.c)
 *     CmpCreateObjectTypes @ 0x140A505F4 (CmpCreateObjectTypes.c)
 *     HalpDmaInitializeDomain @ 0x140A5E2CC (HalpDmaInitializeDomain.c)
 *     SepTokenInitialization @ 0x140A61EE8 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140A65B3C (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140A697D4 (DbgkpInitializePhase0.c)
 *     PopEtInit @ 0x140A69EB8 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A6A87C (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A6B800 (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A6C9A4 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6DBC8 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x140A6E7B0 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A6EE14 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140A6F57C (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A6F620 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x14077E640 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
