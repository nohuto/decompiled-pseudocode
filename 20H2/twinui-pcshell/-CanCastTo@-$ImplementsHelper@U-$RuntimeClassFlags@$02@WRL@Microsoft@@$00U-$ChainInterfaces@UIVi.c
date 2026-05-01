/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIVirtualDesktopManagerInternal3@@UIVirtualDesktopManagerInternal2@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UISuspendableVirtualDesktopManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800BCB14
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@U?$ChainInterfaces@UIVirtualDesktopManagerInternal3@@UIVirtualDesktopManagerInternal2@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UISuspendableVirtualDesktopManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800BCB98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$ChainIn_ea_1800BCB98.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerInternal3,IVirtualDesktopManagerInternal2,IVirtualDesktopManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ISuspendableVirtualDesktopManager,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  void **v4; // r8
  __int64 v5; // r11
  unsigned int CanCastTo; // r9d
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  const struct _GUID *v9; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_fe538ff5_d53b_4f5a_9dad_8e72873cb360);
  CanCastTo = 0;
  if ( IsEqualGUID
    || InlineIsEqualGUID(v3, &GUID_0f3a72b0_4566_487e_9a33_4ed302f6d6ce)
    || InlineIsEqualGUID(v7, &GUID_f31574d6_b682_4cdc_bd56_1827860abec6)
    || InlineIsEqualGUID(v8, &GUID_1ed7bb75_881a_4a61_8d56_ce448e8a8a45) )
  {
    *v4 = (void *)v5;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v9, v4);
    if ( CanCastTo == -2147467262 )
      return (unsigned int)-2147467262;
  }
  return CanCastTo;
}
