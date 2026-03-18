/*
 * XREFs of ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A5570
 * Callers:
 *     ??1CComputeScribbleRenderer@@UEAA@XZ @ 0x1801A0C70 (--1CComputeScribbleRenderer@@UEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801A0F50 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAPEAV1@@Z @ 0x1801A59C0 (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003506C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1801A62BC (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAXXZ @ 0x1801A6DD8 (-_Tidy@-$deque@UScribbleFrame@CComputeScribbleScheduler@@V-$allocator@UScribbleFrame@CComputeScr.c)
 */

void __fastcall CComputeScribbleScheduler::~CComputeScribbleScheduler(CComputeScribbleScheduler *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  void *v4; // rdx
  unsigned int v5; // r8d
  const char *v6; // r9
  void *v7; // rcx
  void *v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  char *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((*((_QWORD *)this + 6) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v3 = (__int64 *)((char *)this + 152);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 224LL))(*((_QWORD *)this + 19));
    v2 = v3;
    if ( WaitForSingleObject(*((HANDLE *)this + 6), 0xFFFFFFFF) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, v4, v5, v6);
  }
  else
  {
    v2 = (__int64 *)((char *)this + 152);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 18);
  std::deque<CComputeScribbleScheduler::ScribbleFrame>::_Tidy((char *)this + 96);
  v7 = (void *)*((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  std::_Deallocate<16,0>(v7, 0x10uLL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  v9 = (__int64 *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v9 + 5);
    v10 = v9[4];
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v9);
    operator delete(v9);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 7,
    v8);
  v11 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
