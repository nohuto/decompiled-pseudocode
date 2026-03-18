/*
 * XREFs of ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C01E8BE4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        VIDPN_MGR *this,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        struct _DXGK_SET_TIMING_PATH_INFO *a3)
{
  __int64 v5; // rcx
  int v7; // ecx
  __int64 VidPnTargetId; // rdx

  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *((_QWORD *)this + 1);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v5 + 16)) )
    return 1;
  if ( *(_QWORD *)&a2->VidPnTargetId != *(_QWORD *)&a3->VidPnTargetId
    || a2->SelectedWireFormat.Value != a3->SelectedWireFormat.Value
    || a2->InputFlags != a3->InputFlags )
  {
    VidPnTargetId = a2->VidPnTargetId;
    goto LABEL_20;
  }
  if ( a3->OutputFlags >= 2 || *((_DWORD *)&a3->TargetState + 2) >= 0x10000000u || a3->Reserved )
    WdLogSingleEntry1(1LL, a3->VidPnTargetId);
  if ( !a3->TargetState.ConnectionChangeId )
  {
    VidPnTargetId = a3->VidPnTargetId;
LABEL_20:
    WdLogSingleEntry1(1LL, VidPnTargetId);
    return 0;
  }
  v7 = *((_DWORD *)&a3->TargetState + 2) & 0xF000000;
  if ( ((v7 - 201326592) & 0xFCFFFFFF) == 0 && v7 != 251658240 && ((*(_BYTE *)&a2->Input & 3) != 3 || v7 == 234881024) )
    return 1;
  WdLogSingleEntry2(1LL, HIBYTE(*((_DWORD *)&a3->TargetState + 2)) & 0xF, a3->VidPnTargetId);
  return 0;
}
