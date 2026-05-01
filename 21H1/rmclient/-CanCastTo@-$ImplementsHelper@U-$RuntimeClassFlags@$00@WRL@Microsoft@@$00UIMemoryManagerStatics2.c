/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800037D0
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180002B00 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003680 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@UIMemoryManagerStatics4@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000CF78 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800037A0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // r10

  if ( *(_DWORD *)a2 == 1861104927
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( InlineIsEqualGUID((const struct _GUID *)a2, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
  {
    *v5 = v6;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(v4, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
  {
    *v7 = v8 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
