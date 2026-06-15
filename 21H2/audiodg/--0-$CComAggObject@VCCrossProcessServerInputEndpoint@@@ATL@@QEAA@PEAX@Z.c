/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005B080
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14005D00C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SA.c)
 * Callees:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140016C0C (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CCrossProcessServerInputEndpoint>::CComAggObject<CCrossProcessServerInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerInputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint((CCrossProcessServerInputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[50] = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  v4[57] = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  v4[60] = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
