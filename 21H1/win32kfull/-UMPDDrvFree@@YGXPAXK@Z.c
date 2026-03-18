/*
 * XREFs of ?UMPDDrvFree@@YGXPAXK@Z @ 0x20C8A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall UMPDDrvFree(PATHOBJ *a1, PATHOBJ *a2)
{
  if ( a1 && a1 >= _MmSystemRangeStart && a2 == a1 )
    Win32FreePool(a1);
}
