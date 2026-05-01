/*
 * XREFs of ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1803E1F54
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803E0E10 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1803E11C0 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModeViewManager::UpdateLayoutItemsSizeConstraints(TabletModeViewManager *this)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 v7; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v1 = *((_QWORD *)this + 15);
  v7 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 72LL))(v1, &v7);
  if ( v2 < 0 )
  {
    v3 = 625LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_4;
  }
  v4 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 128LL))(v4, &v6);
  if ( v2 < 0 )
  {
    v3 = 626LL;
    goto LABEL_3;
  }
  while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, 1LL, v8) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 304LL))(v9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x277,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)v5);
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
