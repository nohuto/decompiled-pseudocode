/*
 * XREFs of ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B2D94
 * Callers:
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAI@Z @ 0x180068FC0 (-SetManipulationInputTarget@@YAHIPEAXIPEAI@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     ??$_Try_emplace@AEBI$$V@?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800AE208 (--$_Try_emplace@AEBI$$V@-$unordered_map@IV-$vector@IV-$allocator@I@std@@@std@@U-$hash@I@2@U-$equ.c)
 *     ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x1800AE774 (--0-$vector@IV-$allocator@I@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?RouteCachedInput@Win32kInterop@@CAXXZ @ 0x1800B2B00 (-RouteCachedInput@Win32kInterop@@CAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800B3F1C (-clear@-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@std@@V12@@2@AEBI@Z @ 0x1800B3F8C (-equal_range@-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B4060 (-erase@-$_Hash@V-$_Umap_traits@IV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@IU-$hash@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::UpdateGestureTargetingDecisions(int a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r11
  int v8; // ebx
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rsi
  bool v14; // zf
  _BYTE *v15; // rdi
  unsigned int v16; // r14d
  _DWORD *v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // r8
  int v22; // eax
  _QWORD *v23; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-28h]
  void *v25; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *v26; // [rsp+38h] [rbp-18h]
  int v27; // [rsp+90h] [rbp+40h] BYREF
  void *v28; // [rsp+A8h] [rbp+58h]

  v27 = a1;
  v4 = a2;
  v28 = &Win32kInterop::s_inputInfoCachedLock;
  v5 = _Mtx_lock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
  if ( v5 )
    std::_Throw_C_error(v5);
  v7 = qword_180209BC0 & std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v27, 4uLL);
  v8 = v27;
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)&Win32kInterop::s_frameIdToPointerIdMap,
           &v23,
           v7);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == v8 )
      goto LABEL_8;
  }
  v10 = qword_180209B98;
LABEL_8:
  if ( v10 != qword_180209B98 )
  {
    std::unordered_map<unsigned int,std::vector<unsigned int>>::_Try_emplace<unsigned int const &,>(
      qword_180209B98,
      (__int64)&v23,
      (const unsigned __int8 *)&v27);
    std::vector<unsigned int>::vector<unsigned int>(&v25, (__int64)(v23 + 3));
    v12 = v4;
    v13 = 0LL;
    v14 = (_DWORD)v4 == 0;
    v15 = v26;
    if ( !v14 )
    {
      do
      {
        v16 = a3[v13];
        v17 = v25;
        while ( v17 != (_DWORD *)v15 )
        {
          if ( *v17 == v16 )
          {
            memmove_0(v17, v17 + 1, v15 - (_BYTE *)(v17 + 1));
            v15 -= 4;
          }
          else
          {
            ++v17;
          }
        }
        v26 = v15;
        ++v13;
      }
      while ( v13 != v12 );
    }
    if ( v25 == v15 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::equal_range(
        v11,
        &v23,
        &v27);
      v18 = v23;
      v19 = v23;
      v20 = v24;
      while ( v19 != v24 )
        v19 = (_QWORD *)*v19;
      if ( v23 == *(_QWORD **)qword_180209B98 && v24 == (_QWORD *)qword_180209B98 )
      {
        std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::clear();
      }
      else
      {
        while ( v18 != v20 )
        {
          v21 = v18;
          v18 = (_QWORD *)*v18;
          std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::erase(
            &Win32kInterop::s_frameIdToPointerIdMap,
            &v23,
            v21);
        }
      }
    }
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v25);
  }
  if ( !qword_180209BA0 )
  {
    while ( qword_180209BF0 )
      Win32kInterop::RouteCachedInput();
  }
  v22 = _Mtx_unlock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
  if ( v22 )
    std::_Throw_C_error(v22);
}
