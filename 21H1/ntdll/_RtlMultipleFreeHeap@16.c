/*
 * XREFs of _RtlMultipleFreeHeap@16 @ 0x4B356D10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlMultipleFreeHeap(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // esi

  v4 = 0;
  if ( !a3 )
    return a3;
  while ( RtlFreeHeap(a1, a2, *(_DWORD *)(a4 + 4 * v4)) )
  {
    if ( ++v4 >= a3 )
      return a3;
  }
  return v4;
}
