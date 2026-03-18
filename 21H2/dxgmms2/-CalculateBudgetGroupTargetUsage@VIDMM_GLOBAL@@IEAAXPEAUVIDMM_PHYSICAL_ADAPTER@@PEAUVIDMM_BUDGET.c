/*
 * XREFs of ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00EE53C
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00EE730 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
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
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  int v10; // edx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

  v4 = 0;
  v5 = 0;
  if ( *((char *)a2 + 437) >= 0 )
  {
    v4 = dword_1C006E548;
    v5 = dword_1C006E54C;
  }
  else
  {
    v7 = *(int *)a4;
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v4 = dword_1C006E558;
        v5 = dword_1C006E55C;
      }
      else
      {
        WdLogSingleEntry5(0LL, 270LL, 61LL, this, v7, 0LL);
      }
    }
    else
    {
      v4 = dword_1C006E550;
      v5 = dword_1C006E554;
    }
  }
  v8 = *((_QWORD *)a4 + 2);
  v9 = v8 * (unsigned __int64)v4 / 0x64;
  *((_QWORD *)a4 + 32) = v9;
  v10 = *((_DWORD *)a4 + 80);
  v11 = v8 * (unsigned __int64)v5 / 0x64;
  *((_QWORD *)a4 + 33) = v11;
  v12 = v11;
  if ( v10 )
  {
    if ( *((_DWORD *)a4 + 77) == v10 )
    {
      v13 = *((_QWORD *)a4 + 36);
      if ( v13 < v11 )
      {
        *((_QWORD *)a4 + 33) = v13;
        v12 = v13;
      }
    }
  }
  *((_QWORD *)a4 + 34) = v8 - v9 - v12;
}
