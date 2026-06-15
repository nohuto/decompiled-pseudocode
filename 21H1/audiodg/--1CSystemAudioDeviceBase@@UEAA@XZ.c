/*
 * XREFs of ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140010564
 * Callers:
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013310 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x140037AC4 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceBase@@UEAAPEAXI@Z @ 0x140037CB0 (--_ECSystemAudioDeviceBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140010504 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010870 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSystemAudioDeviceBase::~CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceBase::`vftable'{for `ISubmix'};
  v6 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v6);
  CSystemAudioDeviceBase::Cleanup(this);
  EtwEventActivityIdControl(4LL, &v6);
  v2 = *((_QWORD *)this + 36);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 34);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 33);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)this + 136);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)this + 88);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)this + 40);
}
