/*
 * XREFs of ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005B80C
 * Callers:
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005BE20 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14005BA4C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::~CComObject<CCrossProcessClientInputEndpoint>(
        CCrossProcessBaseClientEndpoint *this)
{
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 51) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 52) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 56) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *((_QWORD *)this + 59) = &ATL::CComObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *((_DWORD *)this + 122) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( *((_BYTE *)this + 536) )
  {
    *((_BYTE *)this + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  }
}
