/*
 * XREFs of ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ @ 0xB2190 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33@Z @ 0x1406B6 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUI.c)
 *     ?ConvertDMDORotationToDisplayConfig@@YG?AW4DISPLAYCONFIG_ROTATION@@K@Z @ 0x140793 (-ConvertDMDORotationToDisplayConfig@@YG-AW4DISPLAYCONFIG_ROTATION@@K@Z.c)
 *     ?IsInternalVideoOutput@@YG_NW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14094C (-IsInternalVideoOutput@@YG_NW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?UpdateRotation@@YGXPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x140D4D (-UpdateRotation@@YGXPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x141425 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AAEJPAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPAU_DXGK_DI.c)
 */

int __thiscall CLegacyRotationMgr::xxxRotateScreen(CLegacyRotationMgr *this, char *a2, int a3, int *a4)
{
  int v5; // ebx
  int v6; // ecx
  LONG v7; // edi
  int v8; // ecx
  int v9; // ecx
  CLegacyRotationMgr *v10; // ecx
  int v11; // [esp+Ch] [ebp-148h] BYREF
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-144h] BYREF
  int v13; // [esp+18h] [ebp-13Ch] BYREF
  int v14; // [esp+1Ch] [ebp-138h] BYREF
  _DWORD v15[17]; // [esp+20h] [ebp-134h] BYREF
  _DWORD v16[7]; // [esp+64h] [ebp-F0h] BYREF
  int v17; // [esp+80h] [ebp-D4h] BYREF
  int v18; // [esp+84h] [ebp-D0h]
  void *v19; // [esp+D0h] [ebp-84h]
  LONG v20; // [esp+E8h] [ebp-6Ch]

  memset(v15, 0, 0x40u);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v15[14] = CurrentTime;
  v15[5] = 18;
  LOBYTE(v15[11]) = -1;
  v11 = 1;
  if ( a4 )
    *a4 = 0;
  if ( (int)DrvQueryDisplayConfig(-1073741822, &v11, &v17, 0) < 0 )
    return -1;
  v5 = ConvertDMDORotationToDisplayConfig(a2);
  if ( !IsInternalVideoOutput(v19) )
  {
    if ( a3 )
    {
      v16[0] = -6;
      memset(&v16[2], 0, 12);
      v16[6] = 0;
      v16[1] = 28;
      v16[5] = v5;
      DrvDisplayConfigSetDeviceInfo(v16, v15);
    }
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000001LL) )
    {
      CurrentTime.HighPart = v20;
      v14 = 1003;
      v13 = a3;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_253919,
        v6,
        v6,
        (int)&CurrentTime.HighPart,
        (int)&v13,
        (int)&v14);
    }
    return 0;
  }
  v7 = v20;
  if ( v5 == v20 )
  {
    if ( a4 )
      *a4 = 1;
    if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000001LL) )
    {
      v13 = a3;
      CurrentTime.HighPart = 1001;
      v14 = v7;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        byte_253919,
        v8,
        v8,
        (int)&v14,
        (int)&v13,
        (int)&CurrentTime.HighPart);
    }
    return 0;
  }
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x200000000001LL) )
  {
    CurrentTime.HighPart = 1000;
    v13 = a3;
    v14 = v7;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_253919,
      v9,
      v9,
      (int)&v14,
      (int)&v13,
      (int)&CurrentTime.HighPart);
  }
  UpdateRotation(&v17, v5);
  v17 &= (unsigned int)&loc_30F8F;
  v18 &= 0x802CF190;
  return CLegacyRotationMgr::xxxSmoothRotateScreen(
           v10,
           (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)&v17,
           a3,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
}
