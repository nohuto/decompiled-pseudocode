/*
 * XREFs of _RtlEnumerateGenericTableWithoutSplaying@8 @ 0x4B2AB9A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlRealSuccessor@4 @ 0x4B35E030 (_RtlRealSuccessor@4.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplaying(PRTL_GENERIC_TABLE Table, PVOID *RestartKey)
{
  PVOID result; // eax

  result = Table->TableRoot;
  if ( Table->TableRoot )
  {
    if ( *RestartKey )
    {
      result = RtlRealSuccessor((PRTL_SPLAY_LINKS)*RestartKey);
      if ( !result )
        return result != 0 ? (char *)result + 24 : 0;
    }
    else
    {
      while ( *((_DWORD *)result + 1) )
        result = (PVOID)*((_DWORD *)result + 1);
    }
    *RestartKey = result;
    return result != 0 ? (char *)result + 24 : 0;
  }
  return result;
}
