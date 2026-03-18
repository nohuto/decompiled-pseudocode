/*
 * XREFs of Interrupter_DeferredWorkProcessor @ 0x1C0002BB0
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C0002B90 (Interrupter_WdfEvtInterruptDpc.c)
 *     Interrupter_WdfEvtInterruptWorkItem @ 0x1C003C520 (Interrupter_WdfEvtInterruptWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_ddddidLL @ 0x1C0003850 (WPP_RECORDER_SF_ddddidLL.c)
 *     Endpoint_TransferEventHandler @ 0x1C0003980 (Endpoint_TransferEventHandler.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C0003A40 (Command_HandleCommandCompletionEvent.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C00059E8 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1C001171C (RootHub_HandlePortStatusChangeEvent.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     Interrupter_UpdateERDP @ 0x1C0014370 (Interrupter_UpdateERDP.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0016390 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_qq @ 0x1C001665C (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074 (Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C00190C4 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C001911C (Interrupter_ReleaseEventRingLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_LL @ 0x1C003588C (WPP_RECORDER_SF_LL.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C003C010 (Interrupter_DeferToDpcOrWorkItem.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C003C5CC (McTemplateK0q_EtwWriteTransfer.c)
 *     TR_TransferEventHandler @ 0x1C003FED4 (TR_TransferEventHandler.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C0045FCC (UsbDevice_DeviceNotificationEventHandler.c)
 *     WPP_RECORDER_SF_ddqq @ 0x1C0047B00 (WPP_RECORDER_SF_ddqq.c)
 */

void __fastcall Interrupter_DeferredWorkProcessor(__int64 a1, char a2, char a3)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r12
  KIRQL CurrentIrql; // r13
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v9; // rdx
  char v10; // r15
  KSPIN_LOCK *v11; // r14
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  ULONG v16; // edi
  int v17; // r15d
  __int64 v18; // rsi
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG v22; // eax
  int v23; // r8d
  __int64 v24; // rax
  unsigned int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // cl
  __int64 v29; // r9
  __int64 v30; // rdi
  KIRQL v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int128 *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct _IO_WORKITEM *v45; // rcx
  KIRQL v46; // al
  unsigned __int8 v47; // al
  int v48; // [rsp+20h] [rbp-89h]
  char v49; // [rsp+28h] [rbp-81h]
  char v50; // [rsp+30h] [rbp-79h]
  unsigned int v52; // [rsp+74h] [rbp-35h]
  __int128 v53; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-21h]
  __int64 v55; // [rsp+90h] [rbp-19h]
  __int64 v56; // [rsp+98h] [rbp-11h]
  __int64 v57; // [rsp+A0h] [rbp-9h]
  _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+A8h] [rbp-1h] BYREF

  v53 = 0LL;
  v4 = a1;
  v56 = a1;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v4,
         off_1C0061310);
  v8 = *(_QWORD *)(v7 + 8);
  v57 = *(_QWORD *)(v8 + 136);
  v9 = &WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v8 + 72),
      (_DWORD)v9,
      9,
      41,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
      v4,
      a2);
  }
  ++*(_DWORD *)(v7 + 44);
  v10 = 0;
  if ( *(_DWORD *)(v7 + 32) )
    v55 = 0LL;
  else
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v4,
            off_1C0061180);
  if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
  {
    v5 = Interrupter_AcquireEventRingLock(v7);
    v11 = (KSPIN_LOCK *)(v7 + 208);
  }
  else
  {
    v11 = (KSPIN_LOCK *)(v7 + 208);
    CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 208));
  }
  if ( a3 )
    KeClearEvent((PRKEVENT)(v7 + 176));
  v12 = *(_DWORD *)(v7 + 96);
  if ( (v12 & 8) != 0 )
  {
    if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      Interrupter_ReleaseEventRingLock(v7, v5);
    else
      KeReleaseSpinLock(v11, CurrentIrql);
    ++*(_DWORD *)(v7 + 68);
    goto LABEL_132;
  }
  if ( (v12 & 0x10) != 0 )
  {
    if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      Interrupter_ReleaseEventRingLock(v7, v5);
    else
      KeReleaseSpinLock(v11, CurrentIrql);
    ++*(_DWORD *)(v7 + 72);
    goto LABEL_132;
  }
  *(_DWORD *)(v7 + 96) = v12 | 8;
  if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
    Interrupter_ReleaseEventRingLock(v7, v5);
  else
    KeReleaseSpinLock(v11, CurrentIrql);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &USBXHCI_ETW_EVENT_DEFERRED_WORK_START_V1, v15, *(unsigned int *)(v7 + 32));
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD *)(v7 + 136) + 16LL * *(unsigned int *)(v7 + 124);
  v52 = 0;
  v54 = 0;
  if ( (*(_DWORD *)(v18 + 12) & 1) != *(_DWORD *)(v7 + 120) )
  {
LABEL_84:
    if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
    {
      v41 = Interrupter_AcquireEventRingLock(v7);
      *(_DWORD *)(v7 + 96) &= ~8u;
      v5 = v41;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v44, *(unsigned int *)(v7 + 32));
      LOBYTE(v42) = 1;
      Interrupter_UpdateERDP(v7, v42);
      Interrupter_ReleaseEventRingLock(v7, v5);
    }
    else
    {
      v31 = KeAcquireSpinLockRaiseToDpc(v11);
      *(_DWORD *)(v7 + 96) &= ~8u;
      CurrentIrql = v31;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v34, *(unsigned int *)(v7 + 32));
      LOBYTE(v32) = 1;
      Interrupter_UpdateERDP(v7, v32);
      KeReleaseSpinLock(v11, CurrentIrql);
    }
    v10 = 0;
    goto LABEL_131;
  }
  while ( 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
        v13,
        9,
        42,
        (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
        v18,
        *(_DWORD *)(v7 + 124));
    }
    if ( (v17 & 0x3F) != 0 )
      goto LABEL_40;
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeGetCurrentIrql() < 2u || KeQueryDpcWatchdogInformation(&WatchdogInformation) < 0 )
      goto LABEL_40;
    if ( !v16 )
    {
      v20 = 95 * WatchdogInformation.DpcTimeLimit;
      v19 = (1374389535 * (unsigned __int64)(unsigned int)v20) >> 32;
      v16 = (unsigned int)v20 / 0x64;
      v52 = (unsigned int)v20 / 0x64;
    }
    v22 = v54;
    if ( !v54 )
    {
      v20 = 25 * WatchdogInformation.DpcWatchdogLimit;
      v19 = (1374389535 * (unsigned __int64)(unsigned int)v20) >> 32;
      v22 = (unsigned int)v20 / 0x64;
      v54 = (unsigned int)v20 / 0x64;
    }
    if ( WatchdogInformation.DpcTimeCount < v16 )
      break;
    if ( WatchdogInformation.DpcWatchdogCount < v22 )
    {
      ++*(_DWORD *)(v7 + 84);
      goto LABEL_121;
    }
