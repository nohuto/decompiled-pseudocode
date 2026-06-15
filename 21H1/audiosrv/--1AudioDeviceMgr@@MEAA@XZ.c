/*
 * XREFs of ??1AudioDeviceMgr@@MEAA@XZ @ 0x18013DF90
 * Callers:
 *     ??_EAudioDeviceMgr@@MEAAPEAXI@Z @ 0x18013E07C (--_EAudioDeviceMgr@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@QEAAXXZ @ 0x18013EC50 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@.c)
 *     ?Shutdown@AudioDeviceMgr@@UEAAXXZ @ 0x18013ED10 (-Shutdown@AudioDeviceMgr@@UEAAXXZ.c)
 */

void __fastcall AudioDeviceMgr::~AudioDeviceMgr(AudioDeviceMgr *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &AudioDeviceMgr::`vftable'{for `IAudioDeviceMgr'};
  *((_QWORD *)this + 1) = &AudioDeviceMgr::`vftable'{for `IMMNotificationClientInternal'};
  *((_QWORD *)this + 2) = &AudioDeviceMgr::`vftable'{for `CUnknown'};
  AudioDeviceMgr::Shutdown(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::RemoveAll((char *)this + 120);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
