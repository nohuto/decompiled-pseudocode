/*
 * XREFs of _CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor$11 @ 0x1800D4EFF
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180034868 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeAppInstallService_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 100) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 100) &= ~2u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 152));
  }
}
