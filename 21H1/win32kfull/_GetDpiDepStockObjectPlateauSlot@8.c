/*
 * XREFs of _GetDpiDepStockObjectPlateauSlot@8 @ 0x1F3723
 * Callers:
 *     _GreEnsureDpiDepDefaultGuiFontForPlateau@4 @ 0x1F3762 (_GreEnsureDpiDepDefaultGuiFontForPlateau@4.c)
 * Callees:
 *     <none>
 */

int __fastcall GetDpiDepStockObjectPlateauSlot(int a1, int a2)
{
  int v2; // esi

  v2 = -3;
  if ( a1 == a2 )
    return -2;
  if ( a1 == 96 )
    return -1;
  if ( !(a1 % 24) && (unsigned int)(a1 - 120) <= 0x168 )
    return (a1 - 120) / 24;
  return v2;
}
