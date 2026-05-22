/*
 * XREFs of ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008F430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034BA0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x18008F0E0 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 *     ?AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z @ 0x18008F1BC (-AugmentedInputDevice_DeviceAttached_@RawInputProvidersTracing@@QEAAXI_N@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x18008F324 (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F408 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18008FE18 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceAttach(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct DeviceInfo *v8; // rbx
  int DeviceProductInfo; // esi
  __int64 v10; // rdx
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r13
  __int16 v14; // r15
  __int64 v15; // rcx
  __int16 v16; // r11
  _QWORD *v17; // r10
  int v18; // esi
  __int64 v19; // rcx
  RawInputProvidersTracing *v20; // rcx
  unsigned __int16 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v22; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v25; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0;
  v21[0] = 0;
  LOWORD(v25) = 0;
  v6 = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( v6 < 0 )
  {
    v7 = 103LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = *a3;
  DeviceProductInfo = AugmentedInputDeviceCollection::GetDeviceProductInfo(
                        this,
                        a2,
                        &v22,
                        v21,
                        (unsigned __int16 *)&v25);
  if ( DeviceProductInfo < 0 )
  {
    v10 = 107LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)DeviceProductInfo);
    return (unsigned int)DeviceProductInfo;
  }
  v12 = v21[0];
  v13 = v22;
  v14 = v25;
  DeviceProductInfo = AugmentedInputDeviceCollection::AddDeviceToCache(this, a2, v22, v21[0], v25);
  if ( DeviceProductInfo < 0 )
  {
    v10 = 108LL;
    goto LABEL_5;
  }
  v25 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v23,
    &v25);
  if ( v23 == *v17 )
  {
    v6 = -2147467259;
    v7 = 109LL;
    goto LABEL_13;
  }
  v18 = *(_DWORD *)(v23 + 32);
  *((_DWORD *)v8 + 149) = v18;
  *((_WORD *)v8 + 300) = v13;
  *((_WORD *)v8 + 301) = v12;
  *((_WORD *)v8 + 302) = v14;
  *((_WORD *)v8 + 303) = v16;
  if ( RawInputProvidersTracing::IsEnabled(v15) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v19,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceAttached_(v20, v18, *((_BYTE *)this + 2776));
  }
  return 0LL;
}
