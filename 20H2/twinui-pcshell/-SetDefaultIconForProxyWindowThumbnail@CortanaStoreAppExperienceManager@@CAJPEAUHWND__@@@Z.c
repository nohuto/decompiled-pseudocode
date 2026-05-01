/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801F44C4
 * Callers:
 *     ?CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801F22E0 (-CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008DD62 (WINRT_WindowsGetStringRawBuffer.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801F30B4 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1801F32B0 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18046FA7C (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  __int64 result; // rax
  int DpiForMonitor; // eax
  unsigned int v5; // ebx
  bool *v6; // rdx
  struct tagSIZE v7; // r9
  int ImmersiveIcon; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  HGDIOBJ v11; // rbx
  HICON v12; // rax
  unsigned int v13; // [rsp+28h] [rbp-30h]
  unsigned __int8 StringRawBuffer; // [rsp+30h] [rbp-28h]
  ImmersiveIcons *v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  char v18; // [rsp+70h] [rbp+18h] BYREF
  HGDIOBJ ho; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 )
  {
    DpiForMonitor = GetDpiForMonitor(v2, 0LL, &v17, &v18);
    v5 = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      try
      {
        if ( dword_1805CE760 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                           + (unsigned int)tls_index)
                                         + 4LL) )
        {
          Init_thread_header(&dword_1805CE760);
          if ( dword_1805CE760 == -1 )
          {
            CortanaExperienceHelpers::GetStoreCortanaAumId((HSTRING)&qword_1805CCE58, v6);
            atexit(CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_3_::_dynamic_atexit_destructor_for__cortanaAppAumid__);
            Init_thread_footer(&dword_1805CE760);
          }
        }
        LODWORD(v15) = GetSystemMetrics(11);
        HIDWORD(v15) = GetSystemMetrics(12);
        ho = 0LL;
        StringRawBuffer = (unsigned __int8)WINRT_WindowsGetStringRawBuffer(qword_1805CCE58, 0LL);
        LOBYTE(v13) = 0;
        ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                          v15,
                          (struct tagSIZE)v15,
                          (struct tagSIZE)v15,
                          v7,
                          v17,
                          v13,
                          StringRawBuffer,
                          (const unsigned __int16 *)&ho,
                          (HBITMAP *)v15);
        v9 = ImmersiveIcon;
        if ( ImmersiveIcon >= 0 )
        {
          v11 = ho;
          v12 = SearchAppDesktopExperienceView::HICONFromBitmap((HBITMAP)ho);
          if ( v12 )
            SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v12);
          if ( v11 )
            DeleteObject(v11);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x513,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)ImmersiveIcon);
          if ( ho )
            DeleteObject(ho);
          result = v9;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x51D,
                               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                               v10);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)DpiForMonitor);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
