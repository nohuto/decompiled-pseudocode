/*
 * XREFs of Command_HandleCommandCompletionEvent @ 0x1C0006928
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     WPP_RECORDER_SF_qLLdd @ 0x1C00073B4 (WPP_RECORDER_SF_qLLdd.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C0007488 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002EFA4 (Command_HandleCommandRingStoppedEvent.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002FE70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qii @ 0x1C0030308 (WPP_RECORDER_SF_qii.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00329C4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0048A48 (Etw_CommandCompleteError.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x1C0049474 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 */

__int64 **__fastcall Command_HandleCommandCompletionEvent(__int64 a1, __int64 a2)
{
  bool v2; // zf
  char v5; // r12
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // r9d
  __int64 *v9; // rsi
  __int64 *v10; // rdi
  void *v11; // r8
  int v12; // edx
  void *v13; // r8
  __int64 v14; // r15
  __int64 ***v15; // rdi
  int v16; // ecx
  __int64 **v17; // rax
  __int64 ****v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // r8d
  __int64 *v22; // rdi
  __int64 **result; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  unsigned int v28; // esi
  __int64 v29; // rcx
  void (__fastcall *v30)(__int64, __int64 *); // rax
  int v31; // [rsp+20h] [rbp-40h]
  __int64 *v32; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v33; // [rsp+58h] [rbp-8h]

  v2 = *(_BYTE *)(a2 + 11) == 24;
  v33 = &v32;
  v5 = 0;
  v32 = (__int64 *)&v32;
  if ( v2 )
    return (__int64 **)Command_HandleCommandRingStoppedEvent();
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 553) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  v9 = (__int64 *)(a1 + 80);
  v10 = *(__int64 **)(a1 + 80);
  v11 = &WPP_72168dd6ef593f221f3405957586a4e9_Traceguids;
  if ( v10 != (__int64 *)(a1 + 80) )
  {
    v7 = *(_QWORD **)a2;
    while ( 1 )
    {
      v14 = XilCommand_GetCommandRingBufferLogicalAddress(a1, v7, &WPP_72168dd6ef593f221f3405957586a4e9_Traceguids)
          + 16LL * *((unsigned int *)v10 + 5);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qii(*(_QWORD *)(a1 + 16), v12, (_DWORD)v13, v8, v31, (char)v10, v14, v12);
          v13 = &WPP_72168dd6ef593f221f3405957586a4e9_Traceguids;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v12) = 5;
          WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 16), v12, 7, 45, (__int64)v13, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 40));
        }
      }
      v7 = *(_QWORD **)a2;
      if ( *(_QWORD *)a2 == v14 )
        break;
      v10 = (__int64 *)*v10;
      if ( v10 == v9 )
        goto LABEL_18;
    }
    *((_DWORD *)v10 + 4) = 2;
    *((_BYTE *)v10 + 60) = *(_BYTE *)(a2 + 11);
    *((_DWORD *)v10 + 16) = *(_DWORD *)(a2 + 8) & 0xFFFFFF;
    if ( (*(_DWORD *)(a2 + 12) & 0xFC00) == 0x8400 )
      *((_BYTE *)v10 + 61) = *(_BYTE *)(a2 + 15);
    if ( (*((_BYTE *)v10 + 62) & 2) != 0 )
      *(_OWORD *)(v10 + 3) = *(_OWORD *)a2;
