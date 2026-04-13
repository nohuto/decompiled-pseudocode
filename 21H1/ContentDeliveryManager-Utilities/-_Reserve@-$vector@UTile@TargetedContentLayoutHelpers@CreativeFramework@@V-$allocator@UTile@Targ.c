/*
 * XREFs of ?_Reserve@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800A4664
 * Callers:
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A439C (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 * Callees:
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180035184 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@IEAAX_K@Z @ 0x1800A4818 (-_Reallocate@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@T.c)
 */

unsigned __int64 __fastcall std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx

  v2 = a1[2];
  v3 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - v3) * (__int128)0x4924924924924925LL) >> 64) >> 63;
  if ( !((v2 - v3) / 56) )
  {
    v5 = (v3 - *a1) / 56;
    if ( v5 == 0x492492492492492LL )
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
    v6 = v5 + 1;
    v7 = (unsigned __int128)((v2 - *a1) * (__int128)0x4924924924924925LL) >> 64;
    v8 = 0LL;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 4);
    if ( 0x492492492492492LL - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    return std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::_Reallocate(a1, v6);
  }
  return result;
}
