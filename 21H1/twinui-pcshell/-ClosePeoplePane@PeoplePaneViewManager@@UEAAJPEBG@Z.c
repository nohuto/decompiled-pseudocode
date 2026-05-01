/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x18023CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UKBViewInfo@@@0@0AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x1801FB064 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18023CE68 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023D048 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@@Z @ 0x18023D280 (-FindShareViewInfosByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$vector@V-$shared_ptr@UPeopl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PeoplePaneViewManager::ClosePeoplePane(PeoplePaneViewManager *this, const unsigned __int16 *a2)
{
  char *v3; // rsi
  PeoplePaneViewManager *v4; // rcx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int ShareViewInfosByContactId; // eax
  PeoplePaneViewManager *v9; // rcx
  void *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  struct IApplicationView *v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v15 = 0LL;
  v3 = (char *)this - 88;
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, &v15) >= 0 )
  {
    v5 = *(struct IApplicationView **)(v15 + 32);
    if ( v5 )
    {
      v6 = PeoplePaneViewManager::CloseView(v4, v5);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x194,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_14;
      }
    }
  }
  v16 = 0LL;
  v17 = 0LL;
  ShareViewInfosByContactId = PeoplePaneViewManager::FindShareViewInfosByContactId(v3, a2, &v16);
  v7 = ShareViewInfosByContactId;
  v10 = (void *)v16;
  if ( ShareViewInfosByContactId >= 0 )
  {
    v12 = v16;
    if ( (_QWORD)v16 == *((_QWORD *)&v16 + 1) )
    {
LABEL_11:
      v7 = 0;
      goto LABEL_12;
    }
    while ( 1 )
    {
      v13 = *(struct IApplicationView **)(*(_QWORD *)v12 + 32LL);
      if ( v13 )
      {
        ShareViewInfosByContactId = PeoplePaneViewManager::CloseView(v9, v13);
        v7 = ShareViewInfosByContactId;
        if ( ShareViewInfosByContactId < 0 )
          break;
      }
      v12 += 16LL;
      if ( v12 == *((_QWORD *)&v16 + 1) )
        goto LABEL_11;
    }
    v11 = 415LL;
  }
  else
  {
    v11 = 410LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ShareViewInfosByContactId);
LABEL_12:
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>((__int64)v10, *((__int64 *)&v16 + 1));
    std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v17 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL));
  }
LABEL_14:
  if ( *((_QWORD *)&v15 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v15 + 1));
  return v7;
}
