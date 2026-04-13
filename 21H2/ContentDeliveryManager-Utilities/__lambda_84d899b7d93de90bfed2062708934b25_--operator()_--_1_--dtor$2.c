/*
 * XREFs of __lambda_84d899b7d93de90bfed2062708934b25_::operator()_::_1_::dtor$2 @ 0x1800D74CC
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800350B8 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall _lambda_84d899b7d93de90bfed2062708934b25_::operator()_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile((void **)(a2 + 96));
  }
}
