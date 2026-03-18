/*
 * XREFs of PsCreateSystemThread @ 0x1406CFB90
 * Callers:
 *     SmKmStoreHelperStart @ 0x14030B580 (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x14030B618 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x14030B714 (MiZeroInParallel.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14035F9A0 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     PopCreatePowerThread @ 0x1403A24A8 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403B0DA0 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403BE89C (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403BEEA8 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405ADBD0 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x14099499C (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D278C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409DD210 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A63E7C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6845C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6A3BC (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6E2C0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
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
