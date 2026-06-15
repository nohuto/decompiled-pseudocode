/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@1@@Z @ 0x1800EA218
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@1@@Z @ 0x1800EA218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1800EA218.c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800EB280 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@1@@Z @ 0x1800EA218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_1800EA218.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rbx
  std::_Ref_count_base *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  unsigned __int64 v10; // rdx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    v7 = v6[8];
    if ( v7 )
    {
      if ( *(_QWORD *)v7 )
      {
        SetThreadpoolTimer(*(PTP_TIMER *)v7, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)v7, 1);
        CloseThreadpoolTimer(*(PTP_TIMER *)v7);
      }
      v8 = *(std::_Ref_count_base **)(v7 + 16);
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
      v9 = *(std::_Ref_count_base **)(v7 + 16);
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      operator delete((void *)v7, (const struct std::nothrow_t *)0x20);
    }
    v10 = v6[7];
    if ( v10 >= 8 )
      std::_Deallocate<16,0>((void *)v6[4], (const struct std::nothrow_t *)(2 * v10 + 2));
    v6[6] = 0LL;
    v6[7] = 7LL;
    *((_WORD *)v6 + 16) = 0;
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x48);
  }
}
