/*
 * XREFs of _XDCOBJ_vSetDefaultFontWrap@8 @ 0x91C56
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall XDCOBJ_vSetDefaultFontWrap(int a1, int a2)
{
  void *StockObject; // esi
  int result; // eax

  if ( a2 )
    StockObject = (void *)GreGetStockObject(13);
  else
    StockObject = gahStockObjects[14];
  result = HmgShareLockCheck(StockObject, 10);
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 1020) + 300) = StockObject;
  *(_DWORD *)(*(_DWORD *)a1 + 100) = result;
  return result;
}
