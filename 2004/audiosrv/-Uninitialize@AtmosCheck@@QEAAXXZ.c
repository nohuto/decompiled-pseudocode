/*
 * XREFs of ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137CA0
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BB3D0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x180127530 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180135190 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFromShellReadyNotifications@AtmosCheck@@AEAAXXZ @ 0x180074820 (-UnregisterFromShellReadyNotifications@AtmosCheck@@AEAAXXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x180074834 (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DE414 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180135544 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180137E3C (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall AtmosCheck::Uninitialize(AtmosCheck *this)
{
  __int64 v2; // rbp
  DWORD *v3; // rsi
  unsigned __int64 v4; // rdi
  HRESULT v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  const char *v9; // r9
  HKEY v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 552) = 1;
  *((_BYTE *)this + 100) = 0;
  if ( *((_BYTE *)this + 209) )
  {
    v2 = 0LL;
    v3 = (DWORD *)*((_QWORD *)this + 66);
    v4 = (unsigned __int64)(*((_QWORD *)this + 67) - (_QWORD)v3 + 3LL) >> 2;
    if ( (unsigned __int64)v3 > *((_QWORD *)this + 67) )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        v5 = CoCancelCall(*v3, 0);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            139LL,
            (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
            (const char *)(unsigned int)v5);
        ++v3;
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
  if ( *((_BYTE *)this + 97) )
  {
    AtmosCheck::UnregisterFromShellReadyNotifications(this);
    AtmosCheck::UnregisterFromUserWatcherNotifications(this);
    AtmosCheck::UninitializeAppServiceMode(this);
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
    {
      UnregisterWaitEx(v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 14) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 13);
    if ( v7 )
    {
      CloseHandle(v7);
      *((_QWORD *)this + 13) = 0LL;
    }
    AtmosCheck::CancelLicenseRefreshTimer(this);
  }
  v8 = (void *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      if ( !UnregisterWaitEx(*((HANDLE *)this + 16), (HANDLE)0xFFFFFFFFFFFFFFFFLL) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xAD,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          v9);
      v8 = (void *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 16) = 0LL;
    }
    CloseHandle(v8);
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (HKEY)*((_QWORD *)this + 15);
  if ( v10 )
  {
    RegCloseKey(v10);
    *((_QWORD *)this + 15) = 0LL;
  }
  AtmosCheck::UnregisterAppDeploymentNotifications(this);
}
