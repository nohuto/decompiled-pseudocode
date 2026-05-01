/*
 * XREFs of ?RmpCpuSetManagerRemoveRegistrationFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006D6E8
 * Callers:
 *     ?RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006CB24 (-RmpCpuSetManagerInvalidateProcessRegistration@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROC.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerRemoveRegistrationFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a2)
{
  char *v2; // rcx
  _OWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx

  v2 = (char *)*((_QWORD *)a2 + 8);
  v3 = (_OWORD *)((char *)a2 + 104);
  v4 = *((_QWORD *)a2 + 13);
  if ( *(struct _RM_CPU_SET_PROCESS_REGISTRATION **)(v4 + 8) != (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a2 + 104)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 14), (_OWORD *)*v6 != v3) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v3 = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  RmpObjectRelease(v2);
  RmpObjectRelease((char *)a2);
}
