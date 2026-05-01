/*
 * XREFs of ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803F739C
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1803F876C (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803F88D8 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1803F909C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1803F7968 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804713B8 (-InitLayoutEnv@ImmersiveApplicationLayout@@YAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::GetCurrentLayoutEnvironment(
        IUnknown **this,
        struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  IUnknown *v7; // rcx
  enum DEVICE_SCALE_FACTOR v8; // eax
  enum DEVICE_SCALE_FACTOR v10; // [rsp+20h] [rbp-60h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-30h] BYREF
  enum DEVICE_SCALE_FACTOR v15; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  ImmersiveApplicationLayout::InitLayoutEnv(a2, a2);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         this[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2264LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_15;
  }
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2267LL;
    goto LABEL_7;
  }
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)ppvOut + 88LL))(ppvOut, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 2270LL;
    goto LABEL_7;
  }
  if ( TabletModePositioner::GetScaleFactor((TabletModePositioner *)this, &v10) >= 0 )
  {
    v8 = v10;
  }
  else
  {
    v7 = this[31];
    if ( v7 )
    {
      ((void (__fastcall *)(IUnknown *, _BYTE *))v7->lpVtbl[1].QueryInterface)(v7, v14);
      v8 = v15;
    }
    else
    {
      v8 = SCALE_100_PERCENT;
    }
    v10 = v8;
  }
  *(_OWORD *)((char *)a2 + 24) = v12;
  *(_OWORD *)a2 = v13;
  *((_DWORD *)a2 + 4) = v8;
  v5 = 0;
LABEL_15:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
