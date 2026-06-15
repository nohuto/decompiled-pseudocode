/*
 * XREFs of ??1TelephonyController@@MEAA@XZ @ 0x180141964
 * Callers:
 *     ??_GTelephonyController@@MEAAPEAXI@Z @ 0x1801419D4 (--_GTelephonyController@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800F583C (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180143344 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 */

void __fastcall TelephonyController::~TelephonyController(TelephonyController *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &TelephonyController::`vftable'{for `ITelephonyController'};
  *((_QWORD *)this + 1) = &TelephonyController::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 72);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 24);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
