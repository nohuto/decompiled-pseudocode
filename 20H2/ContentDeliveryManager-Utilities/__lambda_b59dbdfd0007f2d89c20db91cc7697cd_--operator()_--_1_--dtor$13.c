/*
 * XREFs of __lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator()_::_1_::dtor$13 @ 0x1800D2A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180034418 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator()_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 312));
  }
}
