/*
 * XREFs of ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180072E94
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18006FCF0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007301C (-UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x18016305C (McTemplateU0qNR0_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeFrameTime(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  _DWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  v2 = (_QWORD *)*((_QWORD *)this + 629);
  v3 = v2[31];
  v2[1] = v2[2] + 1LL;
  **((_QWORD **)this + 629) = *(_QWORD *)(*((_QWORD *)this + 629) + 8LL);
  *(_QWORD *)(*((_QWORD *)this + 629) + 248LL) = *(_QWORD *)(*((_QWORD *)this + 629) + 56LL)
                                               + *(_QWORD *)(*((_QWORD *)this + 629) + 288LL);
  if ( !*((_DWORD *)this + 2794) && !*((_BYTE *)this + 15900) )
  {
    v4 = *((_QWORD *)this + 629);
    if ( !*(_BYTE *)(v4 + 140) )
      goto LABEL_6;
    v5 = *(_DWORD *)(v4 + 44) + 1;
    goto LABEL_5;
  }
  *(_QWORD *)(*((_QWORD *)this + 629) + 248LL) += *(_QWORD *)(*((_QWORD *)this + 629) + 288LL);
  *(_BYTE *)(*((_QWORD *)this + 629) + 256LL) = 1;
  v4 = *((_QWORD *)this + 629);
  if ( *(_BYTE *)(v4 + 140) )
  {
    v5 = *(_DWORD *)(v4 + 44) + 2;
LABEL_5:
    *(_DWORD *)(v4 + 48) = v5;
  }
LABEL_6:
  v6 = *((_QWORD *)this + 629);
  v12[0] = *(_DWORD *)(v6 + 44);
  v12[1] = *(_DWORD *)(v6 + 48);
  v13 = *(_QWORD *)(v6 + 272);
  v7 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qNR0_EventWriteTransfer(v4, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, 1, 16, (__int64)v12);
    v6 = *((_QWORD *)this + 629);
    v7 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v8 = *((_QWORD *)this + 630);
  v9 = *(_QWORD *)(v6 + 248);
  v10 = *(_QWORD *)(v8 + 248);
  if ( v9 < v3 || v9 < v10 )
  {
    if ( v9 >= v3 )
    {
      if ( (v7 & 0x10) == 0 )
        goto LABEL_15;
    }
    else
    {
      if ( (v7 & 0x10) == 0 )
      {
LABEL_15:
        v11 = *(_QWORD *)(*((_QWORD *)this + 630) + 248LL);
        if ( v11 <= v3 )
          v11 = v3;
        *(_QWORD *)(*((_QWORD *)this + 629) + 248LL) = v11;
        goto LABEL_10;
      }
      v10 = v3;
    }
    McTemplateU0x_EventWriteTransfer(v8, &EVTDESC_SCHEDULE_TIMEADJUSTED_BETWEENFRAMES, v10 - v9);
    goto LABEL_15;
  }
LABEL_10:
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
}
