/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180064920
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180064900 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *v3; // rdx
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *j; // rcx
  _RTL_BALANCED_LINKS *i; // rcx
  _RTL_BALANCED_LINKS *k; // rcx

  if ( Table->NumberGenericTableElements )
  {
    v3 = (_RTL_BALANCED_LINKS *)*RestartKey;
    if ( v3 )
    {
      RightChild = v3->RightChild;
      if ( RightChild )
      {
        for ( i = RightChild->LeftChild; i; i = i->LeftChild )
          RightChild = i;
      }
      else
      {
        for ( j = v3->Parent; j->RightChild == v3; j = j->Parent )
          v3 = j;
        RightChild = 0LL;
        if ( j->LeftChild == v3 )
          RightChild = j;
      }
      if ( !RightChild )
        return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
    }
    else
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( k = RightChild->LeftChild; k; k = k->LeftChild )
        RightChild = k;
    }
    *RestartKey = RightChild;
    return (PVOID)((unsigned __int64)&RightChild[1] & -(__int64)(RightChild != 0LL));
  }
  return 0LL;
}
