/*
 * XREFs of MonitorSetSDRWhiteLevel @ 0x1C02F3B8C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C01678A4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C01899BC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C02F7714 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02F78B0 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 */

__int64 __fastcall MonitorSetSDRWhiteLevel(struct HDXGMONITOR__ *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  int v15; // eax
  struct DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v16 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v16);
  if ( (int)result >= 0 )
  {
    v6 = v16;
    if ( !v16 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v6 + 296), 1u);
    if ( !DXGMONITOR::EdidSupportsHDR(v6) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = DXGMONITOR::SetSDRWhiteLevel(v6, a2);
    if ( v14 >= 0 )
    {
      DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(v6);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v6, 1);
      v14 = v15;
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return (unsigned int)v14;
  }
  return result;
}
