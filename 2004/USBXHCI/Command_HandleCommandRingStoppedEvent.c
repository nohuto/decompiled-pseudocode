/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C002DAE4
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0006588 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C00069D8 (Command_InternalSendCommand.c)
 *     XilCommand_WriteDoorbell @ 0x1C0006C3C (XilCommand_WriteDoorbell.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C0006F18 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ii @ 0x1C002E8C0 (WPP_RECORDER_SF_ii.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C002EF18 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0047548 (Etw_CommandCompleteError.c)
 */

char __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 *v4; // rdi
  char v5; // r12
  __int64 v8; // rcx
  __int64 CommandRingBufferLogicalAddress; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rsi
  __int64 v14; // r14
  __int128 *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 *v18; // rax
  __int64 **v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  _OWORD ***v22; // rax
  char result; // al
  __int64 v24; // rcx
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v8 + 537) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v8);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112), (int)a2, a3, a4);
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1);
  v13 = *a2;
  v14 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v10, v11, v12);
  if ( v13 == v14 || v13 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v16 = *(_QWORD *)(a1 + 80);
    if ( v16 != a1 + 80 )
    {
      v4 = *(__int64 **)(a1 + 80);
      v17 = *(_DWORD *)(v16 + 56);
      if ( v17 )
      {
        if ( v17 == 5 || v17 == 10 )
          v4 = 0LL;
      }
      else
      {
        v18 = (__int64 *)*v4;
        if ( *(__int64 **)(*v4 + 8) != v4 || (v19 = (__int64 **)v4[1], *v19 != v4) )
LABEL_34:
          __fastfail(3u);
        *v19 = v18;
        v18[1] = (__int64)v19;
        v20 = (unsigned int)++*(_DWORD *)(a1 + 44);
        if ( (_DWORD)v20 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v20 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v20);
      }
    }
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v10, 7, 42, (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids);
      }
      XilCommand_WriteDoorbell(a1);
    }
    v21 = *(_QWORD *)(a1 + 96);
    if ( v21 != a1 + 96 )
    {
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)&v25 = v21;
      *(_QWORD *)(v21 + 8) = &v25;
      **((_QWORD **)&v25 + 1) = &v25;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_29;
    }
    v15 = &v25;
    *((_QWORD *)&v25 + 1) = &v25;
    *(_QWORD *)&v25 = &v25;
    while ( v15 != &v25 )
    {
      if ( *((__int128 **)v15 + 1) != &v25 )
        goto LABEL_34;
      v22 = *(_OWORD ****)v15;
      if ( *(__int128 **)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_34;
      *(_QWORD *)&v25 = *(_QWORD *)v15;
      v22[1] = (_OWORD **)&v25;
      Command_InternalSendCommand(a1, (__int64)v15, v11, v12);
LABEL_29:
      v15 = (__int128 *)v25;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v10, 7, 43, (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000,
      (__int64)"After command abort completion, software and hardware dequeue pointers do not match",
      *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
      (__int64)a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112), (int)v15, v11, v12);
  if ( v5 )
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    *((_BYTE *)v4 + 60) = 25;
    Etw_CommandCompleteError(v24, a1, v4, 2LL);
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v4[5])(v4, 2LL, 0LL);
  }
  return result;
}
