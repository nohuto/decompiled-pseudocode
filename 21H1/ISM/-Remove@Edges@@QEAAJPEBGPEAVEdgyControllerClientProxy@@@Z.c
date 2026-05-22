/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179AB0
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800FFF70 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B7FC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800363CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_bf8165f59c1feaeab7cdf7a46b73aec9___ @ 0x180049BE0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180049D20 (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?empty@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEBA_NXZ @ 0x180049E2C (-empty@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 *     ?erase@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180049E40 (-erase@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 *     ?erase@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180049EA0 (-erase@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@_ea_180049EA0.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3E3C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x18017907C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x18017970C (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x180179738 (-IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180179FF0 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  struct EdgyControllerClientProxy **v7; // rcx
  const char *v8; // r9
  _QWORD *v9; // rdx
  __int64 **v10; // r14
  bool IsEdge; // al
  __int64 *v12; // rdx
  _QWORD *v13; // rbx
  __int64 *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct EdgyControllerClientProxy *v20; // [rsp+90h] [rbp+18h] BYREF

  v20 = a3;
  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v5 = (__int64)Edge << 7;
  v6 = v5 + *(_QWORD *)this;
  if ( Edge::IsClientPresent(v6, 2) )
  {
    v10 = (__int64 **)(v6 + 104);
    if ( std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::empty((_QWORD *)(v6 + 104)) )
    {
      if ( Edge::IsEdge((struct EdgyControllerClientProxy **)v6, v20) )
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)(v6 + 40));
    }
    else
    {
      IsEdge = Edge::IsEdge((struct EdgyControllerClientProxy **)v6, v20);
      v12 = *v10;
      if ( IsEdge )
      {
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=((__int64 *)(v6 + 40), v12);
        std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::erase(
          v5 + *(_QWORD *)this + 104LL,
          &v16,
          *(_QWORD *)(v5 + *(_QWORD *)this + 104LL));
      }
      else
      {
        v13 = *(_QWORD **)(v6 + 112);
        v14 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_bf8165f59c1feaeab7cdf7a46b73aec9___(
                &v16,
                v12,
                v13,
                &v20);
        std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::erase((__int64)v10, &v17, *v14, (__int64)v13);
      }
    }
  }
  else
  {
    if ( !Edge::IsEdge(v7, v20) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        406LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v8);
      JUMPOUT(0x180179C15LL);
    }
    v9 = (_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 32) >= 8uLL )
      v9 = (_QWORD *)*v9;
    std::wstring::wstring(v18, (__int64)v9);
    std::vector<Edge>::erase(this, &v16, v5 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v18);
  }
  return 0LL;
}
