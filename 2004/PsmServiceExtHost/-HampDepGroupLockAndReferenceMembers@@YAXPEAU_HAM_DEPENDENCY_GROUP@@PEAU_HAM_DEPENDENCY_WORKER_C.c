/*
 * XREFs of ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E80C
 * Callers:
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D9F0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001E190 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E434 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007F028 (-HampDepGroupUnlockMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 */

void __fastcall HampDepGroupLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  while ( !(unsigned int)HampDepGroupTryLockAndReferenceMembers(a1, a2) )
  {
    HampDepGroupUnlockMembers(a2);
    HampDepGroupDereferenceMembers((struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2);
  }
}
