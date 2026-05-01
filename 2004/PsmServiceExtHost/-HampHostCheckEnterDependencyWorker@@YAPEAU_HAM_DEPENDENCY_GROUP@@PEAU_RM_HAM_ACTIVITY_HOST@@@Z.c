/*
 * XREFs of ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A7B8
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A150 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FC50 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800275BC (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007E180 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180080E10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008C14 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DE3C (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DEC4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

struct _HAM_DEPENDENCY_GROUP *__fastcall HampHostCheckEnterDependencyWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_DEPENDENCY_GROUP *v1; // rdi
  int v3; // ebx

  v1 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
  if ( v1 )
  {
    HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 86));
    v3 = HampDepGroupTryEnterStateChange(v1, 0LL);
    HampDepGroupReleaseLockExclusive(v1);
    return (struct _HAM_DEPENDENCY_GROUP *)(-(__int64)(v3 != 0) & (unsigned __int64)v1);
  }
  return v1;
}
