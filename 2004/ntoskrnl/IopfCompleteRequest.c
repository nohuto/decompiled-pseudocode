/*
 * XREFs of IopfCompleteRequest @ 0x140284EE0
 * Callers:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x140502B4C (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1409C1F90 (IovCompleteRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     EtwpLevelKeywordEnabled @ 0x140215A40 (EtwpLevelKeywordEnabled.c)
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140290C50 (IopDequeueIrpFromThread.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     KiSignalThreadForApc @ 0x1402FB178 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402FB2FC (KiInsertQueueApc.c)
 *     KeInsertQueueApc @ 0x1402FB5E0 (KeInsertQueueApc.c)
 *     IopFreeIrpExtension @ 0x14032660C (IopFreeIrpExtension.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140340D44 (IopVerifyDeviceObjectOnStack.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140354270 (EtwTiLogInsertQueueUserApc.c)
 *     PoDeviceAcquireIrp @ 0x14037A8A4 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14037AFD4 (PoDeviceReleaseIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140511528 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C21C0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(PIRP Irp, unsigned __int8 a2, __int64 a3, _DWORD *a4)
{
  __int64 StackCount; // r8
  CHAR CurrentLocation; // cl
  unsigned __int8 v7; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v9; // r15
  struct _IO_STACK_LOCATION *v10; // rdx
  int Flink; // r12d
  CHAR v12; // cl
  UCHAR *p_Control; // rdi
  struct _LIST_ENTRY *Status; // rax
  UCHAR v15; // al
  UCHAR v16; // cl
  unsigned __int8 v17; // r14
  PDEVICE_OBJECT DeviceObject; // rsi
  ULONG Flags; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  CHAR *AuxiliaryBuffer; // r15
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rdi
  PVPB v25; // rdi
  PDEVICE_OBJECT v26; // rdi
  PDEVICE_OBJECT v27; // r14
  ULONG DeviceType; // eax
  PCHAR v29; // rcx
  ULONG v30; // edi
  struct _MDL *v31; // rsi
  PFILE_OBJECT v32; // r14
  PETHREAD Thread; // rsi
  volatile signed __int32 *v34; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v37; // rcx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  CCHAR ApcEnvironment; // al
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *p_Tail; // rdi
  __int64 (__fastcall *v42)(int, int, int, int, __int64); // r9
  struct _LIST_ENTRY *v43; // r11
  __int64 v44; // rcx
  KPROCESSOR_MODE ApcMode; // cl
  __int64 CurrentThread; // rdx
  PETHREAD v47; // rbx
  _KPROCESS *Process; // rax
  bool v49; // zf
  char v50; // al
  char v51; // r13
  unsigned __int8 v52; // r14
  struct _KPRCB *v53; // rsi
  _DWORD *v54; // rcx
  char v55; // di
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  int v58; // edi
  unsigned __int64 v59; // rcx
  _QWORD *FileObjectExtension; // rax
  struct _DEVICE_OBJECT *i; // rax
  unsigned __int8 v62; // di
  __int64 *CompletionContext; // rax
  union _IRP::$66699B8BF83DC91F51A70E4C6E3F33A6 *v64; // rcx
  __int64 v65; // rdi
  unsigned __int8 v66; // r10
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  __int64 v69; // rdx
  int v70; // esi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r13
  _QWORD *v72; // r14
  struct _LIST_ENTRY *v73; // rcx
  struct _KPRCB *v74; // r12
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // si
  __int64 v79; // rax
  struct _KPRCB *v80; // rcx
  _DWORD *v81; // rdx
  unsigned __int64 v82; // rdi
  PFILE_OBJECT v83; // rdx
  _DWORD *v84; // r9
  PDEVICE_OBJECT *v85; // r14
  int v86; // edx
  struct _LIST_ENTRY *v87; // rcx
  _DWORD *v88; // rcx
  _DWORD *v89; // rcx
  PMDL MdlAddress; // rcx
  struct _IRP *MasterIrp; // rsi
  struct _MDL *Next; // rdi
  _DWORD *v93; // rcx
  KIRQL v94; // al
  __int64 v95; // rcx
  KIRQL v96; // si
  struct _DMA_ADAPTER *v97; // r10
  ULONG_PTR Information; // rcx
  int v99; // eax
  unsigned __int8 IsThreadRunning; // al
  __int64 v101; // r9
  int v102; // eax
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // rdx
  _DWORD *v105; // r9
  int v106; // eax
  _DWORD *SchedulerAssist; // r9
  int v108; // eax
  int v109; // eax
  int v110; // eax
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  unsigned __int8 v115; // al
  struct _KPRCB *v116; // r9
  _DWORD *v117; // r8
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  __int64 *v123; // rdx
  __int64 **v124; // rax
  CHAR *v125; // [rsp+48h] [rbp-49h] BYREF
  struct _LIST_ENTRY *v126; // [rsp+50h] [rbp-41h]
  __int128 v127; // [rsp+58h] [rbp-39h] BYREF
  __int64 v128; // [rsp+68h] [rbp-29h]
  struct _FILE_OBJECT *v129; // [rsp+70h] [rbp-21h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+78h] [rbp-19h]
  __int64 v131; // [rsp+80h] [rbp-11h] BYREF
  __int64 v132; // [rsp+88h] [rbp-9h] BYREF
  __int64 v133; // [rsp+90h] [rbp-1h] BYREF
  __int64 v134; // [rsp+98h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  char v136; // [rsp+F8h] [rbp+67h]
  __int64 v137; // [rsp+F8h] [rbp+67h]
  unsigned __int8 v138; // [rsp+100h] [rbp+6Fh]
  int v139; // [rsp+108h] [rbp+77h] BYREF
  int v140; // [rsp+110h] [rbp+7Fh]

  v138 = a2;
  StackCount = (unsigned __int8)Irp->StackCount;
  v125 = 0LL;
  CurrentLocation = Irp->CurrentLocation;
  v7 = a2;
  if ( CurrentLocation > (char)(StackCount + 1) || Irp->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x1232uLL, 0LL, 0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= (char)StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v9 = 1;
    PoDeviceReleaseIrp(Irp, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
    CurrentLocation = Irp->CurrentLocation;
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    StackCount = (unsigned __int8)Irp->StackCount;
  }
  else
  {
    v9 = 0;
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( (Irp[1].Size & 0x200) != 0 )
    Flink = (int)Irp[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  v12 = CurrentLocation + 1;
  LOBYTE(StackCount) = StackCount + 1;
  Irp->CurrentLocation = v12;
  Irp->Tail.Overlay.CurrentStackLocation = v10 + 1;
  if ( v12 <= (char)StackCount )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      Irp->PendingReturned = *p_Control & 1;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status >= 0 )
        goto LABEL_11;
      if ( (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(Irp[1].Size) |= 2u;
        Irp[1].ThreadListEntry.Flink = Status;
        LODWORD(Status) = Irp->IoStatus.Status;
      }
      if ( (int)Status >= 0 )
      {
LABEL_11:
        v15 = *p_Control;
        v16 = *p_Control;
        if ( (*p_Control & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v15 = *p_Control;
        v16 = *p_Control;
        if ( (*p_Control & 0x80u) != 0 )
          goto LABEL_12;
      }
      if ( Irp->Cancel && (v15 & 0x20) != 0 )
      {
LABEL_12:
        v17 = *(p_Control - 2);
        *p_Control = v15 & 2;
        *((_WORD *)p_Control - 1) = 0;
        *(_QWORD *)(p_Control + 5) = 0LL;
        *(_QWORD *)(p_Control + 13) = 0LL;
        *(_QWORD *)(p_Control + 21) = 0LL;
        *(_QWORD *)(p_Control + 45) = 0LL;
        if ( Irp->CurrentLocation == Irp->StackCount + 1 )
          DeviceObject = 0LL;
        else
          DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
        if ( v9 )
          PoDeviceAcquireIrp(Irp, v17, DeviceObject);
        if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD))(p_Control + 53))(
               DeviceObject,
               Irp,
               *(_QWORD *)(p_Control + 61)) == -1073741802 )
          return;
        if ( v9 )
          PoDeviceReleaseIrp(Irp, v17, DeviceObject);
        goto LABEL_28;
      }
      if ( Irp->PendingReturned && Irp->CurrentLocation <= Irp->StackCount )
      {
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        v16 = *p_Control;
      }
      *((_WORD *)p_Control - 1) = 0;
      *p_Control = v16 & 2;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_28:
      ++Irp->CurrentLocation;
      p_Control += 72;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v7 = v138;
        break;
      }
    }
  }
  Flags = Irp->Flags;
  if ( (Flags & 8) != 0 )
  {
    MdlAddress = Irp->MdlAddress;
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    IoFreeIrp(Irp);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v7);
    return;
  }
  v20 = -2684354563LL;
  v21 = 4194817LL;
  if ( Irp->IoStatus.Status == 260 )
  {
    Information = Irp->IoStatus.Information;
    if ( Information > 2 )
    {
      v20 = Information - 2684354563u;
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v21, v20) )
      {
        AuxiliaryBuffer = Irp->Tail.Overlay.AuxiliaryBuffer;
        v125 = AuxiliaryBuffer;
        Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
        goto LABEL_33;
      }
      Irp->IoStatus.Status = -1073741191;
    }
  }
  AuxiliaryBuffer = v125;
LABEL_33:
  if ( v7 )
    goto LABEL_45;
  OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
  if ( !OriginalFileObject || (Flags & 0x400) != 0 )
    goto LABEL_45;
  Vpb = OriginalFileObject->Vpb;
  if ( (!Vpb || (v26 = Vpb->DeviceObject) == 0LL)
    && ((OriginalFileObject->Flags & 0x800) != 0
     || (v25 = OriginalFileObject->DeviceObject->Vpb) == 0LL
     || (v26 = v25->DeviceObject) == 0LL) )
  {
    v26 = OriginalFileObject->DeviceObject;
  }
  if ( !v26->AttachedDevice )
    goto LABEL_41;
  FileObjectExtension = OriginalFileObject->FileObjectExtension;
  if ( !FileObjectExtension
    || FileObjectExtension == IopRevocationExtension
    || (v85 = (PDEVICE_OBJECT *)FileObjectExtension[2]) == 0LL
    || (v27 = *v85) == 0LL
    || !(unsigned __int8)IopVerifyDeviceObjectOnStack(v26, v27, 0LL) )
  {
    for ( i = v26->AttachedDevice; i; i = i->AttachedDevice )
      v26 = i;
LABEL_41:
    v27 = v26;
  }
  DeviceType = v27->DeviceType;
  if ( DeviceType == 8 || DeviceType == 20 )
  {
    v7 = 1;
    v138 = 1;
  }
  else
  {
    v7 = v138;
  }
LABEL_45:
  v29 = Irp->Tail.Overlay.AuxiliaryBuffer;
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
  }
  if ( (Irp->AllocationFlags & 0x40) != 0 )
  {
    LOBYTE(StackCount) = 1;
    IopFreeIrpExtension(Irp, 0xFFFFFFFFLL, StackCount);
  }
  v30 = Irp->Flags;
  if ( (v30 & 0x402) != 0 )
  {
    if ( (v30 & 0x440) != 0 )
    {
      *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
      v58 = v30 & 0x42;
      if ( v58 )
        IopDequeueIrpFromThread(Irp, v20);
      KeSetEvent(Irp->UserEvent, v7, 0);
      if ( v58 )
      {
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate((ULONG_PTR)Irp);
        else
          IopFreeIrp((ULONG_PTR)Irp);
      }
    }
    else
    {
      IopDequeueIrpFromThread(Irp, v20);
      KeInitializeApc(
        (_DWORD)Irp + 120,
        Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v7);
    }
    return;
  }
  v31 = Irp->MdlAddress;
  if ( v31 )
  {
    do
    {
      MmUnlockPages(v31);
      v31 = v31->Next;
    }
    while ( v31 );
    v30 = Irp->Flags;
  }
  if ( (v30 & 0x2000) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)Irp->Tail.Overlay.Thread);
    v30 = Irp->Flags;
  }
  if ( (v30 & 0x800) != 0 && !Irp->PendingReturned )
  {
    if ( Irp->IoStatus.Status == 260 )
    {
      v59 = Irp->IoStatus.Information - 2684354563u;
      if ( v59 <= 0x16 )
      {
        if ( _bittest64(&v21, v59) )
          Irp->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
      }
    }
    return;
  }
  v32 = Irp->Tail.Overlay.OriginalFileObject;
  Thread = Irp->Tail.Overlay.Thread;
  v129 = v32;
  if ( (v30 & 0x2000) == 0
    || (v132 = 0LL, v131 = 0LL, !Irp->PendingReturned)
    && ((Irp->IoStatus.Status & 0xC0000000) == 0xC0000000 || (v32->Flags & 0x2000000) != 0 && Irp->IoStatus.Status >= 0) )
  {
    if ( Thread )
    {
      v34 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[24];
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        StackCount = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = StackCount;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[24]);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v37 = CurrentPrcb->SchedulerAssist;
        if ( v37 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v108 = v37[6];
            v37[6] = v108 + 1;
            if ( v108 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v34, 0LL) )
        {
          v93 = CurrentPrcb->SchedulerAssist;
          if ( v93 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v109 = v93[6] - 1;
              v93[6] = v109;
              if ( !v109 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(&Thread[1].WaitBlockFill11[24]);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v34, 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v110 = v39[6] - 1;
          v39[6] = v110;
          if ( !v110 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v111 = KeGetCurrentIrql();
          if ( v111 <= 0xFu && CurrentIrql <= 0xFu && v111 >= 2u )
          {
            v112 = KeGetCurrentPrcb();
            v113 = v112->SchedulerAssist;
            v114 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v49 = (v114 & v113[5]) == 0;
            StackCount = (unsigned int)v114 & v113[5];
            v113[5] = StackCount;
            if ( v49 )
              KiRemoveSystemWorkPriorityKick(v112);
          }
        }
      }
      __writecr8(CurrentIrql);
      v32 = v129;
    }
    if ( !Irp->Cancel )
    {
      if ( Thread != KeGetCurrentThread()
        || KeGetCurrentThread()->SpecialApcDisable
        || !(unsigned __int8)KeAreInterruptsEnabled()
        || KeGetCurrentIrql()
        || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        ApcEnvironment = Irp->ApcEnvironment;
        p_Tail = &Irp->Tail;
        Irp->Tail.Apc.Type = 18;
        Irp->Tail.Apc.Size = 88;
        if ( ApcEnvironment == 2 )
          ApcEnvironment = Thread->ApcStateIndex;
        Irp->Tail.Apc.ApcStateIndex = ApcEnvironment;
        v42 = IopCompleteRequest;
        v43 = 0LL;
        Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
        Irp->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        Irp->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&Irp->Tail.CompletionKey + 81) = 0;
        Irp->Tail.Overlay.ListEntry.Blink = 0LL;
        if ( EtwThreatIntProvRegHandle )
        {
          v44 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32);
          LOBYTE(StackCount) = *(_DWORD *)(v44 + 96)
                            && (*(_DWORD *)(v44 + 112) & 0x3000LL) != 0
                            && (*(_QWORD *)(v44 + 120) & 0x3000LL) == *(_QWORD *)(v44 + 120)
                            || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
                            && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL);
          ApcMode = 0;
          v126 = v43;
          Blink = v43;
        }
        else
        {
          LOBYTE(StackCount) = 0;
          ApcMode = Irp->Tail.Apc.ApcMode;
          Blink = Irp->Tail.Overlay.ListEntry.Blink;
          v126 = Irp->Tail.Overlay.ListEntry.Flink;
        }
        v136 = ApcMode != 0;
        LOBYTE(v42) = v42 == KeSpecialUserApcKernelRoutine && !ApcMode;
        CurrentThread = (__int64)KeGetCurrentThread();
        v47 = Thread;
        Process = Thread->Process;
        if ( ApcMode )
          v49 = *(_QWORD *)(CurrentThread + 544) == (_QWORD)Process;
        else
          v49 = *(_QWORD *)(CurrentThread + 184) == (_QWORD)Process;
        v50 = !v49;
        if ( (_BYTE)StackCount && v50 && (ApcMode || (_BYTE)v42) )
        {
          v51 = 1;
          ObfReferenceObjectWithTag(Thread, 0x5149654Bu);
          LODWORD(v43) = 0;
        }
        else
        {
          v51 = 0;
        }
        v52 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
        {
          StackCount = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          CurrentThread = (-1 << (v52 + 1)) & 4u | *(_DWORD *)(StackCount + 20);
          *(_DWORD *)(StackCount + 20) = CurrentThread;
        }
        v53 = KeGetCurrentPrcb();
        v139 = (int)v43;
        v54 = v53->SchedulerAssist;
        if ( v54 )
        {
          if ( v53->NestingLevel <= 1u )
          {
            v119 = v54[6];
            v54[6] = v119 + 1;
            if ( v119 == -1 )
LABEL_257:
              KiRemoveSystemWorkPriorityKick(v53);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v47->ThreadLock, 0LL) )
        {
          v88 = v53->SchedulerAssist;
          if ( v88 )
          {
            if ( v53->NestingLevel <= 1u )
            {
              v120 = v88[6] - 1;
              v88[6] = v120;
              if ( !v120 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
          do
            KeYieldProcessorEx(&v139, CurrentThread, StackCount, (__int64)v42);
          while ( v47->ThreadLock );
          v89 = v53->SchedulerAssist;
          if ( v89 )
          {
            if ( v53->NestingLevel <= 1u )
            {
              v121 = v89[6];
              v89[6] = v121 + 1;
              if ( v121 == -1 )
                goto LABEL_257;
            }
          }
        }
        if ( (v47->MiscFlags & 0x4000) == 0 || p_Tail->Apc.Inserted )
        {
          v55 = 0;
        }
        else
        {
          p_Tail->Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v129;
          p_Tail->Overlay.OriginalFileObject = (PFILE_OBJECT)v125;
          p_Tail->Apc.Inserted = 1;
          KiInsertQueueApc(p_Tail, CurrentThread, StackCount, v42);
          KiSignalThreadForApc(v53, p_Tail, v52);
          v55 = 1;
        }
        v47->ThreadLock = 0LL;
        v56 = KeGetCurrentPrcb();
        v57 = v56->SchedulerAssist;
        if ( v57 )
        {
          if ( v56->NestingLevel <= 1u )
          {
            v122 = v57[6] - 1;
            v57[6] = v122;
            if ( !v122 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        KiExitDispatcher((_DWORD)v53, 0, 1, v138, v52);
        if ( v51 )
        {
          if ( v55 )
            EtwTiLogInsertQueueUserApc(
              (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
              (_DWORD)v47,
              (_DWORD)v126,
              (_DWORD)Blink,
              (char)v129,
              (char)v125,
              v136);
          ObfDereferenceObjectWithTag(v47, 0x5149654Bu);
        }
      }
      else
      {
        v133 = 1LL;
        v134 = 0LL;
        v62 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest(
          (_DWORD)Irp + 120,
          (unsigned int)&v134,
          (unsigned int)&v133,
          (unsigned int)&v129,
          (__int64)&v125);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v115 = KeGetCurrentIrql();
            if ( v115 <= 0xFu && v62 <= 0xFu && v115 >= 2u )
            {
              v116 = KeGetCurrentPrcb();
              v117 = v116->SchedulerAssist;
              v118 = ~(unsigned __int16)(-1LL << (v62 + 1));
              v49 = (v118 & v117[5]) == 0;
              v117[5] &= v118;
              if ( v49 )
                KiRemoveSystemWorkPriorityKick(v116);
            }
          }
        }
        __writecr8(v62);
      }
      return;
    }
    v94 = KeAcquireQueuedSpinLock(0xBuLL);
    v95 = IopDeadIrps;
    v96 = v94;
    v97 = (struct _DMA_ADAPTER *)Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_189:
      if ( v97 )
      {
        KeInitializeApc(
          (_DWORD)Irp + 120,
          (_DWORD)v97,
          Irp->ApcEnvironment,
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v32, v125, v138);
        KeReleaseQueuedSpinLock(0xBuLL, v96);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v123 = *(__int64 **)v95;
        if ( (PIRP)(v95 - 32) == Irp )
          break;
        v95 = *(_QWORD *)v95;
        if ( v123 == &IopDeadIrps )
          goto LABEL_189;
      }
      v124 = *(__int64 ***)(v95 + 8);
      if ( v123[1] != v95 || *v124 != (__int64 *)v95 )
        goto LABEL_166;
      *v124 = v123;
      v123[1] = (__int64)v124;
      *(_QWORD *)(v95 - 32 + 40) = v95;
      *(_QWORD *)v95 = v95;
      HalPutDmaAdapter(v97);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v96);
    v83 = v32;
    goto LABEL_145;
  }
  CompletionContext = (__int64 *)v32->CompletionContext;
  v64 = &Irp->Tail;
  if ( !CompletionContext )
  {
    IopCompleteRequest((_DWORD)v64, (unsigned int)&v132, (unsigned int)&v131, (_DWORD)Irp + 192, (__int64)&v131);
    return;
  }
  v127 = 0LL;
  v128 = 0LL;
  v65 = *CompletionContext;
  v64->Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)CompletionContext[1];
  Irp->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v127 = 0LL;
  *((_QWORD *)&v127 + 1) = v65 + 64;
  v66 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v66 <= 0xFu )
  {
    a4 = KeGetCurrentPrcb()->SchedulerAssist;
    StackCount = (-1 << (v66 + 1)) & 4u | a4[5];
    a4[5] = StackCount;
  }
  LOBYTE(v128) = v66;
  v67 = KeGetCurrentPrcb();
  v68 = v67->SchedulerAssist;
  if ( v68 )
  {
    if ( v67->NestingLevel <= 1u )
    {
      v99 = v68[6];
      v68[6] = v99 + 1;
      if ( v99 == -1 )
        KiRemoveSystemWorkPriorityKick(v67);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v127, v65 + 64);
  }
  else
  {
    v69 = _InterlockedExchange64((volatile __int64 *)(v65 + 64), (__int64)&v127);
    if ( v69 )
      KxWaitForLockOwnerShip(&v127);
  }
  Irp->Flags |= 0x10000u;
  if ( !*(_BYTE *)(v65 + 72) )
  {
    v70 = (char)v138;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
    v72 = (_QWORD *)(v65 + 8);
    v73 = (struct _LIST_ENTRY *)KeGetCurrentIrql();
    v126 = v73;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v73 <= 0xFu )
    {
      v84 = KeGetCurrentPrcb()->SchedulerAssist;
      v69 = (-1LL << ((unsigned __int8)v73 + 1)) & 4;
      StackCount = (unsigned int)v69 | v84[5];
      v84[5] = StackCount;
    }
    v74 = KeGetCurrentPrcb();
    v75 = (__int64)v74->CurrentThread;
    v137 = v75;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v75, v69);
      EtwTraceEnqueueWork(v101, &Irp->Tail.CompletionKey + 6, IsThreadRunning);
    }
    if ( v138 && (*(_BYTE *)(v65 + 1) & 2) != 0 )
      v70 = 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v65, v69, StackCount, v75);
    v140 = *(_DWORD *)(v65 + 4);
    if ( (_QWORD *)*v72 != v72
      && *(_DWORD *)(v65 + 40) < *(_DWORD *)(v65 + 44)
      && (*(_QWORD *)(v137 + 232) != v65 || *(_BYTE *)(v137 + 643) != 15)
      && KiWakeQueueWaiter((__int64)v74, v65, (__int64)&Irp->Tail.Overlay.ListEntry) )
    {
      goto LABEL_137;
    }
    v86 = *(_DWORD *)(v65 + 4);
    *(_DWORD *)(v65 + 4) = v86 + 1;
    v87 = *(struct _LIST_ENTRY **)(v65 + 32);
    if ( v87->Flink == (struct _LIST_ENTRY *)(v65 + 24) )
    {
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v65 + 24);
      Irp->Tail.Overlay.ListEntry.Blink = v87;
      v87->Flink = &p_ListEntry->ListEntry;
      *(_QWORD *)(v65 + 32) = p_ListEntry;
      if ( !v86 && (_QWORD *)*v72 != v72 )
        KiWakeOtherQueueWaiters((__int64)v74, v65, v76, v77);
LABEL_137:
      _InterlockedAnd((volatile signed __int32 *)v65, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v74, 0, 1, v70, (char)v126);
      v78 = 0;
      goto LABEL_138;
    }
LABEL_166:
    __fastfail(3u);
  }
  v78 = 1;
LABEL_138:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v127, retaddr);
    goto LABEL_141;
  }
  _m_prefetchw(&v127);
  v79 = v127;
  if ( (_QWORD)v127 )
    goto LABEL_171;
  if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v127 + 1), 0LL, (signed __int64)&v127) != &v127 )
  {
    v79 = KxWaitForLockChainValid((__int64 *)&v127, v69, StackCount, (__int64)a4);
LABEL_171:
    *(_QWORD *)&v127 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v79 + 8), 1uLL);
  }
LABEL_141:
  v80 = KeGetCurrentPrcb();
  v81 = v80->SchedulerAssist;
  if ( v81 )
  {
    if ( v80->NestingLevel <= 1u )
    {
      v102 = v81[6] - 1;
      v81[6] = v102;
      if ( !v102 )
        KiRemoveSystemWorkPriorityKick(v80);
    }
  }
  v82 = (unsigned __int8)v128;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v103 = KeGetCurrentIrql();
      if ( v103 <= 0xFu && (unsigned __int8)v128 <= 0xFu && v103 >= 2u )
      {
        v104 = KeGetCurrentPrcb();
        v105 = v104->SchedulerAssist;
        v106 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v128 + 1));
        v49 = (v106 & v105[5]) == 0;
        v105[5] &= v106;
        if ( v49 )
          KiRemoveSystemWorkPriorityKick(v104);
      }
    }
  }
  __writecr8(v82);
  if ( v78 )
  {
    v83 = Irp->Tail.Overlay.OriginalFileObject;
LABEL_145:
    IopDropIrp(Irp, (ULONG_PTR)v83);
  }
}
