/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x18019B17C
 * Callers:
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801997D0 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800871F4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800F8298 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x18019AF7C (--$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@In.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputInfoValidator::ValidatePointerInput(InputInfoValidator *this, struct PointerInputInfo *a2)
{
  __int64 v4; // rcx
  unsigned int i; // r12d
  int v6; // r15d
  int v7; // ebx
  __int64 appended; // rax
  __int64 v9; // r10
  _DWORD *j; // rdi
  __int64 v11; // rcx
  const char *v12; // r9
  int v13; // r11d
  char v14; // bl
  __int64 v15; // r10
  __int64 *k; // rdi
  const char *v17; // r9
  int v18; // r11d
  const unsigned __int8 **v19; // rsi
  const unsigned __int8 *m; // rdi
  int v21; // ebx
  const char *v22; // r9
  _QWORD *v23; // rax
  void *v24; // rdi
  unsigned __int64 v25; // rcx
  _QWORD **v26; // rbx
  _QWORD *n; // rdi
  __int64 v28; // rcx
  _QWORD *v30; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v31; // [rsp+28h] [rbp-58h]
  _BYTE v32[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v34; // [rsp+48h] [rbp-38h]
  _QWORD v35[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v36; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  int v38; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v39; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v40; // [rsp+D8h] [rbp+58h] BYREF

  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)&v33);
  for ( i = 0; i < *((_DWORD *)a2 + 53); ++i )
  {
    v6 = *((_DWORD *)a2 + 36 * i + 55);
    LODWORD(v39) = v6;
    v7 = *((_DWORD *)a2 + 36 * i + 57);
    HIDWORD(v39) = v7;
    v38 = v6;
    appended = std::_Fnv1a_append_bytes(18LL * i, (const unsigned __int8 *const)&v38, 4uLL);
    v9 = appended & v36;
    for ( j = *(_DWORD **)(v35[0] + 16 * (appended & v36));
          j != (_DWORD *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                            (__int64)&v33,
                            &v40,
                            v9);
          j = *(_DWORD **)j )
    {
      if ( j[4] == v6 )
        goto LABEL_7;
    }
    j = v34;
LABEL_7:
    if ( j != (_DWORD *)v34 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        68LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v12);
      __debugbreak();
    }
    v13 = v7 & 2;
    if ( (v7 & 4) != 0 )
    {
      v14 = 1;
      if ( !v13 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          80LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v12);
        __debugbreak();
      }
    }
    else
    {
      v14 = 0;
    }
    v38 = v6;
    v15 = std::_Fnv1a_append_bytes(v11, (const unsigned __int8 *const)&v38, 4uLL) & *((_QWORD *)this + 8);
    for ( k = *(__int64 **)(*((_QWORD *)this + 5) + 16 * v15);
          k != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                             (__int64)this + 16,
                             &v30,
                             v15);
          k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 4) == v6 )
        goto LABEL_17;
    }
    k = (__int64 *)*((_QWORD *)this + 3);
LABEL_17:
    if ( k == *((__int64 **)this + 3) )
    {
      if ( !v18 && !v14 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          133LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v17);
        __debugbreak();
      }
    }
    else if ( (*(__int64 *)((char *)k + 20) & 0x200000000LL) == 0
           && (*(__int64 *)((char *)k + 20) & 0x400000000LL) == 0
           && !v18
           && !v14 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        115LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v17);
      __debugbreak();
    }
    v38 = v6;
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      &v33,
      (__int64)v32,
      (unsigned __int8 *)&v38,
      &v39);
  }
  v19 = (const unsigned __int8 **)*((_QWORD *)this + 3);
  for ( m = *v19; m != (const unsigned __int8 *)v19; m = *(const unsigned __int8 **)m )
  {
    v21 = *((_DWORD *)m + 6) & 2;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      &v33,
      &v30,
      m + 20);
    v23 = v30;
    v4 = 0LL;
    while ( v23 != v31 )
    {
      ++v4;
      v23 = (_QWORD *)*v23;
    }
    if ( v21 )
    {
      if ( !v4 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          157LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v22);
        __debugbreak();
      }
    }
  }
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v4,
    (_QWORD **)v19);
  **((_QWORD **)this + 3) = *((_QWORD *)this + 3);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  v24 = (void *)*((_QWORD *)this + 5);
  v25 = (unsigned __int64)(*((_QWORD *)this + 6) - (_QWORD)v24 + 7LL) >> 3;
  if ( (unsigned __int64)v24 > *((_QWORD *)this + 6) )
    v25 = 0LL;
  if ( v25 )
    memset64(v24, *((_QWORD *)this + 3), v25);
  v26 = v34;
  for ( n = *v34; n != v26; n = (_QWORD *)*n )
  {
    v30 = (_QWORD *)n[2];
    LODWORD(v31) = *((_DWORD *)n + 6);
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::_Insert_or_assign<unsigned long const &,InputInfoValidator::PointerState &>(
      (_QWORD *)this + 2,
      (__int64)v32,
      (unsigned __int8 *)&v30 + 4,
      (_QWORD **)((char *)&v30 + 4));
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)v35);
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v28,
    v34);
  std::_Deallocate<16,0>(v34, (const struct std::nothrow_t *)0x20);
  return 0LL;
}
