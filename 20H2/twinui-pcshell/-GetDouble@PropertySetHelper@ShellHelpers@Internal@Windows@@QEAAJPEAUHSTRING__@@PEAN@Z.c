/*
 * XREFs of ?GetDouble@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAN@Z @ 0x1801AF3C8
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025040 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180023DB0 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IDCompThumbnail@@$BIA@AA @ 0x1800F324C (--_9IDCompThumbnail@@$BIA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetDouble(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        double *a3)
{
  int PropVal; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0.0;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v9);
  if ( PropVal >= 0 )
  {
    v6 =  IDCompThumbnail::`vcall'{128,{flat}}((__int64)v9);
    PropVal = v6;
    if ( v6 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  return (unsigned int)PropVal;
}
