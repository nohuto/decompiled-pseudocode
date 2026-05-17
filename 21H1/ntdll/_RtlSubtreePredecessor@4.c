/*
 * XREFs of _RtlSubtreePredecessor@4 @ 0x4B2E7900
 * Callers:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _RtlDeleteNoSplay@8 @ 0x4B2E77B0 (_RtlDeleteNoSplay@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSubtreePredecessor(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4);
  if ( !result )
    return 0;
  while ( *(_DWORD *)(result + 8) )
    result = *(_DWORD *)(result + 8);
  return result;
}
