/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18019632C
 * Callers:
 *     ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x180196528 (--1DiagnosticCallbacksManager@@EEAA@XZ.c)
 *     ??_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x180196610 (--_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180196660 (--_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801B9BE0 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180027F40 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800F76D8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801962FC (--1-$com_ptr_t@VBufferingMessageCallHost@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  void *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  void *v5; // rcx
  wil::details *v6; // rcx
  __int64 v7; // rcx
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v5 = (void *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 26) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = (wil::details *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v2);
  v7 = *((_QWORD *)this + 15);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 13);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, (__int64)v2, v3, v4);
  wil::com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::BufferingMessageCallHost,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
}
