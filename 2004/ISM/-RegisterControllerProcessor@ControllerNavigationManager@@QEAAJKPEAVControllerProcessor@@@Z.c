/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18011D770
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180120AA0 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert@AEAKAEAPEAVControllerProcessor@@@?$list@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x1800F65C8 (--$_Insert@AEAKAEAPEAVControllerProcessor@@@-$list@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKUtagPOINT@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUtagPOINT@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@1@@Z @ 0x1800F6FC4 (--$_Insert_unverified@AEAU-$pair@$$CBKUtagPOINT@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1801210E0 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180121150 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z @ 0x1801224C4 (-SetControllerVirtualKeyMappings@ControllerProcessor@@SAJ_N@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123740 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r15
  __int64 **v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v9; // xmm6
  struct tagPOINT *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 i; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD); // rbx
  __int64 (__fastcall ***v19)(_QWORD); // rsi
  unsigned int v20; // edi
  struct tagRECT v21; // xmm6
  struct tagPOINT *v22; // rax
  struct tagRECT v24; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 (__fastcall ***v26)(_QWORD); // [rsp+80h] [rbp+30h] BYREF
  int v27; // [rsp+88h] [rbp+38h] BYREF
  ControllerProcessor *v28; // [rsp+90h] [rbp+40h] BYREF

  v28 = a3;
  v27 = a2;
  v4 = *((_QWORD *)this + 10) == 0LL;
  v5 = (__int64 **)((char *)this + 72);
  std::list<std::pair<unsigned long const,ControllerProcessor *>>::_Insert<unsigned long &,ControllerProcessor * &>(
    (__int64)this + 72,
    **((_QWORD **)this + 9),
    &v27,
    &v28);
  std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_Insert_unverified<std::pair<unsigned long const,tagPOINT> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINT>>>>>(
    (_QWORD *)this + 8,
    (__int64)&v24,
    (const unsigned __int8 *)(**v5 + 16),
    **v5);
  v6 = ControllerProcessor::SetControllerVirtualKeyMappings(*((_BYTE *)this + 228));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      46LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 32LL))(v7 + 8) )
    {
      ControllerProcessor::UpdateNavigationState(v28, 1LL, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v9 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v10 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v24 = v9;
      ControllerProcessor::NavigationResume(v28, v8, &v24, *v10);
    }
  }
  v11 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v11 = 0x100000001B3LL * (*((unsigned __int8 *)this + i + 224) ^ (unsigned __int64)v11);
  v13 = 2 * (v11 & *((_QWORD *)this + 22));
  v14 = *((_QWORD *)this + 19);
  v15 = *(__int64 **)(v14 + 16 * (v11 & *((_QWORD *)this + 22)));
  v16 = (__int64 *)*((_QWORD *)this + 17);
  while ( 1 )
  {
    v17 = *(__int64 **)(v14 + 8 * v13) == v16 ? (__int64 *)*((_QWORD *)this + 17) : **(__int64 ***)(v14 + 8 * v13 + 8);
    if ( v15 == v17 )
      break;
    if ( *((_DWORD *)v15 + 4) == *((_DWORD *)this + 56) )
      goto LABEL_17;
    v15 = (__int64 *)*v15;
  }
  v15 = (__int64 *)*((_QWORD *)this + 17);
LABEL_17:
  if ( v15 != v16 )
  {
    v26 = (__int64 (__fastcall ***)(_QWORD))v15[3];
    v18 = v26;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v26);
    v19 = v18 + 1;
    if ( (unsigned __int8)v18[1][4](v18 + 1) )
    {
      v20 = (*v19)[5](v18 + 1);
      v21 = *(struct tagRECT *)(*v19)[6](v18 + 1);
      v22 = (struct tagPOINT *)(*v19)[7](v18 + 1);
      v24 = v21;
      ControllerProcessor::NavigationEnable(v28, v20, &v24, *v22, 1, v4);
    }
    else
    {
      ControllerProcessor::UpdateNavigationState(v28, 2LL, 0LL);
    }
    if ( v18 )
      (*v18)[1](v18);
  }
  return 0LL;
}
