/*
 * XREFs of ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18010BDE8
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180106C5C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BBDC0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C7024 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010ACB0 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@5@Z @ 0x18010B41C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Sarm::CStreamResource::Initialize(
        Sarm::CStreamResource *this,
        struct IAudioStreamInfo *a2,
        __int64 a3,
        const struct _GUID *a4,
        struct __POSITION *a5,
        const struct SPATIAL_STREAM_PROPERTIES *a6,
        struct Sarm::CEndpointResourcePool *a7)
{
  int v8; // r12d
  struct Sarm::CEndpointResourcePool *v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  const struct SPATIAL_STREAM_PROPERTIES *v14; // rcx
  int v15; // ebx
  char v16; // di
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+88h] [rbp-31h] BYREF
  int v24; // [rsp+90h] [rbp-29h] BYREF
  int v25; // [rsp+94h] [rbp-25h] BYREF
  int v26; // [rsp+98h] [rbp-21h] BYREF
  int v27; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v28; // [rsp+A0h] [rbp-19h] BYREF
  int v29; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+7h] BYREF
  const CHAR *v34; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  char v36; // [rsp+110h] [rbp+57h] BYREF

  v8 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::Initialize", 32, a3, (__int64)a4);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      34LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0104LL);
    __debugbreak();
  }
  v11 = a7;
  if ( !a7 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      35LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)0x887C0108LL);
    __debugbreak();
  }
  v23 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v23);
  v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *((_QWORD *)this + 4) = a5;
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 360LL))(v23);
    *((_QWORD *)this + 5) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
    *((_DWORD *)this + 12) = v8;
    *((struct _GUID *)this + 1) = *a4;
    *((_BYTE *)this + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 120LL))(v23) == 1;
    v14 = a6;
    *((_DWORD *)this + 14) = *((_DWORD *)a6 + 1);
    *((_DWORD *)this + 15) = *(_DWORD *)v14;
    *((_DWORD *)this + 17) = *((_DWORD *)v14 + 3);
    *((_QWORD *)this + 1) = v11;
    ++*((_DWORD *)v11 + 3);
    if ( (unsigned int)dword_18019D350 > 4 )
    {
      v15 = *((_DWORD *)this + 13);
      v16 = *((_BYTE *)this + 88);
      v17 = *((_DWORD *)this + 14);
      v18 = *((_DWORD *)this + 12);
      v30 = *((_QWORD *)this + 1);
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
      v24 = v15;
      v36 = v16;
      v25 = *((_DWORD *)this + 17);
      v26 = *((_DWORD *)this + 15);
      v27 = v17;
      v28 = v18;
      v32 = (__int64)this + 16;
      v33 = *((_QWORD *)this + 5);
      v29 = 68;
      v34 = "Sarm::CStreamResource::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v19,
        byte_18016A811,
        v20,
        v21,
        &v34,
        (__int64)&v29,
        (__int64)&v33,
        &v32,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v36,
        (__int64)&v24,
        (void **)&v31,
        (__int64)&v30);
    }
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  return v13;
}
