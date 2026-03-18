/*
 * XREFs of PsCreateSystemThread @ 0x140655530
 * Callers:
 *     SmKmStoreHelperStart @ 0x1402C9BA0 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1402C9C38 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1402C9D34 (MiZeroInParallel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140322030 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x1403A1D18 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403AB120 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403BD90C (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403BDF18 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405AD4B0 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x14099335C (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D272C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409DD1B0 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6449C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140A67FDC (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A15C (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6DBC8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 */

NTSTATUS __stdcall PsCreateSystemThread(
        PHANDLE ThreadHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PKSTART_ROUTINE StartRoutine,
        PVOID StartContext)
{
  return PsCreateSystemThreadEx(
           ThreadHandle,
           DesiredAccess,
           ObjectAttributes,
           ProcessHandle,
           ClientId,
           StartRoutine,
           StartContext,
           0LL,
           0LL);
}
