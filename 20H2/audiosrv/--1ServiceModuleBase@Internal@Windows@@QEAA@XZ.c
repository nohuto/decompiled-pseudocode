/*
 * XREFs of ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800B7DA0
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B8294 (--_EServiceModule@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B82DC (--_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ServiceModuleBase::~ServiceModuleBase(Windows::Internal::ServiceModuleBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::Internal::ServiceModuleBase::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    CoDecrementMTAUsage(v3);
}
