/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x1800576AC (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061704 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x1800624A4 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FA210 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x1800FA32C (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FAAE8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FB094 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x1800FB794 (-DoHandlePropertyValueChanged@CMonitorManager@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FBB28 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC3B4 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC504 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x1800FD418 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800FE158 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x1800FE320 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800FE430 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 *     ?QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z @ 0x1800FE79C (-QueueDeviceStateChanged@CMonitorManager@@AEAAJKPEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1800FED7C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FF270 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800FF5E8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800FF7BC (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800FF870 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180100900 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1801009CC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180102068 (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180102204 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180102484 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102970 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180102F30 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18010382C (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104134 (-Stop@CMonitor@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1801042F4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180104DF8 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
