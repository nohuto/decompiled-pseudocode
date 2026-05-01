/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180031270
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030AA0 (-QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18023F484 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18023F484.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // r10
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // r10
  _QWORD *v22; // r8
  __int64 v23; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    goto LABEL_11;
  if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa)
    || (unsigned int)InlineIsEqualGUID(v5, &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130) )
  {
    *v6 = v7;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775) )
  {
LABEL_11:
    *v3 = v4;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_538317c5_5bad_4847_962d_42da294f5e0a)
    || (unsigned int)InlineIsEqualGUID(v10, &GUID_5090de35_ed23_43be_9714_586c5041026a) )
  {
    *v11 = v13;
  }
  else
  {
    if ( !(unsigned int)InlineIsEqualGUID(v14, &GUID_334a8e75_f9cf_4161_9035_68246f9ea21d) )
    {
      result = 2147500034LL;
      goto LABEL_9;
    }
    *v15 = v16 + 8;
  }
  result = 0LL;
LABEL_9:
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_ee010e17_919a_4068_868b_675acf787303) )
    goto LABEL_11;
  if ( (unsigned int)InlineIsEqualGUID(v18, &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12) )
  {
    *v20 = v21;
  }
  else
  {
    if ( !(unsigned int)InlineIsEqualGUID(v19, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
    {
      result = 2147500034LL;
      goto LABEL_18;
    }
    *v22 = v23 + 8;
  }
  result = 0LL;
LABEL_18:
  if ( (_DWORD)result == -2147467262 )
    return 2147500034LL;
  return result;
}
