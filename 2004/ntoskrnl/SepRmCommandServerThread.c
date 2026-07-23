/*
 * XREFs of SepRmCommandServerThread @ 0x140795150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140363A70 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x1403F3720 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x1405903F0 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1406F12B0 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x1406FDB30 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x140766560 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140767440 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140768B20 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x140795620 (PoRequestShutdownEvent.c)
 *     SepRmSetAuditEventWrkr @ 0x1407B2910 (SepRmSetAuditEventWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407B2A30 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x1407BB220 (SepRmCapUpdateWrkr.c)
 *     SepRmCleanupRmLsaState @ 0x140918C74 (SepRmCleanupRmLsaState.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x140920700 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x140920740 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x140920780 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x1409220D0 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
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
  PVOID PortContext[3]; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h]
  int ReceiveMessage; // [rsp+88h] [rbp-80h] BYREF
  int ReceiveMessage_4; // [rsp+8Ch] [rbp-7Ch]
  _BYTE ReceiveMessage_8[504]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v21[128]; // [rsp+288h] [rbp+180h] BYREF

  memset(ReceiveMessage_8, 0, sizeof(ReceiveMessage_8));
  memset(&v21[2], 0, 0x1F8uLL);
  PortContext[0] = 0LL;
  SepRmLsaCallProcess = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject((PVOID)SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(PortHandle);
    PortHandle = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    ReceiveMessage_4 = 0;
    v21[1] = 0;
    v2 = 0LL;
    ReceiveMessage = 33554904;
    v21[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, PortContext, v2, (PPORT_MESSAGE)&ReceiveMessage);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          v4 = (struct _LIST_ENTRY *)PortContext[0];
          if ( PortContext[0] == (PVOID)-8LL )
          {
            v4 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
            PortContext[0] = v4;
          }
          v5 = ReceiveMessage_4 & 0x7FFF;
          LOWORD(ReceiveMessage_4) = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(*(_DWORD *)&ReceiveMessage_8[32] - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread(v4);
            ((void (__fastcall *)(int *, _DWORD *))SepRmCommandDispatch[*(int *)&ReceiveMessage_8[32]])(
              &ReceiveMessage,
              v21);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (_PORT_MESSAGE *)v21;
            v21[6] = *(_DWORD *)&ReceiveMessage_8[16];
            *(_OWORD *)&v21[2] = *(_OWORD *)ReceiveMessage_8;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest((PPORT_MESSAGE)&ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)v4) )
      {
        SepRmAuditingEnabled = 0;
        memset(&Object, 0, sizeof(Object));
        v17 = 0LL;
        memset(&Event, 0, sizeof(Event));
        *(_OWORD *)&PortContext[1] = 0LL;
        KeInitializeEvent((PRKEVENT)&PortContext[1], NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)&Object.Header.WaitListHead, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140C54470, 1u);
        qword_140C54510 = (__int64)&PortContext[1];
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_140C54470);
        KeLeaveCriticalRegion();
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object.Header.WaitListHead);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_140C54360, 1u);
        qword_140C54400 = (__int64)&Event.Header.WaitListHead;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_140C54360);
        KeLeaveCriticalRegion();
        if ( !v8 )
          KeWaitForSingleObject(&PortContext[1], Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object.Header.WaitListHead, Executive, 0, 0, 0LL);
        if ( !v12 )
          KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        PortHandle = 0LL;
        v4 = (struct _LIST_ENTRY *)PortContext[0];
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v4);
      SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
      if ( PsIsHostSilo((__int64)PortContext[0]) )
        break;
      ObfDereferenceObjectWithTag(PortContext[0], 0x74536553u);
      PortContext[0] = MmBadPointer;
    }
  }
}
