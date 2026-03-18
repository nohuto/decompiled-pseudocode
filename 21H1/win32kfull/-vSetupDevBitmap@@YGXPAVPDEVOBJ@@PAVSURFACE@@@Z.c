/*
 * XREFs of ?vSetupDevBitmap@@YGXPAVPDEVOBJ@@PAVSURFACE@@@Z @ 0x2067D6
 * Callers:
 *     ?MulCreateDeviceBitmap@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@K@Z @ 0x2028BF (-MulCreateDeviceBitmap@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z @ 0x2029FA (-MulCreateDeviceBitmapEx@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@KKPAUDHSURF__@@KKPAPAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSetupDevBitmap(int a1, int a2)
{
  int v2; // esi

  v2 = a2;
  *(_DWORD *)(a2 + 72) |= 0x4000u;
  if ( (*(_DWORD *)(*(_DWORD *)a1 + 1456) & 0x100) == 0 )
  {
    LOBYTE(a2) = 8;
    *(_DWORD *)(v2 + 88) = HmgShareLockCheck(**(_DWORD **)(*(_DWORD *)a1 + 1112), a2);
  }
}
