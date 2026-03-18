/*
 * XREFs of PnpWatchdogEtwWrite @ 0x140950084
 * Callers:
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PnpDisableWatchdog @ 0x14074D6EC (PnpDisableWatchdog.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 *     PnpWatchdogWorkItem @ 0x1409502B0 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PsGetCurrentThreadId @ 0x140231BE0 (PsGetCurrentThreadId.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x1405622A4 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     PnpWatchdogExtractTriageInformation @ 0x14056274C (PnpWatchdogExtractTriageInformation.c)
 *     PnpWatchdogGetElapsedTime @ 0x140562834 (PnpWatchdogGetElapsedTime.c)
 *     PnpTraceWatchdogViolation @ 0x140957CB8 (PnpTraceWatchdogViolation.c)
 */

int __fastcall PnpWatchdogEtwWrite(__int64 a1, char a2)
{
  __int64 ElapsedTime; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rdi
  HANDLE CurrentThreadId; // rax
  _QWORD *v10; // rbx
  HANDLE v11; // rsi
  unsigned int v12; // r10d
  unsigned int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  v23[0] = 0x20000LL;
  v24 = 0LL;
  v25 = 0LL;
  v23[1] = &word_140867F00;
  v22 = 0LL;
  ElapsedTime = (unsigned int)PnpWatchdogGetElapsedTime((_QWORD *)a1);
  PnpWatchdogExtractTriageInformation(v5, &v24, &v22, 0LL, &v25);
  v8 = (_QWORD *)(v24 + 40);
  if ( !v24 )
    v8 = v23;
  LODWORD(CurrentThreadId) = v25;
  if ( v25 )
  {
    v10 = (_QWORD *)(*(_QWORD *)(v25 + 48) + 24LL);
  }
  else if ( v24 )
  {
    v10 = (_QWORD *)(v24 + 56);
  }
  else
  {
    v10 = v23;
  }
  if ( v22 )
  {
    v11 = *(HANDLE *)(v22 + 1232);
  }
  else
  {
    CurrentThreadId = PsGetCurrentThreadId();
    v11 = CurrentThreadId;
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( !a2 )
  {
    LODWORD(CurrentThreadId) = PnpTraceWatchdogViolation(v12, (unsigned int)ElapsedTime, v8, v10);
    v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 1);
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      if ( (byte_140C0DD4B & 0x40) == 0 )
        return (int)CurrentThreadId;
      v20 = KMPnPEvt_Watchdog_EventWorker_Stop;
    }
    else
    {
      v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 2);
      if ( *(_DWORD *)(a1 + 16) == 2 )
      {
        if ( (byte_140C0DD4B & 0x40) == 0 )
          return (int)CurrentThreadId;
        v20 = KMPnPEvt_Watchdog_CompletionQueue_Stop;
      }
      else
      {
        v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 3);
        if ( *(_DWORD *)(a1 + 16) == 3 )
        {
          if ( (byte_140C0DD4B & 0x40) == 0 )
            return (int)CurrentThreadId;
          v20 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Stop;
        }
        else
        {
          v19 = (unsigned int)(*(_DWORD *)(a1 + 16) - 4);
          if ( *(_DWORD *)(a1 + 16) == 4 )
          {
            if ( (byte_140C0DD4B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v20 = KMPnPEvt_Watchdog_AddDevice_Stop;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 16) != 5 )
              goto LABEL_34;
            if ( (byte_140C0DD4B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v20 = KMPnPEvt_Watchdog_DriverEntry_Stop;
          }
        }
      }
    }
    LODWORD(CurrentThreadId) = McTemplateK0izzx_EtwWriteTransfer(
                                 v19,
                                 (const EVENT_DESCRIPTOR *)v20,
                                 v18,
                                 v11,
                                 v8[1],
                                 v10[1],
                                 ElapsedTime);
    return (int)CurrentThreadId;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_EventWorker_Start;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_CompletionQueue_Start;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (byte_140C0DD4B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Start;
      goto LABEL_27;
    }
    goto LABEL_28;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      if ( (byte_140C0DD4B & 0x20) != 0 )
      {
        v17 = KMPnPEvt_Watchdog_DriverEntry_Start;
LABEL_27:
        LODWORD(CurrentThreadId) = McTemplateK0izzx_EtwWriteTransfer(
                                     v6,
                                     (const EVENT_DESCRIPTOR *)v17,
                                     v7,
                                     v11,
                                     v8[1],
                                     v10[1],
                                     ElapsedTime);
        goto LABEL_28;
      }
      goto LABEL_28;
    }
LABEL_34:
    __fastfail(5u);
  }
  if ( (byte_140C0DD4B & 0x20) != 0 )
  {
    v17 = KMPnPEvt_Watchdog_AddDevice_Start;
    goto LABEL_27;
  }
LABEL_28:
  *(_BYTE *)(a1 + 32) = 1;
  return (int)CurrentThreadId;
}
