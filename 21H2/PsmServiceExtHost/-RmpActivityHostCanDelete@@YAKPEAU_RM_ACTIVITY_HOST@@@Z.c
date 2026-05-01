/*
 * XREFs of ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018970
 * Callers:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800108A0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x1800147E0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F7C0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmpActivityHostCanDelete(struct _RM_ACTIVITY_HOST *a1)
{
  _BOOL8 result; // rax
  char *v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( *((int *)a1 + 6) >= 0
    && !(*((_DWORD *)a1 + 288) + *((_DWORD *)a1 + 282))
    && !*((_QWORD *)a1 + 82)
    && (*((_BYTE *)a1 + 1472) & 1) == 0 )
  {
    if ( (*((_BYTE *)a1 + 836) & 1) == 0 )
      return 1;
    v2 = (char *)a1 + 64;
    RmHamHostGetCurrentState(
      (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v4,
      (union _RM_OPTIMIZATION_STATE *)&v3);
    if ( !v3 && (v4 & 0x80u) != 0 && (v4 & 0x100) != 0 && (v2[656] & 2) == 0 )
      return 1;
  }
  return result;
}
