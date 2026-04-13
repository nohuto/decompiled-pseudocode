/*
 * XREFs of _CreativeFramework::Actions::MakeSetLockScreenHotspotsService_::_1_::dtor$3 @ 0x1800D617C
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180034418 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 104));
  }
}
