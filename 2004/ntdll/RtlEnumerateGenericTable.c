/*
 * XREFs of RtlEnumerateGenericTable @ 0x180064F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800652F0 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x180065850 (RtlRealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  PRTL_SPLAY_LINKS v7; // rax

  TableRoot = Table->TableRoot;
  if ( Table->TableRoot )
  {
    if ( Restart )
    {
      for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
        TableRoot = i;
      v5 = TableRoot;
    }
    else
    {
      v7 = RtlRealSuccessor(Table->TableRoot);
      TableRoot = v7;
      if ( !v7 )
        return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
      v5 = v7;
    }
    Table->TableRoot = RtlSplay(v5);
    return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
  }
  return 0LL;
}
