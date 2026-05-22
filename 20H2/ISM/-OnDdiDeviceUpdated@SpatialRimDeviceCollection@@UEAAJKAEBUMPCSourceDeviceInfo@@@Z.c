/*
 * XREFs of ?OnDdiDeviceUpdated@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x180094540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCSourceDeviceInfo *a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r10
  _OWORD *v8; // r11
  __int64 result; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  int v15; // eax
  const char *v16; // r9
  unsigned int v17; // ebx
  _BYTE v18[984]; // [rsp+20h] [rbp-3D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+0h]
  __int64 v20; // [rsp+400h] [rbp+8h] BYREF
  int v21; // [rsp+408h] [rbp+10h] BYREF

  v21 = a2;
  v5 = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v21, 4uLL) & *((_QWORD *)this + 18);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)this + 96,
           &v20,
           v5);
    if ( v7 == *v6 )
      break;
    if ( *(_DWORD *)(v7 + 16) == a2 )
      goto LABEL_6;
  }
  v7 = *((_QWORD *)this + 13);
LABEL_6:
  if ( v7 == *((_QWORD *)this + 13) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x264,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v10 = v18;
    v11 = 7LL;
    v12 = 7LL;
    do
    {
      *v10 = *v8;
      v10[1] = v8[1];
      v10[2] = v8[2];
      v10[3] = v8[3];
      v10[4] = v8[4];
      v10[5] = v8[5];
      v10[6] = v8[6];
      v10 += 8;
      *(v10 - 1) = v8[7];
      v8 += 8;
      --v12;
    }
    while ( v12 );
    *v10 = *v8;
    v10[1] = v8[1];
    v10[2] = v8[2];
    *((_QWORD *)v10 + 6) = *((_QWORD *)v8 + 6);
    v13 = (_OWORD *)(*(_QWORD *)(v7 + 24) + 596LL);
    v14 = v18;
    do
    {
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
      v13[4] = v14[4];
      v13[5] = v14[5];
      v13[6] = v14[6];
      v13 += 8;
      *(v13 - 1) = v14[7];
      v14 += 8;
      --v11;
    }
    while ( v11 );
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    *((_QWORD *)v13 + 6) = *((_QWORD *)v14 + 6);
    try
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 343) + 48LL))(*((_QWORD *)this - 343));
      v17 = v15;
      if ( v15 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x268,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v15);
        result = v17;
      }
    }
    catch ( ... )
    {
      LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x26B,
                       (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimde"
                                     "vicecollection.cpp",
                       v16);
      return (unsigned int)v20;
    }
  }
  return result;
}
