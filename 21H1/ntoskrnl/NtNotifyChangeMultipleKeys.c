/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1405F4060
 * Callers:
 *     NtNotifyChangeKey @ 0x1405F3C90 (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140355490 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1405EACA0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405EAEC0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405EBEF0 (CmpAcquireShutdownRundown.c)
 *     CmLockHive @ 0x1405F3CFC (CmLockHive.c)
 *     CmpNotifyChangeKey @ 0x1405F3D20 (CmpNotifyChangeKey.c)
 *     CmUnlockHive @ 0x1405F4018 (CmUnlockHive.c)
 *     CmpAllocatePostBlock @ 0x1405F515C (CmpAllocatePostBlock.c)
 *     CmpLockTwoKcbsShared @ 0x1405FA020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405FA0B0 (CmpUnlockTwoKcbs.c)
 *     LOCK_POST_LIST @ 0x14061828C (LOCK_POST_LIST.c)
 *     UNLOCK_POST_LIST @ 0x1406182A8 (UNLOCK_POST_LIST.c)
 *     CmObReferenceObjectByHandle @ 0x1406194CC (CmObReferenceObjectByHandle.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140626200 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406292D0 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     CmpFreePostBlock @ 0x1406CC480 (CmpFreePostBlock.c)
 */

NTSTATUS __cdecl NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _QWORD *v13; // r12
  unsigned int v14; // esi
  int v15; // r9d
  int v16; // r8d
  char PreviousMode; // cl
  NTSTATUS v18; // edi
  PADAPTER_OBJECT v19; // r14
  __int64 PostBlock; // rax
  __int64 v21; // rsi
  unsigned int v22; // edx
  PADAPTER_OBJECT v23; // rcx
  PADAPTER_OBJECT *v24; // rax
  _DMA_OPERATIONS **p_DmaOperations; // r15
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v27; // rcx
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  BOOLEAN v31; // r15
  unsigned __int64 v33; // rax
  bool v34; // r14
  struct _KTHREAD *CurrentThread; // rdx
  void *v36; // r8
  __int64 v37; // rdx
  unsigned __int64 AllocateAdapterChannel; // rcx
  _DMA_OPERATIONS *v39; // rax
  unsigned __int64 v40; // rdx
  __int16 v41; // ax
  ULONG_PTR v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  void *v45; // rcx
  __int64 v46; // rcx
  ULONG_PTR v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  OBJECT_ATTRIBUTES *CurrentIrql; // r11
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  unsigned __int8 v55; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v58; // edx
  bool v59; // zf
  NTSTATUS v60; // eax
  unsigned __int8 v61; // di
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  PIO_STATUS_BLOCK v76; // rax
  unsigned __int8 v77; // r15
  __int64 v78; // rax
  _QWORD *v79; // rcx
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  __int64 v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r9
  _DWORD *v88; // r8
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  PVOID *Object; // [rsp+20h] [rbp-208h]
  PVOID *Objecta; // [rsp+20h] [rbp-208h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-200h]
  POBJECT_HANDLE_INFORMATION HandleInformationa; // [rsp+28h] [rbp-200h]
  BOOLEAN v96; // [rsp+40h] [rbp-1E8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1E7h]
  bool v98; // [rsp+42h] [rbp-1E6h]
  bool v99; // [rsp+44h] [rbp-1E4h]
  unsigned int v100; // [rsp+48h] [rbp-1E0h]
  int Handlea; // [rsp+50h] [rbp-1D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1D0h] BYREF
  int (__fastcall *v104)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+60h] [rbp-1C8h]
  PADAPTER_OBJECT v105; // [rsp+68h] [rbp-1C0h]
  PADAPTER_OBJECT v106; // [rsp+70h] [rbp-1B8h]
  __int64 v107; // [rsp+78h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v108; // [rsp+80h] [rbp-1A8h]
  PVOID v109; // [rsp+88h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v110; // [rsp+90h] [rbp-198h]
  _QWORD *v111; // [rsp+98h] [rbp-190h]
  int v112; // [rsp+A0h] [rbp-188h]
  _OWORD v113[19]; // [rsp+B0h] [rbp-178h] BYREF

  v108 = SubordinateObjects;
  v107 = (__int64)MasterKeyHandle;
  v110 = IoStatusBlock;
  DmaAdapter = 0LL;
  v106 = 0LL;
  v13 = 0LL;
  v111 = 0LL;
  v14 = 1;
  v100 = 1;
  memset(v113, 0, 0x128uLL);
  v99 = 0;
  v104 = 0LL;
  v112 = 0;
  v96 = CmpAcquireShutdownRundown();
  if ( !v96 )
    return -1073741431;
  v16 = 1;
  if ( Count <= 1 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v14 = 4;
LABEL_9:
          v100 = v14;
          goto LABEL_10;
        }
        goto LABEL_83;
      }
      v33 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      v34 = 0;
      if ( v33 )
      {
        v41 = *(_WORD *)(v33 + 8);
        if ( v41 == 332 || v41 == 452 )
          v34 = 1;
      }
      v99 = v34;
      ProbeForWrite(IoStatusBlock, 8 * !v34 + 8LL, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v34 )
      {
        IoStatusBlock->Pointer = (PVOID)259;
      }
      else
      {
        IoStatusBlock->Status = 259;
        IoStatusBlock->Information = 0LL;
      }
      PreviousMode = AccessMode;
      if ( Asynchronous )
      {
        v14 = 2;
        goto LABEL_9;
      }
