/*
 * XREFs of ??1CVisualSurface@@UEAA@XZ @ 0x180063D04
 * Callers:
 *     ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x180063CC0 (--_GCVisualSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Find_lower_bound@PEAVCResource@@@?$_Tree@V?$_Tmap_traits@PEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAVCResource@@@Z @ 0x180064890 (--$_Find_lower_bound@PEAVCResource@@@-$_Tree@V-$_Tmap_traits@PEAVCResource@@V-$com_ptr_t@UISpect.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E40BC (-clear_region@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurfac.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18018598C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 */

void __fastcall CVisualSurface::~CVisualSurface(CVisualSurface *this)
{
  __int64 *v2; // r10
  __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rax
  CVisualSurface **v6; // rbx
  CVisualSurface *v7; // rcx
  __int64 v8; // rbx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  CVisualSurface *v11; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CVisualSurface::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  v11 = this;
  *((_QWORD *)this + 8) = 0LL;
  std::_Tree<std::_Tmap_traits<CResource *,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>,std::less<CResource *>,std::allocator<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CResource *>(
    *(_QWORD *)(*((_QWORD *)this + 2) + 288LL) + 64LL,
    v9,
    &v11);
  v4 = v10;
  if ( *(_BYTE *)(v10 + 25) || (unsigned __int64)this < *(_QWORD *)(v10 + 32) )
  {
    v4 = *v2;
    v5 = *v2;
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 64);
  }
  if ( v4 != v5 )
  {
    v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(v2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(v8 + 40));
    std::_Deallocate<16,0>(v8, 48LL);
  }
  v6 = (CVisualSurface **)((char *)this + 112);
  v7 = (CVisualSurface *)*((_QWORD *)this + 14);
  if ( (__int64)(*((_QWORD *)this + 15) - (_QWORD)v7) >> 4 )
  {
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 112,
      0LL);
    v7 = *v6;
  }
  *v6 = 0LL;
  if ( v7 == (CVisualSurface *)((char *)this + 136) )
    v7 = 0LL;
  DefaultHeap::Free(v7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  CResource::~CResource(this);
}
