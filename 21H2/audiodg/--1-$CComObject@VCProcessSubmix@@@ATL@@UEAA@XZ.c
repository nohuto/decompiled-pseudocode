/*
 * XREFs of ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14001A56C
 * Callers:
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14001A530 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400101D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  *(_DWORD *)(a1 + 336) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 384) )
  {
    *(_BYTE *)(a1 + 384) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 344));
  }
}
