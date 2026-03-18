/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180169F38
 * Callers:
 *     ??_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z @ 0x18016A040 (--_EBamoConnection@dataprovider_AutoBamos@@UEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x18016A080 (--_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x18016A250 (--_EDiagnosticCallbacksManager@@EEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x1801824C0 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800B1A20 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800D1DA0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  void *v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  wil::details *v5; // rcx
  void (__fastcall ***v6)(_QWORD); // rcx
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v5 = (wil::details *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v5 )
    wil::details::FreeProcessHeap(v5, v2);
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 13);
  if ( v6 )
    (**v6)(v6);
  v7 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 11);
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, (__int64)v2, v3, v4);
  v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 10);
  if ( v8 )
    (**v8)(v8);
  v9 = *((_QWORD *)this + 9);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
}
