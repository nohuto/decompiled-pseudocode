/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C0006130
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C0006110 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003CC10 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddddidLL @ 0x1C0006730 (WPP_RECORDER_SF_ddddidLL.c)
 *     Endpoint_TransferEventHandler @ 0x1C0006860 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0006928 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C0009428 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C0011BE0 (RootHub_HandlePortStatusChangeEvent.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     Interrupter_UpdateERDP @ 0x1C0014228 (Interrupter_UpdateERDP.c)
 *     XilRegister_WriteUlong64 @ 0x1C00142E0 (XilRegister_WriteUlong64.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0015C18 (WPP_RECORDER_SF_qdd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0016398 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C00338A0 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C00362EC (WPP_RECORDER_SF_LL.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C003C74C (Interrupter_DeferToDpcOrWorkItem.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C003CCAC (McTemplateK0q_EtwWriteTransfer.c)
 *     TR_TransferEventHandler @ 0x1C0040320 (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C004676C (UsbDevice_DeviceNotificationEventHandler.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C00484CC (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, char a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r15
  void *v8; // rdx
  char v9; // r14
  struct _KEVENT *v10; // r13
  KIRQL v11; // bl
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG v16; // ebx
  int v17; // r14d
  __int64 v18; // rsi
  ULONG v19; // r13d
  unsigned int v20; // r11d
  __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rbx
  KIRQL v27; // al
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  KIRQL v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  int v41; // eax
  BOOL v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int128 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  KIRQL v51; // al
  KIRQL v52; // bl
  struct _IO_WORKITEM *v53; // rcx
  KIRQL v54; // al
  signed __int32 v55[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v56; // [rsp+20h] [rbp-79h]
  __int64 v57; // [rsp+28h] [rbp-71h]
  __int64 v58; // [rsp+30h] [rbp-69h]
  __int64 v59; // [rsp+38h] [rbp-61h]
  char v60; // [rsp+70h] [rbp-29h]
  unsigned int v61; // [rsp+74h] [rbp-25h]
  __int128 v62; // [rsp+78h] [rbp-21h] BYREF
  __int64 v63; // [rsp+88h] [rbp-11h]
  __int64 v64; // [rsp+90h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+98h] [rbp-1h] BYREF

  v60 = a3;
  v4 = a1;
  v64 = a1;
  v62 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061310);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v6 + 136);
  v8 = &WPP_260d7188460d377ee27ff5eb6158db37_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v6 + 72),
      (_DWORD)v8,
      9,
      40,
      (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
      v4,
      a2);
  }
  ++*(_DWORD *)(v5 + 44);
  v9 = 0;
  if ( *(_DWORD *)(v5 + 32) )
    v63 = 0LL;
  else
    v63 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v4,
            off_1C0061180);
  v10 = (struct _KEVENT *)(v5 + 176);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
  if ( v60 )
    KeClearEvent((PRKEVENT)(v5 + 176));
  v12 = *(_DWORD *)(v5 + 96);
  if ( (v12 & 8) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v11);
    ++*(_DWORD *)(v5 + 68);
    goto LABEL_50;
  }
  if ( (v12 & 0x10) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v11);
    ++*(_DWORD *)(v5 + 72);
    goto LABEL_50;
  }
  *(_DWORD *)(v5 + 96) = v12 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v11);
  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x200) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v15, *(unsigned int *)(v5 + 32));
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
  v19 = 0;
  v61 = 0;
  if ( (*(_DWORD *)(v18 + 12) & 1) != *(_DWORD *)(v5 + 120) )
  {
LABEL_41:
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
    *(_DWORD *)(v5 + 96) &= ~8u;
    v31 = v27;
    if ( (WPP_MAIN_CB.AlignmentRequirement & 0x200) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v30, *(unsigned int *)(v5 + 32));
    v32 = *(_QWORD *)(v5 + 8);
    v33 = *(_QWORD *)(v32 + 88);
    v34 = *(_DWORD *)(v5 + 128) & 7 | (*(_QWORD *)(*(_QWORD *)(v5 + 144) + 24LL) + 16LL * *(unsigned int *)(v5 + 124)) & 0xFFFFFFFFFFFFFFF8uLL | 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v28) = 5;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v32 + 72),
        v28,
        9,
        30,
        (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
        *(_BYTE *)(v5 + 128) & 7 | (*(_BYTE *)(*(_QWORD *)(v5 + 144) + 24LL) + 16 * *(_DWORD *)(v5 + 124)) & 0xF8 | 8);
    }
    v35 = *(_QWORD *)(v5 + 24);
    v36 = (_DWORD *)(v35 + 24);
    if ( *(_BYTE *)(v33 + 129) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v33 + 8) + 336LL) & 1) != 0 )
      {
        *v36 = v34;
        _InterlockedOr(v55, 0);
        *(_DWORD *)(v35 + 28) = HIDWORD(v34);
      }
      else
      {
        *(_QWORD *)v36 = v34;
      }
      _InterlockedOr(v55, 0);
    }
    else
    {
      XilRegister_WriteUlong64(v33, v36, v34);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v31);
    v9 = 0;
    goto LABEL_49;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
        v13,
        9,
        41,
        (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
        v18,
        *(_DWORD *)(v5 + 124));
    }
    if ( (v17 & 0x3F) != 0 )
      goto LABEL_17;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_17;
    if ( !v19 )
    {
      v38 = 95 * WatchdogInformation.DpcTimeLimit;
      v37 = (1374389535 * (unsigned __int64)(unsigned int)v38) >> 32;
      v19 = (unsigned int)v38 / 0x64;
    }
    if ( !v16 )
    {
      v38 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v37 = (1374389535 * (unsigned __int64)(unsigned int)v38) >> 32;
      v16 = (unsigned int)v38 / 0x64;
      v61 = (unsigned int)v38 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v19 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v16 )
    {
      ++*(_DWORD *)(v5 + 84);
      goto LABEL_124;
    }
