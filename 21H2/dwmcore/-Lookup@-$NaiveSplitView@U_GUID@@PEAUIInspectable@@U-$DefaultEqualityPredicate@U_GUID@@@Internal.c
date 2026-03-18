/*
 * XREFs of ?Lookup@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1802874C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJV_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eeec47f77e0_@@@Z @ 0x180281060 (--$IterateOnChunks@V_lambda_eda52849211e48fcc6ebfb474f023ee7_@@V_lambda_029b11a614e8d181bc695eee.c)
 *     ?EnsureInitialized@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18028518C (-EnsureInitialized@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Lookup(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v9[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  v6 = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::EnsureInitialized(a1);
  if ( v6 < 0
    || (v9[0] = a2,
        v9[1] = (__int128 *)&v8,
        v6 = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::IterateOnChunks<_lambda_eda52849211e48fcc6ebfb474f023ee7_,_lambda_029b11a614e8d181bc695eeec47f77e0_>(
               a1,
               v9),
        v6 < 0) )
  {
    *a3 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    *a3 = v8;
  }
  return (unsigned int)v6;
}
