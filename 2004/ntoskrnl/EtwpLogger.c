/*
 * XREFs of EtwpLogger @ 0x1406C9F80
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     KeWaitForMultipleObjects @ 0x1402801A0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     EtwpResetFlushTimer @ 0x1402FF530 (EtwpResetFlushTimer.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     EtwpFlushActiveBuffers @ 0x14066B214 (EtwpFlushActiveBuffers.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406C8D98 (EtwpCreateLogFile.c)
 *     EtwpAdjustFreeBuffers @ 0x1406CA45C (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406CA4C8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1406CA5F4 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1406CA74C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406CAA0C (EtwpRealtimeNotifyConsumers.c)
 *     PsTerminateSystemThread @ 0x1406CB620 (PsTerminateSystemThread.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1406CBA68 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeSaveState @ 0x1406CBD94 (EtwpRealtimeSaveState.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14093655C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x14093687C (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x140936A78 (EtwpEventWriteTemplateSessionEnd.c)
 */

void __fastcall EtwpLogger(struct _LIST_ENTRY **StartContext)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // r8
  _DWORD *v4; // r9
  int v5; // r14d
  int v6; // r15d
  int Logfile; // edi
  bool v8; // si
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // r8d
  NTSTATUS v13; // eax
  int v14; // edx
  int v15; // r8d
  int i; // eax
  NTSTATUS v17; // edi
  __int64 v18; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+8h]

  v1 = (__int64)StartContext[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*StartContext);
  v22 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15LL, v3, v4);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  v21 = v1 + 520;
  Object = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_53;
  do
  {
    v5 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 224) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      EtwpResetFlushTimer(v1, 0);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v5 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v6 = *(_DWORD *)(v1 + 836) & 4;
    if ( v6 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v5 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers((unsigned int *)v1, v5);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 816) )
        EtwpFinalizeHeader(v1, 1);
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
        EtwpRequestFlushTimer(v1, 0LL);
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
      v8 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v8 = *(_QWORD *)(v1 + 816) == 0LL;
      v9 = EtwpCreateLogFile(v1, 1);
      *(_DWORD *)(v1 + 56) = v9;
      Logfile = v9;
      if ( v9 < 0 )
      {
        v10 = *(_DWORD *)(v1 + 12);
        if ( (v10 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v11,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v12,
              v1 + 152,
              v1 + 168,
              Logfile,
              v10);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v8 )
        goto LABEL_48;
    }
    Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v5);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v5 )
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    if ( (*(_DWORD *)(v1 + 836) & 0x1000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFEFFF);
      if ( *(_QWORD *)(v1 + 816) )
      {
        v13 = EtwpFinalizeHeader(v1, 0);
        Logfile = v13;
        if ( v13 >= 0 )
        {
          ZwClose(*(HANDLE *)(v1 + 816));
          *(_QWORD *)(v1 + 816) = 0LL;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = v13;
        }
      }
    }
    if ( v6 )
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
          v14,
          v15,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          WaitBlockArray,
          Object,
          v21);
      }
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v22;
LABEL_53:
  for ( i = EtwpFlushActiveBuffers((unsigned int *)v1, 1); ; i = EtwpFlushActiveBuffers((unsigned int *)v1, 1) )
  {
    v17 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v17 = 0, *(_QWORD *)(v1 + 376)) )
        v17 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 816) )
  {
    EtwpFinalizeHeader(v1, 0);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v17;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v17 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v18, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v17);
}
