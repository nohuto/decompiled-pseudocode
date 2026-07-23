/*
 * XREFs of EtwpLogger @ 0x14063A500
 * Callers:
 *     <none>
 * Callees:
 *     EtwpResetFlushTimer @ 0x1402428B0 (EtwpResetFlushTimer.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x14026D070 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14026D090 (PsAttachSiloToCurrentThread.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405DC884 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14060CBA0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140612398 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140614D3C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeNotifyConsumers @ 0x14061B674 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     PsTerminateSystemThread @ 0x14061F840 (PsTerminateSystemThread.c)
 *     EtwpRealtimeSaveState @ 0x140622014 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x140637B80 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140939D2C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x14093A248 (EtwpEventWriteTemplateSessionEnd.c)
 */

void __fastcall EtwpLogger(struct _LIST_ENTRY **StartContext)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rsi
  int v3; // r14d
  __int64 v4; // rdx
  int v5; // r15d
  int Logfile; // edi
  bool v7; // si
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int i; // eax
  NTSTATUS v16; // edi
  __int64 v17; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v21; // [rsp+80h] [rbp+8h]

  v1 = (unsigned __int64)StartContext[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*StartContext);
  v21 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  v20 = v1 + 520;
  Object = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_53;
  do
  {
    v3 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 224) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      EtwpResetFlushTimer(v1, 0);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v3 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v5 = *(_DWORD *)(v1 + 836) & 4;
    if ( v5 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v3 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers((unsigned int *)v1, v3);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 816) )
      {
        LOBYTE(v4) = 1;
        EtwpFinalizeHeader(v1, v4);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 832), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 832) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_48;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 360) && *(_DWORD *)(v1 + 440) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 836) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 3) != 0 )
    {
      v7 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v7 = *(_QWORD *)(v1 + 816) == 0LL;
      LOBYTE(v4) = 1;
      v8 = EtwpCreateLogFile(v1, v4);
      *(_DWORD *)(v1 + 56) = v8;
      Logfile = v8;
      if ( v8 < 0 )
      {
        v9 = *(_DWORD *)(v1 + 12);
        if ( (v9 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v10,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v11,
              v1 + 152,
              v1 + 168,
              Logfile,
              v9);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v7 )
        goto LABEL_48;
    }
    Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v3);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v3 )
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    if ( (*(_DWORD *)(v1 + 836) & 0x1000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFEFFF);
      if ( *(_QWORD *)(v1 + 816) )
      {
        v12 = EtwpFinalizeHeader(v1, 0LL);
        Logfile = v12;
        if ( v12 >= 0 )
        {
          ZwClose(*(HANDLE *)(v1 + 816));
          *(_QWORD *)(v1 + 816) = 0LL;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = v12;
        }
      }
    }
    if ( v5 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_48:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
      {
        LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 60);
        EtwpEventWriteTemplateSessionEnd(
          v1 + 168,
          v13,
          v14,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          WaitBlockArray,
          Object,
          v20);
      }
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v21;
LABEL_53:
  for ( i = EtwpFlushActiveBuffers((unsigned int *)v1, 1); ; i = EtwpFlushActiveBuffers((unsigned int *)v1, 1) )
  {
    v16 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v16 = 0, *(_QWORD *)(v1 + 376)) )
        v16 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 816) )
  {
    EtwpFinalizeHeader(v1, 0LL);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v16;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v16 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v17, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v16);
}
