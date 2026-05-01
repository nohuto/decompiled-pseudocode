/*
 * XREFs of ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18046FE88
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E994 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803505F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x18046E330 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x18046E71C (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 */

__int64 __fastcall ImmersiveIcons::InitResourceContextForAllThemes(
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a2,
        struct IResourceContext *a3)
{
  unsigned int ContrastForParams; // ebp
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  const WCHAR *v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r10
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)this, (__int64)a2, (__int64)a3);
  if ( ContrastForParams )
  {
    v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
           a2,
           *((unsigned __int16 *)this + 8));
    if ( v8 < 0 )
    {
      v9 = 209LL;
      goto LABEL_5;
    }
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
      1u,
      v6);
    v7 = *(_QWORD *)a2;
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(v7 + 112))(
             a2,
             *((unsigned __int16 *)this + 8));
      if ( v8 < 0 )
      {
        v9 = 180LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *))(v7 + 136))(
             a2,
             L"unplated");
      if ( v8 < 0 )
      {
        v9 = 184LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 112LL))(
             a2,
             *((unsigned __int16 *)this + 4));
      if ( v8 < 0 )
      {
        v9 = 185LL;
        goto LABEL_5;
      }
    }
    if ( *((_DWORD *)this + 11) )
    {
      v11 = L"light";
      if ( *((_DWORD *)this + 11) != 1 )
        v11 = L"dark";
      (*(void (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, const wchar_t *, const WCHAR *))(*(_QWORD *)a2 + 144LL))(
        a2,
        L"Theme",
        v11);
    }
  }
  v8 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)a2 + 128LL))(
         a2,
         ContrastForParams);
  if ( v8 < 0 )
  {
    v9 = 212LL;
    goto LABEL_5;
  }
  v12 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)this + 7));
  v14 = (*(__int64 (__fastcall **)(const struct ImmersiveIcons::LoadIconParams *, _QWORD))(v13 + 120))(a2, v12);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD5,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
