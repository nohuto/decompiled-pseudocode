/*
 * XREFs of ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803D8ECC
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180079D00 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803D7920 (-ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803D7A30 (-ControlGainedForActivation@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803D7F30 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803D8040 (-ResizeView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803D8ACC (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800797B4 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801845DC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801A3E74 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6778 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801A82BC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803D844C (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1803D8594 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803D9170 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_SetDefaultLayout(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        char a3)
{
  int MonitorForLaunch; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct IImmersiveMonitor *v9; // rbx
  const char *v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  void *v13; // rdi
  SurfaceHubPositioner *v14; // rcx
  int v15; // eax
  struct IApplicationViewTitlebarConfiguration *v17; // [rsp+20h] [rbp-39h] BYREF
  void *v18; // [rsp+28h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v19; // [rsp+30h] [rbp-29h] BYREF
  __int64 v20[3]; // [rsp+38h] [rbp-21h] BYREF
  __m256i v21; // [rsp+50h] [rbp-9h]
  __int128 v22; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(this, a2, &v19);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 661LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)MonitorForLaunch);
    goto LABEL_20;
  }
  v9 = v19;
  MonitorForLaunch = SurfaceHubPositioner::_SetPositionerMonitor((struct IApplicationView *)a2, v19);
  v7 = MonitorForLaunch;
  if ( MonitorForLaunch < 0 )
  {
    v8 = 664LL;
    goto LABEL_5;
  }
  v22 = 0LL;
  if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)v9 + 88LL))(v9, &v22) >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v20);
    v11 = v20[0];
    if ( !v20[0] )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        674LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v10);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
            &v18,
            &v22);
    if ( v11 && v12 >= 0 )
    {
      v13 = v18;
      if ( *(void **)(v11 + 72) != v18 )
      {
        v17 = (struct IApplicationViewTitlebarConfiguration *)v18;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
        v17 = *(struct IApplicationViewTitlebarConfiguration **)(v11 + 72);
        *(_QWORD *)(v11 + 72) = v13;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      }
      *(_DWORD *)(v11 + 116) = 255;
      *(_DWORD *)(v11 + 120) = 32;
      *(_DWORD *)(v11 + 180) = 1;
      if ( a3 )
        *(_WORD *)(v11 + 112) = 257;
      *(_DWORD *)(v11 + 200) = 0;
      *(_QWORD *)(v11 + 220) = 0LL;
      *(_QWORD *)(v11 + 228) = 0LL;
      *(_QWORD *)(v11 + 204) = 0LL;
      *(_QWORD *)(v11 + 212) = 0LL;
      *(_BYTE *)(v11 + 236) = 1;
      *(_QWORD *)(v11 + 240) = 0LL;
      v21.m256i_i64[3] = 0LL;
      v21.m256i_i64[0] = 0LL;
      *(__m128i *)&v21.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
      *(_OWORD *)(v11 + 132) = 0LL;
      *(__m256i *)(v11 + 148) = v21;
      *(_BYTE *)(v11 + 128) = 1;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      SurfaceHubPositioner::_CreateTitlebarConfiguration(v14, &v17);
      Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v11 + 192), (__int64)v17);
      *(_DWORD *)(v11 + 124) = 0;
      v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64))(*a2)[40])(
              a2,
              v11);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2C5,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(v20);
  }
  v7 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v7;
}
