/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608
 * Callers:
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C005362C (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??1DXGDIAGNOSTICS@@QEAA@XZ @ 0x1C00536C4 (--1DXGDIAGNOSTICS@@QEAA@XZ.c)
 *     ??1_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ @ 0x1C0055A30 (--1_OUTPUTDUPL_CONTEXTLIST@@QEAA@XZ.c)
 *     ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0057EEC (--1DXGPROTECTEDSESSION@@QEAA@XZ.c)
 *     ??1DXGVAILGUESTOBJECT@@IEAA@XZ @ 0x1C005B78C (--1DXGVAILGUESTOBJECT@@IEAA@XZ.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C015FE30 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C0160088 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0161518 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ??1DXGRESOURCE@@QEAA@XZ @ 0x1C019AABC (--1DXGRESOURCE@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C01DD21C (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C0207F60 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C02BED0C (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C02BEE70 (--1DISPLAY_SOURCE@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C02C2FA8 (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C02F0268 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C02F36E8 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C02FEE60 (--1DXGBLACKBOX@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C033E664 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C03473F4 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C034988C (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x1C034FE3C (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C0354E78 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C03550A0 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 *     ??1Lockable@@UEAA@XZ @ 0x1C03A7604 (--1Lockable@@UEAA@XZ.c)
 *     ??1EDIDCACHE@DxgMonitor@@UEAA@XZ @ 0x1C03B1650 (--1EDIDCACHE@DxgMonitor@@UEAA@XZ.c)
 *     ??1MONITOR_MGR@@UEAA@XZ @ 0x1C03B3260 (--1MONITOR_MGR@@UEAA@XZ.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03B4DFC (--1DXGMONITOR@@UEAA@XZ.c)
 *     ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03B5CF8 (--1USB4_HOSTROUTER_MGR@@QEAA@XZ.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x1C03B74DC (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C03BB2E8 (--1BLTQUEUE@@QEAA@XZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 452LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0,
          2,
          -1,
          (__int64)L"NULL == m_OwningThread",
          452LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    WdLogSingleEntry1(1LL, 453LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0,
          2,
          -1,
          (__int64)L"0 == m_OwnerAcquireCount",
          453LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
