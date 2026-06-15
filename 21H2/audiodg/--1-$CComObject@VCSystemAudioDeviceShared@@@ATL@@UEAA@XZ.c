/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400132EC
 * Callers:
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140013430 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010710 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013158 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CSystemAudioDeviceShared>::~CComObject<CSystemAudioDeviceShared>(
        CSystemAudioDeviceSharedBase *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
  *((_QWORD *)this + 37) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 38) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
  *((_DWORD *)this + 92) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( this != (CSystemAudioDeviceSharedBase *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  }
}
