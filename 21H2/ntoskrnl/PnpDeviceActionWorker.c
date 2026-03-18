/*
 * XREFs of PnpDeviceActionWorker @ 0x1402DD320
 * Callers:
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402500D4 (PopDirectedDripsClearDisengageReason.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PnpLogActionQueueEvent @ 0x1402DD9AC (PnpLogActionQueueEvent.c)
 *     PnpDeleteDeviceActionRequest @ 0x1402DDABC (PnpDeleteDeviceActionRequest.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PnpCompleteSystemStartProcess @ 0x1403D2178 (PnpCompleteSystemStartProcess.c)
 *     PpProcessClearProblem @ 0x1403DB668 (PpProcessClearProblem.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PiProcessDeviceResetAction @ 0x140560174 (PiProcessDeviceResetAction.c)
 *     PnpProcessRebalance @ 0x140564C24 (PnpProcessRebalance.c)
 *     PiProcessClearDeviceProblem @ 0x140660388 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x1406617B0 (PiRestartDevice.c)
 *     PiProcessReenumeration @ 0x140764BE0 (PiProcessReenumeration.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14080E030 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessRequeryDeviceState @ 0x14081BA8C (PiProcessRequeryDeviceState.c)
 *     PiProcessStartSystemDevices @ 0x140863BE8 (PiProcessStartSystemDevices.c)
 *     PiConfigureDevice @ 0x1409477A4 (PiConfigureDevice.c)
 *     PiProcessHaltDevice @ 0x140947864 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140947A8C (PiProcessSetDeviceProblem.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140956608 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 */

__int64 PnpDeviceActionWorker()
{
  char v0; // r14
  char v1; // r15
  int v2; // r13d
  KIRQL v3; // al
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  int v11; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // ecx
  int started; // eax
  __int64 v19; // r14
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  int v22; // r12d
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r15
  KIRQL v26; // al
  bool v27; // zf
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  int *v30; // rax
  struct _KEVENT *v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int restarted; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  unsigned __int8 v46; // cl
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // ecx
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  int v73; // eax
  _DWORD *v74; // r8
  char v75; // [rsp+48h] [rbp-19h]
  char v76; // [rsp+49h] [rbp-18h]
  char v77; // [rsp+4Ah] [rbp-17h]
  char v78; // [rsp+4Bh] [rbp-16h]
  char v79; // [rsp+4Ch] [rbp-15h]
  __int64 v80; // [rsp+50h] [rbp-11h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v82; // [rsp+78h] [rbp+17h]
  __int128 v83; // [rsp+80h] [rbp+1Fh] BYREF

  v80 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v82 = 0LL;
  v0 = 0;
  v75 = 0;
  v76 = 0;
  v83 = 0LL;
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v1 = 0;
  v77 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v79 = 0;
    v2 = 0;
    v78 = 1;
    v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v4 = PnpEnumerationRequestList;
    v5 = v3;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      v6 = *(_QWORD *)PnpEnumerationRequestList;
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || *(_QWORD *)(v6 + 8) != PnpEnumerationRequestList )
      {
LABEL_166:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v6 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v4 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v77 )
      break;
    v4 = 0LL;
