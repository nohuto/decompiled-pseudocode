/*
 * XREFs of ?GetComputeScribbleRenderer@CLegacySwapChain@@UEAAJPEAPEAVCComputeScribbleRenderer@@@Z @ 0x18024A9A4
 * Callers:
 *     ?GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAPEAVCComputeScribbleRenderer@@@Z @ 0x1800EEB10 (-GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAJPEAPEAVCComputeScribbleRenderer@@.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CLegacySwapChain::GetComputeScribbleRenderer(
        CLegacySwapChain *this,
        struct CComputeScribbleRenderer **a2)
{
  struct CComputeScribbleRenderer *v2; // rcx

  *a2 = 0LL;
  v2 = (struct CComputeScribbleRenderer *)*((_QWORD *)this - 10);
  if ( v2 )
  {
    *a2 = v2;
    CMILCOMBase::InternalAddRef(v2);
  }
  return 0LL;
}
