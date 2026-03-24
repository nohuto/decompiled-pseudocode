/*
 * XREFs of Command_InternalSendCommand @ 0x1C0006D80
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002DFB4 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002E2A4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_AddCommandCRBToRing @ 0x1C000714C (XilCommand_AddCommandCRBToRing.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0007294 (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     Command_ProcessCrbCompletion @ 0x1C002E648 (Command_ProcessCrbCompletion.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C002F398 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C002F4B0 (WPP_RECORDER_SF_qdqddd.c)
 *     Etw_CommandWaitlisted @ 0x1C0047E34 (Etw_CommandWaitlisted.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x1C004878C (McTemplateK0ppb16_EtwWriteTransfer.c)
 */

char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // r14
  int v12; // edx
  int v13; // r8d
  int v14; // r10d
  __int64 v15; // rdx
  _QWORD *v16; // rbp
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  BOOL v20; // ecx
  signed __int32 v22[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h]

  v5 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    v7 = 4LL;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v23,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v7 = 3LL;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == 4 )
  {
    v10 = 3LL;
LABEL_11:
    LOBYTE(v8) = Command_ProcessCrbCompletion(a2, v10, 0LL);
    return (char)v8;
  }
  v11 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v11 != v11 )
  {
    v5 = 0x80000000LL;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x80000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLq(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          52,
          v23,
          a2,
          (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
          *(_QWORD *)(a2 + 48));
      v7 = 2LL;
      goto LABEL_6;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      53,
      v23,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 40);
  v14 = *(_DWORD *)(a1 + 44);
  if ( v13 + 1 != *(_DWORD *)(a1 + 48) )
    v12 = v13 + 1;
  if ( v12 == v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v12, v13, a4, v23, a2, v13, v14, v12);
    *(_DWORD *)(a2 + 16) = 0;
    v7 = 1LL;
LABEL_6:
    Etw_CommandWaitlisted(v5, a1, a2, v7);
    v8 = *(_QWORD **)(a1 + 104);
    v9 = a1 + 96;
    if ( *v8 == v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(v9 + 8) = a2;
      return (char)v8;
    }
LABEL_45:
    __fastfail(3u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v12,
      v13,
      a4,
      v23,
      a2,
      v13,
      *(_BYTE *)(a1 + 72) + 16 * v13,
      v14,
      *(_DWORD *)(a1 + 64),
      v12);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16_EtwWriteTransfer(v5, v12, v13, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  if ( (int)XilCommand_AddCommandCRBToRing(a1, a2) < 0 )
  {
    v10 = 1LL;
    goto LABEL_11;
  }
  LODWORD(v15) = 2 * *(_DWORD *)(a1 + 40);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v22, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  v8 = *(_QWORD **)(a1 + 88);
  v16 = (_QWORD *)*v11;
  if ( (_QWORD *)*v8 != v11 )
    goto LABEL_45;
  *(_QWORD *)a2 = v11;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 88) = a2;
  ++*(_DWORD *)(a1 + 40);
  v17 = *(_DWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 40) == v17 )
  {
    v18 = v17;
    v19 = *(_QWORD *)(a1 + 72);
    v15 = 2 * v18;
    LOBYTE(v8) = *(_BYTE *)(v19 + 8 * v15 + 12) ^ 1;
    *(_BYTE *)(v19 + 8 * v15 + 12) = (_BYTE)v8;
    _InterlockedOr(v22, 0);
    v20 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v15) = 5;
        LOBYTE(v8) = WPP_RECORDER_SF_ddd(
                       *(_QWORD *)(a1 + 16),
                       v15,
                       7,
                       56,
                       (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
                       *(_DWORD *)(a1 + 40),
                       *(_DWORD *)(a1 + 48),
                       v20);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v16 == v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v15, 7, 57, (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
    }
    LOBYTE(v8) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 24),
                   -10000000LL);
  }
  return (char)v8;
}
