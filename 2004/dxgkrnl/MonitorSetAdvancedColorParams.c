/*
 * XREFs of MonitorSetAdvancedColorParams @ 0x1C02F4258
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memcmp @ 0x1C00270D0 (memcmp.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C0168A54 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C02F86B4 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  struct DXGMONITOR *v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-58h]
  _QWORD *v23; // [rsp+30h] [rbp-50h]
  __int128 Buf2; // [rsp+38h] [rbp-48h] BYREF
  __int128 v25; // [rsp+48h] [rbp-38h]
  _OWORD Buf1[2]; // [rsp+58h] [rbp-28h] BYREF

  v8 = 0;
  v23 = a3;
  v22 = a2;
  if ( !a1 || !a7 || !a8 || a8 > a7 || a6 >= a7 || a6 >= a8 )
    return 3221225485LL;
  v21 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v21);
  if ( (int)result >= 0 )
  {
    v13 = v21;
    if ( !v21 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v14);
      v17 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v13 + 296), 1u);
    v18 = *(_OWORD *)((char *)v13 + 628);
    v19 = *(_OWORD *)((char *)v13 + 644);
    *(_QWORD *)&Buf2 = *v22;
    Buf1[0] = v18;
    *((_QWORD *)&Buf2 + 1) = *v23;
    *(_QWORD *)&v25 = *a4;
    *((_QWORD *)&v25 + 1) = *a5;
    Buf1[1] = v19;
    if ( !memcmp(Buf1, &Buf2, 0x20uLL)
      && *((_DWORD *)v13 + 166) == a6
      && *((_DWORD *)v13 + 167) == a7
      && *((_DWORD *)v13 + 168) == a8
      && !*((_BYTE *)v13 + 692) )
    {
      *((_DWORD *)v13 + 165) = 5;
      v8 = 255;
      *((_DWORD *)v13 + 174) = 6;
    }
    else
    {
      v20 = v25;
      *(_OWORD *)((char *)v13 + 628) = Buf2;
      *(_OWORD *)((char *)v13 + 644) = v20;
      *((_DWORD *)v13 + 165) = 5;
      *((_DWORD *)v13 + 166) = a6;
      *((_DWORD *)v13 + 167) = a7;
      *((_DWORD *)v13 + 168) = a8;
      *((_BYTE *)v13 + 692) = 0;
      *((_DWORD *)v13 + 174) = 6;
      DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(v13);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v13, 0);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v13 + 296));
    KeLeaveCriticalRegion();
    return v8;
  }
  return result;
}
