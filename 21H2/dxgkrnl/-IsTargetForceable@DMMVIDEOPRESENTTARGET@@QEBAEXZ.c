/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0206168
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01BACB8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0027054 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax

  v1 = *((_QWORD *)this + 5);
  if ( !v1 )
  {
    WdLogSingleEntry0(1LL);
    v1 = *((_QWORD *)this + 5);
  }
  v3 = *(_QWORD *)(v1 + 88);
  v4 = *(_QWORD *)(v3 + 8);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *(_QWORD *)(v3 + 8);
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( *(_DWORD *)(v5 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v5 + 2792) + 16LL) + 2692LL) < 1105 )
    return 0;
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v6 = *((_DWORD *)this + 102);
  if ( v6 == -1 )
    return IsAnalogueVideoOutput(*((_DWORD *)this + 20));
  else
    return v6 == 1;
}
