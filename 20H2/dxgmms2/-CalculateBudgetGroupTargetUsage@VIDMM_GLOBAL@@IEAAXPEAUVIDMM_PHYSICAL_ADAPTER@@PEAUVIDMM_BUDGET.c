/*
 * XREFs of ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00CBF84
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00CC184 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        struct VIDMM_BUDGET_STATE *a3,
        struct VIDMM_SEGMENT_GROUP_STATE *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  int v12; // edx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx

  v4 = 0;
  v5 = 0;
  if ( *((char *)a2 + 437) >= 0 )
  {
    v4 = dword_1C00514D8;
    v5 = dword_1C00514DC;
  }
  else
  {
    v8 = *(int *)a4;
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v4 = dword_1C00514E8;
        v5 = dword_1C00514EC;
      }
      else
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
        v9[7] = 0LL;
        v9[3] = 270LL;
        v9[4] = 61LL;
        v9[5] = this;
        v9[6] = v8;
        WdLogEvent5_WdCriticalError(v9);
      }
    }
    else
    {
      v4 = dword_1C00514E0;
      v5 = dword_1C00514E4;
    }
  }
  v10 = *((_QWORD *)a4 + 2);
  v11 = v10 * (unsigned __int64)v4 / 0x64;
  *((_QWORD *)a4 + 32) = v11;
  v12 = *((_DWORD *)a4 + 80);
  v13 = v10 * (unsigned __int64)v5 / 0x64;
  *((_QWORD *)a4 + 33) = v13;
  v14 = v13;
  if ( v12 )
  {
    if ( *((_DWORD *)a4 + 77) == v12 )
    {
      v15 = *((_QWORD *)a4 + 36);
      if ( v15 < v13 )
      {
        *((_QWORD *)a4 + 33) = v15;
        v14 = v15;
      }
    }
  }
  *((_QWORD *)a4 + 34) = v10 - v11 - v14;
}
