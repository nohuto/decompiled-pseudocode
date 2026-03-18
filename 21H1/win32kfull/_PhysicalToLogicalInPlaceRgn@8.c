/*
 * XREFs of _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 * Callees:
 *     _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6 (_PhysicalToLogicalInPlaceRgnWorker@12.c)
 */

int PhysicalToLogicalInPlaceRgn()
{
  return PhysicalToLogicalInPlaceRgnWorker(0);
}
