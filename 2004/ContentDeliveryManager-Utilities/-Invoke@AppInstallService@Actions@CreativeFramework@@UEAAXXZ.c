/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800859D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005CDEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@de.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800851C4 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x180085484 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this)
{
  const wchar_t *v2; // r9
  const wchar_t *v3; // rax
  const WCHAR *v4; // rcx
  const wchar_t *v5; // r8
  char v6; // r10
  char v7; // r11
  char v8; // di
  const wchar_t *v9; // rdx
  char *v10; // rbx
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rdx
  const wchar_t *v13; // r8
  char v14; // r9
  const wchar_t *v15; // r10
  char v16; // r11
  char v17; // di
  char v18; // si
  char *v19; // rbx
  bool v20; // [rsp+30h] [rbp-28h]
  const WCHAR *v21; // [rsp+30h] [rbp-28h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    0);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetImpl'::`2'::impl,
    1u,
    1u);
  v3 = (const wchar_t *)((char *)this + 240);
  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v3 = *(const wchar_t **)v3;
    v11 = (const wchar_t *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v11 = *(const wchar_t **)v11;
    v12 = (const wchar_t *)((char *)this + 176);
    if ( *((_QWORD *)this + 25) >= 8uLL )
      v12 = *(const wchar_t **)v12;
    v13 = (const wchar_t *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v13 = *(const wchar_t **)v13;
    v14 = *((_BYTE *)this + 74);
    v15 = (const wchar_t *)((char *)this + 112);
    v16 = *((_BYTE *)this + 75);
    v17 = *((_BYTE *)this + 73);
    v18 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v15 = *(const wchar_t **)v15;
    v19 = (char *)this + 80;
    if ( *((_QWORD *)v19 + 3) >= 8uLL )
      v19 = *(char **)v19;
    v21 = v13;
    LOBYTE(v13) = v18;
    CreativeFramework::Actions::InstallAppByStoreId((const WCHAR *)v19, v15, v13, v17, v16, v14, v21, v12, v11, v3);
  }
  else
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v3 = *(const wchar_t **)v3;
    v4 = (const WCHAR *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    LOBYTE(v2) = *((_BYTE *)this + 74);
    v5 = (const wchar_t *)((char *)this + 112);
    v6 = *((_BYTE *)this + 75);
    v7 = *((_BYTE *)this + 73);
    v8 = *((_BYTE *)this + 72);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v5 = *(const wchar_t **)v5;
    v9 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v10 = (char *)this + 8;
    if ( *((_QWORD *)v10 + 3) >= 8uLL )
      v10 = *(char **)v10;
    v20 = (char)v2;
    LOBYTE(v2) = v8;
    CreativeFramework::Actions::InstallAppByProductAndSku((const WCHAR *)v10, v9, v5, v2, v7, v6, v20, v4, v3);
  }
}
