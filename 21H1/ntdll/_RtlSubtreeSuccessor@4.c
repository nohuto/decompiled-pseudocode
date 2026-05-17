/*
 * XREFs of _RtlSubtreeSuccessor@4 @ 0x4B35E070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlSubtreeSuccessor(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    while ( *(_DWORD *)(result + 4) )
      result = *(_DWORD *)(result + 4);
  }
  return result;
}
