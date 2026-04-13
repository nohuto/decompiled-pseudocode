/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$16 @ 0x1800D73A6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007250 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor_16(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~8u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 72));
  }
}