LABEL_10:
      if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
      {
        v18 = -1073741811;
        goto LABEL_39;
      }
      LOBYTE(v15) = PreviousMode;
      v18 = CmObReferenceObjectByHandle(v107, 16, v16, v15, (__int64)&DmaAdapter, 0LL);
      if ( v18 < 0 )
      {
LABEL_39:
        CmpReleaseShutdownRundown();
        return v18;
      }
      v19 = 0LL;
      v105 = 0LL;
      if ( Count == 1 )
      {
        LODWORD(v113[6]) = -1;
        *((_QWORD *)&v113[9] + 1) = &v113[9];
        *(_QWORD *)&v113[9] = &v113[9];
        memset((char *)&v113[13] + 8, 0, 0x50uLL);
        HandleInformation = (POBJECT_HANDLE_INFORMATION)v113;
        LOBYTE(Object) = AccessMode;
        v18 = ObReferenceObjectByNameEx(v108, v37, 16LL, CmKeyObjectType);
        CmpCleanupParseContext((__int64)v113, 0);
        if ( v18 < 0 )
          goto LABEL_37;
        v19 = v105;
        if ( DmaAdapter->DmaOperations->AllocateAdapterChannel == v105->DmaOperations->AllocateAdapterChannel )
        {
          HalPutDmaAdapter(v105);
          v18 = -1073741811;
          goto LABEL_37;
        }
      }
      PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
      v21 = PostBlock;
      v107 = PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          HalPutDmaAdapter(v19);
        goto LABEL_90;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v100, 0LL, v19, PostBlock);
        v111 = v13;
        if ( !v13 )
        {
          HalPutDmaAdapter(v19);
          CmpFreePostBlock((PVOID)v21);
LABEL_90:
          v18 = -1073741670;
          goto LABEL_37;
        }
      }
      v22 = v100;
      if ( v100 != 1 )
      {
        if ( Event )
        {
          v109 = 0LL;
          v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v109, 0LL);
          v106 = (PADAPTER_OBJECT)v109;
          if ( v18 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_93:
              v45 = (void *)v21;
LABEL_94:
              CmpFreePostBlock(v45);
              goto LABEL_37;
            }
LABEL_92:
            CmpFreePostBlock(v13);
            goto LABEL_93;
          }
          KeResetEvent((PRKEVENT)v109);
          v22 = v100;
        }
        v23 = v106;
        v24 = *(PADAPTER_OBJECT **)(v21 + 64);
        if ( v22 == 2 )
        {
          v24[13] = (PADAPTER_OBJECT)IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = v23;
          CurrentThread = KeGetCurrentThread();
          v36 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v36 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v21 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v36,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v19 = v105;
        }
        else
        {
          *v24 = v106;
          if ( v22 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v21 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      p_DmaOperations = &DmaAdapter->DmaOperations;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( Count == 1 )
        CmpLockTwoKcbsShared(DmaOperations, v19->DmaOperations);
      else
        CmpLockKcbShared(DmaOperations);
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(DmaAdapter, 0LL) )
      {
        if ( Count != 1 )
        {
LABEL_26:
          CmLockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
          Handlea = 1;
          goto LABEL_27;
        }
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v19, 0LL) )
        {
          AllocateAdapterChannel = (unsigned __int64)(*p_DmaOperations)->AllocateAdapterChannel;
          v39 = v19->DmaOperations;
          v40 = (unsigned __int64)v39->AllocateAdapterChannel;
          if ( AllocateAdapterChannel < v40 )
          {
            CmLockHive(AllocateAdapterChannel);
            CmLockHive((__int64)v19->DmaOperations->AllocateAdapterChannel);
            Handlea = 2;
          }
          else
          {
            if ( AllocateAdapterChannel == v40 )
              goto LABEL_26;
            CmLockHive((__int64)v39->AllocateAdapterChannel);
            CmLockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
            Handlea = 3;
          }
          v104 = v19->DmaOperations->AllocateAdapterChannel;
LABEL_27:
          LOCK_POST_LIST();
          v18 = CmpNotifyChangeKey(
                  (__int64)DmaAdapter,
                  (_QWORD *)v21,
                  CompletionFilter,
                  WatchTree,
                  (__int64)Object,
                  (__int64)HandleInformation,
                  v21);
          if ( v18 >= 0 )
          {
            v98 = Count == 1;
            if ( Count == 1 )
            {
              ObfReferenceObject(v19);
              if ( v18 )
              {
                v18 = CmpNotifyChangeKey(
                        (__int64)v19,
                        v13,
                        CompletionFilter,
                        WatchTree,
                        (__int64)Objecta,
                        (__int64)HandleInformationa,
                        v21);
                v98 = Count == 1;
                if ( v18 < 0 )
                {
                  v50 = *(_QWORD *)v21;
                  v51 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
                    goto LABEL_173;
                  if ( *v51 != v21 )
                    goto LABEL_173;
                  *v51 = v50;
                  *(_QWORD *)(v50 + 8) = v51;
                  CurrentIrql = (OBJECT_ATTRIBUTES *)KeGetCurrentIrql();
                  v108 = CurrentIrql;
                  __writecr8(1uLL);
                  v53 = *(_QWORD *)(v21 + 16);
                  v54 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v53 + 8) != v21 + 16 || *v54 != v21 + 16 )
                    goto LABEL_173;
                  *v54 = v53;
                  *(_QWORD *)(v53 + 8) = v54;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v55 = KeGetCurrentIrql();
                      if ( v55 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v55 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                        v59 = (v58 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v58;
                        if ( v59 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          LOBYTE(CurrentIrql) = (_BYTE)v108;
                        }
                        v19 = v105;
                      }
                    }
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v98 = Count == 1;
                }
              }
              else
              {
                CmpFreePostBlock(v13);
                v98 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( Handlea != 1 )
            {
              if ( Handlea != 2 )
              {
                CmUnlockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
                v27 = (__int64)v104;
LABEL_31:
                CmUnlockHive(v27);
                v28 = (ULONG_PTR)*p_DmaOperations;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v28, v19->DmaOperations);
                else
                  CmpUnlockKcb(v28);
                CmpUnlockRegistry(v30, v29);
                if ( v19 )
                  HalPutDmaAdapter(v19);
                if ( v18 < 0 )
                {
                  CmpFreePostBlock((PVOID)v21);
                  if ( v106 )
                    HalPutDmaAdapter(v106);
                  goto LABEL_37;
                }
                if ( v100 != 1 )
                {
LABEL_37:
                  v31 = v96;
                  goto LABEL_38;
                }
                CmpReleaseShutdownRundown();
                v96 = 0;
                v60 = KeWaitForSingleObject(*(PVOID *)(v21 + 64), Executive, AccessMode, 1u, 0LL);
                v18 = v60;
                if ( v60 != 257 && v60 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v61 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v98 )
                  {
                    v62 = *v13;
                    if ( *v13 )
                    {
                      v63 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v62 + 8) != v13 || (_QWORD *)*v63 != v13 )
                        goto LABEL_173;
                      *v63 = v62;
                      *(_QWORD *)(v62 + 8) = v63;
                    }
                    v64 = v13[2];
                    v65 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v64 + 8) != v13 + 2 || (_QWORD *)*v65 != v13 + 2 )
                      goto LABEL_173;
                    *v65 = v64;
                    *(_QWORD *)(v64 + 8) = v65;
                  }
                  v66 = *(_QWORD *)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    v67 = *(_QWORD **)(v21 + 8);
                    if ( *(_QWORD *)(v66 + 8) != v21 || *v67 != v21 )
                      goto LABEL_173;
                    *v67 = v66;
                    *(_QWORD *)(v66 + 8) = v67;
                  }
                  v68 = *(_QWORD *)(v21 + 16);
                  v69 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v68 + 8) == v21 + 16 && *v69 == v21 + 16 )
                  {
                    *v69 = v68;
                    *(_QWORD *)(v68 + 8) = v69;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v70 = KeGetCurrentIrql();
                        if ( v70 <= 0xFu && v61 <= 0xFu && v70 >= 2u )
                        {
                          v71 = KeGetCurrentPrcb();
                          v72 = v71->SchedulerAssist;
                          v73 = ~(unsigned __int16)(-1LL << (v61 + 1));
                          v59 = (v73 & v72[5]) == 0;
                          v72[5] &= v73;
                          if ( v59 )
                            KiRemoveSystemWorkPriorityKick((__int64)v71);
                        }
                      }
                    }
                    __writecr8(v61);
                    UNLOCK_POST_LIST();
                    CmpUnlockRegistry(v75, v74);
                    v18 = *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL);
                    v76 = v110;
                    v110->Status = v18;
                    if ( v99 )
                      HIDWORD(v76->Pointer) = 0;
                    else
                      v76->Information = 0LL;
                    v31 = 0;
                    if ( v98 )
                      CmpFreePostBlock(v13);
                    CmpFreePostBlock((PVOID)v21);
