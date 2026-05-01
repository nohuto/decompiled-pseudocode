/*
 * XREFs of ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EACC
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800058F0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008B5C (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18000D894 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D958 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAEC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000EF80 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180020A50 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180024330 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmHamHostReferenceUnsafe(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  if ( *((int *)a1 - 10) < 0 )
    return 0LL;
  ++*((_QWORD *)a1 + 74);
  return 1LL;
}
