/*
 * XREFs of ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x180095040
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F4A8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FF00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800902A4 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x180092A20 (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendDeviceUpdate(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct MPCSourceDeviceInfo *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  struct DeviceInfo *v10; // rbx
  int DeviceInfo; // eax
  __int64 v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  unsigned int v15; // edi
  __int64 v16; // rcx
  RawInputProvidersTracing *v17; // rcx
  struct DeviceInfo *v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+48h] [rbp+10h] BYREF
  __int64 v21; // [rsp+58h] [rbp+20h] BYREF

  v20 = a2;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 18) & std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v20, 4uLL);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           (__int64)this + 96,
           &v21,
           v6);
    if ( v9 == *v7 )
      break;
    if ( *(_DWORD *)(v9 + 16) == a2 )
      goto LABEL_6;
  }
  v9 = *((_QWORD *)this + 13);
LABEL_6:
  if ( v9 == *((_QWORD *)this + 13) )
  {
    DeviceInfo = RIMDeviceCollection::GetDeviceInfo((SpatialRimDeviceCollection *)((char *)this - 2760), a2, &v19);
    v10 = v19;
    if ( DeviceInfo < 0 )
    {
LABEL_13:
      v15 = -2147483638;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = *(struct DeviceInfo **)(v9 + 24);
  }
  if ( !v10 )
    goto LABEL_13;
  v12 = 7LL;
  v13 = (_OWORD *)((char *)v10 + 596);
  do
  {
    *v13 = *(_OWORD *)a3;
    v13[1] = *((_OWORD *)a3 + 1);
    v13[2] = *((_OWORD *)a3 + 2);
    v13[3] = *((_OWORD *)a3 + 3);
    v13[4] = *((_OWORD *)a3 + 4);
    v13[5] = *((_OWORD *)a3 + 5);
    v13[6] = *((_OWORD *)a3 + 6);
    v13 += 8;
    v14 = *((_OWORD *)a3 + 7);
    a3 = (const struct MPCSourceDeviceInfo *)((char *)a3 + 128);
    *(v13 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v13 = *(_OWORD *)a3;
  v13[1] = *((_OWORD *)a3 + 1);
  v13[2] = *((_OWORD *)a3 + 2);
  *((_QWORD *)v13 + 6) = *((_QWORD *)a3 + 6);
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this - 343) + 48LL))(
          *((_QWORD *)this - 343),
          v10);
LABEL_14:
  if ( RawInputProvidersTracing::IsEnabled(v8) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v16,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::ControllerDeviceUpdate_(v17, v15, a2, v10);
  }
  return v15;
}
