/*
 * XREFs of ExceptionHandler@16 @ 0x4B3087C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall ExceptionHandler(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) == 0 )
  {
    *a4 = *(_DWORD *)(a2 + 8);
    return 2;
  }
  return result;
}
