/*
 * XREFs of ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180007574
 * Callers:
 *     ?RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z @ 0x18000753C (-RmpResourceSetTableFindById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180069668 (-RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18006CCCC (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000EE88 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 */

__int64 __fastcall RmpObjectTableFindObjectByHandle(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  RtlAcquireSRWLockShared((char *)a1 + 16);
  LODWORD(a3) = RmpObjectTableFindObjectByHandleWithLock(a1, a2, a3);
  RtlReleaseSRWLockShared((char *)a1 + 16);
  return (unsigned int)a3;
}
