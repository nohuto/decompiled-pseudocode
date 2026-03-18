/*
 * XREFs of ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D344
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C00E2768 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     UmfdLoadFontFileView @ 0x1C00E2860 (UmfdLoadFontFileView.c)
 *     cMapRemoteFonts @ 0x1C0289C0C (cMapRemoteFonts.c)
 *     AtmDrvFontManagementRedirector @ 0x1C029DF14 (AtmDrvFontManagementRedirector.c)
 *     GreMakeFontDir @ 0x1C02B9A6C (GreMakeFontDir.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C0E30 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CB38 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C008CB60 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008E314 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

char UmfdHostLifeTimeManager::EnsureUmfdHost(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-30h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v6,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  v3 = 0;
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0, v2) )
  {
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
    return 1;
  }
  else
  {
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
    if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_LaunchLock);
      if ( UmfdHostLifeTimeManager::s_Launched )
      {
LABEL_6:
        v3 = 1;
LABEL_7:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
        return v3;
      }
      KeClearEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent);
      if ( gpidLogon )
        v5 = PostWinlogonMessage(1033LL, 0LL);
      else
        v5 = -1073741271;
      if ( v5 >= 0 )
      {
        if ( !KeWaitForSingleObject(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, Executive, 0, 0, 0LL)
          && UmfdHostLifeTimeManager::s_UmfdHostProcess )
        {
          goto LABEL_6;
        }
        if ( (unsigned int)dword_1C032A3F8 <= 5
          || (qword_1C032A408 & 0x200000000000LL) == 0
          || (qword_1C032A410 & 0x200000000000LL) != qword_1C032A410 )
        {
          goto LABEL_7;
        }
      }
      else if ( (unsigned int)dword_1C032A3F8 <= 5
             || (qword_1C032A408 & 0x200000000000LL) == 0
             || (qword_1C032A410 & 0x200000000000LL) != qword_1C032A410 )
      {
        goto LABEL_7;
      }
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A3F8, (int)&dword_1C02F2CD3, 0, 0, 2u, &v7);
      goto LABEL_7;
    }
    return 0;
  }
}
