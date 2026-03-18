/*
 * XREFs of SepRmCommandServerThread @ 0x1407953A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x1402556F0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x1403630B0 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x1403F2490 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14058FD00 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1406CFF10 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x1406DAAB0 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140764BA0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140765A80 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140766740 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x140795870 (PoRequestShutdownEvent.c)
 *     SepRmSetAuditEventWrkr @ 0x1407AF7A0 (SepRmSetAuditEventWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407AF8C0 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x1407B80B0 (SepRmCapUpdateWrkr.c)
 *     SepRmCleanupRmLsaState @ 0x1409179C0 (SepRmCleanupRmLsaState.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x14091F450 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x14091F490 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x14091F4D0 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _DWORD *v2; // rdi
  int v3; // eax
  struct _LIST_ENTRY *v4; // rbx
  __int16 v5; // ax
  struct _LIST_ENTRY *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  bool inited; // al
  struct _KTHREAD *v10; // rcx
  bool v11; // si
  bool v12; // r14
  char *ServerSiloGlobals; // rax
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+8Ch] [rbp-7Ch]
  _BYTE v20[504]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v21[128]; // [rsp+288h] [rbp+180h] BYREF

  memset(v20, 0, sizeof(v20));
  memset(&v21[2], 0, 0x1F8uLL);
  *(_QWORD *)&Event.Header.Lock = 0LL;
  SepRmLsaCallProcess = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject((PVOID)SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(qword_140D2DBA8);
    qword_140D2DBA8 = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    v19 = 0;
    v21[1] = 0;
    v2 = 0LL;
    v18 = 33554904;
    v21[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort((__int64)qword_140D2DBA8, (__int64)&Event, (__int64)v2);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          v4 = *(struct _LIST_ENTRY **)&Event.Header.Lock;
          if ( *(_QWORD *)&Event.Header.Lock == -8LL )
          {
            v4 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
            *(_QWORD *)&Event.Header.Lock = v4;
          }
          v5 = v19 & 0x7FFF;
          LOWORD(v19) = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(*(_DWORD *)&v20[32] - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread(v4);
            ((void (__fastcall *)(int *, _DWORD *))SepRmCommandDispatch[*(int *)&v20[32]])(&v18, v21);
            PsDetachSiloFromCurrentThread(v6);
            v2 = v21;
            v21[6] = *(_DWORD *)&v20[16];
            *(_OWORD *)&v21[2] = *(_OWORD *)v20;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest(&v18);
      }
      if ( PsIsHostSilo((__int64)v4) )
      {
        SepRmAuditingEnabled = 0;
        memset(&Object, 0, sizeof(Object));
        v17 = 0LL;
        memset(&v16, 0, sizeof(v16));
        Event.Header.WaitListHead = 0LL;
        KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&v16.Header.WaitListHead, NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&Object.Header.WaitListHead, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140C54570, 1u);
        qword_140C54610 = (__int64)&Event.Header.WaitListHead;
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_140C54570);
        KeLeaveCriticalRegion();
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object.Header.WaitListHead);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140C54440, 1u);
        qword_140C544E0 = (__int64)&v16.Header.WaitListHead;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_140C54440);
        KeLeaveCriticalRegion();
        if ( !v8 )
          KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object.Header.WaitListHead, Executive, 0, 0, 0LL);
        if ( !v12 )
          KeWaitForSingleObject(&v16.Header.WaitListHead, Executive, 0, 0, 0LL);
        ZwClose(qword_140D2DBA8);
        qword_140D2DBA8 = 0LL;
        v4 = *(struct _LIST_ENTRY **)&Event.Header.Lock;
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v4);
      SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
      if ( PsIsHostSilo(*(__int64 *)&Event.Header.Lock) )
        break;
      ObfDereferenceObjectWithTag(*(PVOID *)&Event.Header.Lock, 0x74536553u);
      *(_QWORD *)&Event.Header.Lock = MmBadPointer;
    }
  }
}
