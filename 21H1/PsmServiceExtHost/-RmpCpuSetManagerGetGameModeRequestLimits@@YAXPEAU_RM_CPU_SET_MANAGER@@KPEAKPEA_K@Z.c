/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x18006C4A4
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180068FA8 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z @ 0x18006CB94 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800411F4 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // eax
  __int64 v5; // r11
  struct _RM_CPU_SET_MANAGER *v8; // r10
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int SystemReserveTarget; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // r9
  __int64 v14; // rcx

  v4 = *((_DWORD *)a1 + 228);
  v5 = 0LL;
  v8 = a1;
  v9 = 0;
  if ( v4 != -1 )
  {
    v10 = v4 - 256;
    v9 = (unsigned __int8)v10;
    v5 = HIWORD(v10);
    *((_QWORD *)a1 + v5 + 11) |= 1LL << v10;
    ++*((_DWORD *)a1 + 229);
  }
  if ( (a2 & 1) != 0 )
  {
    v12 = *((_DWORD *)a1 + 229) - *((_DWORD *)a1 + 231);
  }
  else
  {
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    v12 = *((_DWORD *)v8 + 229) - SystemReserveTarget;
  }
  v13 = *((_QWORD *)v8 + 11);
  if ( v12 >= 0x40 )
    v12 = 64;
  if ( *((_DWORD *)v8 + 228) != -1 )
  {
    v14 = *((_QWORD *)v8 + v5 + 11);
    _bittestandreset64(&v14, v9);
    *((_QWORD *)v8 + v5 + 11) = v14;
    --*((_DWORD *)v8 + 229);
  }
  *a3 = v12;
  *a4 = v13;
}
