/*
 * XREFs of _RtlEnumerateGenericTableWithoutSplayingAvl@8 @ 0x4B2AB850
 * Callers:
 *     _RtlEnumerateGenericTableAvl@8 @ 0x4B2AB820 (_RtlEnumerateGenericTableAvl@8.c)
 * Callees:
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  _RTL_BALANCED_LINKS *i; // eax

  if ( Table->NumberGenericTableElements )
  {
    if ( *RestartKey )
    {
      i = (_RTL_BALANCED_LINKS *)RealSuccessor();
      if ( !i )
        return i != 0 ? &i[1] : 0;
    }
    else
    {
      for ( i = Table->BalancedRoot.RightChild; i->LeftChild; i = i->LeftChild )
        ;
    }
    *RestartKey = i;
    return i != 0 ? &i[1] : 0;
  }
  return 0;
}
