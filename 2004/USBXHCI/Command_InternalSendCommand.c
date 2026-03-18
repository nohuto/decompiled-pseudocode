/*
 * XREFs of Command_InternalSendCommand @ 0x1C00069D8
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002D7F4 (Command_ControllerResetPostResetSuccess.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     XilCommand_WriteDoorbell @ 0x1C0006C3C (XilCommand_WriteDoorbell.c)
 *     XilCoreCommand_AddCommandTRBToRing @ 0x1C0006C70 (XilCoreCommand_AddCommandTRBToRing.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C0006D28 (WPP_RECORDER_SF_qLq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qddd @ 0x1C002EBB8 (WPP_RECORDER_SF_qddd.c)
 *     WPP_RECORDER_SF_qdqddd @ 0x1C002ECD0 (WPP_RECORDER_SF_qdqddd.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     Etw_CommandWaitlisted @ 0x1C0047594 (Etw_CommandWaitlisted.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x1C0047F08 (McTemplateK0ppb16_EtwWriteTransfer.c)
 */

char __fastcall Command_InternalSendCommand(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rcx
  _QWORD *v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // r10d
  int v11; // edx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  BOOL v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rdi
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h]

  v6 = *(unsigned int *)(a1 + 36);
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    v16 = 4LL;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(a1 + 121) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *(_QWORD *)(a1 + 16),
        a2,
        a3,
        51,
        v20,
        a2,
        (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
        *(_QWORD *)(a2 + 48));
    v16 = 3LL;
LABEL_37:
    Etw_CommandWaitlisted(v6, a1, a2, v16);
    v12 = *(_QWORD **)(a1 + 104);
    v17 = a1 + 96;
    if ( *v12 == v17 )
    {
      *(_QWORD *)a2 = v17;
      *(_QWORD *)(a2 + 8) = v12;
      *v12 = a2;
      *(_QWORD *)(v17 + 8) = a2;
      return (char)v12;
    }
LABEL_48:
    __fastfail(3u);
  }
  if ( (_DWORD)v6 == 4 )
  {
    LOBYTE(v12) = (*(__int64 (__fastcall **)(__int64, __int64))(a2 + 40))(a2, 3LL);
    return (char)v12;
  }
  v7 = (_QWORD *)(a1 + 80);
  if ( (_QWORD *)*v7 != v7 )
  {
    v6 = 0x80000000LL;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x80000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLq(
          *(_QWORD *)(a1 + 16),
          a2,
          a3,
          52,
          v20,
          a2,
          (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
          *(_QWORD *)(a2 + 48));
      v16 = 2LL;
      goto LABEL_37;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLq(
      *(_QWORD *)(a1 + 16),
      a2,
      a3,
      53,
      v20,
      a2,
      (unsigned __int8)HIBYTE(*(_WORD *)(a2 + 36)) >> 2,
      *(_QWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 56) = 10;
  v8 = 0;
  v9 = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 44);
  if ( v9 + 1 != *(_DWORD *)(a1 + 48) )
    v8 = v9 + 1;
  if ( v8 == v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qddd(*(_QWORD *)(a1 + 16), v8, v9, a4, v20, a2, v9, v10, v8);
    *(_DWORD *)(a2 + 16) = 0;
    v16 = 1LL;
    goto LABEL_37;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdqddd(
      *(_QWORD *)(a1 + 16),
      v8,
      v9,
      a4,
      v20,
      a2,
      v9,
      *(_BYTE *)(a1 + 72) + 16 * v9,
      v10,
      *(_DWORD *)(a1 + 64),
      v8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    McTemplateK0ppb16_EtwWriteTransfer(v6, v8, v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a2, a2 + 24);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a2 + 36) & 0xFFFFFFFE | (*(_DWORD *)(a1 + 64) != 1);
  *(_OWORD *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40)) = *(_OWORD *)(a2 + 24);
  if ( *(_BYTE *)(a1 + 136) )
    XilCommand_SendAddCommandCRBToRingRequest(a1 + 136, a2);
  else
    XilCoreCommand_AddCommandTRBToRing(a1 + 168);
  if ( *(_QWORD *)(a1 + 152) )
    XilCommand_WriteDoorbell(a1);
  v11 = 2 * *(_DWORD *)(a1 + 40);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 40) + 12) ^= 1u;
  _InterlockedOr(v19, 0);
  *(_DWORD *)(a2 + 16) = 1;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 40);
  v12 = *(_QWORD **)(a1 + 88);
  v13 = (_QWORD *)*v7;
  if ( (_QWORD *)*v12 != v7 )
    goto LABEL_48;
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = v12;
  *v12 = a2;
  *(_QWORD *)(a1 + 88) = a2;
  if ( ++*(_DWORD *)(a1 + 40) == *(_DWORD *)(a1 + 48) )
  {
    v14 = *(_QWORD *)(a1 + 72);
    v11 = 2 * *(_DWORD *)(a1 + 48);
    LOBYTE(v12) = *(_BYTE *)(v14 + 16LL * *(unsigned int *)(a1 + 48) + 12) ^ 1;
    *(_BYTE *)(v14 + 16LL * *(unsigned int *)(a1 + 48) + 12) = (_BYTE)v12;
    _InterlockedOr(v19, 0);
    v15 = *(_DWORD *)(a1 + 64) != 1;
    *(_DWORD *)(a1 + 64) = v15;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = (_BYTE)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v11) = 5;
        LOBYTE(v12) = WPP_RECORDER_SF_ddd(
                        *(_QWORD *)(a1 + 16),
                        v11,
                        7,
                        56,
                        (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids,
                        *(_DWORD *)(a1 + 40),
                        *(_DWORD *)(a1 + 48),
                        v15);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( v13 == v7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v11, 7, 57, (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids);
    }
    LOBYTE(v12) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
                    WdfDriverGlobals,
                    *(_QWORD *)(a1 + 24),
                    -10000000LL);
  }
  return (char)v12;
}
