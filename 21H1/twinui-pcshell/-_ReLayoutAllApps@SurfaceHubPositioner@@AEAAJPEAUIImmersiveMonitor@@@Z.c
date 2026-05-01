/*
 * XREFs of ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803B832C
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803B7420 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803B872C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_ReLayoutAllApps(SurfaceHubPositioner *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int i; // esi
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v12; // eax
  __int64 v14[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  int v17; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationView *v18; // [rsp+88h] [rbp+48h] BYREF

  v14[0] = 0LL;
  v4 = *((_QWORD *)this + 23);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v4 + 64LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  v6 = v5(v4, 2LL, a2, v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 575LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_14;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v16);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 577LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v16; ++i )
  {
    v18 = 0LL;
    v10 = v14[0];
    v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v14[0] + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v11(v10, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v18) >= 0
      && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v18 + 216LL))(v18, &v17) >= 0 )
    {
      if ( v17 )
      {
        v12 = SurfaceHubPositioner::_SetDefaultLayout(this, v18, 0);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24D,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v12);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v7 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v7;
}
