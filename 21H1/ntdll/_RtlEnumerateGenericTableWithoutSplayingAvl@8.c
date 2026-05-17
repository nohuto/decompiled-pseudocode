/*
 * XREFs of _RtlEnumerateGenericTableWithoutSplayingAvl@8 @ 0x4B2AB850
 * Callers:
 *     _RtlEnumerateGenericTableAvl@8 @ 0x4B2AB820 (_RtlEnumerateGenericTableAvl@8.c)
 * Callees:
 *     _RealSuccessor@4 @ 0x4B2AB895 (_RealSuccessor@4.c)
 */

int __stdcall RtlEnumerateGenericTableWithoutSplayingAvl(int a1, int *a2)
{
  int i; // eax

  if ( *(_DWORD *)(a1 + 24) )
  {
    if ( *a2 )
    {
      i = RealSuccessor();
      if ( !i )
        return i != 0 ? i + 16 : 0;
    }
    else
    {
      for ( i = *(_DWORD *)(a1 + 8); *(_DWORD *)(i + 4); i = *(_DWORD *)(i + 4) )
        ;
    }
    *a2 = i;
    return i != 0 ? i + 16 : 0;
  }
  return 0;
}
