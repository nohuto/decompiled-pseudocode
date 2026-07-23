/*
 * XREFs of ObCreateObjectType @ 0x140795AD0
 * Callers:
 *     PspInitializeSiloStructures @ 0x140A3DBC4 (PspInitializeSiloStructures.c)
 *     ExpTimerInitialization @ 0x140A3DD34 (ExpTimerInitialization.c)
 *     IoCreateObjectTypes @ 0x140A3E6D8 (IoCreateObjectTypes.c)
 *     ExpWin32Initialization @ 0x140A3EA18 (ExpWin32Initialization.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     EtwpInitializeCoverageSampler @ 0x140A43AE8 (EtwpInitializeCoverageSampler.c)
 *     SepTokenInitialization @ 0x140A49AAC (SepTokenInitialization.c)
 *     MiInitializeSessionIds @ 0x140A55D74 (MiInitializeSessionIds.c)
 *     MiSectionInitialization @ 0x140A56074 (MiSectionInitialization.c)
 *     CmpCreateObjectTypes @ 0x140A58F98 (CmpCreateObjectTypes.c)
 *     HalpDmaInitializeDomain @ 0x140A66CEC (HalpDmaInitializeDomain.c)
 *     WmipInitializeSecurity @ 0x140A6AC2C (WmipInitializeSecurity.c)
 *     DbgkpInitializePhase0 @ 0x140A6E4E0 (DbgkpInitializePhase0.c)
 *     PopEtInit @ 0x140A6E9A4 (PopEtInit.c)
 *     ExpInitializeCallbacks @ 0x140A6F368 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A702EC (ExpKeyedEventInitialization.c)
 *     PopPowerRequestInit @ 0x140A714D4 (PopPowerRequestInit.c)
 *     ExpWorkerFactoryInitialization @ 0x140A72A20 (ExpWorkerFactoryInitialization.c)
 *     EtwpInitializeRegistration @ 0x140A73644 (EtwpInitializeRegistration.c)
 *     ExpMutantInitialization @ 0x140A73734 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A73CB4 (ExpProfileInitialization.c)
 *     EtwpInitializeRealTimeConnection @ 0x140A74310 (EtwpInitializeRealTimeConnection.c)
 *     ExpSemaphoreInitialization @ 0x140A744FC (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A745A0 (ExpEventInitialization.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140795AF0 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a4);
}
