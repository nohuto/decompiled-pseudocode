/*
 * XREFs of PsCreateSystemThread @ 0x1406EE030
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x140330730 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@.c)
 *     SmKmStoreHelperStart @ 0x14033765C (SmKmStoreHelperStart.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x1403376F4 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     MiZeroInParallel @ 0x1403377F0 (MiZeroInParallel.c)
 *     PopCreatePowerThread @ 0x1403A4978 (PopCreatePowerThread.c)
 *     DisplayBootBitmap @ 0x1403B3710 (DisplayBootBitmap.c)
 *     CcInitializePartition @ 0x1403C2114 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x1403C2720 (CcInitializeAsyncRead.c)
 *     ExRegisterBootDevice @ 0x1405B1730 (ExRegisterBootDevice.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     PopFlushVolumes @ 0x14099AAFC (PopFlushVolumes.c)
 *     VfPendingInitPhase1 @ 0x1409D87AC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E3230 (VfPoolInitPhase1.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 *     SeRmInitPhase1 @ 0x140A6B14C (SeRmInitPhase1.c)
 *     FsRtlInitializeWorkerThread @ 0x140A6EC8C (FsRtlInitializeWorkerThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A70CC8 (PopDirectedDripsInitializePhase3.c)
 *     ExpWorkerFactoryInitialization @ 0x140A74AA0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
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
