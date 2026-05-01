/*
 * XREFs of ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x18006CF44
 * Callers:
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18006D740 (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 *     ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18006D8A4 (-RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SE.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpCpuSetManagerGetNextCandidateIndex(unsigned int *a1, unsigned __int64 a2, char a3)
{
  bool v3; // zf
  __int64 v4; // rax

  if ( a3 )
    v3 = !_BitScanForward64((unsigned __int64 *)&v4, a2);
  else
    v3 = !_BitScanReverse64((unsigned __int64 *)&v4, a2);
  *a1 = v4;
  return !v3;
}
