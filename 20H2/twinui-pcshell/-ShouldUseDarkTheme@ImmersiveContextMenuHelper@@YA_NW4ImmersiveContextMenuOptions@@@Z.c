/*
 * XREFs of ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x18047CD98
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18047C440 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034FAE4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall ImmersiveContextMenuHelper::ShouldUseDarkTheme(char a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  LSTATUS ValueW; // eax
  signed int v5; // edx
  bool v6; // zf
  char v7; // al
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( (a1 & 8) == 0 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    1u,
    a3);
  pcbData = 4;
  v3 = 0;
  pdwType = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"SystemUsesLightTheme",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  LOWORD(v5) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v5 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v6 = (_WORD)pvData == 49;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v6 = pvData == 1;
  if ( pvData > 1 )
  {
LABEL_12:
    v5 = (unsigned __int16)v5 | 0x80070000;
LABEL_13:
    v7 = pvData;
    goto LABEL_14;
  }
LABEL_5:
  v5 = 0;
  v7 = v6;
LABEL_14:
  if ( v5 >= 0 )
    v3 = v7;
  return v3 ^ 1;
}
