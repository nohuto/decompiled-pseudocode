/*
 * XREFs of ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800010A4
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180001120 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIAppMemoryUsageLimitC.c)
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180002B00 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000CF78 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F090 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000F090.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000F130.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800037A0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::CanCastTo(Microsoft::WRL::FtmBase *this, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v5;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_00000003_0000_0000_c000_000000000046) )
      *v6 = v8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
