/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400525A0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400545A8 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x140052A58 (--0CCrossProcessServerOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::CComAggObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint((CCrossProcessServerOutputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[50] = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  v4[57] = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  v4[60] = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `ICPAudioHistoryWriter'};
  v4[61] = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
