/*
 * XREFs of ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC3B4
 * Callers:
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC074 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B8FA0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x1800FCEA4 (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FEF00 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceArrivalForExistingMonitors(
        CMonitorManager *this,
        const unsigned __int16 *a2)
{
  CAudioSessionManager *v4; // rcx
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v6; // rbx
  int restarted; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  CMonitorManager::CaptureMonitor *v11; // [rsp+50h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v10 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v4, &v10);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v11, *Next);
    v6 = v11;
    if ( CMonitorManager::CaptureMonitor::IsConnectedTo(v11, a2) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Du,
          (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
          a2);
      }
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(v6);
      if ( restarted < 0 )
      {
        v4 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x4Eu,
            (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
            restarted);
        }
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
