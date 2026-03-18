/*
 * XREFs of ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01C8F5C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x1C0014AB4 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall VIDPN_MGR::RequestPowerStateForTargets(VIDPN_MGR *this, const struct DMMVIDPN *a2)
{
  const struct DMMVIDPN *v2; // r8
  char *v3; // rbx
  char *v5; // rsi
  __int64 v6; // rdx
  DMMVIDEOPRESENTTARGET *v7; // rbp
  char *v8; // rax

  v2 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
  v3 = 0LL;
  if ( v2 != (const struct DMMVIDPN *)((char *)a2 + 120) )
    v3 = (char *)v2 - 8;
  if ( v3 )
  {
    v5 = (char *)a2 + 120;
    do
    {
      v6 = *((_QWORD *)this + 1);
      v7 = *(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)v3 + 12) + 96LL);
      if ( !v6 )
      {
        WdLogSingleEntry0(1LL);
        v6 = *((_QWORD *)this + 1);
      }
      DMMVIDEOPRESENTTARGET::SetPowerState(v7, *(struct DXGADAPTER **)(v6 + 16), 1u);
      v8 = (char *)*((_QWORD *)v3 + 1);
      v3 = v8 - 8;
      if ( v8 == v5 )
        v3 = 0LL;
    }
    while ( v3 );
  }
}
