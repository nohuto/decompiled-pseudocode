/*
 * XREFs of ??1CSystemAudioDeviceShared@@UEAA@XZ @ 0x14003A1F4
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceShared_::CComObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x140022B2C (_ATL--CComObject_CSystemAudioDeviceShared_--CComObject_CSystemAudioDeviceShared__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003A1A4 (--1-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14003A1E8 (--1-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14003A310 (--_E-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010720 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ??1CSystemAudioDeviceSharedBase@@UEAA@XZ @ 0x140013310 (--1CSystemAudioDeviceSharedBase@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
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