LABEL_38:
                    HalPutDmaAdapter(DmaAdapter);
                    if ( !v31 )
                      return v18;
                    goto LABEL_39;
                  }
LABEL_173:
                  __fastfail(3u);
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v77 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v98 )
                {
                  v78 = *v13;
                  if ( *v13 )
                  {
                    v79 = (_QWORD *)v13[1];
                    if ( *(_QWORD **)(v78 + 8) != v13 || (_QWORD *)*v79 != v13 )
                      goto LABEL_173;
                    *v79 = v78;
                    *(_QWORD *)(v78 + 8) = v79;
                  }
                  v80 = v13[2];
                  v81 = (_QWORD *)v13[3];
                  if ( *(_QWORD **)(v80 + 8) != v13 + 2 || (_QWORD *)*v81 != v13 + 2 )
                    goto LABEL_173;
                  *v81 = v80;
                  *(_QWORD *)(v80 + 8) = v81;
                }
                v82 = *(_QWORD *)v21;
                if ( *(_QWORD *)v21 )
                {
                  v83 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(v82 + 8) != v21 || *v83 != v21 )
                    goto LABEL_173;
                  *v83 = v82;
                  *(_QWORD *)(v82 + 8) = v83;
                }
                v84 = *(_QWORD *)(v21 + 16);
                v85 = *(_QWORD **)(v21 + 24);
                if ( *(_QWORD *)(v84 + 8) != v21 + 16 || *v85 != v21 + 16 )
                  goto LABEL_173;
                *v85 = v84;
                *(_QWORD *)(v84 + 8) = v85;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v86 = KeGetCurrentIrql();
                    if ( v86 <= 0xFu && v77 <= 0xFu && v86 >= 2u )
                    {
                      v87 = KeGetCurrentPrcb();
                      v88 = v87->SchedulerAssist;
                      v89 = ~(unsigned __int16)(-1LL << (v77 + 1));
                      v59 = (v89 & v88[5]) == 0;
                      v88[5] &= v89;
                      if ( v59 )
                        KiRemoveSystemWorkPriorityKick((__int64)v87);
                    }
                  }
                }
                __writecr8(v77);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry(v91, v90);
                if ( !v98 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              CmUnlockHive((__int64)v104);
            }
            v27 = (__int64)(*p_DmaOperations)->AllocateAdapterChannel;
            goto LABEL_31;
          }
          UNLOCK_POST_LIST();
          if ( Handlea != 1 )
          {
            if ( Handlea != 2 )
            {
              CmUnlockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
              v46 = (__int64)v104;
              goto LABEL_100;
            }
            CmUnlockHive((__int64)v104);
          }
          v46 = (__int64)(*p_DmaOperations)->AllocateAdapterChannel;
LABEL_100:
          CmUnlockHive(v46);
          v47 = (ULONG_PTR)*p_DmaOperations;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v47, v19->DmaOperations);
          else
            CmpUnlockKcb(v47);
          CmpUnlockRegistry(v49, v48);
          if ( v106 )
            HalPutDmaAdapter(v106);
          if ( Count != 1 )
            goto LABEL_37;
          v45 = v13;
          goto LABEL_94;
        }
      }
      v42 = (ULONG_PTR)*p_DmaOperations;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v42, v19->DmaOperations);
      else
        CmpUnlockKcb(v42);
      CmpUnlockRegistry(v44, v43);
      if ( v106 )
        HalPutDmaAdapter(v106);
      if ( Count == 1 )
        CmpFreePostBlock(v13);
      CmpFreePostBlock((PVOID)v21);
      v18 = -1073741444;
      goto LABEL_37;
    }
    if ( !Asynchronous )
      goto LABEL_10;
    v14 = 3;
    v100 = 3;
    if ( !Count )
      goto LABEL_10;
  }
LABEL_83:
  CmpReleaseShutdownRundown();
  return -1073741811;
}