LABEL_18:
    v11 = &WPP_72168dd6ef593f221f3405957586a4e9_Traceguids;
  }
  v15 = (__int64 ***)*v9;
  if ( (__int64 *)*v9 != v9 )
  {
    while ( *((_DWORD *)v15 + 4) == 2 )
    {
      v16 = ++*(_DWORD *)(a1 + 44);
      if ( v16 == *(_DWORD *)(a1 + 48) )
      {
        *(_DWORD *)(a1 + 44) = 0;
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v7) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(a1 + 16),
            (_DWORD)v7,
            7,
            46,
            (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
            v16,
            *(_DWORD *)(a1 + 40));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLLdd(
            *(_QWORD *)(a1 + 16),
            *(unsigned __int8 *)(a2 + 15),
            *(_DWORD *)(a2 + 12) & 1,
            v8,
            v31,
            (char)v15,
            (unsigned __int16)*((_DWORD *)v15 + 9) >> 10,
            *(_BYTE *)(a2 + 11),
            *(_BYTE *)(a2 + 12) & 1,
            *(_BYTE *)(a2 + 15));
      }
      v17 = *v15;
      if ( (*v15)[1] != (__int64 *)v15
        || (v18 = (__int64 ****)v15[1], *v18 != v15)
        || (*v18 = (__int64 ***)v17, v17[1] = (__int64 *)v18, v19 = v33, *v33 != (__int64 *)&v32) )
      {
LABEL_73:
        __fastfail(3u);
      }
      v15[1] = v33;
      *v15 = &v32;
      *v19 = v15;
      v20 = (_QWORD *)(a1 + 96);
      v7 = *(_QWORD **)(a1 + 96);
      v33 = (__int64 **)v15;
      if ( v7 != (_QWORD *)(a1 + 96) )
      {
        if ( (_QWORD *)v7[1] != v20 )
          goto LABEL_73;
        v29 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 )
          goto LABEL_73;
        *v20 = v29;
        *(_QWORD *)(v29 + 8) = v20;
        Command_InternalSendCommand(a1, v7, v11);
      }
      v15 = (__int64 ***)*v9;
      if ( (__int64 *)*v9 == v9 )
        goto LABEL_33;
      v11 = &WPP_72168dd6ef593f221f3405957586a4e9_Traceguids;
    }
    if ( v32 == (__int64 *)&v32 && !*(_BYTE *)(a1 + 120) )
    {
      Controller_HwVerifierBreakIfEnabled(
        *(_QWORD *)(a1 + 8),
        0,
        0,
        0x10000,
        (__int64)"Controller completed a command out of order",
        *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
        a2);
      Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 0, 4114, 0, 0LL, 0LL, 0LL);
      *(_BYTE *)(a1 + 120) = 1;
    }
  }
LABEL_33:
  if ( (__int64 *)*v9 == v9 )
  {
    if ( *(_BYTE *)(a1 + 121) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v7,
          7,
          49,
          (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v7) = 5;
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 16),
          (_DWORD)v7,
          7,
          48,
          (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 24),
        0LL);
    }
  }
  DynamicLock_Release(*(_QWORD *)(a1 + 112), v7, v11);
  if ( v5 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  while ( 1 )
  {
    v22 = v32;
    result = &v32;
    if ( v32 == (__int64 *)&v32 )
      return result;
    if ( (__int64 **)v32[1] != &v32 )
      goto LABEL_73;
    v24 = (__int64 *)*v32;
    if ( *(__int64 **)(*v32 + 8) != v32 )
      goto LABEL_73;
    v32 = (__int64 *)*v32;
    v24[1] = (__int64)&v32;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL);
    if ( v25 )
    {
      v30 = *(void (__fastcall **)(__int64, __int64 *))(v25 + 24);
      if ( v30 )
        v30(v25, v22);
    }
    v26 = *((unsigned __int8 *)v22 + 60);
    v27 = *((unsigned __int8 *)v22 + 60) - 1;
    if ( *((_BYTE *)v22 + 60) == 1 )
    {
      v28 = 0;
    }
    else if ( *((_BYTE *)v22 + 60) == 25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_qL(
          *(_QWORD *)(a1 + 16),
          v27,
          7,
          50,
          (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
          (char)v22,
          (unsigned __int8)HIBYTE(*((_WORD *)v22 + 18)) >> 2);
        LOBYTE(v26) = *((_BYTE *)v22 + 60);
      }
      v28 = 2;
    }
    else
    {
      v28 = 1;
    }
    if ( (_BYTE)v26 == 1 )
    {
      if ( (WPP_MAIN_CB.AlignmentRequirement & 0x20) != 0 )
        McTemplateK0ppb16qu_EtwWriteTransfer(
          v26,
          (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE,
          v21,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
          (char)v22,
          (__int64)(v22 + 3),
          v28,
          1);
    }
    else
    {
      Etw_CommandCompleteError(v26, a1, v22, v28);
    }
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22[5])(v22, v28, a2);
  }
}