LABEL_40:
    v53 = *(_OWORD *)v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddddidLL(
        *(_QWORD *)(v7 + 16),
        (HIDWORD(v53) >> 2) & 1,
        DWORD2(v53) & 0xFFFFFF,
        WORD6(v53) >> 10,
        v48,
        *(_DWORD *)(v7 + 124),
        SHIBYTE(v53),
        BYTE14(v53) & 0x1F,
        (BYTE12(v53) & 4) != 0,
        v53,
        SBYTE8(v53),
        SBYTE11(v53),
        WORD6(v53) >> 10);
    ++*(_DWORD *)(v7 + 124);
    ++*(_DWORD *)(v7 + 48);
    LODWORD(v13) = *(_DWORD *)(v7 + 124);
    if ( (_DWORD)v13 == *(_DWORD *)(v7 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
          v13,
          9,
          45,
          (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
          *(_DWORD *)(v7 + 124),
          *(_DWORD *)(v7 + 128),
          *(_DWORD *)(v7 + 120));
      }
      v23 = ++*(_DWORD *)(v7 + 128);
      *(_DWORD *)(v7 + 124) = 0;
      if ( v23 == *(_DWORD *)(v7 + 108) )
      {
        LODWORD(v13) = *(_DWORD *)(v7 + 120) != 1;
        *(_DWORD *)(v7 + 120) = v13;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v50 = v13;
          LOBYTE(v13) = 5;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            v13,
            9,
            46,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            v23,
            v50);
        }
        v24 = *(_QWORD *)(v7 + 160);
        *(_DWORD *)(v7 + 128) = 0;
      }
      else
      {
        v24 = **(_QWORD **)(v7 + 144);
      }
      *(_QWORD *)(v7 + 144) = v24;
      *(_QWORD *)(v7 + 136) = *(_QWORD *)(v24 + 16);
    }
    v25 = DWORD2(v53);
    if ( HIBYTE(DWORD2(v53)) == 199 && (v26 = *(_QWORD *)(v7 + 8), (*(_QWORD *)(v26 + 336) & 0x2000LL) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_qDD(
          *(_QWORD *)(v26 + 72),
          v13,
          9,
          47,
          (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
          v18,
          SBYTE11(v53),
          WORD6(v53) >> 10);
      }
    }
    else
    {
      v27 = HIDWORD(v53);
      LODWORD(v13) = WORD6(v53) >> 10;
      if ( (_DWORD)v13 == 32 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v13) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            v13,
            9,
            48,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            WORD6(v53) >> 10,
            SBYTE11(v53));
          v27 = HIDWORD(v53);
          v25 = DWORD2(v53);
        }
        if ( (v27 & 4) != 0
          && (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 336LL) & 0x20000000000000LL) != 0
          && HIBYTE(v25) - 14 <= 1u )
        {
          v27 = (unsigned int)v27 & 0xFFFFFFFB;
          HIDWORD(v53) = v27;
        }
        v28 = v53;
        if ( (v27 & 4) == 0 || (v53 & 3) == 1 || (*(_QWORD *)(*(_QWORD *)(v7 + 8) + 336LL) & 0x2000000000LL) != 0 )
        {
          if ( *(_BYTE *)(v57 + 80) )
            v13 = *(_QWORD *)(v57 + 24);
          else
            v13 = *(_QWORD *)(v57 + 72);
          v29 = (unsigned int)v27;
          v30 = *(_QWORD *)(v13 + 8 * ((unsigned __int64)(unsigned int)v27 >> 24));
          if ( v30 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqq(
                *(_QWORD *)(*(_QWORD *)(v30 + 8) + 72LL),
                WORD1(v27) & 0x1F,
                BYTE3(v27),
                WORD1(v27) & 0x1F,
                v48,
                SBYTE3(v27),
                BYTE2(v27) & 0x1F,
                (char)&v53,
                *(_QWORD *)(v30 + 8 * (((unsigned __int64)(unsigned int)v27 >> 16) & 0x1F) + 168));
              v27 = HIDWORD(v53);
              v28 = v53;
            }
            v13 = *(_QWORD *)(v30 + 8LL * (WORD1(v27) & 0x1F) + 168);
            if ( v13 )
            {
              Endpoint_TransferEventHandler(&v53, v13, v27, v29);
            }
            else if ( (v28 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v35 = &v53;
              LOBYTE(v35) = 3;
              WPP_RECORDER_SF_ddq(
                *(_QWORD *)(*(_QWORD *)(v30 + 8) + 72LL),
                (_DWORD)v35,
                12,
                67,
                (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
                SBYTE3(v27),
                BYTE2(v27) & 0x1F,
                (char)&v53);
            }
          }
          else if ( (v53 & 3) != 1 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 3;
            WPP_RECORDER_SF_qDD(
              *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
              v13,
              9,
              49,
              (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
              v18,
              SBYTE3(v27),
              BYTE2(v27) & 0x1F);
          }
          v16 = v52;
        }
        else
        {
          TR_TransferEventHandler(&v53, 0LL);
        }
      }
      else if ( (_DWORD)v13 == 37 && HIBYTE(DWORD2(v53)) == 21 )
      {
        ++*(_DWORD *)(v7 + 76);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            v13,
            9,
            50,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids);
        }
        v36 = *(_QWORD *)(v7 + 8);
        if ( (*(_QWORD *)(v36 + 336) & 0x10000000LL) != 0 )
          Controller_ReportFatalError(v36, 2, 4113, 0, 0LL, 0LL, 0LL);
      }
      else if ( *(_DWORD *)(v7 + 32) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = *(_QWORD *)(v7 + 8);
          v49 = WORD6(v53) >> 10;
          v38 = 51;
LABEL_103:
          LOBYTE(v13) = 3;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v37 + 72),
            v13,
            9,
            v38,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            v49);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v13) = 5;
          WPP_RECORDER_SF_LL(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
            v13,
            9,
            52,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            WORD6(v53) >> 10,
            SBYTE11(v53));
          LODWORD(v27) = HIDWORD(v53);
          HIBYTE(v25) = BYTE11(v53);
        }
        LODWORD(v13) = (unsigned __int16)v27 >> 10;
        switch ( (unsigned __int16)v27 >> 10 )
        {
          case '!':
          case '0':
            Command_HandleCommandCompletionEvent(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 144LL), &v53);
            break;
          case '"':
            RootHub_HandlePortStatusChangeEvent(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 152LL), &v53);
            break;
          case '%':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v13) = 3;
              WPP_RECORDER_SF_LL(
                *(_QWORD *)(*(_QWORD *)(v55 + 8) + 72LL),
                v13,
                9,
                53,
                (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
                (unsigned __int16)v27 >> 10,
                SHIBYTE(v25));
            }
            break;
          case '&':
            if ( *(_BYTE *)(v57 + 80) )
              v39 = *(_QWORD *)(v57 + 24);
            else
              v39 = *(_QWORD *)(v57 + 72);
            v40 = *(_QWORD *)(v39 + 8 * ((unsigned __int64)(unsigned int)v27 >> 24));
            if ( v40 )
              UsbDevice_DeviceNotificationEventHandler(v40, &v53);
            break;
          case '\'':
            break;
          default:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v38 = 54;
              v49 = (unsigned __int16)v27 >> 10;
              v37 = *(_QWORD *)(v55 + 8);
              goto LABEL_103;
            }
            break;
        }
      }
    }
    v18 = *(_QWORD *)(v7 + 136) + 16LL * *(unsigned int *)(v7 + 124);
    if ( v17 && (v17 & 0x7F) == 0 && (*(_DWORD *)(v18 + 12) & 1) == *(_DWORD *)(v7 + 120) )
      Interrupter_UpdateERDP(v7, 0LL);
    ++v17;
    if ( (*(_DWORD *)(v18 + 12) & 1) != *(_DWORD *)(v7 + 120) )
      goto LABEL_84;
  }
  ++*(_DWORD *)(v7 + 80);
