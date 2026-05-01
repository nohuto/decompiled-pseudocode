/*
 * XREFs of ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802436DC
 * Callers:
 *     ?GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802404D0 (-GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 *     ?_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180243970 (-_EnsureHolographicViewConfiguration@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x1800948B8 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x180178F58 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 */

__int64 __fastcall HolographicPositioner::_CreateTitleBarConfiguration(
        HolographicPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  volatile int *v3; // r8
  int CanCastTo; // ebx
  __int64 v5; // rdx
  _DWORD *v6; // rcx
  struct IApplicationViewTitlebarConfiguration *v7; // r8
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile int *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = (volatile int *)this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v13);
  v3 = v13;
  if ( v13 )
  {
    *((_WORD *)v13 + 24) = 1;
    *((_DWORD *)v3 + 13) = 1;
    *((_DWORD *)v3 + 14) = 1;
    *((_DWORD *)v3 + 22) = 64;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 15) = 1023;
    *((_DWORD *)v3 + 18) = 0;
    *((_DWORD *)v3 + 17) = 255;
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v7;
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v8) )
      {
        *a2 = (struct IApplicationViewTitlebarConfiguration *)v10;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v9, (void **)a2);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
        {
          v5 = 1184LL;
          goto LABEL_13;
        }
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    }
    CanCastTo = 0;
    goto LABEL_15;
  }
  CanCastTo = -2147024882;
  v5 = 1173LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)CanCastTo);
LABEL_15:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
