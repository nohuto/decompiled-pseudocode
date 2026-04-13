/*
 * XREFs of ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A9690
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A8D6C (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800A8D6C.c)
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A9828 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800A9828.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180078B50 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *i; // rdi
  __int64 *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // al
  __int64 *j; // rbx
  __int64 v10; // rbx
  __int64 *k; // r14
  char v12; // al
  __int64 v13; // rcx
  char v14; // dl
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; ; i += 2 )
    {
      if ( i == a2 )
        return;
      v5 = i;
      v15 = 0LL;
      if ( &v15 == (__int128 *)i )
      {
        v7 = v15;
      }
      else
      {
        v6 = i[1];
        v7 = *i;
        i[1] = 0LL;
        *i = 0LL;
        *((_QWORD *)&v15 + 1) = v6;
        *(_QWORD *)&v15 = v7;
      }
      v8 = *(_BYTE *)(v7 + 16);
      if ( v8 )
      {
        if ( !*(_BYTE *)(*a1 + 16) )
          goto LABEL_13;
        v8 = *(double *)(*a1 + 24) > *(double *)(v7 + 24);
      }
      else if ( !*(_BYTE *)(*a1 + 16) )
      {
        v8 = *(_DWORD *)(v7 + 20) < *(_DWORD *)(*a1 + 20);
      }
      if ( v8 )
      {
LABEL_13:
        for ( j = i; j != a1; std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(
                                j + 2,
                                j) )
          j -= 2;
        v5 = a1;
        goto LABEL_16;
      }
      for ( k = i; ; v5 = k )
      {
        v12 = *(_BYTE *)(v7 + 16);
        k -= 2;
        v13 = *k;
        v14 = *(_BYTE *)(*k + 16);
        if ( v12 )
        {
          if ( v14 )
            v12 = *(double *)(v13 + 24) > *(double *)(v7 + 24);
        }
        else if ( !v14 )
        {
          v12 = *(_DWORD *)(v7 + 20) < *(_DWORD *)(v13 + 20);
        }
        if ( !v12 )
          break;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v5, k);
      }
LABEL_16:
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v5, (__int64 *)&v15);
      if ( *((_QWORD *)&v15 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
  }
}
