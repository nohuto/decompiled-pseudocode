/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E
 * Callers:
 *     ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA (-vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNT.c)
 *     UmfdLoadFontFileView @ 0xDDE4C (UmfdLoadFontFileView.c)
 *     _cMapRemoteFonts@16 @ 0x1E949B (_cMapRemoteFonts@16.c)
 *     _AtmDrvFontManagementRedirector@28 @ 0x1FCF46 (_AtmDrvFontManagementRedirector@28.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ @ 0x8B79C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2@Z @ 0x180B47 (--$Write@$$V@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPT.c)
 */

char __stdcall UmfdHostLifeTimeManager::EnsureUmfdHost()
{
  char v0; // bl
  int v2; // eax
  int v3; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock() )
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    return 1;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
    return 0;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
  if ( UmfdHostLifeTimeManager::s_Launched )
    goto LABEL_4;
  KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
  v0 = 0;
  if ( _gpidLogon )
    v2 = PostWinlogonMessage(1033, 0);
  else
    v2 = -1073741271;
  if ( v2 >= 0 )
  {
    if ( !KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0)
      && UmfdHostLifeTimeManager::s_UmfdHostProcess )
    {
LABEL_4:
      v0 = 1;
      goto LABEL_5;
    }
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
LABEL_16:
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (int)&dword_266280,
        (int)&unk_257ABE,
        v3,
        v3);
  }
  else if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000000LL) )
  {
    goto LABEL_16;
  }
LABEL_5:
  if ( v4 )
  {
    ExReleasePushLockExclusiveEx(v4, 0);
    KeLeaveCriticalRegion();
  }
  return v0;
}
