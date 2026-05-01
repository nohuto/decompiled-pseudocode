/*
 * XREFs of ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x180075D24
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800755F0 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x180075688 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012AD0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002214C (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180063D1C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

char __fastcall RmpMemoryMonitorIsLargeAppTerminationTarget(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  char v4; // r11

  if ( (unsigned int)RmpActivityHostIsRevocable(a1)
    && ((v4 = 1, (*((_BYTE *)a1 + 836) & 1) != 0) || (unsigned int)RmpActivityHostGetResourceSetCount(a1, 2))
    && (!a2
     || (((unsigned __int8)v4 & *((_BYTE *)a2 + 62)) == 0
      || (int)RmpEmPriorityCompare(*((_DWORD *)a2 + 14), *(_DWORD *)(*((_QWORD *)a1 + 6) + 516LL)) <= 0)
     && (*((_BYTE *)a2 + 62) & 0x10) != 0
     && ((unsigned __int8)v4 & *((_BYTE *)a2 + 60)) != 0) )
  {
    return v4;
  }
  else
  {
    return 0;
  }
}
