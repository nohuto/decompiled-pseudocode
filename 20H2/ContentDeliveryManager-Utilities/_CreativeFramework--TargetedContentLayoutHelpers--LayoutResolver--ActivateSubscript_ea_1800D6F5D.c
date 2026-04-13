/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::dtor$6 @ 0x1800D6F5D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007250 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~4u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 48));
  }
}
