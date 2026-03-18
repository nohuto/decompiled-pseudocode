/*
 * XREFs of MNDestroyAnimationBitmap @ 0x1C02224A4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0222DE0 (xxxMNEndMenuStateInternal.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNDestroyAnimationBitmap(__int64 a1)
{
  __int64 StockObject; // rax
  __int64 result; // rax

  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(a1 + 136), StockObject);
  result = GreDeleteObject(*(_QWORD *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  return result;
}
