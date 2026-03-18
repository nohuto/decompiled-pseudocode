/*
 * XREFs of ?CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007BE34
 * Callers:
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007AEF8 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800B2FA8 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qNR0_EventWriteTransfer @ 0x1801130B2 (McTemplateU0qNR0_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::CalculatePresentAndGlitchDeadlines(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ebx
  char v3; // bp
  int v4; // esi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v6; // r8d
  struct IMonitorTarget *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  _DWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]

  v2 = 0;
  v3 = 1;
  v4 = 0;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v7 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v3 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 16LL))(PrimaryMonitorTarget);
    v4 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v7 + 64LL))(v7);
    if ( !v4 )
    {
      if ( (*(unsigned int (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v7 + 72LL))(v7) != -1 )
        goto LABEL_4;
      v4 = 1;
    }
    *(_QWORD *)(*((_QWORD *)this + 564) + 232LL) += *(_QWORD *)(*((_QWORD *)this + 564) + 256LL);
    *(_BYTE *)(*((_QWORD *)this + 564) + 240LL) = 1;
  }
LABEL_4:
  v8 = *((_QWORD *)this + 564);
  if ( *(_BYTE *)(v8 + 156) && !v3 )
    v2 = *(_DWORD *)(v8 + 44) + (v4 != 0) + 1;
  *(_DWORD *)(v8 + 48) = v2;
  v9 = *((_QWORD *)this + 564);
  v10[0] = *(_DWORD *)(v9 + 44);
  v10[1] = *(_DWORD *)(v9 + 48);
  v11 = *(_QWORD *)(v9 + 248);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0qNR0_EventWriteTransfer(v9, (unsigned int)&EVTDESC_SCHEDULE_FRAME_VSYNCDEADLINES, v6, 16, (__int64)v10);
}
