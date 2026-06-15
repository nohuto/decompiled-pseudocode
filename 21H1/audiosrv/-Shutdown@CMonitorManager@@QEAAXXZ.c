/*
 * XREFs of ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1801001B8
 * Callers:
 *     ??1CMonitorManager@@QEAA@XZ @ 0x1800FA6F0 (--1CMonitorManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049034 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057F34 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FADE0 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800FF8DC (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18010038C (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180100440 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::Shutdown(CMonitorManager *this)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  CMonitorManager::CaptureMonitor *v5; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v7; // [rsp+28h] [rbp-8h]
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  CMonitorManager::CaptureMonitor *v9; // [rsp+68h] [rbp+38h] BYREF

  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    v2 = -2147024809;
LABEL_15:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        v2);
    }
    goto LABEL_19;
  }
  *((_DWORD *)this + 14) = 2;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v3 + 56LL))(v3, this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  while ( *((_QWORD *)this + 16) )
  {
    v4 = ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
           (__int64 **)this + 14,
           &v8);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v9, *v4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = v9;
    CMonitor::StopIfRunning(*((CMonitor **)v9 + 25));
    CMonitorManager::CaptureMonitor::UninitializeSynchronously(v5);
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  LeaveCriticalSection(lpCriticalSection);
  v7 = 0;
  CMonitorManager::CleanupMonitorRestartTimer(this);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)this + 64));
  *((_DWORD *)this + 14) = 3;
  if ( v2 < 0 )
    goto LABEL_15;
LABEL_19:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
