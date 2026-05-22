/*
 * XREFs of ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x18013C940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800050EC (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FA8C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?equal_range@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@V12@@2@AEB_K@Z @ 0x18008E308 (-equal_range@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18012E088 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013B3C8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap_.c)
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x18013C54C (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18013D8B4 (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K_ea_18013D8B4.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x18013D9A4 (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x180140700 (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController::DestroyCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  int v6; // r9d
  unsigned int v7; // edx
  unsigned int v9; // edx
  wil::details::in1diag3 *v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  SystemCursorService *v18; // rsi
  const char *v19; // r9
  __int64 result; // rax
  unsigned int *v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-50h] BYREF
  SystemCursor *v25; // [rsp+58h] [rbp-40h] BYREF
  std::_Ref_count_base *v26; // [rsp+60h] [rbp-38h]
  __int64 v27; // [rsp+68h] [rbp-30h]
  volatile signed __int32 *v28; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v30; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v31 = a3;
  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      280LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    v30 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    v7 = v30;
    if ( v30 != *((_DWORD *)this + 18) && !SystemCursorController::IsApplicationPeer(this, v30) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        285LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a3) != 1 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        291LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    if ( *(_DWORD *)((char *)&v31 + 2) != v6 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        295LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( !SystemCursorController::IsApplicationPeer(this, v7) )
      wil::details::in1diag3::_Throw_Hr(
        v10,
        296LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    v11 = (_QWORD *)((char *)this + 80);
    v12 = *((_QWORD *)this + 10);
    v13 = *(_QWORD *)(v12 + 8);
    if ( *(_BYTE *)(v13 + 25) )
      goto LABEL_22;
    do
    {
      if ( *(_DWORD *)(v13 + 32) >= v9 )
      {
        v12 = v13;
        v13 = *(_QWORD *)v13;
      }
      else
      {
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( !*(_BYTE *)(v13 + 25) );
    if ( v12 == *v11 || v9 < *(_DWORD *)(v12 + 32) )
    {
LABEL_22:
      v21 = &v30;
      v12 = *std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
               (__int64 *)this + 10,
               &v23,
               (__int64 *)v12,
               (__int64)v11,
               &v21);
    }
    v14 = *(volatile signed __int32 **)(v12 + 48);
    if ( v14 )
    {
      _InterlockedIncrement(v14 + 2);
      v14 = *(volatile signed __int32 **)(v12 + 48);
    }
    v27 = *(_QWORD *)(v12 + 40);
    v28 = v14;
    v32 = a3;
    v15 = (_QWORD *)(v27 + 16);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::equal_range(
      (_QWORD *)(v27 + 16),
      v24,
      (const unsigned __int8 *)&v32);
    v16 = (_QWORD *)v24[0];
    v17 = 0LL;
    while ( v16 != (_QWORD *)v24[1] )
    {
      ++v17;
      v16 = (_QWORD *)*v16;
    }
    if ( v17 )
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        v15,
        (const unsigned __int8 *)&v32);
    v18 = (SystemCursorService *)*((_QWORD *)this + 12);
    v22 = a3;
    if ( SystemCursorService::CustomShapeExists(v18, a3) )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
        (char *)v18 + 152,
        &v22);
      v18 = (SystemCursorService *)*((_QWORD *)this + 12);
    }
    std::weak_ptr<SystemCursor>::lock((char *)v18 + 168, &v25);
    if ( v25 )
      SystemCursor::RemoveShape(v25, a3);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    if ( v14 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v19);
    return 0LL;
  }
  return result;
}
