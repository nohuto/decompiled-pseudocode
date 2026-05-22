/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050DC (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F53C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18008DDA8 (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ??$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x18012B690 (--$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013AE78 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x18013EFD8 (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::CreateCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  wil::details::in1diag3 *v9; // r10
  _QWORD *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int CustomCursorShapeAnimation; // eax
  const char *v18; // r9
  int v20[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  _BYTE v25[56]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v27; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v28 = a3;
  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      207LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    v27 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    v7 = v27;
    if ( v27 != *((_DWORD *)this + 18) && !SystemCursorController::IsApplicationPeer(this, v27) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        211LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a3) != 1 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        217LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    if ( *(_DWORD *)((char *)&v28 + 2) != v6 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        221LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( !SystemCursorController::IsApplicationPeer(this, v7) )
      wil::details::in1diag3::_Throw_Hr(
        v9,
        222LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    v10 = (_QWORD *)((char *)this + 80);
    v11 = *((_QWORD *)this + 10);
    v12 = *(_QWORD *)(v11 + 8);
    if ( *(_BYTE *)(v12 + 25) )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v12 + 32) >= v7 )
      {
        v11 = v12;
        v12 = *(_QWORD *)v12;
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    while ( !*(_BYTE *)(v12 + 25) );
    if ( v11 == *v10 || v7 < *(_DWORD *)(v11 + 32) )
    {
LABEL_22:
      *(_QWORD *)v20 = &v27;
      v11 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               (__int64 *)this + 10,
               &v21,
               (__int64 *)v11,
               (__int64)v10,
               (_DWORD **)v20);
      v7 = v27;
    }
    v13 = *(volatile signed __int32 **)(v11 + 48);
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = *(volatile signed __int32 **)(v11 + 48);
      v7 = v27;
    }
    v23 = *(_QWORD *)(v11 + 40);
    v24 = v13;
    v29 = a3;
    v14 = (_QWORD *)(v23 + 16);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
      (_QWORD *)(v23 + 16),
      v22,
      (const unsigned __int8 *)&v29);
    v15 = (_QWORD *)v22[0];
    v16 = 0LL;
    while ( v15 != (_QWORD *)v22[1] )
    {
      ++v16;
      v15 = (_QWORD *)*v15;
    }
    if ( !v16 )
    {
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
        v14,
        (__int64)v25,
        (const unsigned __int8 *)&v29);
      v7 = v27;
    }
    CustomCursorShapeAnimation = SystemCursorService::CreateCustomCursorShapeAnimation(
                                   *((SystemCursorService **)this + 12),
                                   v7,
                                   v6,
                                   a3);
    if ( CustomCursorShapeAnimation < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        232LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)CustomCursorShapeAnimation);
    if ( v13 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v18);
  }
  return 0LL;
}
