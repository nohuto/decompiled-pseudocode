/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801B910C
 * Callers:
 *     ??$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801B80EC (--$MakeAndInitialize@VCQuickConnectExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BB840 (-QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::CanCastTo(
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

  if ( InlineIsEqualGUID(a2, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_7fec38c1_a520_4797_848f_66efa8bd3502) )
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
