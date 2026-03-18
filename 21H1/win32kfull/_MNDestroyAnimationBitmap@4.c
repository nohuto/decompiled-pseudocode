/*
 * XREFs of _MNDestroyAnimationBitmap@4 @ 0x184536
 * Callers:
 *     _xxxMNEndMenuStateInternal@8 @ 0x1848C0 (_xxxMNEndMenuStateInternal@8.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 * Callees:
 *     <none>
 */

int __thiscall MNDestroyAnimationBitmap(_DWORD *this)
{
  int StockObject; // eax
  int result; // eax

  StockObject = GreGetStockObject(21);
  GreSelectBitmap(this[24], StockObject);
  result = GreDeleteObject(this[23]);
  this[23] = 0;
  return result;
}
