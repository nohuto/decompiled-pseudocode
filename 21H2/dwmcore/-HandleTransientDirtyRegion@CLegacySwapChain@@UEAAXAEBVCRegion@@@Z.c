/*
 * XREFs of ?HandleTransientDirtyRegion@CLegacySwapChain@@UEAAXAEBVCRegion@@@Z @ 0x18028B574
 * Callers:
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x180108FF0 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXAEBVCRegion@@@Z @ 0x180109FF0 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BI@EAAXAEBVCRegion@@@Z.c)
 *     ?HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXAEBVCRegion@@@Z @ 0x18010A610 (-HandleTransientDirtyRegion@CLegacySwapChain@@$4PPPPPPPM@BKI@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLegacySwapChain::HandleTransientDirtyRegion(
        CLegacySwapChain *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CSwapChainBuffer::AddTransientRegion(
    *(CSwapChainBuffer **)(*((_QWORD *)this - 37) + 8LL * *((unsigned int *)this - 68)),
    a2);
}
