/*
 * XREFs of RtlMultipleFreeHeap @ 0x1800F2A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlMultipleFreeHeap(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !a3 )
    return a3;
  while ( (unsigned int)RtlFreeHeap(a1, a2, *a4) )
  {
    ++v4;
    ++a4;
    if ( v4 >= a3 )
      return a3;
  }
  return v4;
}
