/*
 * XREFs of VidSchSetPriorityClassProcess @ 0x1C008EBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchSetPriorityClassProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = (int)a2;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
  if ( (unsigned int)a2 > 5 )
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v6 + 24) = v3;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  if ( (_DWORD)a3 )
    *(_BYTE *)(a1 + 2625) = 1;
  *(_DWORD *)(a1 + 16) = a2;
  return 0LL;
}
