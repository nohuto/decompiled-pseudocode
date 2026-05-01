/*
 * XREFs of ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803F3450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1803F2B0C (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803F2C80 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803F2F50 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803F30D8 (-SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F8078 (-CoverWindowAcc_CreateInstance@@YAJPEAUHWND__@@PEBGPEAUIRawElementProviderFragment@@AEBU_GUID@@P.c)
 */

LRESULT __fastcall TabletModeCoverWindow::v_WndProc(
        TabletModeCoverWindow *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rsi
  IRawElementProviderSimple **v11; // r14
  const struct _GUID *v12; // r9
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0LL;
  if ( a3 > 0x202 )
  {
    if ( a3 == 582 )
      goto LABEL_8;
    if ( a3 != 583 )
    {
      if ( a3 == 1025 )
      {
        TabletModeCoverWindow::InitializeInstance((TabletModeCoverWindow *)((char *)this - 96));
        return v5;
      }
      if ( a3 == 32769 && (a4 & 1) != 0 )
        TabletModeCoverWindow::ScaleFactorChanged((TabletModeCoverWindow *)((char *)this - 96));
      return DefWindowProcW(a2, a3, a4, lParam);
    }
LABEL_27:
    TabletModeCoverWindow::OnPointerUp((TabletModeCoverWindow *)((char *)this - 96));
    return v5;
  }
  if ( a3 == 514 )
    goto LABEL_27;
  if ( a3 != 16 )
  {
    switch ( a3 )
    {
      case 0x15u:
        TabletModeCoverWindow::SystemColorsChanged((RTL_SRWLOCK *)this - 12);
        break;
      case 0x21u:
        return 3LL;
      case 0x3Du:
        if ( lParam == -25 )
        {
          v11 = (IRawElementProviderSimple **)((char *)this + 88);
          if ( *((_QWORD *)this + 11) )
            return UiaReturnRawElementProvider(*((HWND *)this + 1), a4, -25LL, *v11);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
          Instance = CoverWindowAcc_CreateInstance(
                       *((HWND *)this + 1),
                       L"TabletModeCoverWindow",
                       0LL,
                       v12,
                       (void **)v11);
          if ( Instance < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xCF,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
              (const char *)(unsigned int)Instance);
          if ( *v11 )
            return UiaReturnRawElementProvider(*((HWND *)this + 1), a4, -25LL, *v11);
        }
        break;
      case 0x201u:
LABEL_8:
        *((_BYTE *)this + 124) = 1;
        return v5;
    }
    return DefWindowProcW(a2, a3, a4, lParam);
  }
  return v5;
}
