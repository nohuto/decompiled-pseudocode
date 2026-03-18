/*
 * XREFs of EtwpLogger @ 0x140799440
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     EtwpRequestFlushTimer @ 0x1402E1D48 (EtwpRequestFlushTimer.c)
 *     EtwpResetFlushTimer @ 0x1402E2BF8 (EtwpResetFlushTimer.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406D1E4C (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     EtwpRealtimeSaveState @ 0x1406EA4C0 (EtwpRealtimeSaveState.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406EDD54 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     EtwpAdjustFreeBuffers @ 0x1407987F0 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14079A870 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14079A984 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14079AADC (EtwpRealtimeCreateLogfile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1409E08A8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0AEC (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x1409E0CE8 (EtwpEventWriteTemplateSessionEnd.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rsi
  int v3; // r14d
  int v4; // r15d
  int Logfile; // edi
  int active; // eax
  int v7; // esi
  int v8; // eax
  NTSTATUS v9; // edi
  bool v11; // si
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // ebp
  int v16; // ecx
  int v17; // r8d
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v23; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v23 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0xFu);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v22 = v1 + 504;
  Object = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 208) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent((PRKEVENT)(v1 + 480));
        v3 = 1;
      }
      if ( (unsigned __int8)EtwpBootPhase > 3u )
        _InterlockedOr((volatile signed __int32 *)(v1 + 816), 4u);
      EtwpAdjustFreeBuffers(v1);
      v4 = *(_DWORD *)(v1 + 824) & 4;
      if ( v4 )
      {
        if ( *(_DWORD *)(v1 + 208) )
          EtwpResetFlushTimer(v1, 1);
        v3 = 1;
      }
      if ( (*(_DWORD *)(v1 + 816) & 4) != 0 )
        break;
      EtwpFlushActiveBuffers((unsigned int *)v1, v3);
LABEL_30:
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v23;
        goto LABEL_32;
      }
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 800) )
        EtwpFinalizeHeader(v1, 1);
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 816), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 816) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      {
LABEL_58:
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        {
          LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 44);
          EtwpEventWriteTemplateSessionEnd(
            v1 + 152,
            v13,
            v14,
            v1 + 136,
            v1 + 152,
            Logfile,
            *(_DWORD *)(v1 + 12),
            WaitBlockArray,
            Object,
            v22);
        }
        *(_DWORD *)(v1 + 40) = Logfile;
        EtwpStopLoggerInstance(v1);
        goto LABEL_30;
      }
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 40) = 0;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 3) == 0 )
      goto LABEL_29;
    v11 = 1;
    if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
      v11 = *(_QWORD *)(v1 + 800) == 0LL;
    v12 = EtwpCreateLogFile(v1, 1, 0LL);
    *(_DWORD *)(v1 + 40) = v12;
    Logfile = v12;
    if ( v12 < 0 )
    {
      v15 = *(_DWORD *)(v1 + 12);
      if ( (v15 & 8) != 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
          EtwpEventWriteTemplateAdmin(
            v16,
            (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
            v17,
            v1 + 136,
            v1 + 152,
            Logfile,
            v15);
      }
    }
    KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    if ( Logfile >= 0 || !v11 )
    {
LABEL_29:
      active = EtwpFlushActiveBuffers((unsigned int *)v1, v3);
      v7 = active;
      if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && active >= 0 && !v3 )
        v7 = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
      if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
        if ( *(_QWORD *)(v1 + 800) )
        {
          v18 = EtwpFinalizeHeader(v1, 0);
          v7 = v18;
          if ( v18 >= 0 )
          {
            ZwClose(*(HANDLE *)(v1 + 800));
            *(_QWORD *)(v1 + 800) = 0LL;
          }
          else
          {
            *(_DWORD *)(v1 + 40) = v18;
          }
        }
      }
      Logfile = 0;
      if ( (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
        Logfile = v7;
      if ( v4 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
        *(_DWORD *)(v1 + 40) = Logfile;
        KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      }
      if ( Logfile >= 0 )
        goto LABEL_30;
    }
    goto LABEL_58;
  }
LABEL_32:
  while ( 1 )
  {
    v8 = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( v8 == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v9 = 0, *(_QWORD *)(v1 + 360)) )
        v9 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 480), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    EtwpFinalizeHeader(v1, 0);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = v9;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v9 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v19, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v9);
}
