/*
 * XREFs of ??0PhoneCallAudio@@IEAA@XZ @ 0x180057C4C
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180066938 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180056B30 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006A36C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=5
PhoneCallAudio *__fastcall PhoneCallAudio::PhoneCallAudio(PhoneCallAudio *this)
{
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ITelephonyControlInternal'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 1065353216;
  *((_DWORD *)this + 19) = 2;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneCallAudio *)((char *)this + 80));
  `eh vector constructor iterator'(
    (char *)this + 120,
    8uLL,
    2uLL,
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,
    (void (*)(void *))ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return this;
}
