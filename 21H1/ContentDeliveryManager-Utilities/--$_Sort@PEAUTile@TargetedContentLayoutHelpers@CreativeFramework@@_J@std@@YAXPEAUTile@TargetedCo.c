/*
 * XREFs of ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800A62E4
 * Callers:
 *     ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800A5B8C (-SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV-$vector@V-.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800A62E4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180034B5C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800A5B58 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800A62E4 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800A670C (--$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA-AU-$pa.c)
 *     ??4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800A7BD4 (--4Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAAAEAU012@$$QEAU012@@Z.c)
 *     ??$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J1$$QEAU123@@Z @ 0x1800A7C54 (--$_Adjust_heap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_JU123@@std@@YAXPEAUTil.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

void __fastcall std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r15
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int128 v14; // xmm0
  __int64 i; // rbx
  __int64 v16; // r15
  __int128 v17; // xmm0
  __int64 j; // r14
  __int64 k; // r14
  __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  void *v22[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h]
  unsigned __int64 v24; // [rsp+48h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  char v26; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v4 = a1;
  v6 = (a2 - a1) / 56;
  if ( v6 <= 32 )
    goto LABEL_34;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(&v20, v4, v3);
    v7 = v21;
    v8 = v20;
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (v20 - v4) / 56 >= (v3 - v21) / 56 )
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v21, v3, a3);
      v3 = v8;
    }
    else
    {
      std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(v4, v20, a3);
      v4 = v7;
    }
    v6 = (v3 - v4) / 56;
  }
  while ( v6 > 32 );
  if ( v6 <= 32 )
  {
LABEL_34:
    if ( v6 > 1 && v4 != v3 )
    {
      for ( i = v4 + 56; i != v3; i += 56LL )
      {
        v24 = 7LL;
        v23 = 0LL;
        v16 = i;
        LOWORD(v22[0]) = 0;
        std::wstring::_Assign_rv(v22, (_QWORD *)i);
        v17 = *(_OWORD *)(i + 32);
        v26 = *(_BYTE *)(i + 48);
        v25 = v17;
        if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v22, v4) )
        {
          for ( j = i; j != v4; CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(j + 56, j) )
            j -= 56LL;
          v16 = v4;
        }
        else
        {
          for ( k = i - 56; CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<((__int64)v22, k); k -= 56LL )
          {
            CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v16, k);
            v16 = k;
          }
        }
        CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v16, v22);
        if ( v24 >= 8 )
          operator delete(v22[0]);
      }
    }
  }
  else
  {
    v9 = (v3 - v4) / 56;
    if ( v9 > 1 )
    {
      v10 = v9 / 2;
      if ( v9 / 2 > 0 )
      {
        v11 = v4 + 56 * v10 + 40;
        do
        {
          v11 -= 56LL;
          v24 = 7LL;
          v23 = 0LL;
          LOWORD(v22[0]) = 0;
          --v10;
          std::wstring::_Assign_rv(v22, (_QWORD *)(v11 - 40));
          v12 = *(_OWORD *)(v11 - 8);
          v26 = *(_BYTE *)(v11 + 8);
          v25 = v12;
          std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
            v4,
            v10,
            v9,
            v22);
          if ( v24 >= 8 )
            operator delete(v22[0]);
        }
        while ( v10 > 0 );
      }
      v13 = v3 - 16;
      do
      {
        v24 = 7LL;
        v23 = 0LL;
        LOWORD(v22[0]) = 0;
        std::wstring::_Assign_rv(v22, (_QWORD *)(v13 - 40));
        v14 = *(_OWORD *)(v13 - 8);
        v26 = *(_BYTE *)(v13 + 8);
        v25 = v14;
        CreativeFramework::TargetedContentLayoutHelpers::Tile::operator=(v13 - 40, v4);
        std::_Adjust_heap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64,CreativeFramework::TargetedContentLayoutHelpers::Tile>(
          v4,
          0LL,
          (-40 - v4 + v13) / 56,
          v22);
        if ( v24 >= 8 )
          operator delete(v22[0]);
        v13 -= 56LL;
      }
      while ( (16 - v4 + v13) / 56 > 1 );
    }
  }
}