LABEL_121:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL),
      v19,
      9,
      43,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
      v17);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &USBXHCI_ETW_EVENT_DEFERRED_WORK_STOP_V1, v21, *(unsigned int *)(v7 + 32));
  Interrupter_UpdateERDP(v7, 0LL);
  v10 = 1;
LABEL_131:
  v4 = v56;
LABEL_132:
  if ( a3 )
    KeSetEvent((PRKEVENT)(v7 + 176), 0, 0);
  if ( v10 )
  {
    ++*(_DWORD *)(v7 + 56);
    if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      v5 = Interrupter_AcquireEventRingLock(v7);
    else
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(v11);
    if ( (*(_DWORD *)(v7 + 96) & 0x12) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
        Interrupter_ReleaseEventRingLock(v7, v5);
      else
        KeReleaseSpinLock(v11, CurrentIrql);
      return;
    }
    KeClearEvent((PRKEVENT)(v7 + 176));
    if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      Interrupter_ReleaseEventRingLock(v7, v5);
    else
      KeReleaseSpinLock(v11, CurrentIrql);
    v45 = *(struct _IO_WORKITEM **)(v7 + 200);
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 8) + 384LL) )
    {
      if ( !v45
        || !((unsigned __int8 (__fastcall *)(struct _IO_WORKITEM *, IO_WORKITEM_ROUTINE_EX *, _QWORD, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(
              v45,
              Interrupter_IoWorkItemRequeueDpc,
              0LL,
              v7) )
      {
        if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
        {
          v47 = Interrupter_AcquireEventRingLock(v7);
          *(_DWORD *)(v7 + 96) &= ~8u;
          Interrupter_ReleaseEventRingLock(v7, v47);
        }
        else
        {
          v46 = KeAcquireSpinLockRaiseToDpc(v11);
          *(_DWORD *)(v7 + 96) &= ~8u;
          KeReleaseSpinLock(v11, v46);
        }
        KeSetEvent((PRKEVENT)(v7 + 176), 0, 0);
        ++*(_DWORD *)(v7 + 64);
        Interrupter_DeferToDpcOrWorkItem(v4);
        return;
      }
    }
    else
    {
      IoQueueWorkItemEx(v45, Interrupter_IoWorkItemRequeueDpc, CriticalWorkQueue, (PVOID)v7);
    }
    ++*(_DWORD *)(v7 + 60);
  }
}
