/*
 * XREFs of ??$_Buffered_rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@@Z @ 0x1800AA6A4
 * Callers:
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A97A0 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 *     ??$_Buffered_merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@00_J1AEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A9EB4 (--$_Buffered_merge@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFram_ea_1800A9EB4.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180078FA0 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800A8CD4 (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ?_Maxlen@?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA_JXZ @ 0x1800A92B4 (-_Maxlen@-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@s.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800AA3B0 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 *     ??$rotate@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@YAPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@PEAV10@00@Z @ 0x1800AAC3C (--$rotate@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@YAP.c)
 */

__int64 *__fastcall std::_Buffered_rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v9; // rcx
  signed __int64 v10; // rdi
  __int64 **v11; // rax
  __int64 *v12; // rdi
  __int64 *j; // rbx
  _QWORD *v15; // rcx
  signed __int64 v16; // rsi
  __int64 **v17; // rax
  __int64 *v18; // rsi
  __int64 *i; // rbx
  __int128 v20; // [rsp+20h] [rbp-50h] BYREF
  __int128 v21; // [rsp+30h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  _QWORD *v23[5]; // [rsp+48h] [rbp-28h] BYREF

  if ( a4 > a5
    || a4 > std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(a6) )
  {
    if ( a5 > std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Maxlen(a6) )
    {
      std::rotate<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *>(a1, a2, a3);
      return &a1[2 * a5];
    }
    else
    {
      v15 = *(_QWORD **)(a6 + 32);
      v20 = 0LL;
      v15[1] = *v15;
      v22 = *(_QWORD *)(a6 + 32);
      v21 = 0LL;
      std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
        v23,
        a2,
        a3,
        (__int64)&v20);
      std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v23);
      if ( a2 != a1 )
      {
        v16 = (char *)a3 - (char *)a2;
        do
        {
          a2 -= 2;
          std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(
            (__int64 *)((char *)a2 + v16),
            a2);
        }
        while ( a2 != a1 );
      }
      v17 = *(__int64 ***)(a6 + 32);
      v18 = v17[1];
      for ( i = *v17; i != v18; i += 2 )
      {
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, i);
        a1 += 2;
      }
      return a1;
    }
  }
  else
  {
    v9 = *(_QWORD **)(a6 + 32);
    v20 = 0LL;
    v9[1] = *v9;
    v22 = *(_QWORD *)(a6 + 32);
    v21 = 0LL;
    std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
      v23,
      a1,
      a2,
      (__int64)&v20);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v23);
    if ( a2 != a3 )
    {
      v10 = (char *)a1 - (char *)a2;
      do
      {
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(
          (__int64 *)((char *)a2 + v10),
          a2);
        a2 += 2;
      }
      while ( a2 != a3 );
    }
    v11 = *(__int64 ***)(a6 + 32);
    v12 = *v11;
    for ( j = v11[1]; j != v12; std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a3, j) )
    {
      j -= 2;
      a3 -= 2;
    }
    return a3;
  }
}