LABEL_6:
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = (unsigned int)(v5 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v27 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    if ( v4 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v4 + 56);
      if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v4 + 56) )
        v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v4 + 64);
      if ( v8 )
      {
        v79 = 1;
        v83 = *(_OWORD *)(v4 + 56);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v83;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 80, 0LL);
      v10 = *(_BYTE *)(v4 + 88);
      ExReleasePushLockEx(v4 + 80, 0LL);
      KeLeaveCriticalRegion();
      v11 = *(_DWORD *)(v4 + 24);
      v12 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
      KxReleaseSpinLock(&qword_140C24268);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v27 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
      dword_140C1CB9C = v11;
      if ( byte_140C1CC10 )
        qword_140C1CC28 = MEMORY[0xFFFFF78000000008];
      KxReleaseSpinLock(&qword_140C1CB90);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v27 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
      }
      __writecr8(v13);
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v2 = -1073741431;
      }
      else if ( v10 )
      {
        v2 = -1073741536;
      }
      else
      {
        v14 = *(_QWORD **)(v4 + 16);
        if ( v14 )
          v15 = *(_QWORD *)(v14[39] + 40LL);
        else
          v15 = 0LL;
        if ( *(_DWORD *)(v15 + 300) != 790 )
        {
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14[39] + 40LL);
            if ( v16 )
            {
              ObfReferenceObjectWithTag(v14, 0x65706E50u);
              PnpLogActionQueueEvent(v16, *(unsigned int *)(v4 + 24), 1LL, 0LL);
            }
          }
          else
          {
            v16 = 0LL;
          }
          v17 = *(_DWORD *)(v4 + 24);
          if ( v17 <= 13 )
          {
            if ( v17 == 13 )
            {
              v2 = PiProcessResourceRequirementsChanged(v4);
              if ( v2 < 0 )
              {
                v75 = 1;
                v2 = 0;
              }
              goto LABEL_32;
            }
            if ( v17 > 5 )
            {
              if ( v17 == 6 )
              {
                restarted = PnpProcessRebalance(v4);
                goto LABEL_69;
              }
              if ( v17 == 7 )
              {
                v76 = 1;
              }
              else
              {
                if ( v17 <= 10 )
                  goto LABEL_30;
                if ( v17 == 11 )
                {
                  restarted = PiProcessRequeryDeviceState(v4);
                  goto LABEL_69;
                }
LABEL_83:
                restarted = PiRestartDevice(v4);
LABEL_69:
                v2 = restarted;
              }
LABEL_32:
              if ( v16 )
              {
                PnpLogActionQueueEvent(v16, *(unsigned int *)(v4 + 24), 2LL, (unsigned int)v2);
                ObfDereferenceObjectWithTag(*(PVOID *)(v4 + 16), 0x65706E50u);
              }
              goto LABEL_34;
            }
            if ( v17 == 5 )
            {
              v33 = *(_QWORD *)(v4 + 16);
              if ( v33 )
                v34 = *(_QWORD *)(*(_QWORD *)(v33 + 312) + 40LL);
              else
                v34 = 0LL;
              restarted = PiQueryPowerRelations(v34, 0LL);
              goto LABEL_69;
            }
            if ( !v17 )
            {
              v75 = 1;
              goto LABEL_32;
            }
            v36 = v17 - 1;
            if ( v36 )
            {
              v40 = v36 - 1;
              if ( !v40 )
              {
                restarted = PpProcessClearProblem(v4);
                goto LABEL_69;
              }
              v54 = v40 - 1;
              if ( v54 )
              {
                if ( v54 == 1 )
                {
                  restarted = PiProcessHaltDevice(v4);
                  goto LABEL_69;
                }
LABEL_121:
                v2 = -1073741823;
                goto LABEL_32;
              }
            }
            goto LABEL_77;
          }
          if ( v17 > 19 )
          {
            if ( v17 != 20 )
            {
              if ( v17 <= 24 )
              {
                restarted = PiConfigureDevice(v4);
                goto LABEL_69;
              }
              if ( v17 != 25 )
              {
                if ( v17 == 26 )
                {
                  restarted = PiProcessDeviceResetAction(v4);
                  goto LABEL_69;
                }
                if ( v17 == 27 )
                {
                  restarted = PiDmaGuardProcessUpdateConsoleLockStateAction(v4);
                  goto LABEL_69;
                }
                goto LABEL_121;
              }
LABEL_77:
              restarted = PiProcessClearDeviceProblem(v4);
              goto LABEL_69;
            }
          }
          else
          {
            if ( v17 != 19 )
            {
              v37 = v17 - 14;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( !v38 )
                {
                  restarted = PiProcessSetDeviceProblem(v4);
                  goto LABEL_69;
                }
                v39 = v38 - 1;
                if ( !v39 )
                  goto LABEL_83;
                v41 = v39 - 1;
                if ( v41 )
                {
                  if ( v41 == 1 )
                  {
                    v77 = 1;
                    goto LABEL_32;
                  }
                  goto LABEL_121;
                }
                started = PiProcessStartSystemDevices(v4);
              }
              else
              {
LABEL_30:
                started = PiProcessReenumeration(v4);
              }
              v2 = started;
              v78 = 0;
              goto LABEL_32;
            }
            DWORD1(NotificationStructure[1]) = 0;
            *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
            LODWORD(NotificationStructure[0]) = 2359297;
            *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
            v82 = 0xFFFFFFFFLL;
            IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v4 + 16), NotificationStructure, 0LL, 0LL);
          }
          PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v4 + 16));
          goto LABEL_32;
        }
        v2 = -1073741823;
      }
