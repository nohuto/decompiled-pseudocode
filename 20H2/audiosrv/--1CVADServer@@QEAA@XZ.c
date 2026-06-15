/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x1800DA964
 * Callers:
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x1800767D0 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180001F80 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *((_QWORD *)this + 62);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 60);
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)1);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 59);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 27) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 26) - 24LL));
  CoTaskMemFree(*((LPVOID *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 72));
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
