/*
 * XREFs of ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C0280B60
 * Callers:
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0281FE0 (DxgkGetProcessSchedulingPriorityBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *(unsigned int *)(a1 + 352);
  result = 1LL;
  if ( (_DWORD)v1 != 1 )
  {
    if ( (v1 & 0xFFFFFFFD) != 0 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1, v1);
      *(_QWORD *)(v3 + 24) = 4658LL;
      WdLogEvent5_WdAssertion(v3);
      return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
