/*
 * XREFs of ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800A7C54
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800A62E4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800A5B58 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     ??4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A7BD4 (--4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z.c)
 */

__int64 __fastcall std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r10
  bool v10; // al
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r8

  v6 = 2 * a2 + 2;
  v7 = a2;
  while ( v6 < a3 )
  {
    v10 = CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a1 + 56 * v6, a1 + 56 * v6 - 56);
    v13 = v11 - 1;
    if ( !v10 )
      v13 = v11;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a1 + 56 * v12, a1 + 56 * v13);
    v7 = v13;
    v6 = 2 * v13 + 2;
  }
  if ( v6 == a3 )
  {
    CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a1 + 56 * v7, 56 * a3 + a1 - 56);
    v7 = a3 - 1;
  }
  if ( a2 < v7 )
  {
    do
    {
      v14 = (v7 - 1) / 2;
      if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a1 + 56 * v14, a4) )
        break;
      CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a1 + 56 * v7, v15);
      v7 = v14;
    }
    while ( a2 < v14 );
  }
  return CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(a1 + 56 * v7, a4);
}
