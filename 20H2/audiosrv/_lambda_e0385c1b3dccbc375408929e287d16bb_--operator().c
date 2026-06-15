/*
 * XREFs of _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073194
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0385c1b3dccbc375408929e287d16bb___::Run @ 0x180073D50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e0385c1b3dccbc375408929e287d16bb___--Run.c)
 * Callees:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800087C4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036640 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003881C (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F304 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800738F4 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180073A54 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801051B0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_e0385c1b3dccbc375408929e287d16bb_::operator()(AtmosCheck **a1)
{
  int ready; // eax
  int v3; // eax
  char *v4; // rbx
  bool v5; // al
  AtmosCheck *v6; // rdx
  signed int LastError; // eax
  int v8; // r8d
  int v9; // r9d
  AtmosCheck *v10; // rax
  AtmosCheck *v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  signed int v14; // [rsp+40h] [rbp+8h] BYREF
  char *v15; // [rsp+48h] [rbp+10h]

  AtmosCheck::RefreshSpatialAudioLicenseModelState(*a1, 0LL);
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    AtmosCheck::RegisterAppDeploymentNotifications(*a1);
    if ( *((_BYTE *)*a1 + 209) )
    {
      ready = AtmosCheck::RegisterForShellReadyNotifications(*a1);
      if ( ready < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          469LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ready);
      v3 = AtmosCheck::RegisterForUserWatcherNotifications(*a1);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          473LL,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v3);
    }
    else if ( *((_QWORD *)*a1 + 13) )
    {
      v4 = (char *)OpenEventW(0x100002u, 0, L"Global\\Client_Atmos_Check_Event");
      v15 = v4;
      v5 = 0;
      if ( v4 )
        v5 = WaitForSingleObject(v4, 0) == 0;
      v6 = *a1;
      if ( v5 )
      {
        *((_BYTE *)v6 + 99) = 1;
        AtmosCheck::PerformLicenseCheck(*a1, 1);
      }
      else if ( !RegisterWaitForSingleObject(
                   (PHANDLE)v6 + 14,
                   *((HANDLE *)v6 + 13),
                   (WAITORTIMERCALLBACK)AtmosCheck::StaticClientAtmosCheckEventFired,
                   v6,
                   0xFFFFFFFF,
                   0x18u) )
      {
        if ( (unsigned int)dword_18019C4F0 > 2 )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v14 = LastError;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_18019C4F0,
            (unsigned int)&unk_18016C9DA,
            v8,
            v9,
            (__int64)&v14);
        }
        *((_BYTE *)*a1 + 99) = 1;
      }
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v4);
    }
    AtmosCheck::UpdateLicenseRefreshTimer(*a1);
  }
  *((_BYTE *)*a1 + 97) = 1;
  v10 = *a1;
  *((_BYTE *)*a1 + 96) = 1;
  if ( *((_BYTE *)*a1 + 209) )
  {
    LOBYTE(v10) = AtmosCheck::IsRunningOnXbox(*a1);
    if ( !(_BYTE)v10 )
      LOBYTE(v10) = AtmosCheck::PerformLicenseCheck(v11, 1);
  }
  return (char)v10;
}
