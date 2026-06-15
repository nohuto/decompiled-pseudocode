/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x140044924
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14002D59C (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x1400448D4 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x140044918 (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140044A40 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010740 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013188 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 */

void __fastcall CSystemAudioDeviceShared::~CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CSystemAudioDeviceSharedBase::Cleanup(this);
  if ( this != (CSystemAudioDeviceShared *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceSharedBase::~CSystemAudioDeviceSharedBase(this);
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  }
}
