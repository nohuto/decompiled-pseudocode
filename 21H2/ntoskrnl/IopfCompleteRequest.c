/*
 * XREFs of IopfCompleteRequest @ 0x1402E7D10
 * Callers:
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x140508014 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x1409C5FA0 (IovCompleteRequest.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140230FA4 (IopVerifyDeviceObjectOnStack.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140243FC0 (EtwTiLogInsertQueueUserApc.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     EtwpLevelKeywordEnabled @ 0x1402C5480 (EtwpLevelKeywordEnabled.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14035E4B0 (IopDequeueIrpFromThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     PoDeviceAcquireIrp @ 0x14037C3B4 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14037CAE4 (PoDeviceReleaseIrp.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0EDC (IopDoesCompletionNeedsApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140516BD8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x1409C61D0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v2; // r9
  PIRP v3; // rsi
  CHAR StackCount; // cl
  unsigned __int8 v5; // r14
  __int64 AuxiliaryBuffer; // r13
  char CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v9; // r12
  int Flink; // r15d
  PIRP v11; // rdi
  UCHAR *p_Control; // rbx
  PIRP v13; // rcx
  struct _LIST_ENTRY *Status; // rax
  UCHAR v15; // al
  unsigned __int8 v16; // r14
  PIRP v17; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  __int64 v22; // r15
  unsigned __int64 Information; // rax
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rbx
  __int64 v26; // rbx
  PVPB v27; // rbx
  _QWORD *FileObjectExtension; // rax
  __int64 *v29; // rsi
  __int64 v30; // rsi
  char v31; // al
  __int64 i; // rax
  int v33; // eax
  PCHAR v34; // rcx
  __int64 (__fastcall *v35)(); // rax
  PIRP v36; // r12
  ULONG Flags; // ebx
  int v38; // ebx
  struct _MDL *v39; // rbx
  ULONG v40; // eax
  unsigned __int64 v41; // rcx
  __int64 v42; // rbx
  struct _KTHREAD *Thread; // r14
  __int64 *v44; // rax
  __int64 v45; // rsi
  unsigned __int8 v46; // r10
  _DWORD *v47; // r9
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  int v50; // eax
  _QWORD *v51; // rdx
  char v52; // di
  int v53; // r13d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r14
  _QWORD *v55; // rdi
  struct _LIST_ENTRY *v56; // rcx
  _DWORD *v57; // r9
  struct _KPRCB *v58; // r15
  _KTHREAD *v59; // rbx
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v61; // r15
  _QWORD *v62; // r14
  _QWORD *v63; // rax
  char v64; // r13
  struct _KPRCB *v65; // rbx
  __int64 v66; // rdi
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  int v73; // eax
  int v74; // edx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 **v75; // rcx
  __int64 v76; // rax
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  int v79; // eax
  unsigned __int64 v80; // rbx
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  _DWORD *v83; // r8
  int v84; // eax
  ULONG_PTR v85; // rdx
  IRP *v86; // rcx
  volatile signed __int32 *v87; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v91; // rcx
  int v92; // eax
  _DWORD *v93; // rcx
  int v94; // eax
  struct _KPRCB *v95; // rcx
  _DWORD *v96; // rdx
  int v97; // eax
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  unsigned __int8 v102; // bl
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r9
  _DWORD *v105; // r8
  int v106; // eax
  PIRP v107; // rax
  CCHAR ApcEnvironment; // cl
  int v109; // r10d
  PIRP v110; // rdi
  __int64 v111; // rcx
  bool v112; // cl
  KPROCESSOR_MODE ApcMode; // dl
  struct _LIST_ENTRY *Blink; // rsi
  __int64 v115; // rax
  bool v116; // r8
  __int64 v117; // r14
  struct _KTHREAD *CurrentThread; // r9
  _KPROCESS *v119; // rax
  bool v120; // zf
  char v121; // r13
  char v122; // r12
  _DWORD *v123; // r8
  struct _KPRCB *v124; // r15
  _DWORD *v125; // rcx
  int v126; // eax
  __int64 v127; // rdx
  struct _LIST_ENTRY *v128; // rdx
  __int64 v129; // rax
  char *v130; // r8
  __int64 v131; // rax
  void (__fastcall __noreturn *v132)(); // rcx
  PVOID *v133; // rcx
  char *v134; // rdx
  _QWORD *v135; // rax
  PVOID ***v136; // rcx
  PVOID **j; // rax
  PVOID *v138; // rcx
  PVOID *v139; // rdx
  PVOID **v140; // rax
  PVOID **v141; // rcx
  PVOID *v142; // rdx
  PVOID *v143; // rcx
  _KTHREAD *v144; // rbx
  KPROCESSOR_MODE v145; // dl
  char v146; // bl
  volatile unsigned __int8 State; // al
  _KWAIT_STATUS_REGISTER v148; // al
  int v149; // ecx
  _DISPATCHER_HEADER *volatile Queue; // rcx
  PVOID SystemArgument1; // rdi
  struct _KPRCB *v152; // rsi
  _DWORD *v153; // rcx
  int v154; // eax
  __int64 v155; // rdx
  struct _LIST_ENTRY *v156; // rdx
  struct _LIST_ENTRY *v157; // rcx
  struct _KPRCB *v158; // rcx
  _DWORD *v159; // rdx
  int v160; // eax
  volatile unsigned __int8 v161; // al
  __int64 v162; // rcx
  _KWAIT_STATUS_REGISTER v163; // cl
  struct _KPRCB *v164; // rcx
  _DWORD *v165; // rdx
  int v166; // eax
  KIRQL v167; // al
  __int64 v168; // rcx
  KIRQL v169; // di
  struct _DMA_ADAPTER *v170; // r10
  __int64 *v171; // rdx
  __int64 **v172; // r8
  signed __int32 v173[6]; // [rsp+8h] [rbp-99h] BYREF
  __int64 v174; // [rsp+38h] [rbp-69h]
  struct _LIST_ENTRY *v175; // [rsp+48h] [rbp-59h]
  struct _FILE_OBJECT *v176; // [rsp+50h] [rbp-51h] BYREF
  __int128 v177; // [rsp+58h] [rbp-49h] BYREF
  __int64 v178; // [rsp+68h] [rbp-39h]
  struct _IO_STACK_LOCATION *v179; // [rsp+70h] [rbp-31h] BYREF
  int v180; // [rsp+78h] [rbp-29h] BYREF
  int v181; // [rsp+7Ch] [rbp-25h] BYREF
  int v182; // [rsp+80h] [rbp-21h] BYREF
  __int64 v183; // [rsp+88h] [rbp-19h] BYREF
  int v184; // [rsp+90h] [rbp-11h]
  __int64 v185; // [rsp+98h] [rbp-9h] BYREF
  __int64 v186; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v187; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v188; // [rsp+B0h] [rbp+Fh]
  void *retaddr; // [rsp+100h] [rbp+5Fh]
  PIRP Irp; // [rsp+108h] [rbp+67h] BYREF
  int v191; // [rsp+110h] [rbp+6Fh]
  struct _KPRCB *v192; // [rsp+118h] [rbp+77h]
  int v193; // [rsp+120h] [rbp+7Fh] BYREF

  LOBYTE(v191) = a2;
  Irp = BugCheckParameter1;
  v2 = 0LL;
  v3 = BugCheckParameter1;
  StackCount = BugCheckParameter1->StackCount;
  v5 = a2;
  AuxiliaryBuffer = 0LL;
  v176 = 0LL;
  CurrentLocation = v3->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v3->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v3, 0x1269uLL, 0LL, 0LL);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v9 = 1;
    PoDeviceReleaseIrp(v3, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
    v3 = Irp;
    v2 = 0LL;
  }
  else
  {
    v9 = 0;
  }
  if ( (v3[1].Size & 0x200) != 0 )
    Flink = (int)v3[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v3->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v11 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v11->PendingReturned = *p_Control & 1;
      v13 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v3[1].Size) |= 2u;
        v3[1].ThreadListEntry.Flink = Status;
        v13 = Irp;
      }
      if ( v13->IoStatus.Status < 0 )
      {
        v15 = *p_Control;
        if ( (*p_Control & 0x80u) != 0 )
          goto LABEL_21;
      }
      else
      {
        v15 = *p_Control;
        if ( (*p_Control & 0x40) != 0 )
          goto LABEL_21;
      }
      if ( v13->Cancel )
      {
        v15 = *p_Control;
        if ( (*p_Control & 0x20) != 0 )
        {
LABEL_21:
          v16 = *(p_Control - 2);
          *p_Control = v15 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v17 = Irp;
          if ( Irp->CurrentLocation == Irp->StackCount + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v9 )
          {
            PoDeviceAcquireIrp(Irp, v16, DeviceObject, 0LL);
            v17 = Irp;
          }
          if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD, __int64))(p_Control + 53))(
                 DeviceObject,
                 v17,
                 *(_QWORD *)(p_Control + 61),
                 v2) == -1073741802 )
            return;
          if ( v9 )
            PoDeviceReleaseIrp(Irp, v16, DeviceObject);
          v2 = 0LL;
          goto LABEL_30;
        }
      }
      if ( v13->PendingReturned && v13->CurrentLocation <= v13->StackCount )
        v13->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_30:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v11 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v5 = v191;
        break;
      }
    }
  }
  if ( (v11->Flags & 8) != 0 )
  {
    MdlAddress = v11->MdlAddress;
    MasterIrp = v11->AssociatedIrp.MasterIrp;
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
    IoFreeIrp(v11);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v5);
    return;
  }
  v22 = 4194817LL;
  if ( v11->IoStatus.Status == 260 )
  {
    Information = v11->IoStatus.Information;
    if ( Information > 2 )
    {
      if ( Information - 2684354563u <= 0x16 && _bittest64(&v22, Information - 2684354563u) )
      {
        AuxiliaryBuffer = (__int64)v11->Tail.Overlay.AuxiliaryBuffer;
        v176 = (struct _FILE_OBJECT *)AuxiliaryBuffer;
        v11->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v11->IoStatus.Status = -1073741191;
      }
      v11 = Irp;
    }
  }
  if ( !v5 )
  {
    OriginalFileObject = v11->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v11->Flags & 0x400) == 0 )
      {
        Vpb = OriginalFileObject->Vpb;
        if ( (!Vpb || (v26 = (__int64)Vpb->DeviceObject) == 0)
          && ((OriginalFileObject->Flags & 0x800) != 0
           || (v27 = OriginalFileObject->DeviceObject->Vpb) == 0LL
           || (v26 = (__int64)v27->DeviceObject) == 0) )
        {
          v26 = (__int64)OriginalFileObject->DeviceObject;
        }
        if ( *(_QWORD *)(v26 + 24) )
        {
          FileObjectExtension = OriginalFileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            if ( FileObjectExtension != IopRevocationExtension )
            {
              v29 = (__int64 *)FileObjectExtension[2];
              if ( v29 )
              {
                v30 = *v29;
                if ( v30 )
                {
                  v31 = IopVerifyDeviceObjectOnStack(v26, v30, 0);
                  v11 = Irp;
                  if ( v31 )
                  {
LABEL_66:
                    v33 = *(_DWORD *)(v30 + 72);
                    if ( v33 == 8 || v33 == 20 )
                    {
                      v5 = 1;
                      LOBYTE(v191) = 1;
                    }
                    else
                    {
                      v5 = v191;
                    }
                    goto LABEL_70;
                  }
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v26 + 24); i; i = *(_QWORD *)(i + 24) )
            v26 = i;
        }
        v30 = v26;
        goto LABEL_66;
      }
    }
  }
LABEL_70:
  v34 = v11->Tail.Overlay.AuxiliaryBuffer;
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v11 = Irp;
  }
  v35 = IopFreeIrpExtension((__int64)v11, -1, 1);
  if ( v35
    && ((unsigned __int8 (__fastcall *)(PIRP *, PFILE_OBJECT, _QWORD))v35)(
         &Irp,
         Irp->Tail.Overlay.OriginalFileObject,
         v5) )
  {
    return;
  }
  v36 = Irp;
  Flags = Irp->Flags;
  if ( (Flags & 0x402) != 0 )
  {
    if ( (Flags & 0x440) != 0 )
    {
      *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
      v38 = Flags & 0x42;
      if ( v38 )
        IopDequeueIrpFromThread(Irp);
      KeSetEvent(Irp->UserEvent, v5, 0);
      if ( v38 )
      {
        if ( IopDispatchFreeIrp )
          IovFreeIrpPrivate((ULONG_PTR)Irp);
        else
          IopFreeIrp((ULONG_PTR)Irp);
      }
    }
    else
    {
      IopDequeueIrpFromThread(Irp);
      KeInitializeApc(
        (__int64)&Irp->Tail,
        (__int64)Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc((__int64)&Irp->Tail, 0LL, 0LL, v5);
    }
    return;
  }
  v39 = Irp->MdlAddress;
  if ( v39 )
  {
    do
    {
      MmUnlockPages(v39);
      v39 = v39->Next;
    }
    while ( v39 );
    v36 = Irp;
  }
  if ( (v36->Flags & 0x2000) != 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v36->Tail.Overlay.Thread);
    v36 = Irp;
  }
  v40 = v36->Flags;
  if ( (v40 & 0x800) != 0 && !v36->PendingReturned )
  {
    if ( v36->IoStatus.Status == 260 )
    {
      v41 = v36->IoStatus.Information - 2684354563u;
      if ( v41 <= 0x16 )
      {
        if ( _bittest64(&v22, v41) )
          v36->Tail.Overlay.AuxiliaryBuffer = (PCHAR)AuxiliaryBuffer;
      }
    }
    return;
  }
  v42 = (__int64)v36->Tail.Overlay.OriginalFileObject;
  Thread = v36->Tail.Overlay.Thread;
  v179 = (struct _IO_STACK_LOCATION *)v42;
  if ( (v40 & 0x2000) == 0
    || (v185 = 0LL, v183 = 0LL, !v36->PendingReturned)
    && ((v36->IoStatus.Status & 0xC0000000) == 0xC0000000
     || (*(_DWORD *)(v42 + 80) & 0x2000000) != 0 && v36->IoStatus.Status >= 0) )
  {
LABEL_184:
    if ( Thread )
    {
      v87 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[24];
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
        v91 = CurrentPrcb->SchedulerAssist;
        if ( v91 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v92 = v91[6];
            v91[6] = v92 + 1;
            if ( v92 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v87, 0LL) )
        {
          v93 = CurrentPrcb->SchedulerAssist;
          if ( v93 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v94 = v93[6] - 1;
              v93[6] = v94;
              if ( !v94 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(&Thread[1].WaitBlockFill11[24]);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v87, 0LL);
      v95 = KeGetCurrentPrcb();
      v96 = v95->SchedulerAssist;
      if ( v96 )
      {
        if ( v95->NestingLevel <= 1u )
        {
          v97 = v96[6] - 1;
          v96[6] = v97;
          if ( !v97 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v98 = KeGetCurrentIrql();
          if ( v98 <= 0xFu && CurrentIrql <= 0xFu && v98 >= 2u )
          {
            v99 = KeGetCurrentPrcb();
            v100 = v99->SchedulerAssist;
            v101 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v120 = (v101 & v100[5]) == 0;
            v100[5] &= v101;
            if ( v120 )
              KiRemoveSystemWorkPriorityKick(v99);
          }
        }
      }
      __writecr8(CurrentIrql);
      v36 = Irp;
      v42 = (__int64)v179;
      AuxiliaryBuffer = (__int64)v176;
    }
    if ( v36->Cancel )
    {
      v167 = KeAcquireQueuedSpinLock(0xBuLL);
      v168 = IopDeadIrps;
      v169 = v167;
      v170 = (struct _DMA_ADAPTER *)Irp->Tail.Overlay.Thread;
      if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
      {
LABEL_361:
        if ( v170 )
        {
          KeInitializeApc(
            (__int64)&Irp->Tail,
            (__int64)v170,
            Irp->ApcEnvironment,
            (__int64)IopCompleteRequest,
            (__int64)IopAbortRequest,
            0LL,
            0,
            0LL);
          KeInsertQueueApc((__int64)&Irp->Tail, v42, AuxiliaryBuffer, (unsigned __int8)v191);
          KeReleaseQueuedSpinLock(0xBuLL, v169);
          return;
        }
      }
      else
      {
        while ( 1 )
        {
          v171 = *(__int64 **)v168;
          if ( (PIRP)(v168 - 32) == Irp )
            break;
          v168 = *(_QWORD *)v168;
          if ( v171 == &IopDeadIrps )
            goto LABEL_361;
        }
        v172 = *(__int64 ***)(v168 + 8);
        if ( v171[1] != v168 || *v172 != (__int64 *)v168 )
          goto LABEL_367;
        *v172 = v171;
        v171[1] = (__int64)v172;
        *(_QWORD *)(v168 + 8) = v168;
        *(_QWORD *)v168 = v168;
        HalPutDmaAdapter(v170);
      }
      KeReleaseQueuedSpinLock(0xBuLL, v169);
      v86 = Irp;
      v85 = v42;
      goto LABEL_180;
    }
    if ( Thread == KeGetCurrentThread()
      && !KeGetCurrentThread()->SpecialApcDisable
      && (unsigned __int8)KeAreInterruptsEnabled()
      && !KeGetCurrentIrql()
      && KeGetCurrentThread()->ApcStateIndex != 1 )
    {
      v186 = 1LL;
      v187 = 0LL;
      v102 = KeGetCurrentIrql();
      __writecr8(1uLL);
      IopCompleteRequest(
        (_DWORD)Irp + 120,
        (unsigned int)&v187,
        (unsigned int)&v186,
        (unsigned int)&v179,
        (__int64)&v176);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v103 = KeGetCurrentIrql();
          if ( v103 <= 0xFu && v102 <= 0xFu && v103 >= 2u )
          {
            v104 = KeGetCurrentPrcb();
            v105 = v104->SchedulerAssist;
            v106 = ~(unsigned __int16)(-1LL << (v102 + 1));
            v120 = (v106 & v105[5]) == 0;
            v105[5] &= v106;
            if ( v120 )
              KiRemoveSystemWorkPriorityKick(v104);
          }
        }
      }
      __writecr8(v102);
      return;
    }
    v107 = Irp;
    ApcEnvironment = Irp->ApcEnvironment;
    Irp->Tail.Apc.Type = 18;
    v107->Tail.Apc.Size = 88;
    if ( ApcEnvironment == 2 )
      ApcEnvironment = Thread->ApcStateIndex;
    v107->Tail.Apc.ApcStateIndex = ApcEnvironment;
    v109 = 0;
    v107->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
    v107->Tail.Overlay.ListEntry.Flink = 0LL;
    v107->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
    *(_WORD *)((char *)&v107->Tail.CompletionKey + 81) = 0;
    v107->Tail.Overlay.ListEntry.Blink = 0LL;
    v107->Tail.Apc.SpareByte0 = 0;
    v107->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
    v110 = Irp;
    v112 = 0;
    if ( EtwThreatIntProvRegHandle )
    {
      if ( (v111 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v111 + 96))
        && (*(_DWORD *)(v111 + 112) & 0x3000LL) != 0
        && (*(_QWORD *)(v111 + 120) & 0x3000LL) == *(_QWORD *)(v111 + 120)
        || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
        && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL) )
      {
        v112 = 1;
      }
    }
    ApcMode = v110->Tail.Apc.ApcMode;
    Blink = v110->Tail.Overlay.ListEntry.Blink;
    v115 = (__int64)v110->Tail.Overlay.ListEntry.Flink;
    LOBYTE(v192) = ApcMode != 0;
    v175 = Blink;
    v188 = v115;
    v116 = (__int64 (__fastcall *)(int, int, int, int, __int64))v110->Tail.Overlay.Thread == KeSpecialUserApcKernelRoutine
        && !ApcMode;
    v117 = (__int64)v110->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    CurrentThread = KeGetCurrentThread();
    v119 = *(_KPROCESS **)(v117 + 544);
    if ( ApcMode )
      v120 = CurrentThread->Process == v119;
    else
      v120 = CurrentThread->ApcState.Process == v119;
    if ( v112 && !v120 && (ApcMode || v116) )
    {
      v121 = 1;
      ObfReferenceObjectWithTag(v110->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink, 0x5149654Bu);
      v109 = 0;
    }
    else
    {
      v121 = 0;
    }
    v122 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v122 <= 0xFu )
    {
      v123 = KeGetCurrentPrcb()->SchedulerAssist;
      v123[5] |= (-1 << (v122 + 1)) & 4;
    }
    v124 = KeGetCurrentPrcb();
    v181 = v109;
    v125 = v124->SchedulerAssist;
    if ( v125 )
    {
      if ( v124->NestingLevel <= 1u )
      {
        v126 = v125[6];
        v125[6] = v126 + 1;
        if ( v126 == -1 )
          KiRemoveSystemWorkPriorityKick(v124);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v117 + 64), 0LL) )
    {
      KiSetVpThreadSpinLockCount(v124, 0LL);
      do
        KeYieldProcessorEx(&v181);
      while ( *(_QWORD *)(v117 + 64) );
      LOBYTE(v127) = 1;
      KiSetVpThreadSpinLockCount(v124, v127);
    }
    if ( (*(_DWORD *)(v117 + 116) & 0x4000) == 0 || v110->Tail.Apc.Inserted )
    {
      v146 = 0;
      goto LABEL_350;
    }
    v120 = v110->Tail.Apc.ApcStateIndex == 0;
    v128 = v110->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
    v110->Tail.Overlay.CurrentStackLocation = v179;
    v110->Tail.Overlay.OriginalFileObject = v176;
    v110->Tail.Apc.Inserted = 1;
    if ( v120 && BYTE2(v128[36].Blink) )
    {
      v129 = 600LL;
    }
    else
    {
      v110->Tail.Apc.ApcStateIndex = BYTE2(v128[36].Blink);
      v129 = 152LL;
    }
    v130 = (char *)v128 + v129;
    v131 = v110->Tail.Apc.ApcMode;
    if ( v110->Tail.Overlay.ListEntry.Flink )
    {
      if ( !(_BYTE)v131 )
        goto LABEL_280;
      v132 = (void (__fastcall __noreturn *)())v110->Tail.Overlay.Thread;
      if ( v132 == KiSchedulerApcTerminate )
      {
        BYTE2(v128[12].Flink) |= 2u;
        v133 = &v110->Tail.Overlay.DriverContext[2];
        v134 = &v130[16 * v131];
        v135 = *(_QWORD **)v134;
        if ( *(char **)(*(_QWORD *)v134 + 8LL) != v134 )
          goto LABEL_367;
        *v133 = v135;
        v110->Tail.Overlay.DriverContext[3] = v134;
        v135[1] = v133;
        *(_QWORD *)v134 = v133;
        goto LABEL_287;
      }
      if ( (char *)v132 != (char *)KeSpecialUserApcKernelRoutine )
      {
LABEL_280:
        v138 = &v110->Tail.Overlay.DriverContext[2];
        v139 = (PVOID *)&v130[16 * v131];
        v140 = (PVOID **)v139[1];
        if ( *v140 != v139 )
          goto LABEL_367;
        *v138 = v139;
        v110->Tail.Overlay.DriverContext[3] = v140;
        *v140 = v138;
        v139[1] = v138;
        goto LABEL_287;
      }
      v136 = (PVOID ***)&v130[16 * v131];
      for ( j = *v136; j != (PVOID **)v136; j = (PVOID **)*j )
        ;
      BYTE2(v128[12].Flink) |= 1u;
    }
    else
    {
      v141 = (PVOID **)&v130[16 * v131];
      for ( j = (PVOID **)v141[1]; j != v141; j = (PVOID **)j[1] )
      {
        if ( !j[4] )
          break;
      }
    }
    v142 = *j;
    v143 = &v110->Tail.Overlay.DriverContext[2];
    if ( (*j)[1] != j )
      goto LABEL_367;
    *v143 = v142;
    v110->Tail.Overlay.DriverContext[3] = j;
    v142[1] = v143;
    *j = v143;
LABEL_287:
    v144 = v110->Tail.Apc.Thread;
    v145 = v110->Tail.Apc.ApcMode;
    if ( v110->Tail.Apc.ApcStateIndex == v144->ApcStateIndex )
    {
      if ( v144 == v124->CurrentThread )
      {
        if ( !v145
          && (!v144->WaitBlock[3].SpareLong
           || !v110->Tail.Overlay.ListEntry.Flink && !HIWORD(v144->WaitBlock[3].SpareLong)) )
        {
          v144->ApcState.KernelApcPending = 1;
          if ( v122 )
            KiRequestSoftwareInterrupt(v124, 1);
          else
            v144->MiscFlags |= 0x40u;
          v146 = 1;
          goto LABEL_350;
        }
        goto LABEL_348;
      }
      if ( v145 )
      {
        if ( v144->WaitBlockFill6[68] == 5 && v144->WaitMode == 1 )
        {
          v163.Flags = (unsigned __int8)v144->WaitRegister;
          if ( (unsigned __int8)((v163.Flags & 7) - 3) > 1u
            && ((v144->MiscFlags & 0x10) != 0 || (v144->ApcState.UserApcPendingAll & 2) != 0) )
          {
            v144->WaitRegister.Flags = v163.Flags | 0x40;
            if ( (unsigned __int8)KiSignalThread(v124, v144, 192LL, 0LL) )
              v144->ApcState.UserApcPendingAll |= 2u;
          }
        }
      }
      else
      {
        v144->ApcState.KernelApcPending = 1;
        _InterlockedOr(v173, 0);
        State = v144->State;
        if ( State == 2 )
        {
          if ( KeGetPcr()->Prcb.Number == (v144->NextProcessor & 0x7FFFFFFF) )
            KiRequestSoftwareInterrupt(0LL, 1);
          else
            KiSendSoftwareInterrupt();
          v146 = 1;
          goto LABEL_350;
        }
        if ( State == 5
          && !v144->WaitIrql
          && !v144->SpecialApcDisable
          && (!v110->Tail.Overlay.ListEntry.Flink || !v144->KernelApcDisable && !v144->ApcState.InProgressFlags) )
        {
          v148.Flags = (unsigned __int8)v144->WaitRegister;
          v149 = v148.Flags & 7;
          if ( v149 == 1 || v149 == 4 )
          {
            Queue = v144->Queue;
            if ( Queue )
            {
              if ( (Queue->Type & 0x7F) == 0x15 )
              {
                v144->QueuePriority = (unsigned __int8)v144->QueuePriority;
                _InterlockedIncrement((volatile signed __int32 *)&Queue[22].WaitListHead + (unsigned int)v144->QueuePriority);
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)&Queue[1].WaitListHead.Blink);
              }
            }
            SystemArgument1 = v144->SchedulerApc.SystemArgument1;
            if ( SystemArgument1 )
            {
              v152 = KeGetCurrentPrcb();
              v182 = 0;
              v153 = v152->SchedulerAssist;
              if ( v153 )
              {
                if ( v152->NestingLevel <= 1u )
                {
                  v154 = v153[6];
                  v153[6] = v154 + 1;
                  if ( v154 == -1 )
                    KiRemoveSystemWorkPriorityKick(v152);
                }
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)SystemArgument1 + 7940, 0LL) )
              {
                KiSetVpThreadSpinLockCount(v152, 0LL);
                do
                  KeYieldProcessorEx(&v182);
                while ( *((_QWORD *)SystemArgument1 + 3970) );
                LOBYTE(v155) = 1;
                KiSetVpThreadSpinLockCount(v152, v155);
              }
              if ( v144->SchedulerApc.SystemArgument1 )
              {
                v156 = v144->WaitListEntry.Flink;
                v157 = v144->WaitListEntry.Blink;
                if ( ($9A9A2AE290A4DC9EBE272E572BB04D01 *)v156->Blink != &v144->216
                  || ($9A9A2AE290A4DC9EBE272E572BB04D01 *)v157->Flink != &v144->216 )
                {
                  goto LABEL_367;
                }
                v157->Flink = v156;
                v156->Blink = v157;
                v144->SchedulerApc.SystemArgument1 = 0LL;
              }
              _InterlockedAnd64((volatile signed __int64 *)SystemArgument1 + 3970, 0LL);
              v158 = KeGetCurrentPrcb();
              v159 = v158->SchedulerAssist;
              if ( v159 )
              {
                if ( v158->NestingLevel <= 1u )
                {
                  v160 = v159[6] - 1;
                  v159[6] = v160;
                  if ( !v160 )
                    KiRemoveSystemWorkPriorityKick(v158);
                }
              }
              Blink = v175;
            }
            v161 = v144->State;
            if ( v161 == 1 )
            {
              v144->MiscFlags |= 2u;
            }
            else if ( v161 == 5 )
            {
              v162 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v144->WaitBlock[2].SpareLong);
              if ( v144->WaitMode )
                v144->UserWaitTime += v162;
              else
                v144->KernelWaitTime += v162;
            }
            v144->WaitBlockFill6[68] = 7;
            v144->WaitListEntry.Flink = (struct _LIST_ENTRY *)v124->DeferredReadyListHead.Next;
            v124->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v144->216;
            v144->WaitStatus = 256LL;
            v144->AbWaitObject = 0LL;
            v148.Flags = (unsigned __int8)v144->WaitRegister;
          }
          v144->WaitRegister.Flags = v148.Flags | 0x20;
          v146 = 1;
LABEL_350:
          *(_QWORD *)(v117 + 64) = 0LL;
          v164 = KeGetCurrentPrcb();
          v165 = v164->SchedulerAssist;
          if ( v165 )
          {
            if ( v164->NestingLevel <= 1u )
            {
              v166 = v165[6] - 1;
              v165[6] = v166;
              if ( !v166 )
                KiRemoveSystemWorkPriorityKick(v164);
            }
          }
          KiExitDispatcher((_DWORD)v124, 0, 1, (unsigned __int8)v191, v122);
          if ( v121 )
          {
            if ( v146 )
            {
              LOBYTE(v174) = (_BYTE)v192;
              EtwTiLogInsertQueueUserApc(KeGetCurrentThread()->PreviousMode, v117, v188, Blink, v179, v176, v174);
            }
            ObfDereferenceObjectWithTag((PVOID)v117, 0x5149654Bu);
          }
          return;
        }
      }
    }
LABEL_348:
    v146 = 1;
    goto LABEL_350;
  }
  v44 = *(__int64 **)(v42 + 176);
  if ( !v44 )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v36) )
    {
      IopCompleteRequest((_DWORD)v36 + 120, (unsigned int)&v185, (unsigned int)&v183, (_DWORD)v36 + 192, (__int64)&v183);
      return;
    }
    goto LABEL_184;
  }
  v177 = 0LL;
  v178 = 0LL;
  v45 = *v44;
  v36->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v44[1];
  v36->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v177 = 0LL;
  *((_QWORD *)&v177 + 1) = v45 + 64;
  v46 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 <= 0xFu )
  {
    v47 = KeGetCurrentPrcb()->SchedulerAssist;
    v47[5] |= (-1 << (v46 + 1)) & 4;
  }
  LOBYTE(v178) = v46;
  v48 = KeGetCurrentPrcb();
  v49 = v48->SchedulerAssist;
  if ( v49 )
  {
    if ( v48->NestingLevel <= 1u )
    {
      v50 = v49[6];
      v49[6] = v50 + 1;
      if ( v50 == -1 )
        KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v177, v45 + 64);
  }
  else
  {
    v51 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v45 + 64), (__int64)&v177);
    if ( v51 )
      KxWaitForLockOwnerShip((__int64)&v177, v51);
  }
  v36->Flags |= 0x10000u;
  if ( *(_BYTE *)(v45 + 72) )
  {
    v52 = 1;
    goto LABEL_161;
  }
  v53 = (char)v191;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v36->Tail.Overlay.ListEntry;
  v191 = (char)v191;
  v55 = (_QWORD *)(v45 + 8);
  v56 = (struct _LIST_ENTRY *)KeGetCurrentIrql();
  v175 = v56;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v56 <= 0xFu )
  {
    v57 = KeGetCurrentPrcb()->SchedulerAssist;
    v57[5] |= (-1 << ((_BYTE)v56 + 1)) & 4;
  }
  v58 = KeGetCurrentPrcb();
  v192 = v58;
  v59 = v58->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(v58->CurrentThread);
    EtwTraceEnqueueWork(v59, &v36->Tail.CompletionKey + 6, IsThreadRunning);
  }
  if ( v53 )
  {
    if ( (*(_BYTE *)(v45 + 1) & 2) != 0 )
      v53 = 0;
    v191 = v53;
  }
  v193 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)v45, 7u) )
  {
    do
      KeYieldProcessorEx(&v193);
    while ( (*(_DWORD *)v45 & 0x80u) != 0 );
  }
  v184 = *(_DWORD *)(v45 + 4);
  if ( (_QWORD *)*v55 != v55
    && *(_DWORD *)(v45 + 40) < *(_DWORD *)(v45 + 44)
    && (v59->Queue != (_DISPATCHER_HEADER *volatile)v45 || v59->WaitReason != 15) )
  {
    v61 = (_QWORD *)*v55;
    do
    {
      v62 = v61;
      v61 = (_QWORD *)*v61;
      if ( *((_BYTE *)v62 + 16) != 3 )
        break;
      v63 = (_QWORD *)v62[1];
      if ( (_QWORD *)v61[1] != v62 || (_QWORD *)*v63 != v62 )
        goto LABEL_367;
      *v63 = v61;
      v64 = 0;
      v61[1] = v63;
      v65 = KeGetCurrentPrcb();
      v66 = v62[3];
      v180 = 0;
      while ( 1 )
      {
        v67 = v65->SchedulerAssist;
        if ( v67 )
        {
          if ( v65->NestingLevel <= 1u )
          {
            v68 = v67[6];
            v67[6] = v68 + 1;
            if ( v68 == -1 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v66 + 64), 0LL) )
          break;
        v69 = v65->SchedulerAssist;
        if ( v69 )
        {
          if ( v65->NestingLevel <= 1u )
          {
            v70 = v69[6] - 1;
            v69[6] = v70;
            if ( !v70 )
              KiRemoveSystemWorkPriorityKick(v65);
          }
        }
        do
          KeYieldProcessorEx(&v180);
        while ( *(_QWORD *)(v66 + 64) );
      }
      if ( *(_BYTE *)(v66 + 388) == 5 )
        v64 = KiSignalThread(v192, v66, &v36->Tail.CompletionKey + 6, v62);
      *(_QWORD *)(v66 + 64) = 0LL;
      v71 = KeGetCurrentPrcb();
      v72 = v71->SchedulerAssist;
      if ( v72 )
      {
        if ( v71->NestingLevel <= 1u )
        {
          v73 = v72[6] - 1;
          v72[6] = v73;
          if ( !v73 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
      ++*((_BYTE *)v62 + 17);
      if ( v64 )
        goto LABEL_160;
      v55 = (_QWORD *)(v45 + 8);
    }
    while ( v61 != (_QWORD *)(v45 + 8) );
    v58 = v192;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v36->Tail.Overlay.ListEntry;
  }
  v74 = *(_DWORD *)(v45 + 4);
  *(_DWORD *)(v45 + 4) = v74 + 1;
  v75 = *(struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 ***)(v45 + 32);
  if ( *v75 != (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)(v45 + 24) )
LABEL_367:
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v45 + 24);
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v75;
  *v75 = p_ListEntry;
  *(_QWORD *)(v45 + 32) = p_ListEntry;
  if ( !v74 && (_QWORD *)*v55 != v55 )
    KiWakeOtherQueueWaiters((__int64)v58, v45);
LABEL_160:
  _InterlockedAnd((volatile signed __int32 *)v45, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v192, 0, 1, v191, (char)v175);
  v52 = 0;
LABEL_161:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v177);
    v76 = v177;
    if ( !(_QWORD)v177 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v177 + 1),
                         0LL,
                         (signed __int64)&v177) == &v177 )
        goto LABEL_167;
      v76 = KxWaitForLockChainValid((__int64 *)&v177);
    }
    *(_QWORD *)&v177 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v76 + 8), 1uLL);
    goto LABEL_167;
  }
  KiReleaseQueuedSpinLockInstrumented(&v177, retaddr);
LABEL_167:
  v77 = KeGetCurrentPrcb();
  v78 = v77->SchedulerAssist;
  if ( v78 )
  {
    if ( v77->NestingLevel <= 1u )
    {
      v79 = v78[6] - 1;
      v78[6] = v79;
      if ( !v79 )
        KiRemoveSystemWorkPriorityKick(v77);
    }
  }
  v80 = (unsigned __int8)v178;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && (unsigned __int8)v178 <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = v82->SchedulerAssist;
        v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v178 + 1));
        v120 = (v84 & v83[5]) == 0;
        v83[5] &= v84;
        if ( v120 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  __writecr8(v80);
  if ( v52 )
  {
    v85 = (ULONG_PTR)v36->Tail.Overlay.OriginalFileObject;
    v86 = v36;
LABEL_180:
    IopDropIrp(v86, v85);
  }
}
