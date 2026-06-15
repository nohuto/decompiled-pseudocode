/*
 * XREFs of ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140044D38
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140044F2C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x140044DE0 (--0CProcessSubmix@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CProcessSubmix>::CComAggObject<CProcessSubmix>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  CProcessSubmix::CProcessSubmix((CProcessSubmix *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  *(_QWORD *)(a1 + 360) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
