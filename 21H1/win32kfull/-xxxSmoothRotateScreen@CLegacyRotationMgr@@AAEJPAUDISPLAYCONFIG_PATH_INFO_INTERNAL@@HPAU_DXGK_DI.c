/*
 * XREFs of ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 * Callees:
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 *     ?ConvertDisplayConfigRotationToDMDO@@YGKW4DISPLAYCONFIG_ROTATION@@@Z @ 0xAC812 (-ConvertDisplayConfigRotationToDMDO@@YGKW4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@333@Z @ 0x14071D (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_.c)
 *     ?GetActivePid@CRotationMgr@@SGKXZ @ 0x1407B7 (-GetActivePid@CRotationMgr@@SGKXZ.c)
 *     ?IsExtendTopology@@YGHXZ @ 0x1408CD (-IsExtendTopology@@YGHXZ.c)
 *     _DwmAsyncNotifyRotationModeChange@8 @ 0x1D2464 (_DwmAsyncNotifyRotationModeChange@8.c)
 */

struct DISPLAYCONFIG_PATH_INFO_INTERNAL *__thiscall CLegacyRotationMgr::xxxSmoothRotateScreen(
        CLegacyRotationMgr *this,
        char **a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v4; // edi
  int ActivePid; // eax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v11; // esi
  int v12; // eax
  int v13; // ecx
  int v15; // [esp+10h] [ebp-4h] BYREF

  v4 = ConvertDisplayConfigRotationToDMDO(a2[26]);
  ActivePid = CRotationMgr::GetActivePid();
  v6 = a3;
  EtwTraceSmoothRotationStart(v4, a3, ActivePid);
  DrvLogDiagDisplayChange(0, 8);
  v7 = IsExtendTopology();
  v15 = v7;
  v8 = IsCurrentDesktopComposed();
  a3 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v8;
  if ( v8 && !v7 )
  {
    v9 = ReferenceDwmApiPort();
    DwmAsyncNotifyRotationModeChange(v9, 1);
    if ( _gdwInAtomicOperation && (_gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, _gdwInAtomicOperation, 0, 0, 0);
    v10 = UserReferenceDwmApiPort();
    UserSessionSwitchLeaveCrit();
    DwmSyncFlushAndWaitForBatch(v10);
    EnterCrit(0, 1);
    v8 = (int)a3;
  }
  v11 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)xxxUserSetDisplayConfig(
                                                     1,
                                                     a2,
                                                     672,
                                                     v8 != 0 ? 24 : 8,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     a4);
  if ( a3 && !v15 )
  {
    v12 = ReferenceDwmApiPort();
    DwmAsyncNotifyRotationModeChange(v12, 0);
  }
  EtwTraceSmoothRotationStop(v4, v6);
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000001LL) )
  {
    a2 = (char **)v11;
    a4 = v6;
    v15 = v4;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_25397D,
      v13,
      v13,
      (int)&v15,
      (int)&a4,
      (int)&a3,
      (int)&a2);
  }
  return v11;
}
