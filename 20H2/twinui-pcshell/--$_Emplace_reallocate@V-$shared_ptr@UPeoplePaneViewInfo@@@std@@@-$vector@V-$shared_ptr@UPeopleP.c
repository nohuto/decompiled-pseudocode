/*
 * XREFs of ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x18025CD8C
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18025FFA0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180260760 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x18021E760 (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@PEAV12@V-$allocator@V-$sha.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1802226EC (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180261DD4 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 */

unsigned __int64 __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
        _QWORD *a1,
        char *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t v10; // rcx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rcx
  char *v15; // rdx
  _QWORD *v16; // r8
  char *v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // [rsp+78h] [rbp+10h]

  v6 = (unsigned __int64)&a2[-*a1];
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  v10 = 16 * v9;
  if ( v9 > v11 )
    v10 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  try
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    *v14 = *a3;
    v14[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v19 = (__int64)v12 + v13;
    v15 = (char *)a1[1];
    v16 = v12;
    v17 = (char *)*a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        v17,
        a2,
        v12);
      v19 = (__int64)v12;
      v16 = (_QWORD *)((char *)v12 + v13 + 16);
      v15 = (char *)a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v17,
      v15,
      v16);
    std::vector<std::shared_ptr<KBViewInfo>>::_Change_array((__int64)a1, (__int64)v12, v8, v9);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<KBViewInfo>>>(v19, (__int64)v12 + v13 + 16);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}
