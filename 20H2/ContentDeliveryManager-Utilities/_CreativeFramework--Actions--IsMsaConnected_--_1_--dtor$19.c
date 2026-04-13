/*
 * XREFs of _CreativeFramework::Actions::IsMsaConnected_::_1_::dtor$19 @ 0x1800D4805
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180007250 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::IsMsaConnected_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 88));
  }
}
