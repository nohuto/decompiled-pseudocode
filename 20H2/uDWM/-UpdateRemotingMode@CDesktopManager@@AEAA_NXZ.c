/*
 * XREFs of ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18003896C
 * Callers:
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003887C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDesktopManager::UpdateRemotingMode(CDesktopManager *this)
{
  int v1; // esi
  int v3; // ebx
  DWORD CurrentProcessId; // eax
  unsigned int v6; // eax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD pSessionId; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v1 = *((_DWORD *)this + 7);
  if ( GetSystemMetrics(4096) )
  {
    v7 = 0;
    CurrentProcessId = GetCurrentProcessId();
    ProcessIdToSessionId(CurrentProcessId, &pSessionId);
    v3 = 4;
    if ( !(unsigned __int8)WinStationQueryInformationW(0LL, pSessionId, 39LL, &v9, 4, &v7) || v9 != 5 )
    {
      v3 = 1;
LABEL_7:
      *((_DWORD *)this + 7) = v3;
      return v3 != v1;
    }
    v10 = 0LL;
    if ( !(unsigned __int8)WinStationGetConnectionProperty(
                             0xFFFFFFFFLL,
                             &PROPERTY_TYPE_GET_REMOTEAPP_HD_SUPPORT_LEVEL,
                             &v10) )
      goto LABEL_7;
    if ( *(_WORD *)v10 == 1 )
    {
      v6 = *(_DWORD *)(v10 + 8);
      if ( !v6 )
        goto LABEL_15;
      if ( v6 <= 2 )
      {
        *((_DWORD *)this + 7) = 5;
        goto LABEL_16;
      }
      if ( v6 != 3 )
      {
LABEL_15:
        *((_DWORD *)this + 7) = 2;
        goto LABEL_16;
      }
      *((_DWORD *)this + 7) = 6;
    }
LABEL_16:
    WinStationFreePropertyValue();
    v3 = *((_DWORD *)this + 7);
    return v3 != v1;
  }
  *((_DWORD *)this + 7) = 0;
  v3 = 0;
  return v3 != v1;
}
