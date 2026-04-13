/*
 * XREFs of ??$_Unguarded_partition@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AU?$pair@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@0@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800AAE4C
 * Callers:
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800AAA24 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 * Callees:
 *     ??MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z @ 0x1800AA298 (--MTile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA_NAEBU012@@Z.c)
 *     ??$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0@Z @ 0x1800AB430 (--$iter_swap@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@PEAU123@@std@@YAXPEAUTile@.c)
 */

unsigned __int64 *__fastcall std::_Unguarded_partition<CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v5; // r12
  unsigned __int64 v6; // r15
  signed __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // kr08_8
  __int64 v10; // r12
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 *result; // rax
  __int64 v24; // [rsp+68h] [rbp+10h]

  v5 = a1;
  v6 = a3 - 56;
  v7 = a3 - 56 - a2;
  v8 = a2 + 56 * ((__int64)(a3 - a2) / 112);
  if ( v7 / 56 <= 40 )
  {
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a2 + 56 * ((__int64)(a3 - a2) / 112), a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a3 - 56, v8) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
  }
  else
  {
    v9 = v7 / 56 + 1;
    v10 = 56 * (v9 / 8);
    v24 = 112 * (v9 / 8);
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v10 + a2, a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(112 * (v9 / 8) + a2, 56 * (v9 / 8) + a2) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(56 * (v9 / 8) + a2, a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v8 - v10) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v10 + v8, v8) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v8 - v10) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v6 - v10, v6 - v24) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(a3 - 56, v6 - v10) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v6 - v10, v6 - v24) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, 56 * (v9 / 8) + a2) )
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v6 - v10, v8) )
    {
      ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, 56 * (v9 / 8) + a2) )
        ((void (*)(void))std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>)();
    }
    v5 = a1;
  }
  v11 = v8 + 56;
  if ( a2 < v8 )
  {
    do
    {
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8 - 56, v8) )
        break;
      if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v12) )
        break;
      v8 = v13;
    }
    while ( a2 < v13 );
  }
  while ( v11 < a3
       && !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v11, v8)
       && !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v11) )
    v11 += 56LL;
  v14 = v11;
  v15 = v8;
  while ( 1 )
  {
    while ( v14 < a3 )
    {
      if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v14) )
      {
        if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v14, v8) )
          break;
        v16 = v11;
        v11 += 56LL;
        std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
          v16,
          v14);
      }
      v14 += 56LL;
    }
    v17 = v15 == a2;
    if ( v15 > a2 )
    {
      v18 = v15 - 56;
      do
      {
        if ( !CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v18, v8) )
        {
          if ( CreativeFramework::TargetedContentLayoutHelpers::Tile::operator<(v8, v18) )
            break;
          v8 -= 56LL;
          std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
            v8,
            v19);
        }
        v15 -= 56LL;
        v18 -= 56LL;
      }
      while ( a2 < v15 );
      v17 = v15 == a2;
    }
    if ( v17 )
      break;
    v15 -= 56LL;
    if ( v14 == a3 )
    {
      v8 -= 56LL;
      if ( v15 != v8 )
        std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
          v15,
          v8);
      v11 -= 56LL;
      v21 = v8;
      v20 = v11;
    }
    else
    {
      v21 = v14;
      v20 = v15;
      v14 += 56LL;
    }
LABEL_60:
    std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
      v21,
      v20);
  }
  if ( v14 != a3 )
  {
    if ( v11 != v14 )
      std::iter_swap<CreativeFramework::TargetedContentLayoutHelpers::Tile *,CreativeFramework::TargetedContentLayoutHelpers::Tile *>(
        v8,
        v11);
    v20 = v14;
    v11 += 56LL;
    v14 += 56LL;
    v21 = v8;
    v8 += 56LL;
    goto LABEL_60;
  }
  *v5 = v8;
  result = v5;
  v5[1] = v11;
  return result;
}
