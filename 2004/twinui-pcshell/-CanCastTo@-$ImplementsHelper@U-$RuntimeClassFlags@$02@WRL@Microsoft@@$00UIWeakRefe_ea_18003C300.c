/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003C300
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C770 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18003C770.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // r9d
  _DWORD *v10; // r10

  v3 = *a2;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_11;
  }
  a1 += 8LL;
  if ( v3 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    goto LABEL_11;
  }
  a1 += 40LL;
  if ( v3 == -1961564021
    && a2[1] == *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data2
    && a2[2] == *(_DWORD *)GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4
    && a2[3] == *(_DWORD *)&GUID_8b14e88b_5663_4caf_b196_c31479262831.Data4[4] )
  {
    goto LABEL_11;
  }
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3)
    || (unsigned int)InlineIsEqualGUID(v4, &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e)
    || (unsigned int)InlineIsEqualGUID(v6, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8) )
  {
    *a3 = v5;
    return 0LL;
  }
  a1 = v5 + 8;
  if ( v9 != -2024199341
    || v10[1] != *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data2
    || v10[2] != *(_DWORD *)GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4
    || v10[3] != *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4[4] )
  {
    a1 = v5 + 56;
    if ( v9 != 1612740340
      || v10[1] != *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data2
      || v10[2] != *(_DWORD *)GUID_602076f4_9793_429d_a999_f951052e28e9.Data4
      || v10[3] != *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data4[4] )
    {
      a1 = v5 + 152;
      if ( v9 != 1834041537
        || v10[1] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
        || v10[2] != *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
        || v10[3] != *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
      {
        return 2147500034LL;
      }
    }
  }
LABEL_11:
  *a3 = a1;
  return 0LL;
}
