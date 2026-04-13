/*
 * XREFs of _std::money_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getmfld_::_1_::dtor$9 @ 0x1800D5AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180032208 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall std::money_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getmfld_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 152));
  }
}
