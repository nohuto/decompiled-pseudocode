/*
 * XREFs of ?OnDdiDeviceRemoved@SpatialRimDeviceCollection@@UEAAJK@Z @ 0x1800943C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F408 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x18009648C (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?erase@?$list@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800967A0 (-erase@-$list@U-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$allocator@U-$pair@$$C.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceRemoved(SpatialRimDeviceCollection *this, unsigned int a2)
{
  __int64 v4; // r10
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 appended; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  RawInputProvidersTracing *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v4 = *((_QWORD *)this + 18) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v20, 4uLL);
  for ( i = *(__int64 **)(*((_QWORD *)this + 15) + 16 * v4);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)this + 96,
                           &v19,
                           v4);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 13);
LABEL_6:
  v6 = (_QWORD *)((char *)this + 104);
  if ( i == *((__int64 **)this + 13) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x272,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this - 343) + 56LL))(*((_QWORD *)this - 343), i[3]);
    v10 = v8;
    if ( v8 >= 0 )
    {
      appended = std::_Fnv1a_append_bytes(v9, (const unsigned __int8 *const)i + 16, 4uLL);
      v12 = *((_QWORD *)this + 15);
      v13 = 2 * (*((_QWORD *)this + 18) & appended);
      if ( *(__int64 **)(v12 + 16 * (*((_QWORD *)this + 18) & appended) + 8) == i )
      {
        if ( *(__int64 **)(v12 + 16 * (*((_QWORD *)this + 18) & appended)) == i )
        {
          *(_QWORD *)(v12 + 16 * (*((_QWORD *)this + 18) & appended)) = *v6;
          v12 = *((_QWORD *)this + 15);
          v14 = *v6;
        }
        else
        {
          v14 = i[1];
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
      }
      else if ( *(__int64 **)(v12 + 16 * (*((_QWORD *)this + 18) & appended)) == i )
      {
        *(_QWORD *)(v12 + 16 * (*((_QWORD *)this + 18) & appended)) = *i;
      }
      std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::erase((char *)this + 104, &v19, i);
      if ( RawInputProvidersTracing::IsEnabled(v15) )
      {
        wil::details::static_lazy<RawInputProvidersTracing>::get(
          v16,
          _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
        RawInputProvidersTracing::TelemetryDdiDevice_Removed_(v17, a2);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x274,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
