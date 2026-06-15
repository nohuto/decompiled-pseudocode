/*
 * XREFs of ??0?$CComAggObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x14004DB68
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004DEE4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CVpoContext>::CComAggObject<CVpoContext>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CVpoContext>::`vftable';
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CVpoContext>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CVpoContext>::`vftable'{for `IVpoContext'};
  *(_QWORD *)(a1 + 40) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
