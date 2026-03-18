/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00C8880
 * Callers:
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     LogDiagCDS @ 0x1C00B0DAC (LogDiagCDS.c)
 *     LogDiagSDC @ 0x1C00B1668 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BA904 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C1BBC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8950 (DrvSetWddmDeviceMonitorPowerState.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0148CFC (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(int a1, int a2, int a3, int a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]

  v10 = a1;
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v5[0] = 6;
  v5[1] = 64;
  v6 = 0LL;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  return ((__int64 (__fastcall *)(_DWORD *))qword_1C024C950)(v5);
}
