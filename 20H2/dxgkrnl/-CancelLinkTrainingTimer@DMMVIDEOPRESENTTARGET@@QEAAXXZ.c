/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0168920
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C02DD99C (-DmmReset@@YAXPEAX@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E3854 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E3FF0 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 v7; // rcx
  signed __int32 v8; // eax

  v4 = *((_QWORD *)this + 67);
  v6 = *(_DWORD *)(v4 + 152);
  if ( v6 == 1 || v6 == 3 )
  {
    KeCancelTimer((PKTIMER)(v4 + 16));
    KeFlushQueuedDpcs();
    v4 = *((_QWORD *)this + 67);
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(v4 + 152), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v7 = *((_QWORD *)this + 67);
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 152), 0, 5);
    if ( v8 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, 0LL, 5LL, a4) + 24) = v8;
  }
}
