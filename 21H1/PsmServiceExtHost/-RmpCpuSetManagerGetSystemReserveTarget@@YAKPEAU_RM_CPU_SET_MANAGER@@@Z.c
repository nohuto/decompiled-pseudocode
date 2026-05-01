/*
 * XREFs of ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800411F4
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180040BE4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006C4A4 (-RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerGetSystemReserveTarget(struct _RM_CPU_SET_MANAGER *a1)
{
  __int64 result; // rax

  result = *((_DWORD *)a1 + 229) >> 2;
  if ( !(_DWORD)result )
    return 1LL;
  if ( (unsigned int)result > 4 )
    return 4LL;
  return result;
}
