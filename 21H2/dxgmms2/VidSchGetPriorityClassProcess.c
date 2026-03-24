/*
 * XREFs of VidSchGetPriorityClassProcess @ 0x1C00D1970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetPriorityClassProcess(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
