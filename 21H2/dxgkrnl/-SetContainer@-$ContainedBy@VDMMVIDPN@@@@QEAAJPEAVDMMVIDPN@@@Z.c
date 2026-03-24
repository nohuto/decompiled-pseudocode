/*
 * XREFs of ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C000814C
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007E58 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C00197F0 (--0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z @ 0x1C0019898 (--0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0111980 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContainedBy<DMMVIDPN>::SetContainer(__int64 a1, __int64 a2)
{
  __int64 v5; // rax
  __int64 v6; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    *(_QWORD *)(a1 + 8) = a2;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 8);
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
