/*
 * XREFs of ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x1801A11B8
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x1801A14BC (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180146F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x1801A13E4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V-$allocator@UParsedPenWorkspaceLayou.c)
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1801A16BC (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x1801A3540 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<ParsedTaskbarLayout>::_Emplace_reallocate<ParsedTaskbarLayout>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  size_t v10; // rcx
  _QWORD *v11; // r12
  _QWORD *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp+8h]

  v4 = (a2 - *a1) / 136;
  v5 = (a1[1] - *a1) / 136;
  if ( v5 == 0x1E1E1E1E1E1E1E1LL )
    std::_Xlength_error("vector<T> too long");
  v6 = v5 + 1;
  v7 = (a1[2] - *a1) / 136;
  v8 = v7 >> 1;
  if ( v7 <= 0x1E1E1E1E1E1E1E1LL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v10 = 136 * v9;
  if ( v9 > 0x1E1E1E1E1E1E1E1LL )
    v10 = -1LL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v18 = 136 * v4;
  v12 = &v11[17 * v4];
  try
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    v12[2] = 0LL;
    v12[3] = 0LL;
    v13 = *a3;
    v14 = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[3] = 0LL;
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)v12);
    *v12 = v13;
    v12[1] = v14;
    v12[3] = v14;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
      (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v12 + 4),
      (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a3 + 4));
    v19 = (__int64)v12;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *,ParsedPenWorkspaceLayout *,std::allocator<ParsedPenWorkspaceLayout>>(
        v16,
        v15,
        v11,
        a1);
    }
    else
    {
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *,ParsedPenWorkspaceLayout *,std::allocator<ParsedPenWorkspaceLayout>>(
        v16,
        a2,
        v11,
        a1);
      v19 = (__int64)v11;
      std::_Uninitialized_move<ParsedPenWorkspaceLayout *,ParsedPenWorkspaceLayout *,std::allocator<ParsedPenWorkspaceLayout>>(
        a2,
        a1[1],
        v12 + 17,
        a1);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(v19, (__int64)(v12 + 17));
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(136 * v9));
    throw;
  }
  std::vector<ParsedPenWorkspaceLayout>::_Change_array(a1, v11, v6, v9);
  return v18 + *a1;
}
