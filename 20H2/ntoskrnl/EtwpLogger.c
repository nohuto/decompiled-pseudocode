/*
 * XREFs of EtwpLogger @ 0x140715350
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140204C10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140204C30 (PsAttachSiloToCurrentThread.c)
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     EtwpRequestFlushTimer @ 0x1402472E4 (EtwpRequestFlushTimer.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     EtwpResetFlushTimer @ 0x140360A68 (EtwpResetFlushTimer.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     EtwpAdjustFreeBuffers @ 0x1406694A8 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x14066A038 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeSaveState @ 0x1406E338C (EtwpRealtimeSaveState.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140712D4C (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsTerminateSystemThread @ 0x140712D90 (PsTerminateSystemThread.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14071582C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140715958 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140715AB0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140715CC4 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140716188 (EtwpCreateLogFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14093C38C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x14093C6AC (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x14093C8A8 (EtwpEventWriteTemplateSessionEnd.c)
 */

void __fastcall EtwpLogger(struct _LIST_ENTRY **StartContext)
{
  unsigned __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // rsi
  __int64 v3; // r8
  _DWORD *v4; // r9
  int v5; // r14d
  __int64 v6; // rdx
  int v7; // r15d
  int Logfile; // edi
  bool v9; // si
  int v10; // eax
  int v11; // ebp
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  int i; // eax
  NTSTATUS v18; // edi
  __int64 v19; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]
  struct _LIST_ENTRY *v23; // [rsp+80h] [rbp+8h]

  v1 = (unsigned __int64)StartContext[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*StartContext);
  v23 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15, v3, v4);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  v22 = v1 + 520;
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
    v7 = *(_DWORD *)(v1 + 836) & 4;
    if ( v7 )
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
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeHeader(v1, v6);
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
      v9 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v9 = *(_QWORD *)(v1 + 816) == 0LL;
      LOBYTE(v6) = 1;
      v10 = EtwpCreateLogFile(v1, v6);
      *(_DWORD *)(v1 + 56) = v10;
      Logfile = v10;
      if ( v10 < 0 )
      {
        v11 = *(_DWORD *)(v1 + 12);
        if ( (v11 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v12,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v13,
              v1 + 152,
              v1 + 168,
              Logfile,
              v11);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v9 )
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
        v14 = EtwpFinalizeHeader(v1, 0LL);
        Logfile = v14;
        if ( v14 >= 0 )
        {
          ZwClose(*(HANDLE *)(v1 + 816));
          *(_QWORD *)(v1 + 816) = 0LL;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = v14;
        }
      }
    }
    if ( v7 )
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
          v15,
          v16,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          WaitBlockArray,
          Object,
          v22);
      }
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v23;
LABEL_53:
  for ( i = EtwpFlushActiveBuffers((unsigned int *)v1, 1); ; i = EtwpFlushActiveBuffers((unsigned int *)v1, 1) )
  {
    v18 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v18 = 0, *(_QWORD *)(v1 + 376)) )
        v18 = -1073741823;
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
  *(_DWORD *)(v1 + 56) = v18;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v18 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v19, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v18);
}
