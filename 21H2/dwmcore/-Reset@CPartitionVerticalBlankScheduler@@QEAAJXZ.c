/*
 * XREFs of ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800DD8E0
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007BF7C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800DD978 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Reset(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_RESET_Start,
      a3,
      1u,
      &v9);
  v4 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x8BFu);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 4854) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RESET_Stop,
        v7,
        1u,
        &v9);
  }
  return v6;
}