LABEL_17:
    v62 = *(_OWORD *)v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v5 + 16),
        (HIDWORD(v62) >> 2) & 1,
        DWORD2(v62) & 0xFFFFFF,
        WORD6(v62) >> 10,
        v56,
        *(_DWORD *)(v5 + 124),
        SHIBYTE(v62),
        BYTE14(v62) & 0x1F,
        (BYTE12(v62) & 4) != 0,
        v62,
        SBYTE8(v62),
        SBYTE11(v62),
        WORD6(v62) >> 10);
    ++*(_DWORD *)(v5 + 124);
    ++*(_DWORD *)(v5 + 48);
    LODWORD(v13) = *(_DWORD *)(v5 + 124);
    if ( (_DWORD)v13 == *(_DWORD *)(v5 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v43 = *(_QWORD *)(v5 + 8);
        LODWORD(v59) = *(_DWORD *)(v5 + 120);
        LODWORD(v58) = *(_DWORD *)(v5 + 128);
        v44 = *(_QWORD *)(v43 + 72);
        LOBYTE(v57) = v13;
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_ddd(v44, v13, 9, 44, (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids, v57, v58, v59);
      }
      LODWORD(v13) = ++*(_DWORD *)(v5 + 128);
      *(_DWORD *)(v5 + 124) = 0;
      if ( (_DWORD)v13 == *(_DWORD *)(v5 + 108) )
      {
        v42 = *(_DWORD *)(v5 + 120) != 1;
        *(_DWORD *)(v5 + 120) = v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v45 = *(_QWORD *)(v5 + 8);
          LODWORD(v57) = v13;
          LOBYTE(v13) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v45 + 72),
            v13,
            9,
            45,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
            v57,
            v42);
        }
        v40 = *(_QWORD *)(v5 + 160);
        *(_DWORD *)(v5 + 128) = 0;
      }
      else
      {
        v40 = **(_QWORD **)(v5 + 144);
      }
      *(_QWORD *)(v5 + 144) = v40;
      *(_QWORD *)(v5 + 136) = *(_QWORD *)(v40 + 16);
    }
    v20 = DWORD2(v62);
    v21 = HIBYTE(DWORD2(v62));
    if ( (_DWORD)v21 == 199 )
    {
      v46 = *(_QWORD *)(v5 + 8);
      if ( (*(_QWORD *)(v46 + 336) & 0x2000LL) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_qdd(
            *(_QWORD *)(v46 + 72),
            v13,
            9,
            46,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
            v18,
            199,
            WORD6(v62) >> 10);
        }
        goto LABEL_38;
      }
    }
    v22 = HIDWORD(v62);
    LODWORD(v13) = WORD6(v62) >> 10;
    if ( (_DWORD)v13 == 32 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_LL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          v13,
          9,
          47,
          (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
          32,
          SBYTE11(v62));
        v22 = HIDWORD(v62);
        v20 = DWORD2(v62);
      }
      if ( (v22 & 4) != 0
        && (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL) & 0x20000000000000LL) != 0
        && HIBYTE(v20) - 14 <= 1u )
      {
        v22 &= ~4u;
        HIDWORD(v62) = v22;
      }
      v23 = (unsigned __int8)v62;
      if ( (v22 & 4) == 0 || (v62 & 3) == 1 || (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL) & 0x2000000000LL) != 0 )
      {
        if ( *(_BYTE *)(v7 + 80) )
          v24 = *(_QWORD *)(v7 + 24);
        else
          v24 = *(_QWORD *)(v7 + 72);
        v25 = v22;
        v26 = *(_QWORD *)(v24 + 8 * ((unsigned __int64)v22 >> 24));
        if ( v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_ddqq(
              *(_QWORD *)(*(_QWORD *)(v26 + 8) + 72LL),
              HIWORD(v22) & 0x1F,
              HIWORD(v22) & 0x1F,
              (unsigned __int8)v62,
              v56,
              SHIBYTE(v22),
              BYTE2(v22) & 0x1F,
              (char)&v62,
              *(_QWORD *)(v26 + 8 * (((unsigned __int64)v22 >> 16) & 0x1F) + 168));
            v22 = HIDWORD(v62);
            v23 = (unsigned __int8)v62;
          }
          v13 = *(_QWORD *)(v26 + 8LL * (HIWORD(v22) & 0x1F) + 168);
          if ( v13 )
          {
            Endpoint_TransferEventHandler(&v62, v13, v25, v23);
LABEL_37:
            v16 = v61;
            goto LABEL_38;
          }
          if ( (v23 & 3) == 1 )
            goto LABEL_37;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = &v62;
            LOBYTE(v47) = 3;
            WPP_RECORDER_SF_ddq(
              *(_QWORD *)(*(_QWORD *)(v26 + 8) + 72LL),
              (_DWORD)v47,
              12,
              67,
              (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
              SHIBYTE(v22),
              BYTE2(v22) & 0x1F,
              (char)&v62);
            goto LABEL_37;
          }
        }
        else
        {
          if ( (v62 & 3) == 1 )
            goto LABEL_37;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_qdd(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
              v13,
              9,
              48,
              (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
              v18,
              SHIBYTE(v22),
              BYTE2(v22) & 0x1F);
            goto LABEL_37;
          }
        }
        v16 = v61;
      }
      else
      {
        TR_TransferEventHandler(&v62, 0LL);
      }
    }
    else
    {
      if ( (_DWORD)v13 == 37 && (_DWORD)v21 == 21 )
      {
        ++*(_DWORD *)(v5 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            v13,
            9,
            49,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids);
        }
        v48 = *(_QWORD *)(v5 + 8);
        if ( (*(_QWORD *)(v48 + 336) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v48, 2, 4113, 0, 0LL, 0LL, 0LL);
        goto LABEL_38;
      }
      if ( *(_DWORD *)(v5 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
            v13,
            9,
            50,
            (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
            WORD6(v62) >> 10);
        }
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_LL(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
          v13,
          9,
          51,
          (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
          WORD6(v62) >> 10,
          SBYTE11(v62));
        v22 = HIDWORD(v62);
        HIBYTE(v20) = BYTE11(v62);
      }
      v41 = (unsigned __int16)v22 >> 10;
      switch ( v41 )
      {
        case '!':
          goto LABEL_77;
        case '"':
          RootHub_HandlePortStatusChangeEvent(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 152LL),
            &v62,
            v21,
            &WPP_RECORDER_INITIALIZED);
          break;
        case '%':
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_LL(
              *(_QWORD *)(*(_QWORD *)(v63 + 8) + 72LL),
              v13,
              9,
              52,
              (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
              37,
              SHIBYTE(v20));
          }
          break;
        case '&':
          if ( *(_BYTE *)(v7 + 80) )
            v49 = *(_QWORD *)(v7 + 24);
          else
            v49 = *(_QWORD *)(v7 + 72);
          v50 = *(_QWORD *)(v49 + 8 * ((unsigned __int64)v22 >> 24));
          if ( v50 )
            UsbDevice_DeviceNotificationEventHandler(v50, &v62, v21, &WPP_RECORDER_INITIALIZED);
          break;
        default:
          if ( v41 != 39 )
          {
            if ( v41 != 48 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v13) = 3;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v63 + 8) + 72LL),
                  v13,
                  9,
                  53,
                  (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
                  v41);
              }
              break;
            }
