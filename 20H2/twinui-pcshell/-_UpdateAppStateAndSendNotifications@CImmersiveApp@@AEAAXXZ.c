/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18001AE88
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001653C (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18001ADC0 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18001C270 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180064428 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x18017BA70 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18017DB10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180182BC0 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180182EAC (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180056B60 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  int v1; // r8d
  __int64 v3; // rcx
  bool v4; // cl
  unsigned int v5; // r8d
  char v6; // cl
  unsigned int v7; // r8d
  int v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 59);
  if ( (v3 != 0) != (v1 & 1) )
  {
    if ( v3 )
    {
      v9 = 0LL;
      v8 = 1;
      *((_DWORD *)this + 146) = v1 | 1;
      CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
      v1 = *((_DWORD *)this + 146);
    }
    else
    {
      v1 &= ~1u;
      *((_DWORD *)this + 146) = v1;
    }
  }
  v4 = *((_BYTE *)this + 496) && !*((_BYTE *)this + 497);
  if ( v4 != ((v1 & 4) != 0) )
  {
    if ( v4 )
      v5 = v1 | 4;
    else
      v5 = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 146) = v5;
    v9 = 0LL;
    v8 = !v4 + 4;
    CImmersiveApp::_ScheduleApplicationNotifications(this, (const struct APP_CHANGE_INFO *const)&v8, 1uLL);
    v1 = *((_DWORD *)this + 146);
  }
  v6 = *((_BYTE *)this + 604);
  if ( v6 != ((v1 & 8) != 0) )
  {
    if ( v6 )
      v7 = v1 | 8;
    else
      v7 = v1 & 0xFFFFFFF7;
    *((_DWORD *)this + 146) = v7;
  }
}
