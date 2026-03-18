/*
 * XREFs of ?OnSceneLost@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801BBBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneLost(CCompositionMipmapSurface *this, struct ISpectreRenderer *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  return 0LL;
}