LABEL_77:
            Command_HandleCommandCompletionEvent(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 144LL),
              &v62,
              v21,
              &WPP_RECORDER_INITIALIZED);
          }
          break;
      }
    }
LABEL_38:
    v18 = *(_QWORD *)(v5 + 136) + 16LL * *(unsigned int *)(v5 + 124);
    if ( v17 && (v17 & 0x7F) == 0 && (*(_DWORD *)(v18 + 12) & 1) == *(_DWORD *)(v5 + 120) )
      Interrupter_UpdateERDP(v5, 0LL);
    ++v17;
    if ( (*(_DWORD *)(v18 + 12) & 1) != *(_DWORD *)(v5 + 120) )
      goto LABEL_41;
  }
  ++*(_DWORD *)(v5 + 80);
LABEL_124:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v37) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
      v37,
      9,
      42,
      (__int64)&WPP_260d7188460d377ee27ff5eb6158db37_Traceguids,
      v17);
  }
  if ( (WPP_MAIN_CB.AlignmentRequirement & 0x200) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v39, *(unsigned int *)(v5 + 32));
  Interrupter_UpdateERDP(v5, 0LL);
  v9 = 1;
LABEL_49:
  v4 = v64;
  v10 = (struct _KEVENT *)(v5 + 176);
LABEL_50:
  if ( v60 )
    KeSetEvent(v10, 0, 0);
  if ( v9 )
  {
    ++*(_DWORD *)(v5 + 56);
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
    v52 = v51;
    if ( (*(_DWORD *)(v5 + 96) & 0x12) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v51);
    }
    else
    {
      KeClearEvent(v10);
      KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v52);
      v53 = *(struct _IO_WORKITEM **)(v5 + 200);
      if ( *(_BYTE *)(*(_QWORD *)(v5 + 8) + 384LL) )
      {
        if ( !v53
          || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
                v53,
                Interrupter_IoWorkItemRequeueDpc,
                0LL,
                v5) )
        {
          v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 208));
          *(_DWORD *)(v5 + 96) &= ~8u;
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 208), v54);
          KeSetEvent(v10, 0, 0);
          ++*(_DWORD *)(v5 + 64);
          Interrupter_DeferToDpcOrWorkItem(v4);
          return;
        }
      }
      else
      {
        IoQueueWorkItemEx(v53, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v5);
      }
      ++*(_DWORD *)(v5 + 60);
    }
  }
}