LABEL_34:
      v19 = *(unsigned int *)(v4 + 24);
      v20 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
      KxReleaseSpinLock(&qword_140C24268);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
            v27 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
      }
      __writecr8(v20);
      v21 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
      if ( byte_140C1CC10 )
      {
        *(&PopDirectedDripsDiagSessionContext + v19 + 26) = (char *)*(&PopDirectedDripsDiagSessionContext + v19 + 26)
                                                          + MEMORY[0xFFFFF78000000008]
                                                          - qword_140C1CC28;
        qword_140C1CC28 = 0LL;
      }
      dword_140C1CB9C = 28;
      KxReleaseSpinLock(&qword_140C1CB90);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v59 = KeGetCurrentIrql();
          if ( v59 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v59 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v61 = v60->SchedulerAssist;
            v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
            v27 = (v62 & v61[5]) == 0;
            v61[5] &= v62;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
      }
      __writecr8(v21);
      v22 = 1;
      do
      {
        v23 = *(__int64 **)v4;
        v24 = **(_QWORD **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *(__int64 **)(v24 + 8) != v23 )
          goto LABEL_166;
        *(_QWORD *)v4 = v24;
        *(_QWORD *)(v24 + 8) = v4;
        v25 = *((unsigned int *)v23 + 6);
        v26 = KeAcquireSpinLockRaiseToDpc(&qword_140C24268);
        v27 = dword_140C24270-- == 1;
        v28 = v26;
        if ( v27 )
          PopDirectedDripsClearDisengageReason(4);
        KxReleaseSpinLock(&qword_140C24268);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v63 = KeGetCurrentIrql();
            if ( v63 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = v64->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
              v27 = (v66 & v65[5]) == 0;
              v65[5] &= v66;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v64);
            }
          }
        }
        __writecr8(v28);
        v29 = KeAcquireSpinLockRaiseToDpc(&qword_140C1CB90);
        if ( !--dword_140C1CB98 && byte_140C1CC10 )
        {
          qword_140C1CC18 += MEMORY[0xFFFFF78000000008] - qword_140C1CC20;
          qword_140C1CC20 = 0LL;
        }
        --*((_DWORD *)&PopDirectedDripsDiagSessionContext + v25 + 16);
        KxReleaseSpinLock(&qword_140C1CB90);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v67 >= 2u )
            {
              v68 = KeGetCurrentPrcb();
              v69 = v68->SchedulerAssist;
              v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
              v27 = (v70 & v69[5]) == 0;
              v69[5] &= v70;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v68);
            }
          }
        }
        __writecr8(v29);
        v30 = (int *)v23[6];
        if ( v30 )
          *v30 = v2;
        v31 = (struct _KEVENT *)v23[5];
        if ( v31 )
          KeSetEvent(v31, 0, 0);
        if ( v23 == (__int64 *)v4 )
        {
          v22 = 0;
          if ( v78 )
            ObfDereferenceObject((PVOID)v23[2]);
        }
        PnpDeleteDeviceActionRequest(v23);
      }
      while ( v22 );
      v0 = v75;
      v1 = v76;
      if ( v79 )
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    else if ( v0 || v1 )
    {
      LODWORD(v80) = 3;
      BYTE4(v80) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v80, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v75 = 0;
      v1 = 0;
      v76 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess(v7, 1LL);
      v77 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v71 = KeGetCurrentIrql();
      if ( v71 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v71 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v74 = v72->SchedulerAssist;
        v27 = (v73 & v74[5]) == 0;
        v74[5] &= v73;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
  }
  __writecr8(v5);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
