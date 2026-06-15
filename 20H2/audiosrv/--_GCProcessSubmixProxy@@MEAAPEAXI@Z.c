/*
 * XREFs of ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x18004E880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004EA84 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18004EAE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800BB090 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
CProcessSubmixProxy *__fastcall CProcessSubmixProxy::`scalar deleting destructor'(CProcessSubmixProxy *this, char a2)
{
  char *v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // ecx
  void *v11; // rcx
  void *v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF
  void *v17; // [rsp+80h] [rbp+18h] BYREF

  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  v4 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    v15 = 0LL;
    if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v5 + 248LL))(v5, &v15) >= 0 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 6) + 88LL))(*((_QWORD *)this + 6), v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v5,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v6 > 4u )
  {
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    else
      v10 = 0;
    v16 = *((_BYTE *)this + 124);
    LODWORD(v15) = v10;
    v17 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (_DWORD)v6,
      (unsigned int)&unk_1801675E7,
      v7,
      v8,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v16);
  }
  v11 = (void *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 25);
  v12 = (void *)*((_QWORD *)this + 22);
  if ( v12 )
  {
    v13 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 24) - (_QWORD)v12) >> 3));
    v15 = (unsigned __int64)v13;
    v17 = v12;
    if ( (unsigned __int64)v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v17, &v15);
      v13 = (const struct std::nothrow_t *)v15;
      v12 = v17;
    }
    operator delete(v12, v13);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
