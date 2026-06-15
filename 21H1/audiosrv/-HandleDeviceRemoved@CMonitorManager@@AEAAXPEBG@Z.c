/*
 * XREFs of ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD0D4
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800FF000 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049034 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057F34 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9B50 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FACB4 (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x1800FDA74 (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1800FF94C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180100440 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104D04 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::HandleDeviceRemoved(CMonitorManager *this, unsigned __int16 *a2)
{
  CMonitorManager::CaptureMonitor *v2; // r14
  _QWORD *v3; // rsi
  CMonitorManager::CaptureMonitor *v4; // rcx
  _QWORD *v5; // rax
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v7; // rbx
  unsigned __int64 i; // r15
  CMonitorManager::CaptureMonitor *v9; // rbx
  unsigned __int64 j; // rbx
  __int64 v11; // rcx
  ATL::CAtlException *v12; // rbx
  _QWORD *v13; // [rsp+20h] [rbp-68h] BYREF
  ATL::CAtlException *v14; // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v16; // [rsp+38h] [rbp-50h]
  _QWORD *v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+58h] [rbp-30h]
  CMonitorManager::CaptureMonitor *v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int16 *v22; // [rsp+98h] [rbp+10h]
  int v23; // [rsp+A0h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v24; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a2;
  v21 = this;
  v2 = this;
  v3 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (_QWORD *)*((_QWORD *)v2 + 14);
  v13 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v4, &v13);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v24, *Next);
    v7 = v24;
    if ( CMonitorManager::CaptureMonitor::IsConnectedTo(v24, v22) )
    {
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v17,
          (__int64)v7);
      }
      catch ( ATL::CAtlException *v14 )
      {
        v12 = v14;
        if ( *(_DWORD *)v14 == -1073741571 )
          _o__resetstkoflw();
        v23 = *(_DWORD *)v12;
        if ( v23 < 0 )
        {
          v4 = v24;
          if ( v24 )
            (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v24 + 16LL))(v24);
          v2 = v21;
          v3 = v17;
          goto LABEL_13;
        }
        v2 = v21;
        v7 = v24;
      }
      v3 = v17;
    }
    if ( v7 )
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_13:
    v5 = v13;
  }
  for ( i = 0LL; i < v18; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v21, v3[i]);
    v9 = v21;
    if ( *((_BYTE *)v21 + 49) )
    {
      CMonitor::Stop(*((CMonitor **)v21 + 25));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v9);
    }
    else
    {
      CMonitorManager::RemoveMonitor(v2, v21, 1);
    }
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    for ( j = 0LL; j < v18; ++j )
    {
      v11 = v3[j];
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    free(v3);
  }
}
