/*
 * XREFs of _RtlEnumerateGenericTableWithoutSplaying@8 @ 0x4B2AB9A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlRealSuccessor@4 @ 0x4B35E030 (_RtlRealSuccessor@4.c)
 */

int __stdcall RtlEnumerateGenericTableWithoutSplaying(int *a1, int *a2)
{
  int result; // eax

  result = *a1;
  if ( *a1 )
  {
    if ( *a2 )
    {
      result = RtlRealSuccessor(*a2);
      if ( !result )
        return result != 0 ? result + 24 : 0;
    }
    else
    {
      while ( *(_DWORD *)(result + 4) )
        result = *(_DWORD *)(result + 4);
    }
    *a2 = result;
    return result != 0 ? result + 24 : 0;
  }
  return result;
}
