/*
 * XREFs of MonitorSetDefaultAdvancedColorParams @ 0x1C02F4B1C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C012C020 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C016DBE4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02F8BB0 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02FB430 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _ERESOURCE *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v4 = v12;
    if ( !v12 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v3, v2);
      WdLogEvent5_WdAssertion(v5);
      v8 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v8);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v4 + 296), 1u);
    DXGMONITOR::_SetColorPrimariesToBT709(v4);
    *((_BYTE *)v4 + 692) = 0;
    *((_DWORD *)v4 + 167) = 2700000;
    *((_DWORD *)v4 + 166) = 5000;
    *((_DWORD *)v4 + 169) = 5000;
    *((_DWORD *)v4 + 168) = 2700000;
    *((_DWORD *)v4 + 170) = 2700000;
    *((_DWORD *)v4 + 171) = 2700000;
    *((_DWORD *)v4 + 174) = 3;
    DXGMONITOR::SetSDRWhiteLevel(v4, 0x3E8u);
    DXGMONITOR::_SendAdjustedHDRParamsToDriver(v4, 0);
    v9 = (struct _ERESOURCE *)((char *)v4 + 296);
    v11 = v10;
    ExReleaseResourceLite(v9);
    KeLeaveCriticalRegion();
    return v11;
  }
  return result;
}
