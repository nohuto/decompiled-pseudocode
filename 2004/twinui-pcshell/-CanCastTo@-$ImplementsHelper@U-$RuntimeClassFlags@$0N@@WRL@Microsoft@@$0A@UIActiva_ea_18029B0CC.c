/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18029B0CC
 * Callers:
 *     ??$CreateActivationFactory@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180299A60 (--$CreateActivationFactory@VTabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@Detail.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITabSetMediatorStatics@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029C400 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITabSetM_ea_18029C400.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003CE10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::ITabSetMediatorStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r11
  __int64 v6; // rbx
  unsigned int CanCastTo; // eax
  _DWORD *v8; // r11
  unsigned int v9; // r9d
  _QWORD *v10; // r8
  unsigned int v11; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v2 = (void *)v3;
    return 0LL;
  }
  v6 = v3 + 8;
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
  v9 = -2147467262;
  if ( CanCastTo != -2147467262 )
    goto LABEL_7;
  if ( !InlineIsEqualGUID(v8, &GUID_bf3f5a10_b5c6_41c7_8b98_1fcea8a532a3) )
  {
    CanCastTo = v9;
LABEL_7:
    v11 = CanCastTo;
    if ( CanCastTo == v9 )
      return v9;
    return v11;
  }
  *v10 = v6 + 32;
  return v11;
}
