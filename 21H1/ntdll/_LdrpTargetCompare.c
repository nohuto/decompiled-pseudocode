/*
 * XREFs of _LdrpTargetCompare @ 0x4B3345B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl LdrpTargetCompare(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = *a2 - *a3;
  if ( a1 && result >= 0 && *a1 < (unsigned int)a3 )
    *a1 = a3;
  return result;
}
