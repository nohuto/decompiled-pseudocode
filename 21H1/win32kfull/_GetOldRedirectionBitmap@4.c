/*
 * XREFs of _GetOldRedirectionBitmap@4 @ 0x6E504
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int GetOldRedirectionBitmap()
{
  int v0; // esi
  int Prop; // eax

  v0 = 0;
  Prop = _GetProp(1);
  if ( Prop )
    return *(_DWORD *)(Prop + 4);
  return v0;
}
