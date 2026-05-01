/*
 * XREFs of _lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_::operator()_IVirtualDesktop___ @ 0x18040EA20
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x18040EB18 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall lambda_5e6768a93cf6a5dfe2043b6bc3c7dad2_::operator()_IVirtualDesktop___(
        int **a1,
        __int64 *a2,
        __int64 a3)
{
  *a2 = 0LL;
  if ( **a1 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(a2, a3);
    **a1 = 0;
  }
  return a2;
}
