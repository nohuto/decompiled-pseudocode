/*
 * XREFs of ?TotalDemotedCommitment@VIDMM_PROCESS_BUDGET_STATE@@QEBA_KXZ @ 0x1C009DD54
 * Callers:
 *     ??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C009DA74 (--1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00DF91C (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00E5F30 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00EE730 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PROCESS_BUDGET_STATE::TotalDemotedCommitment(VIDMM_PROCESS_BUDGET_STATE *this)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // rcx
  __int64 v3; // rdx

  result = 0LL;
  v2 = (_QWORD *)((char *)this + 256);
  v3 = 5LL;
  do
  {
    result += *v2++;
    --v3;
  }
  while ( v3 );
  return result;
}
