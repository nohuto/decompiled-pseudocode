/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801D1444
 * Callers:
 *     ?CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801CF390 (-CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1801D02F0 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18044C16C (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  __int64 result; // rax
  int DpiForMonitor; // eax
  unsigned int v5; // ebx
  struct tagSIZE v6; // r9
  int ImmersiveIcon; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  HGDIOBJ v10; // rbx
  HICON v11; // rax
  unsigned int v12; // [rsp+28h] [rbp-30h]
  unsigned __int8 StringRawBuffer; // [rsp+30h] [rbp-28h]
  ImmersiveIcons *v14; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF
  HGDIOBJ ho; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 )
  {
    DpiForMonitor = GetDpiForMonitor(v2, 0LL, &v16, &v17);
    v5 = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      try
      {
        if ( dword_1805A2318 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                           + (unsigned int)tls_index)
                                         + 4LL) )
        {
          Init_thread_header(&dword_1805A2318);
          if ( dword_1805A2318 == -1 )
          {
            CortanaExperienceHelpers::GetStoreCortanaAumId((CortanaExperienceHelpers::Testing *)&qword_1805A0A78);
            atexit(CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_3_::_dynamic_atexit_destructor_for__cortanaAppAumid__);
            Init_thread_footer(&dword_1805A2318);
          }
        }
        LODWORD(v14) = GetSystemMetrics(11);
        HIDWORD(v14) = GetSystemMetrics(12);
        ho = 0LL;
        StringRawBuffer = (unsigned __int8)WINRT_WindowsGetStringRawBuffer(qword_1805A0A78, 0LL);
        LOBYTE(v12) = 0;
        ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                          v14,
                          (struct tagSIZE)v14,
                          (struct tagSIZE)v14,
                          v6,
                          v16,
                          v12,
                          StringRawBuffer,
                          (const unsigned __int16 *)&ho,
                          (HBITMAP *)v14);
        v8 = ImmersiveIcon;
        if ( ImmersiveIcon >= 0 )
        {
          v10 = ho;
          v11 = SearchAppDesktopExperienceView::HICONFromBitmap((HBITMAP)ho);
          if ( v11 )
            SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v11);
          if ( v10 )
            DeleteObject(v10);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x509,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)ImmersiveIcon);
          if ( ho )
            DeleteObject(ho);
          result = v8;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x513,
                               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                               v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x504,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)DpiForMonitor);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x501,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
