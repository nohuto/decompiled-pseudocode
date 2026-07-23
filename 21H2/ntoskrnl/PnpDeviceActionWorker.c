/*
 * XREFs of PnpDeviceActionWorker @ 0x140381DA0
 * Callers:
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402F9330 (IoReportTargetDeviceChangeAsynchronous.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpDeleteDeviceActionRequest @ 0x14037ECC4 (PnpDeleteDeviceActionRequest.c)
 *     PpProcessClearProblem @ 0x140381960 (PpProcessClearProblem.c)
 *     PnpLogActionQueueEvent @ 0x140382298 (PnpLogActionQueueEvent.c)
 *     PnpCompleteSystemStartProcess @ 0x1403C3848 (PnpCompleteSystemStartProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PnpProcessRebalance @ 0x1405106DC (PnpProcessRebalance.c)
 *     PoNotifyPnpActionQueueEvent @ 0x140576BDC (PoNotifyPnpActionQueueEvent.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PiConfigureDevice @ 0x14072FFA4 (PiConfigureDevice.c)
 *     PiProcessSetDeviceProblem @ 0x140731744 (PiProcessSetDeviceProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140731928 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x140733E00 (PiRestartDevice.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074CA04 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessReenumeration @ 0x14076DA10 (PiProcessReenumeration.c)
 *     PiProcessRequeryDeviceState @ 0x14078D0A8 (PiProcessRequeryDeviceState.c)
 *     PiProcessStartSystemDevices @ 0x1407D3F6C (PiProcessStartSystemDevices.c)
 *     PiProcessHaltDevice @ 0x1408A27BC (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 */

__int64 PnpDeviceActionWorker()
{
  char v0; // r12
  char v1; // r13
  char v2; // r15
  int v3; // r14d
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  int started; // eax
  int PowerRelations; // eax
  int v18; // r15d
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  int *v21; // rax
  struct _KEVENT *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  char v32; // [rsp+48h] [rbp-19h]
  char v33; // [rsp+49h] [rbp-18h]
  char v34; // [rsp+4Ah] [rbp-17h]
  __int64 v35; // [rsp+50h] [rbp-11h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp+17h]
  __int128 v38; // [rsp+80h] [rbp+1Fh] BYREF

  v35 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v37 = 0LL;
  v0 = 0;
  v32 = 0;
  v38 = 0LL;
  v1 = 0;
  _InterlockedExchange64((volatile __int64 *)PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v34 = 0;
    v3 = 0;
    v33 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = PnpEnumerationRequestList;
    v6 = v4;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || (v7 = *(_QWORD *)PnpEnumerationRequestList,
            *(_QWORD *)(*(_QWORD *)PnpEnumerationRequestList + 8LL) != PnpEnumerationRequestList) )
      {
LABEL_99:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v5 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KeReleaseSpinLock(&PnpSpinLock, v6);
    if ( v5 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v5 + 56);
      if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v5 + 56) )
        v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v5 + 64);
      if ( v8 )
      {
        v34 = 1;
        v38 = *(_OWORD *)(v5 + 56);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v38;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
      v10 = *(_BYTE *)(v5 + 88);
      ExReleasePushLockEx(v5 + 80, 0LL);
      KeLeaveCriticalRegion();
      PoNotifyPnpActionQueueEvent(2LL, *(unsigned int *)(v5 + 24));
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
      }
      else if ( v10 )
      {
        v3 = -1073741536;
      }
      else
      {
        v11 = *(_QWORD **)(v5 + 16);
        if ( v11 )
          v12 = *(_QWORD *)(v11[39] + 40LL);
        else
          v12 = 0LL;
        if ( *(_DWORD *)(v12 + 300) != 788 )
        {
          if ( v11 )
            v13 = *(_QWORD *)(v11[39] + 40LL);
          else
            v13 = 0LL;
          if ( v13 )
          {
            ObfReferenceObjectWithTag(v11, 0x65706E50u);
            PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 1LL, 0LL);
          }
          v14 = *(_DWORD *)(v5 + 24);
          if ( v14 <= 12 )
          {
            if ( v14 != 12 )
            {
              if ( v14 > 5 )
              {
                if ( v14 == 6 )
                {
                  PowerRelations = PnpProcessRebalance(v5);
                  goto LABEL_33;
                }
                if ( v14 == 7 )
                {
                  v1 = 1;
                }
                else
                {
                  if ( v14 <= 10 )
                    goto LABEL_26;
                  PowerRelations = PiProcessRequeryDeviceState(v5);
LABEL_33:
                  v3 = PowerRelations;
                }
LABEL_34:
                if ( v13 )
                {
                  PnpLogActionQueueEvent(v13, *(unsigned int *)(v5 + 24), 2LL, (unsigned int)v3);
                  ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 16), 0x65706E50u);
                }
                goto LABEL_36;
              }
              if ( v14 == 5 )
              {
                v23 = *(_QWORD *)(v5 + 16);
                if ( v23 )
                  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
                else
                  v24 = 0LL;
                PowerRelations = PiQueryPowerRelations(v24, 0LL);
                goto LABEL_33;
              }
              if ( !v14 )
              {
                v0 = 1;
                goto LABEL_34;
              }
              v25 = v14 - 1;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( !v26 )
                {
                  PowerRelations = PpProcessClearProblem(v5);
                  goto LABEL_33;
                }
                v31 = v26 - 1;
                if ( v31 )
                {
                  if ( v31 == 1 )
                  {
                    PowerRelations = PiProcessHaltDevice(v5);
                    goto LABEL_33;
                  }
                  goto LABEL_80;
                }
              }
