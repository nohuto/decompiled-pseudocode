/*
 * XREFs of PnpWatchdogEtwWrite @ 0x1408AB9F4
 * Callers:
 *     PnpDisableWatchdog @ 0x14066AC20 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x140770584 (PnpCallDriverEntry.c)
 *     PnpWatchdogWorkItem @ 0x1408ABBF0 (PnpWatchdogWorkItem.c)
 * Callees:
 *     PsGetCurrentThreadId @ 0x140228610 (PsGetCurrentThreadId.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x14050ECB8 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     PnpWatchdogExtractTriageInformation @ 0x14050F180 (PnpWatchdogExtractTriageInformation.c)
 *     PnpWatchdogGetElapsedTime @ 0x14050F268 (PnpWatchdogGetElapsedTime.c)
 */

int __fastcall PnpWatchdogEtwWrite(__int64 a1, char a2)
{
  __int64 ElapsedTime; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  HANDLE CurrentThreadId; // rax
  HANDLE v11; // r9
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 *v17; // rdx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  __int64 *v22; // rdx
  _QWORD v24[7]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v24[0] = 0LL;
  ElapsedTime = (unsigned int)PnpWatchdogGetElapsedTime((_QWORD *)a1);
  v5 = 0LL;
  v6 = 0LL;
  PnpWatchdogExtractTriageInformation(v7, &v25, v24, 0LL, &v26);
  if ( v25 )
    v5 = *(_QWORD *)(v25 + 48);
  LODWORD(CurrentThreadId) = v26;
  if ( v26 && (v8 = *(_QWORD *)(v26 + 48), *(_WORD *)(v8 + 24)) )
  {
    v6 = *(_QWORD *)(v8 + 32);
  }
  else if ( v25 && *(_WORD *)(v25 + 56) )
  {
    v6 = *(_QWORD *)(v25 + 64);
  }
  if ( v24[0] )
  {
    v11 = *(HANDLE *)(v24[0] + 1152LL);
  }
  else
  {
    CurrentThreadId = PsGetCurrentThreadId();
    v11 = CurrentThreadId;
  }
  v12 = *(_DWORD *)(a1 + 16);
  if ( !a2 )
  {
    v18 = v12 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_35;
            if ( (byte_140C1327B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v22 = KMPnPEvt_Watchdog_DriverEntry_Stop;
          }
          else
          {
            if ( (byte_140C1327B & 0x40) == 0 )
              return (int)CurrentThreadId;
            v22 = KMPnPEvt_Watchdog_AddDevice_Stop;
          }
        }
        else
        {
          if ( (byte_140C1327B & 0x40) == 0 )
            return (int)CurrentThreadId;
          v22 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Stop;
        }
      }
      else
      {
        if ( (byte_140C1327B & 0x40) == 0 )
          return (int)CurrentThreadId;
        v22 = KMPnPEvt_Watchdog_CompletionQueue_Stop;
      }
    }
    else
    {
      if ( (byte_140C1327B & 0x40) == 0 )
        return (int)CurrentThreadId;
      v22 = KMPnPEvt_Watchdog_EventWorker_Stop;
    }
    LODWORD(CurrentThreadId) = McTemplateK0izzx_EtwWriteTransfer(
                                 v8,
                                 (const EVENT_DESCRIPTOR *)v22,
                                 v9,
                                 v11,
                                 v5,
                                 v6,
                                 ElapsedTime);
    return (int)CurrentThreadId;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (byte_140C1327B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_EventWorker_Start;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (byte_140C1327B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_CompletionQueue_Start;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (byte_140C1327B & 0x20) != 0 )
    {
      v17 = KMPnPEvt_Watchdog_DelayedRemoveWorker_Start;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      if ( (byte_140C1327B & 0x20) != 0 )
      {
        v17 = KMPnPEvt_Watchdog_DriverEntry_Start;
LABEL_28:
        LODWORD(CurrentThreadId) = McTemplateK0izzx_EtwWriteTransfer(
                                     v8,
                                     (const EVENT_DESCRIPTOR *)v17,
                                     v9,
                                     v11,
                                     v5,
                                     v6,
                                     ElapsedTime);
        goto LABEL_29;
      }
      goto LABEL_29;
    }
LABEL_35:
    __fastfail(5u);
  }
  if ( (byte_140C1327B & 0x20) != 0 )
  {
    v17 = KMPnPEvt_Watchdog_AddDevice_Start;
    goto LABEL_28;
  }
LABEL_29:
  *(_BYTE *)(a1 + 32) = 1;
  return (int)CurrentThreadId;
}
