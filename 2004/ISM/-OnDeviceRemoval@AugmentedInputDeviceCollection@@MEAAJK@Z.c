/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008F660
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x1800892C8 (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x18008F2D4 (-AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18008F370 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x18008F4A8 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x18008FBF0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18008FEB8 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FF00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(
        AugmentedInputDeviceCollection *this,
        unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // rax
  __int64 i; // r8
  void *v8; // rax
  __int64 v9; // rcx
  RawInputProvidersTracing *v10; // rcx
  unsigned int v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+78h] [rbp-88h]

  memset_0(v16, 0, 0x7F0uLL);
  v17 = 2032;
  *(_QWORD *)v12 = 0LL;
  v13 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
              this,
              a2,
              (struct AugmentedInputCacheState *)v12) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(
              5LL,
              a2,
              v12[0],
              SHIWORD(v12[1]),
              v13,
              SHIWORD(v13),
              (__int64)v16) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v16);
  }
  v14 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v15,
    &v14);
  if ( v15 != *v5 )
  {
    v6 = v15;
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 25LL) )
    {
      for ( i = *(_QWORD *)(v15 + 8); !*(_BYTE *)(i + 25) && v6 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = i;
    }
    v8 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(v5);
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x30);
  }
  if ( RawInputProvidersTracing::IsEnabled(v4) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v9,
      _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(v10, v12[0]);
  }
  return 0LL;
}
