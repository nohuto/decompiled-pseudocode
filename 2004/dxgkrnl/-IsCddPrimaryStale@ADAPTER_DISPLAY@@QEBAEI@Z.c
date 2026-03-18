/*
 * XREFs of ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019A78
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE040 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0164F40 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsCddPrimaryStale(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 14);
  v3 = 3968LL * a2;
  return *(_QWORD *)(v3 + v2 + 968) != *(_QWORD *)(v3 + v2 + 1012)
      || *(_DWORD *)(v3 + v2 + 976) != *(_DWORD *)(v3 + v2 + 1020)
      || *(_DWORD *)(v3 + v2 + 984) != *(_DWORD *)(v3 + v2 + 1028)
      || *(_DWORD *)(v3 + v2 + 988) != *(_DWORD *)(v3 + v2 + 1032);
}
