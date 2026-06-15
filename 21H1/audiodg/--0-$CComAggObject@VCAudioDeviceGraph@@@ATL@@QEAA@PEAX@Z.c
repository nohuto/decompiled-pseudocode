/*
 * XREFs of ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x14003024C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140030818 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x1400121FC (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CAudioDeviceGraph>::CComAggObject<CAudioDeviceGraph>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  CAudioDeviceGraph::CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  *(_QWORD *)(a1 + 48) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
