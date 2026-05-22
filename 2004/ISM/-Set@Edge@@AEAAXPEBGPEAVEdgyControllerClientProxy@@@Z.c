/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179804
 * Callers:
 *     ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801786CC (--0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801789B4 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B8A0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??8?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x180047C10 (--8-$_List_const_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAULegacyDeviceInfo@@.c)
 *     ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x180049574 (--$emplace_back@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClientProxy.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_94c18101a01a934e39836ae17b167f66___ @ 0x1800495AC (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_Ed.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F397C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180179290 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned __int64 v4; // r8
  struct EdgyControllerClientProxy *v5; // rcx
  __int64 v6; // rax
  const char *v7; // r9
  __int64 v8; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  struct EdgyControllerClientProxy *v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a3;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, a2) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        70LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v7);
      JUMPOUT(0x1801798DCLL);
    }
  }
  else
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    std::wstring::assign((char *)this + 8, a2, v4);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !v12 || v12 != *((struct EdgyControllerClientProxy **)this + 5) )
    {
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_94c18101a01a934e39836ae17b167f66___(
        v9,
        *((_QWORD **)this + 13),
        *((_QWORD **)this + 14),
        &v12);
      v13 = v8;
      if ( std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>::operator==(
             v9,
             &v13) )
      {
        std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
          (__int64 *)this + 13,
          (__int64 *)&v12);
      }
    }
  }
  else
  {
    v5 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 6);
      v6 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 5) = v5;
      v11 = v6;
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v11);
    }
  }
}
