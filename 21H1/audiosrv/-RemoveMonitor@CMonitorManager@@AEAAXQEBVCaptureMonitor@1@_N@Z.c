/*
 * XREFs of ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1800FF94C
 * Callers:
 *     ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x1800FAA54 (--_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FBC64 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD0D4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE830 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x1801000E0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049034 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057F34 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9B50 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800FF838 (-RemoveAt@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@A.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1801003F0 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104D04 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::RemoveMonitor(CMonitorManager *this, CMonitorManager::CaptureMonitor *a2, char a3)
{
  CAudioSessionManager *v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v10; // rbx
  CMonitor *v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  CMonitorManager::CaptureMonitor *v15; // [rsp+78h] [rbp+20h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Du, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v7 = (_QWORD *)((char *)this + 112);
    v8 = (_QWORD *)*((_QWORD *)this + 14);
    v14 = v8;
    while ( 1 )
    {
      Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v6, &v14);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, *Next);
      v10 = v15;
      if ( v15 == a2 )
        break;
      if ( v15 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v15 + 16LL))(v15);
      v8 = v14;
      if ( !v14 )
        goto LABEL_22;
    }
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAt(
      v7,
      v8);
    if ( a3 )
    {
      v11 = (CMonitor *)*((_QWORD *)v10 + 25);
      if ( *((_DWORD *)v11 + 14) == 3 )
        CMonitor::Stop(v11);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x5Eu,
          (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
          v10);
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v10);
    }
    if ( v10 )
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_22:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
}
