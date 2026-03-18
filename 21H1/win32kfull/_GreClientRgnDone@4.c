/*
 * XREFs of _GreClientRgnDone@4 @ 0x1E6ED8
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E3129 (-vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 */

void GreClientRgnDone()
{
  struct TRACKOBJ *i; // esi
  int v1; // eax
  struct EWNDOBJ *j; // edi
  int v3; // [esp+Ch] [ebp-4h] BYREF

  v3 = _ghsemWndobj;
  GreAcquireSemaphore(_ghsemWndobj);
  for ( i = gpto; i; i = (struct TRACKOBJ *)*((_DWORD *)i + 1) )
  {
    v1 = *((_DWORD *)i + 6);
    if ( (v1 & 0x4000000) != 0 )
    {
      *((_DWORD *)i + 6) = v1 & 0xFBFFFFFF;
      (*((void (__stdcall **)(_DWORD, int))i + 5))(0, 64);
    }
    for ( j = (struct EWNDOBJ *)*((_DWORD *)i + 3); j; j = (struct EWNDOBJ *)*((_DWORD *)j + 32) )
      vSpWndobjChange(*(_DWORD *)(*((_DWORD *)i + 4) + 28), j);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
