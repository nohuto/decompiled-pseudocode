/*
 * XREFs of ??1CAudioSrv@@UEAA@XZ @ 0x1800B7AAC
 * Callers:
 *     ??_GCAudioSrv@@UEAAPEAXI@Z @ 0x1800B8070 (--_GCAudioSrv@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180035698 (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800B7D64 (--1CSerialWorkQueue@@QEAA@XZ.c)
 */

void __fastcall CAudioSrv::~CAudioSrv(CAudioSrv *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CAudioSrv::`vftable'{for `IAudioService'};
  *((_QWORD *)this + 9) = &CAudioSrv::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 10) = &CAudioSrv::`vftable'{for `IMonitorDGTermination'};
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 11);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 11) = 0LL;
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 376));
  CSerialWorkQueue::~CSerialWorkQueue((CAudioSrv *)((char *)this + 208));
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  *(_QWORD *)this = &IAudioService::`vftable';
}
