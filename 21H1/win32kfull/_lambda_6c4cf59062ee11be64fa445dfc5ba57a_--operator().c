/*
 * XREFs of _lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator() @ 0x1D10D1
 * Callers:
 *     _GreOnCURSINFODestroy@4 @ 0x78876 (_GreOnCURSINFODestroy@4.c)
 * Callees:
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

void __stdcall lambda_6c4cf59062ee11be64fa445dfc5ba57a_::operator()(int a1, int a2)
{
  GreAcquireSemaphore(a1);
  if ( gCachedSetPointerState == a2 )
    GreSetPointer(0, 0, 0, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&a1);
}
