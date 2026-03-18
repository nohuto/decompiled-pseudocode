/*
 * XREFs of ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801E9360
 * Callers:
 *     ??1CComputeScribbleRenderer@@EEAA@XZ @ 0x1801E4238 (--1CComputeScribbleRenderer@@EEAA@XZ.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801E4460 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801E97E0 (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1801E9484 (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 *     ??1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ @ 0x1801E94B4 (--1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1801EA364 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 */

void __fastcall CComputeScribbleScheduler::~CComputeScribbleScheduler(CComputeScribbleScheduler *this)
{
  HANDLE *v1; // rdi
  void *v3; // rdx
  unsigned int v4; // r8d
  const char *v5; // r9
  __int64 v6; // rcx
  void *v7; // rdx
  void *v8; // rsi
  wil::details *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (HANDLE *)((char *)this + 64);
  if ( (unsigned __int64)(*((_QWORD *)this + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 240LL))(*((_QWORD *)this + 24));
    if ( WaitForSingleObject(*v1, 0xFFFFFFFF) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, v3, v4, v5);
  }
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 23);
  CComputeScribbleScheduler::ThreadSharedData::~ThreadSharedData((CComputeScribbleScheduler *)((char *)this + 88));
  v8 = (void *)*((_QWORD *)this + 10);
  if ( v8 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(*((CComputeScribbleStopwatch **)this + 10));
    operator delete(v8);
  }
  v9 = (wil::details *)*((_QWORD *)this + 9);
  if ( v9 )
    wil::details::CloseHandle(v9, v7);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
