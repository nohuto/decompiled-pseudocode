/*
 * XREFs of ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14003ABC4
 * Callers:
 *     ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14003AE20 (--_G-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 24));
}
