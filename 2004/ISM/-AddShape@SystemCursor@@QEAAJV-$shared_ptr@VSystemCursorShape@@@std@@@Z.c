/*
 * XREFs of ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x18013E7E8
 * Callers:
 *     _lambda_ba6101031141f0d6e8e74a4c358feff2_::operator() @ 0x18013E42C (_lambda_ba6101031141f0d6e8e74a4c358feff2_--operator().c)
 *     _lambda_e899d24a1372ab43d53191ccbd314951_::operator() @ 0x18013E5C8 (_lambda_e899d24a1372ab43d53191ccbd314951_--operator().c)
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x18013EBEC (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x18013AD54 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B338 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013CDB0 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013DE60 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x18013E8F8 (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140378 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor::AddShape(__int64 *a1, unsigned __int64 **a2)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 *v6; // r9
  int v7; // eax
  unsigned int v8; // ebx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11; // rcx
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 *v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = **a2;
  if ( SystemCursor::ShapeExists((SystemCursor *)a1, v4) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      496LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v14 = v4;
  v5 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
         a1 + 4,
         &v14);
  if ( v5 == (__int64 *)*v6 || v4 < v5[4] )
  {
    v15 = &v14;
    v5 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                       v6,
                       v12,
                       v5,
                       (__int64)v6,
                       &v15);
  }
  std::shared_ptr<CustomCursorApplication>::operator=(v5 + 5, a2);
  InputTraceLogging::Cursor::AddShapeToCursor(a1, v4);
  if ( a1[7] == v4 && (v7 = SystemCursor::SetShape((SystemCursor *)a1, v4), v8 = v7, v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v7);
    v9 = (std::_Ref_count_base *)a2[1];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return v8;
  }
  else
  {
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 0LL;
  }
}