LABEL_70:
              PowerRelations = PiProcessClearDeviceProblem(v5);
              goto LABEL_33;
            }
LABEL_69:
            PowerRelations = PiRestartDevice(v5);
            goto LABEL_33;
          }
          if ( v14 <= 18 )
          {
            if ( v14 == 18 )
            {
              v32 = 1;
              goto LABEL_34;
            }
            v27 = v14 - 13;
            if ( !v27 )
            {
              v3 = PiProcessResourceRequirementsChanged(v5);
              if ( v3 < 0 )
              {
                v0 = 1;
                v3 = 0;
              }
              goto LABEL_34;
            }
            v28 = v27 - 1;
            if ( !v28 )
            {
LABEL_26:
              started = PiProcessReenumeration(v5);
LABEL_27:
              v3 = started;
              v33 = 0;
              goto LABEL_34;
            }
            v29 = v28 - 1;
            if ( !v29 )
            {
              PowerRelations = PiProcessSetDeviceProblem(v5);
              goto LABEL_33;
            }
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_69;
            if ( v30 == 1 )
            {
              started = PiProcessStartSystemDevices(v5);
              goto LABEL_27;
            }
LABEL_80:
            v3 = -1073741823;
            goto LABEL_34;
          }
          if ( v14 == 19 )
          {
            DWORD1(NotificationStructure[1]) = 0;
            *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
            LODWORD(NotificationStructure[0]) = 2359297;
            *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
            v37 = 0xFFFFFFFFLL;
            IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v5 + 16), NotificationStructure, 0LL, 0LL);
          }
          else if ( v14 != 20 )
          {
            if ( v14 <= 24 )
            {
              PowerRelations = PiConfigureDevice(v5);
              goto LABEL_33;
            }
            if ( v14 == 25 )
              goto LABEL_70;
            goto LABEL_80;
          }
          PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v5 + 16));
          goto LABEL_34;
        }
        v3 = -1073741823;
      }
LABEL_36:
      PoNotifyPnpActionQueueEvent(3LL, *(unsigned int *)(v5 + 24));
      v18 = 1;
      do
      {
        v19 = *(volatile signed __int32 **)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          goto LABEL_99;
        v20 = *(_QWORD *)v19;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v19 + 8LL) != v19 )
          goto LABEL_99;
        *(_QWORD *)v5 = v20;
        *(_QWORD *)(v20 + 8) = v5;
        PoNotifyPnpActionQueueEvent(1LL, *((unsigned int *)v19 + 6));
        v21 = (int *)*((_QWORD *)v19 + 6);
        if ( v21 )
          *v21 = v3;
        v22 = (struct _KEVENT *)*((_QWORD *)v19 + 5);
        if ( v22 )
          KeSetEvent(v22, 0, 0);
        if ( v19 == (volatile signed __int32 *)v5 )
        {
          v18 = 0;
          if ( v33 )
            HalPutDmaAdapter(*((PADAPTER_OBJECT *)v19 + 2));
        }
        PnpDeleteDeviceActionRequest(v19);
      }
      while ( v18 );
      v2 = v32;
      if ( v34 )
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    else if ( v0 || v1 )
    {
      LODWORD(v35) = 3;
      BYTE4(v35) = PnPBootDriversInitialized;
      ObfReferenceObject(*((PVOID *)IopRootDeviceNode + 4));
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v35, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v32 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KeReleaseSpinLock(&PnpSpinLock, v6);
  _InterlockedExchange64((volatile __int64 *)PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
