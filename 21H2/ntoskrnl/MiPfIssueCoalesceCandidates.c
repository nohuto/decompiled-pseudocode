/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x140539410
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x140240BA4 (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x14022DB84 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1405394E8 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  __int64 **v7; // rax
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 **v11; // rax

  v3 = *a1;
  v6 = **a1;
  if ( (__int64 **)v6 == a1 )
  {
    if ( (__int64 **)v3[1] != a1 || *(__int64 **)(v6 + 8) != v3 )
      goto LABEL_14;
    *a1 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = a1;
    MiIssueHardFaultIo((__int64)v3, 0, 0LL);
LABEL_5:
    v7 = *(__int64 ***)(a3 + 8);
    if ( *v7 == (__int64 *)a3 )
    {
      *v3 = a3;
      v3[1] = (__int64)v7;
      *v7 = v3;
      result = 0LL;
      *(_QWORD *)(a3 + 8) = v3;
      return result;
    }
LABEL_14:
    __fastfail(3u);
  }
  v3 = (__int64 *)MiPfIssueCoalescedSupport();
  if ( v3 )
    goto LABEL_5;
  while ( 1 )
  {
    v9 = *a1;
    if ( *a1 == (__int64 *)a1 )
      return 3221225626LL;
    if ( (__int64 **)v9[1] != a1 )
      goto LABEL_14;
    v10 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      goto LABEL_14;
    *a1 = v10;
    v10[1] = (__int64)a1;
    MiIssueHardFaultIo((__int64)v9, 0, 0LL);
    v11 = *(__int64 ***)(a3 + 8);
    if ( *v11 != (__int64 *)a3 )
      goto LABEL_14;
    *v9 = a3;
    v9[1] = (__int64)v11;
    *v11 = v9;
    *(_QWORD *)(a3 + 8) = v9;
  }
}
