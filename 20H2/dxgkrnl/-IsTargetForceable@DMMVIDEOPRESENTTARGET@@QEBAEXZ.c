/*
 * XREFs of ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0129A20
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C0129154 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C013DFC4 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DCC78 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 * Callees:
 *     ?IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0009BB8 (-IsAnalogueVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForceable(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
    v2 = *((_QWORD *)this + 5);
  }
  v4 = *(_QWORD *)(v2 + 88);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( *(_DWORD *)(v6 + 324) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v6 + 2696) + 16LL) + 2596LL) < 1105 )
    return 0;
  if ( *((_DWORD *)this + 32) != -1 )
    return 1;
  v7 = *((_DWORD *)this + 102);
  if ( v7 == -1 )
    return IsAnalogueVideoOutput(*((_DWORD *)this + 20));
  else
    return v7 == 1;
}
