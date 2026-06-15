/*
 * XREFs of ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14004F63C
 * Callers:
 *     ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14004F6E0 (--_E-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400101D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 408) )
  {
    *(_BYTE *)(a1 + 408) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 368));
  }
}
