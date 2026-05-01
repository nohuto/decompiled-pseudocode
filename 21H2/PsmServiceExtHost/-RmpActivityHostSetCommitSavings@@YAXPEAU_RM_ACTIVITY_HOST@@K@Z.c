/*
 * XREFs of ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18006C270
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D934 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A360 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

void __fastcall RmpActivityHostSetCommitSavings(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // edx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  RmHamHostActOnProcesses(
    a1,
    0x2001u,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostCommitSavingsCallback,
    &v4);
  v3 = v4;
  *((_DWORD *)a1 + 311) ^= (*((_DWORD *)a1 + 311) ^ (16 * v4)) & 0x10;
  if ( !v3 )
    *((_DWORD *)a1 + 310) &= ~8u;
}
