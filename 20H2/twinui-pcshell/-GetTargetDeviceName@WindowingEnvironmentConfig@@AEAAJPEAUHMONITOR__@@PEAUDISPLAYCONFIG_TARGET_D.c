/*
 * XREFs of ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1802E7218
 * Callers:
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802E62E0 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139AC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x1802E6F8C (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 */

int __fastcall WindowingEnvironmentConfig::GetTargetDeviceName(
        WindowingEnvironmentConfig *this,
        HMONITOR a2,
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a3)
{
  __int64 v5; // rcx
  _OWORD *v6; // rax
  struct DISPLAYCONFIG_TARGET_DEVICE_NAME *v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  UINT32 v17; // eax
  __int64 v18; // rdx
  wil::details *v19; // rcx
  __int64 v20; // r8
  const char *v21; // r9
  int result; // eax
  const struct std::nothrow_t *v23; // rdx
  DISPLAYCONFIG_PATH_INFO v24; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v25[432]; // [rsp+70h] [rbp-238h] BYREF
  struct tagMONITORINFO mi; // [rsp+220h] [rbp-88h] BYREF
  unsigned __int16 v27[36]; // [rsp+248h] [rbp-60h] BYREF

  memset_0(v25, 0, 0x1A4uLL);
  v5 = 3LL;
  v6 = v25;
  v7 = a3;
  do
  {
    v8 = v6[1];
    *(_OWORD *)&v7->header.type = *v6;
    v9 = v6[2];
    *(_OWORD *)&v7->header.id = v8;
    v10 = v6[3];
    *(_OWORD *)&v7->connectorInstance = v9;
    v11 = v6[4];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[6] = v10;
    v12 = v6[5];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[14] = v11;
    v13 = v6[6];
    *(_OWORD *)&v7->monitorFriendlyDeviceName[22] = v12;
    v14 = v6[7];
    v6 += 8;
    *(_OWORD *)&v7->monitorFriendlyDeviceName[30] = v13;
    v7 = (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)((char *)v7 + 128);
    *(_OWORD *)&v7[-1].monitorDevicePath[120] = v14;
    --v5;
  }
  while ( v5 );
  v15 = *v6;
  v16 = v6[1];
  v17 = *((_DWORD *)v6 + 8);
  *(_OWORD *)&v7->header.type = v15;
  *(_OWORD *)&v7->header.id = v16;
  v7->connectorInstance = v17;
  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(a2, &mi) )
    return wil::details::GetLastErrorFailHr(v19, v18, v20, v21);
  memset_0(&v24, 0, sizeof(v24));
  result = GetPathInfo(v27, v23, &v24);
  if ( result >= 0 )
  {
    a3->header.adapterId = v24.targetInfo.adapterId;
    a3->header.id = v24.targetInfo.id;
    a3->header.size = 420;
    a3->header.type = DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_NAME;
    result = DisplayConfigGetDeviceInfo(&a3->header);
    if ( result )
    {
      if ( result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
