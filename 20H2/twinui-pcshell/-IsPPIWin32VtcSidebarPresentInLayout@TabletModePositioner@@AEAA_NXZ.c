/*
 * XREFs of ?IsPPIWin32VtcSidebarPresentInLayout@TabletModePositioner@@AEAA_NXZ @ 0x1800B89BC
 * Callers:
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803FF688 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1800B68CC (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall TabletModePositioner::IsPPIWin32VtcSidebarPresentInLayout(TabletModePositioner *this)
{
  __int64 v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  char v5; // di
  unsigned int v7; // esi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned int v12; // [rsp+60h] [rbp+28h] BYREF
  int v13; // [rsp+68h] [rbp+30h] BYREF
  struct IApplicationView *v14; // [rsp+70h] [rbp+38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+40h] BYREF

  v15 = 0LL;
  v1 = *((_QWORD *)this + 42);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 24LL))(v1, &v15);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 1762LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v2);
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 24LL))(v15, &v12);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v4 = 1765LL;
    goto LABEL_5;
  }
  v7 = 0;
  if ( !v12 )
    goto LABEL_6;
  v5 = 1;
  while ( 1 )
  {
    v14 = 0LL;
    v8 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v8 + 32LL))(
           v8,
           v7,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v14);
    if ( v9 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6EA,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( ++v7 >= v12 )
      goto LABEL_6;
  }
  if ( !PPISideBarHelpers::IsSideBarView(v14) )
    goto LABEL_13;
  v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v14 + 88LL))(v14, &v13);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6EE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_18;
  }
  if ( !v13 )
LABEL_18:
    v5 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v5;
}
