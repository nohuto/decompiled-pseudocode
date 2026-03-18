/*
 * XREFs of IopfCompleteRequest @ 0x140292590
 * Callers:
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14050655C (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1409C7FB0 (IovCompleteRequest.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     IopDequeueIrpFromThread @ 0x14021B3A0 (IopDequeueIrpFromThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1402804B0 (EtwpLevelKeywordEnabled.c)
 *     KiSignalThread @ 0x14028D1C0 (KiSignalThread.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     IopCompleteIrpInFileObjectList @ 0x140294E84 (IopCompleteIrpInFileObjectList.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     KiSendSoftwareInterrupt @ 0x1402F7E88 (KiSendSoftwareInterrupt.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140311BB4 (IopVerifyDeviceObjectOnStack.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140324F30 (EtwTiLogInsertQueueUserApc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     PoDeviceAcquireIrp @ 0x14037C5D4 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14037CD04 (PoDeviceReleaseIrp.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140514E58 (KiReleaseSpinLockInstrumented.c)
 *     FeatureServicing_40524482_EnableKey @ 0x1405CBC40 (FeatureServicing_40524482_EnableKey.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C81E0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v2; // r9
  PIRP v3; // rsi
  unsigned __int8 v4; // r13
  char StackCount; // cl
  __int64 CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v8; // r12
  int Flink; // r15d
  PIRP v10; // rdi
  UCHAR *p_Control; // rbx
  PIRP v12; // rcx
  struct _LIST_ENTRY *Status; // rax
  UCHAR v14; // al
  unsigned __int8 v15; // r14
  PIRP v16; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // r14
  struct _MDL *Next; // rbx
  __int64 v21; // r15
  unsigned __int64 Information; // rax
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rbx
  PDEVICE_OBJECT v25; // rbx
  PVPB v26; // rbx
  _QWORD *FileObjectExtension; // rax
  PDEVICE_OBJECT *v28; // rsi
  PDEVICE_OBJECT v29; // rsi
  char v30; // al
  struct _DEVICE_OBJECT *i; // rax
  ULONG DeviceType; // eax
  PCHAR v33; // rcx
  char v34; // al
  unsigned __int8 (__fastcall *v35)(PIRP *, PFILE_OBJECT, _QWORD); // rax
  ULONG Flags; // ebx
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _MDL *v40; // rbx
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // rdx
  struct _KTHREAD *Thread; // r15
  volatile signed __int32 *v44; // rbx
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 v59; // bl
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  _DWORD *v62; // r8
  int v63; // eax
  PIRP v64; // rax
  CCHAR ApcEnvironment; // cl
  PIRP v66; // rdi
  __int64 v67; // rcx
  bool v68; // cl
  KPROCESSOR_MODE ApcMode; // dl
  struct _LIST_ENTRY *v70; // rax
  bool v71; // r8
  struct _LIST_ENTRY *v72; // r14
  struct _KTHREAD *CurrentThread; // r9
  _KPROCESS *v74; // rax
  bool v75; // zf
  char v76; // r13
  unsigned __int8 v77; // r12
  _DWORD *v78; // r8
  struct _KPRCB *v79; // r15
  _DWORD *v80; // rcx
  int v81; // eax
  _DWORD *v82; // rcx
  int v83; // eax
  struct _LIST_ENTRY *v84; // rdx
  __int64 v85; // rax
  char *v86; // r8
  __int64 v87; // rax
  void (__fastcall __noreturn *v88)(); // rcx
  PVOID *v89; // rcx
  char *v90; // rdx
  _QWORD *v91; // rax
  PVOID ***v92; // rcx
  PVOID **j; // rax
  PVOID *v94; // rcx
  PVOID *v95; // rdx
  PVOID **v96; // rax
  PVOID **v97; // rcx
  PVOID *v98; // rdx
  PVOID *v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  char v103; // bl
  char v104; // al
  char v105; // al
  int v106; // ecx
  __int64 v107; // rcx
  __int64 v108; // rsi
  struct _KPRCB *v109; // rdi
  _DWORD *v110; // rcx
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  int v118; // eax
  char v119; // al
  __int64 v120; // rcx
  __int64 v121; // rcx
  char v122; // cl
  struct _KPRCB *v123; // rcx
  _DWORD *v124; // rdx
  int v125; // eax
  KIRQL v126; // al
  __int64 v127; // rcx
  KIRQL v128; // bl
  struct _DMA_ADAPTER *v129; // r10
  __int64 *v130; // rdx
  __int64 **v131; // r8
  signed __int32 v132[6]; // [rsp+8h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-39h] BYREF
  CHAR *AuxiliaryBuffer; // [rsp+50h] [rbp-31h] BYREF
  int v135; // [rsp+58h] [rbp-29h] BYREF
  struct _FILE_OBJECT *v136; // [rsp+60h] [rbp-21h]
  ULONG_PTR v137; // [rsp+68h] [rbp-19h]
  __int64 v138; // [rsp+70h] [rbp-11h] BYREF
  __int64 v139; // [rsp+78h] [rbp-9h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+80h] [rbp-1h]
  struct _LIST_ENTRY *v141; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+E0h] [rbp+5Fh]
  PIRP Irp; // [rsp+E8h] [rbp+67h] BYREF
  unsigned __int8 v144; // [rsp+F0h] [rbp+6Fh]
  char v145; // [rsp+F8h] [rbp+77h]
  int v146; // [rsp+100h] [rbp+7Fh] BYREF

  v144 = a2;
  Irp = BugCheckParameter1;
  v2 = 0LL;
  v3 = BugCheckParameter1;
  BugCheckParameter2 = 0LL;
  v4 = a2;
  AuxiliaryBuffer = 0LL;
  StackCount = BugCheckParameter1->StackCount;
  CurrentLocation = (unsigned __int8)v3->CurrentLocation;
  if ( (char)CurrentLocation > (char)(StackCount + 1) || v3->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v3, 0x1269uLL, 0LL, 0LL);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( (char)CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v8 = 1;
    PoDeviceReleaseIrp(v3, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
    v3 = Irp;
    v2 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( (v3[1].Size & 0x200) != 0 )
    Flink = (int)v3[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v3->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v10 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    do
    {
      v10->PendingReturned = *p_Control & 1;
      v12 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v3[1].Size) |= 2u;
        v3[1].ThreadListEntry.Flink = Status;
        v12 = Irp;
      }
      if ( v12->IoStatus.Status < 0 )
      {
        v14 = *p_Control;
        if ( (*p_Control & 0x80u) != 0 )
          goto LABEL_21;
      }
      else
      {
        v14 = *p_Control;
        if ( (*p_Control & 0x40) != 0 )
          goto LABEL_21;
      }
      if ( !v12->Cancel || (v14 = *p_Control, (*p_Control & 0x20) == 0) )
      {
        if ( v12->PendingReturned && v12->CurrentLocation <= v12->StackCount )
          v12->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        *p_Control &= 2u;
        *((_WORD *)p_Control - 1) = 0;
        *(_QWORD *)(p_Control + 5) = 0LL;
        *(_QWORD *)(p_Control + 13) = 0LL;
        *(_QWORD *)(p_Control + 21) = 0LL;
        *(_QWORD *)(p_Control + 45) = 0LL;
        goto LABEL_30;
      }
LABEL_21:
      v15 = *(p_Control - 2);
      *p_Control = v14 & 2;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
      v16 = Irp;
      if ( Irp->CurrentLocation == Irp->StackCount + 1 )
        DeviceObject = 0LL;
      else
        DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
      if ( v8 )
      {
        PoDeviceAcquireIrp(Irp, v15, DeviceObject, 0LL);
        v16 = Irp;
      }
      if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD, __int64))(p_Control + 53))(
             DeviceObject,
             v16,
             *(_QWORD *)(p_Control + 61),
             v2) == -1073741802 )
        return;
      if ( v8 )
        PoDeviceReleaseIrp(Irp, v15, DeviceObject);
      v2 = 0LL;
LABEL_30:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v10 = Irp;
    }
    while ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) );
  }
  if ( (v10->Flags & 8) != 0 )
  {
    MdlAddress = v10->MdlAddress;
    MasterIrp = v10->AssociatedIrp.MasterIrp;
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
    IoFreeIrp(v10);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v4);
    return;
  }
  v21 = 4194817LL;
  if ( v10->IoStatus.Status == 260 )
  {
    Information = v10->IoStatus.Information;
    if ( Information > 2 )
    {
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v21, Information - 2684354563u) )
      {
        AuxiliaryBuffer = v10->Tail.Overlay.AuxiliaryBuffer;
        v10->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v10->IoStatus.Status = -1073741191;
      }
      v10 = Irp;
    }
  }
  if ( !v4 )
  {
    OriginalFileObject = v10->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v10->Flags & 0x400) == 0 )
      {
        Vpb = OriginalFileObject->Vpb;
        if ( (!Vpb || (v25 = Vpb->DeviceObject) == 0LL)
          && ((OriginalFileObject->Flags & 0x800) != 0
           || (v26 = OriginalFileObject->DeviceObject->Vpb) == 0LL
           || (v25 = v26->DeviceObject) == 0LL) )
        {
          v25 = OriginalFileObject->DeviceObject;
        }
        if ( v25->AttachedDevice )
        {
          FileObjectExtension = OriginalFileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            if ( FileObjectExtension != IopRevocationExtension )
            {
              v28 = (PDEVICE_OBJECT *)FileObjectExtension[2];
              if ( v28 )
              {
                v29 = *v28;
                if ( v29 )
                {
                  v30 = IopVerifyDeviceObjectOnStack(v25, v29, 0LL, 0LL);
                  v10 = Irp;
                  if ( v30 )
                  {
LABEL_66:
                    DeviceType = v29->DeviceType;
                    if ( DeviceType == 8 || DeviceType == 20 )
                    {
                      v4 = 1;
                      v144 = 1;
                    }
                    goto LABEL_69;
                  }
                }
              }
            }
          }
          for ( i = v25->AttachedDevice; i; i = i->AttachedDevice )
            v25 = i;
        }
        v29 = v25;
        goto LABEL_66;
      }
    }
  }
LABEL_69:
  v33 = v10->Tail.Overlay.AuxiliaryBuffer;
  if ( v33 )
  {
    ExFreePoolWithTag(v33, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v10 = Irp;
  }
  if ( EnableFeatureServicing_40524482 == 1
    || EnableFeatureServicing_40524482 && (v34 = FeatureServicing_40524482_EnableKey(), v10 = Irp, v34) )
  {
    LOBYTE(CurrentLocation) = 1;
    v35 = (unsigned __int8 (__fastcall *)(PIRP *, PFILE_OBJECT, _QWORD))IopFreeIrpExtension(
                                                                          v10,
                                                                          0xFFFFFFFFLL,
                                                                          CurrentLocation);
    if ( v35 && v35(&Irp, Irp->Tail.Overlay.OriginalFileObject, v4) )
      return;
  }
  else
  {
    if ( (v10->AllocationFlags & 0x40) == 0 )
      goto LABEL_79;
    LOBYTE(CurrentLocation) = 1;
    IopFreeIrpExtension(v10, 0xFFFFFFFFLL, CurrentLocation);
  }
  v10 = Irp;
LABEL_79:
  Flags = v10->Flags;
  if ( (Flags & 0x402) != 0 )
  {
    if ( (Flags & 0x440) != 0 )
    {
      *(_OWORD *)&v10->UserIosb->Status = *(_OWORD *)&v10->IoStatus.Status;
      v37 = Flags & 0x42;
      if ( v37 )
        IopDequeueIrpFromThread(Irp);
      KeSetEvent(Irp->UserEvent, v4, 0);
      if ( v37 )
      {
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate((ULONG_PTR)Irp);
        else
          IopFreeIrp((ULONG_PTR)Irp, v38, v39);
      }
    }
    else
    {
      IopDequeueIrpFromThread(v10);
      KeInitializeApc(
        (_DWORD)Irp + 120,
        Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v4);
    }
    return;
  }
  v40 = v10->MdlAddress;
  if ( v40 )
  {
    do
    {
      MmUnlockPages(v40);
      v40 = v40->Next;
    }
    while ( v40 );
    v10 = Irp;
  }
  if ( (v10->Flags & 0x2000) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v10->Tail.Overlay.Thread);
    v10 = Irp;
  }
  if ( (v10->Flags & 0x800) != 0 && !v10->PendingReturned )
  {
    if ( v10->IoStatus.Status == 260 )
    {
      v41 = v10->IoStatus.Information - 2684354563u;
      if ( v41 <= 0x16 )
      {
        if ( _bittest64(&v21, v41) )
          v10->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
      }
    }
    return;
  }
  v42 = (ULONG_PTR)v10->Tail.Overlay.OriginalFileObject;
  Thread = v10->Tail.Overlay.Thread;
  BugCheckParameter2 = v42;
  if ( (unsigned int)EnableFeatureServicing_40524482 >= 2 )
  {
    FeatureServicing_40524482_EnableKey();
    v42 = BugCheckParameter2;
    v10 = Irp;
  }
  if ( (v10->Flags & 0x2000) != 0 )
  {
    if ( (unsigned __int8)IopCompleteIrpInFileObjectList(v10, v42, v4) )
      return;
    v10 = Irp;
  }
  if ( Thread )
  {
    v44 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[24];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[24]);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v48 = CurrentPrcb->SchedulerAssist;
      if ( v48 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v49 = v48[6];
          v48[6] = v49 + 1;
          if ( v49 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64(v44, 0LL) )
      {
        v50 = CurrentPrcb->SchedulerAssist;
        if ( v50 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(&Thread[1].WaitBlockFill11[24]);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
    v52 = KeGetCurrentPrcb();
    v53 = v52->SchedulerAssist;
    if ( v53 )
    {
      if ( v52->NestingLevel <= 1u )
      {
        v54 = v53[6] - 1;
        v53[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && CurrentIrql <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v75 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v75 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
    }
    __writecr8(CurrentIrql);
    v10 = Irp;
  }
  if ( v10->Cancel )
  {
    v126 = KeAcquireQueuedSpinLock(0xBuLL);
    v127 = IopDeadIrps;
    v128 = v126;
    v129 = (struct _DMA_ADAPTER *)Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_288:
      if ( v129 )
      {
        KeInitializeApc(
          (_DWORD)Irp + 120,
          (_DWORD)v129,
          Irp->ApcEnvironment,
          (unsigned int)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, BugCheckParameter2, AuxiliaryBuffer, v4);
        KeReleaseQueuedSpinLock(0xBuLL, v128);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v130 = *(__int64 **)v127;
        if ( (PIRP)(v127 - 32) == Irp )
          break;
        v127 = *(_QWORD *)v127;
        if ( v130 == &IopDeadIrps )
          goto LABEL_288;
      }
      v131 = *(__int64 ***)(v127 + 8);
      if ( v130[1] != v127 || *v131 != (__int64 *)v127 )
        goto LABEL_294;
      *v131 = v130;
      v130[1] = (__int64)v131;
      *(_QWORD *)(v127 + 8) = v127;
      *(_QWORD *)v127 = v127;
      HalPutDmaAdapter(v129);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v128);
    IopDropIrp(Irp, BugCheckParameter2);
    return;
  }
  if ( Thread == KeGetCurrentThread()
    && !KeGetCurrentThread()->SpecialApcDisable
    && KeAreInterruptsEnabled()
    && !KeGetCurrentIrql()
    && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v139 = 0LL;
    v138 = 1LL;
    v59 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)&v139, &v138, &BugCheckParameter2, &AuxiliaryBuffer);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v60 = KeGetCurrentIrql();
        if ( v60 <= 0xFu && v59 <= 0xFu && v60 >= 2u )
        {
          v61 = KeGetCurrentPrcb();
          v62 = v61->SchedulerAssist;
          v63 = ~(unsigned __int16)(-1LL << (v59 + 1));
          v75 = (v63 & v62[5]) == 0;
          v62[5] &= v63;
          if ( v75 )
            KiRemoveSystemWorkPriorityKick(v61);
        }
      }
    }
    __writecr8(v59);
    return;
  }
  v64 = Irp;
  ApcEnvironment = Irp->ApcEnvironment;
  Irp->Tail.Apc.Type = 18;
  v64->Tail.Apc.Size = 88;
  if ( ApcEnvironment == 2 )
    ApcEnvironment = Thread->ApcStateIndex;
  v64->Tail.Apc.ApcStateIndex = ApcEnvironment;
  v64->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
  v64->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
  v64->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
  v64->Tail.Overlay.ListEntry.Flink = 0LL;
  *(_WORD *)((char *)&v64->Tail.CompletionKey + 81) = 0;
  v64->Tail.Overlay.ListEntry.Blink = 0LL;
  v66 = Irp;
  v136 = (struct _FILE_OBJECT *)AuxiliaryBuffer;
  v137 = BugCheckParameter2;
  v68 = 0;
  if ( EtwThreatIntProvRegHandle )
  {
    if ( (v67 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v67 + 96))
      && (*(_DWORD *)(v67 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v67 + 120) & 0x3000LL) == *(_QWORD *)(v67 + 120)
      || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL) )
    {
      v68 = 1;
    }
  }
  ApcMode = v66->Tail.Apc.ApcMode;
  Blink = v66->Tail.Overlay.ListEntry.Blink;
  v70 = v66->Tail.Overlay.ListEntry.Flink;
  v145 = ApcMode != 0;
  v141 = v70;
  v71 = (__int64 (__fastcall *)(int, int, int, int, __int64))v66->Tail.Overlay.Thread == KeSpecialUserApcKernelRoutine
     && !ApcMode;
  v72 = v66->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
  CurrentThread = KeGetCurrentThread();
  v74 = (_KPROCESS *)v72[34].Flink;
  if ( ApcMode )
    v75 = CurrentThread->Process == v74;
  else
    v75 = CurrentThread->ApcState.Process == v74;
  if ( v68 && !v75 && (ApcMode || v71) )
  {
    v76 = 1;
    ObfReferenceObjectWithTag(v66->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink, 0x5149654Bu);
  }
  else
  {
    v76 = 0;
  }
  v77 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v77 <= 0xFu )
  {
    v78 = KeGetCurrentPrcb()->SchedulerAssist;
    v78[5] |= (-1 << (v77 + 1)) & 4;
  }
  v79 = KeGetCurrentPrcb();
  v146 = 0;
  while ( 1 )
  {
    v80 = v79->SchedulerAssist;
    if ( v80 )
    {
      if ( v79->NestingLevel <= 1u )
      {
        v81 = v80[6];
        v80[6] = v81 + 1;
        if ( v81 == -1 )
          KiRemoveSystemWorkPriorityKick(v79);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&v72[4], 0LL) )
      break;
    v82 = v79->SchedulerAssist;
    if ( v82 )
    {
      if ( v79->NestingLevel <= 1u )
      {
        v83 = v82[6] - 1;
        v82[6] = v83;
        if ( !v83 )
          KiRemoveSystemWorkPriorityKick(v79);
      }
    }
    do
      KeYieldProcessorEx(&v146);
    while ( v72[4].Flink );
  }
  if ( (HIDWORD(v72[7].Flink) & 0x4000) != 0 && !v66->Tail.Apc.Inserted )
  {
    v75 = v66->Tail.Apc.ApcStateIndex == 0;
    v84 = v66->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v66->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)v137;
    v66->Tail.Overlay.OriginalFileObject = v136;
    v66->Tail.Apc.Inserted = 1;
    if ( v75 && BYTE2(v84[36].Blink) )
    {
      v85 = 600LL;
    }
    else
    {
      v66->Tail.Apc.ApcStateIndex = BYTE2(v84[36].Blink);
      v85 = 152LL;
    }
    v86 = (char *)v84 + v85;
    v87 = v66->Tail.Apc.ApcMode;
    if ( v66->Tail.Overlay.ListEntry.Flink )
    {
      if ( !(_BYTE)v87 )
        goto LABEL_204;
      v88 = (void (__fastcall __noreturn *)())v66->Tail.Overlay.Thread;
      if ( v88 == KiSchedulerApcTerminate )
      {
        BYTE2(v84[12].Flink) |= 2u;
        v89 = &v66->Tail.Overlay.DriverContext[2];
        v90 = &v86[16 * v87];
        v91 = *(_QWORD **)v90;
        if ( *(char **)(*(_QWORD *)v90 + 8LL) != v90 )
          goto LABEL_294;
        *v89 = v91;
        v66->Tail.Overlay.DriverContext[3] = v90;
        v91[1] = v89;
        *(_QWORD *)v90 = v89;
        goto LABEL_211;
      }
      if ( (char *)v88 != (char *)KeSpecialUserApcKernelRoutine )
      {
LABEL_204:
        v94 = &v66->Tail.Overlay.DriverContext[2];
        v95 = (PVOID *)&v86[16 * v87];
        v96 = (PVOID **)v95[1];
        if ( *v96 != v95 )
          goto LABEL_294;
        *v94 = v95;
        v66->Tail.Overlay.DriverContext[3] = v96;
        *v96 = v94;
        v95[1] = v94;
        goto LABEL_211;
      }
      v92 = (PVOID ***)&v86[16 * v87];
      for ( j = *v92; j != (PVOID **)v92; j = (PVOID **)*j )
        ;
      BYTE2(v84[12].Flink) |= 1u;
    }
    else
    {
      v97 = (PVOID **)&v86[16 * v87];
      for ( j = (PVOID **)v97[1]; j != v97; j = (PVOID **)j[1] )
      {
        if ( !j[4] )
          break;
      }
    }
    v98 = *j;
    v99 = &v66->Tail.Overlay.DriverContext[2];
    if ( (*j)[1] != j )
      goto LABEL_294;
    *v99 = v98;
    v66->Tail.Overlay.DriverContext[3] = j;
    v98[1] = v99;
    *j = v99;
LABEL_211:
    v100 = (__int64)v66->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v101 = (unsigned __int8)v66->Tail.Apc.ApcMode;
    if ( v66->Tail.Apc.ApcStateIndex == *(unsigned __int8 *)(v100 + 586) )
    {
      if ( (_KTHREAD *)v100 == v79->CurrentThread )
      {
        if ( !(_BYTE)v101 )
        {
          v102 = HIWORD(*(_DWORD *)(v100 + 484));
          if ( !*(_DWORD *)(v100 + 484) || !v66->Tail.Overlay.ListEntry.Flink && !HIWORD(*(_DWORD *)(v100 + 484)) )
          {
            *(_BYTE *)(v100 + 193) = 1;
            if ( v77 )
            {
              LOBYTE(v102) = 1;
              HalRequestSoftwareInterrupt(v102);
            }
            else
            {
              *(_DWORD *)(v100 + 116) |= 0x40u;
            }
            v103 = 1;
            goto LABEL_277;
          }
        }
        goto LABEL_275;
      }
      if ( (_BYTE)v101 )
      {
        if ( *(_BYTE *)(v100 + 388) == 5 && *(_BYTE *)(v100 + 391) == 1 )
        {
          v122 = *(_BYTE *)(v100 + 112);
          if ( (unsigned __int8)((v122 & 7) - 3) > 1u
            && ((*(_DWORD *)(v100 + 116) & 0x10) != 0 || (*(_BYTE *)(v100 + 194) & 2) != 0) )
          {
            *(_BYTE *)(v100 + 112) = v122 | 0x40;
            if ( (unsigned __int8)KiSignalThread((__int64)v79, v100, 192LL, 0LL) )
              *(_BYTE *)(v100 + 194) |= 2u;
          }
        }
      }
      else
      {
        *(_BYTE *)(v100 + 193) = 1;
        _InterlockedOr(v132, 0);
        v104 = *(_BYTE *)(v100 + 388);
        if ( v104 == 2 )
        {
          v121 = *(unsigned int *)(v100 + 536);
          LODWORD(v121) = v121 & 0x7FFFFFFF;
          if ( KeGetPcr()->Prcb.Number == (_DWORD)v121 )
          {
            LOBYTE(v121) = 1;
            HalRequestSoftwareInterrupt(v121);
          }
          else
          {
            LOBYTE(v101) = 1;
            KiSendSoftwareInterrupt(v121, v101);
          }
          v103 = 1;
          goto LABEL_277;
        }
        if ( v104 == 5
          && !*(_BYTE *)(v100 + 390)
          && !*(_WORD *)(v100 + 486)
          && (!v66->Tail.Overlay.ListEntry.Flink || !*(_WORD *)(v100 + 484) && !*(_BYTE *)(v100 + 192)) )
        {
          v105 = *(_BYTE *)(v100 + 112);
          v106 = v105 & 7;
          if ( v106 != 1 && v106 != 4 )
          {
LABEL_263:
            *(_BYTE *)(v100 + 112) = v105 | 0x20;
            v103 = 1;
            goto LABEL_277;
          }
          v107 = *(_QWORD *)(v100 + 232);
          if ( v107 )
          {
            if ( (*(_BYTE *)v107 & 0x7F) == 0x15 )
            {
              *(_DWORD *)(v100 + 540) = (unsigned __int8)*(_DWORD *)(v100 + 540);
              _InterlockedIncrement((volatile signed __int32 *)(v107 + 4LL * *(unsigned int *)(v100 + 540) + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v107 + 40));
            }
          }
          v108 = *(_QWORD *)(v100 + 712);
          if ( !v108 )
          {
LABEL_256:
            v119 = *(_BYTE *)(v100 + 388);
            if ( v119 == 1 )
            {
              *(_DWORD *)(v100 + 116) |= 2u;
            }
            else if ( v119 == 5 )
            {
              v120 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v100 + 436));
              if ( *(_BYTE *)(v100 + 391) )
                *(_QWORD *)(v100 + 1000) += v120;
              else
                *(_QWORD *)(v100 + 992) += v120;
            }
            *(_BYTE *)(v100 + 388) = 7;
            *(_QWORD *)(v100 + 216) = v79->DeferredReadyListHead.Next;
            v79->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v100 + 216);
            *(_QWORD *)(v100 + 200) = 256LL;
            *(_QWORD *)(v100 + 976) = 0LL;
            v105 = *(_BYTE *)(v100 + 112);
            goto LABEL_263;
          }
          v109 = KeGetCurrentPrcb();
          v135 = 0;
          while ( 1 )
          {
            v110 = v109->SchedulerAssist;
            if ( v110 )
            {
              if ( v109->NestingLevel <= 1u )
              {
                v111 = v110[6];
                v110[6] = v111 + 1;
                if ( v111 == -1 )
                  KiRemoveSystemWorkPriorityKick(v109);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v108 + 31760), 0LL) )
              break;
            v112 = v109->SchedulerAssist;
            if ( v112 )
            {
              if ( v109->NestingLevel <= 1u )
              {
                v113 = v112[6] - 1;
                v112[6] = v113;
                if ( !v113 )
                  KiRemoveSystemWorkPriorityKick(v109);
              }
            }
            do
              KeYieldProcessorEx(&v135);
            while ( *(_QWORD *)(v108 + 31760) );
          }
          if ( !*(_QWORD *)(v100 + 712) )
          {
LABEL_252:
            _InterlockedAnd64((volatile signed __int64 *)(v108 + 31760), 0LL);
            v116 = KeGetCurrentPrcb();
            v117 = v116->SchedulerAssist;
            if ( v117 )
            {
              if ( v116->NestingLevel <= 1u )
              {
                v118 = v117[6] - 1;
                v117[6] = v118;
                if ( !v118 )
                  KiRemoveSystemWorkPriorityKick(v116);
              }
            }
            goto LABEL_256;
          }
          v114 = *(_QWORD *)(v100 + 216);
          v115 = *(_QWORD **)(v100 + 224);
          if ( *(_QWORD *)(v114 + 8) == v100 + 216 && *v115 == v100 + 216 )
          {
            *v115 = v114;
            *(_QWORD *)(v114 + 8) = v115;
            *(_QWORD *)(v100 + 712) = 0LL;
            goto LABEL_252;
          }
LABEL_294:
          __fastfail(3u);
        }
      }
    }
LABEL_275:
    v103 = 1;
    goto LABEL_277;
  }
  v103 = 0;
LABEL_277:
  v72[4].Flink = 0LL;
  v123 = KeGetCurrentPrcb();
  v124 = v123->SchedulerAssist;
  if ( v124 )
  {
    if ( v123->NestingLevel <= 1u )
    {
      v125 = v124[6] - 1;
      v124[6] = v125;
      if ( !v125 )
        KiRemoveSystemWorkPriorityKick(v123);
    }
  }
  KiExitDispatcher((__int64)v79, 0LL, 1u, v144, v77);
  if ( v76 )
  {
    if ( v103 )
      EtwTiLogInsertQueueUserApc(
        (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10],
        (_DWORD)v72,
        (_DWORD)v141,
        (_DWORD)Blink,
        v137,
        (char)v136,
        v145);
    ObfDereferenceObjectWithTag(v72, 0x5149654Bu);
  }
}
