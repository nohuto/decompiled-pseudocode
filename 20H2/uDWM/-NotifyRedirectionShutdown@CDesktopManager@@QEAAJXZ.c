/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180086560
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x18008CCF0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000F580 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180051AB4 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180051C44 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x180051F50 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800868D8 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  int v2; // eax
  signed int v3; // ebx
  char v4; // si
  __int64 v5; // r8
  signed int LastError; // eax
  signed int v7; // eax
  void *v8; // rcx
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  *((_BYTE *)this + 20) = 1;
  v2 = CDesktopManager::EnableMonitorRenderTargets((CVisualProxy **)this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x286u);
  CDesktopManager::ReleaseDCompResources(this);
  v4 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmShutdownMessage_Info,
      v5,
      1LL,
      (__int64)v10);
  if ( *((_QWORD *)this + 83) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 164), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x292u);
    }
    if ( v3 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 83), 0xFFFFFFFF) )
      {
        v7 = GetLastError();
        v3 = v7;
        if ( v7 > 0 )
          v3 = (unsigned __int16)v7 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x29Au);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 164) = 0;
    v8 = (void *)*((_QWORD *)this + 83);
    if ( v8 )
    {
      CloseHandle(v8);
      *((_QWORD *)this + 83) = 0LL;
    }
  }
  if ( !v4 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
