/*
 * XREFs of ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800F1B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180044A98 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180049034 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixById(
        CProcessSubmixManager *this,
        struct CAppSubmixClient *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbp
  struct IUnknown **v8; // r14
  struct IUnknown **i; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  struct IProcessSubmixProxy *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IProcessSubmixProxy *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h]

  v17 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(struct IUnknown ***)(v7 + 32);
  for ( i = *(struct IUnknown ***)(v7 + 24); i != v8; ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *))(*i)->lpVtbl[7].Release)(*i);
    if ( v10 == v17 )
      break;
  }
  if ( i == *(struct IUnknown ***)(v7 + 32) )
  {
    v11 = -2147023728;
    v12 = 530LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)v11);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v11;
  }
  if ( HasTooManyReferences(*i) )
  {
    v11 = -2147024882;
    v12 = 533LL;
    goto LABEL_7;
  }
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v16, (__int64)*i);
  v14 = v16;
  if ( v16 )
  {
    *a4 = v16;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
