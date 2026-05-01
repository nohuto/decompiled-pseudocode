/*
 * XREFs of ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18001C268
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18001AAD0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18001C174 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020FC08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x18001C42C (-GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x18007AA9C (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsWideAtStartupEnabled(int a1)
{
  char v2; // bl
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  __int64 v6; // rax
  CortanaFeatureConfiguration *v7; // rcx
  CortanaFeatureConfiguration *v8; // rcx
  CortanaFeatureConfiguration *v9; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  CortanaFeatureConfiguration *v13; // rcx
  CortanaFeatureConfiguration *v14; // rcx
  CortanaFeatureConfiguration *v15; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *v16; // rax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  double v20; // [rsp+20h] [rbp-40h] BYREF
  double v21; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v21 = 0.0;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.UI.ViewManagement.UISettings", 0x24u, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    __debugbreak();
  }
  v21 = 0.0;
  if ( (int)RoActivateInstance(string, &v20) < 0 )
    goto LABEL_7;
  v6 = *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1
     - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
  if ( *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
    v6 = *(_QWORD *)GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data4
       - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  v7 = *(CortanaFeatureConfiguration **)&v20;
  if ( v6 )
  {
    (***(void (__fastcall ****)(double, GUID *, double *))&v20)(
      COERCE_DOUBLE(*(_QWORD *)&v20),
      &GUID_bad82401_2721_44f9_bb91_2bb228be442f,
      &v21);
    (*(void (__fastcall **)(double))(**(_QWORD **)&v20 + 16LL))(COERCE_DOUBLE(*(_QWORD *)&v20));
LABEL_7:
    v7 = *(CortanaFeatureConfiguration **)&v21;
    goto LABEL_8;
  }
  v21 = v20;
LABEL_8:
  if ( v7 )
  {
    v20 = DOUBLE_1_0;
    if ( (*(int (__fastcall **)(CortanaFeatureConfiguration *, double *))(*(_QWORD *)v7 + 48LL))(v7, &v20) >= 0
      && v20 > 1.25 )
    {
      goto LABEL_15;
    }
  }
  LODWORD(v20) = 0;
  CortanaFeatureConfiguration::getSharedFeatureTable(v7);
  CortanaFeatureConfiguration::getSharedFeatureTable(v8);
  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(v9);
  if ( (int)CortanaFeatureConfiguration::GetDWORDCore(*((_QWORD *)SharedFeatureTable + 165), v12, v11, &v20) >= 0
    && a1 >= SLODWORD(v20) )
  {
    CortanaFeatureConfiguration::getSharedFeatureTable(v13);
    CortanaFeatureConfiguration::getSharedFeatureTable(v14);
    v16 = CortanaFeatureConfiguration::getSharedFeatureTable(v15);
    if ( (int)CortanaFeatureConfiguration::GetDWORDCore(*((_QWORD *)v16 + 162), v18, v17, &v20) >= 0 )
    {
      if ( LODWORD(v20) )
LABEL_15:
        v2 = 1;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v2;
}
