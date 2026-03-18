/*
 * XREFs of ?Reset@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180033A54
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180078A30 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180033AE0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180033DD8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Reset(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // r8
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_RESET_Start,
      a3,
      1u,
      &v9);
  v4 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x92Du, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 5374) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RESET_Stop,
        v7,
        1u,
        &v9);
  }
  return v6;
}
