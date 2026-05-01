/*
 * XREFs of ?HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180004698
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180004CDC (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 * Callees:
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

void __fastcall HampDepGroupInitialize(struct _HAM_DEPENDENCY_GROUP *a1)
{
  memset_0(a1, 0, 0x88uLL);
  *(_QWORD *)a1 = _InterlockedIncrement64(&NextDependencyGroupId);
  *(_OWORD *)((char *)a1 + 8) = 0LL;
  RtlInitializeSRWLock((char *)a1 + 8);
  *((_DWORD *)a1 + 4) = 0;
  RtlInitializeConditionVariable((char *)a1 + 24);
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 12) = 1LL;
}
