/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B7928
 * Callers:
 *     ?QueryInterface@SearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180089DE0 (-QueryInterface@SearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x1801B59BC (--$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager.c)
 *     ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B64F8 (--$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BA5D0 (-QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801F5110 (--$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
