/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x140658050
 * Callers:
 *     NtNotifyChangeKey @ 0x140657FE0 (NtNotifyChangeKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CD0F0 (CmObReferenceObjectByName.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     CmpAllocatePostBlock @ 0x140658780 (CmpAllocatePostBlock.c)
 *     CmUnlockHive @ 0x14065887C (CmUnlockHive.c)
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     CmLockHive @ 0x140658BB8 (CmLockHive.c)
 *     CmObReferenceObjectByHandle @ 0x14065943C (CmObReferenceObjectByHandle.c)
 *     UNLOCK_POST_LIST @ 0x14065B198 (UNLOCK_POST_LIST.c)
 *     LOCK_POST_LIST @ 0x14065B1B4 (LOCK_POST_LIST.c)
 *     CmpFreePostBlock @ 0x14065C880 (CmpFreePostBlock.c)
 *     CmpLockTwoKcbsShared @ 0x1406E3020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
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
  __int64 v27; // r9
  int (__fastcall *v28)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOLEAN v32; // r15
  unsigned __int64 v34; // rax
  bool v35; // r14
  struct _KTHREAD *CurrentThread; // rdx
  void *v37; // r8
  __int64 v38; // r9
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  _DMA_OPERATIONS *v40; // rax
  int (__fastcall *v41)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rdx
  __int64 v42; // r9
  __int16 v43; // ax
  ULONG_PTR v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rcx
  int (__fastcall *v48)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  OBJECT_ATTRIBUTES *CurrentIrql; // r11
  __int64 v55; // rdx
  _QWORD *v56; // rcx
  unsigned __int8 v57; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v60; // edx
  bool v61; // zf
  NTSTATUS v62; // eax
  unsigned __int8 v63; // di
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  PIO_STATUS_BLOCK v78; // rax
  unsigned __int8 v79; // r15
  __int64 v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rdx
  _QWORD *v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r9
  _DWORD *v90; // r8
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  BOOLEAN v94; // [rsp+40h] [rbp-1E8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1E7h]
  bool v96; // [rsp+42h] [rbp-1E6h]
  bool v97; // [rsp+44h] [rbp-1E4h]
  unsigned int v98; // [rsp+48h] [rbp-1E0h]
  int Handlea; // [rsp+50h] [rbp-1D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1D0h] BYREF
  int (__fastcall *v102)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+60h] [rbp-1C8h]
  PADAPTER_OBJECT v103; // [rsp+68h] [rbp-1C0h] BYREF
  PADAPTER_OBJECT v104; // [rsp+70h] [rbp-1B8h]
  __int64 v105; // [rsp+78h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v106; // [rsp+80h] [rbp-1A8h]
  PVOID Object; // [rsp+88h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v108; // [rsp+90h] [rbp-198h]
  _QWORD *v109; // [rsp+98h] [rbp-190h]
  int v110; // [rsp+A0h] [rbp-188h]
  _OWORD v111[19]; // [rsp+B0h] [rbp-178h] BYREF

  v106 = SubordinateObjects;
  v105 = (__int64)MasterKeyHandle;
  v108 = IoStatusBlock;
  DmaAdapter = 0LL;
  v104 = 0LL;
  v13 = 0LL;
  v109 = 0LL;
  v14 = 1;
  v98 = 1;
  memset(v111, 0, 0x128uLL);
  v97 = 0;
  v102 = 0LL;
  v110 = 0;
  v94 = CmpAcquireShutdownRundown();
  if ( !v94 )
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
          v98 = v14;
          goto LABEL_10;
        }
        goto LABEL_83;
      }
      v34 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      v35 = 0;
      if ( v34 )
      {
        v43 = *(_WORD *)(v34 + 8);
        if ( v43 == 332 || v43 == 452 )
          v35 = 1;
      }
      v97 = v35;
      ProbeForWrite(IoStatusBlock, 8 * !v35 + 8LL, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v35 )
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
      v18 = CmObReferenceObjectByHandle(v105, 16, v16, v15, (__int64)&DmaAdapter, 0LL);
      if ( v18 < 0 )
      {
LABEL_39:
        CmpReleaseShutdownRundown();
        return v18;
      }
      v19 = 0LL;
      v103 = 0LL;
      if ( Count == 1 )
      {
        LODWORD(v111[6]) = -1;
        *((_QWORD *)&v111[9] + 1) = &v111[9];
        *(_QWORD *)&v111[9] = &v111[9];
        memset((char *)&v111[13] + 8, 0, 0x50uLL);
        v18 = CmObReferenceObjectByName((int)v106, 0, 16, v38, AccessMode, (__int64)v111, &v103);
        CmpCleanupParseContext((__int64)v111, 0);
        if ( v18 < 0 )
          goto LABEL_37;
        v19 = v103;
        if ( DmaAdapter->DmaOperations->AllocateAdapterChannel == v103->DmaOperations->AllocateAdapterChannel )
        {
          HalPutDmaAdapter(v103);
          v18 = -1073741811;
          goto LABEL_37;
        }
      }
      PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
      v21 = PostBlock;
      v105 = PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          HalPutDmaAdapter(v19);
        goto LABEL_90;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v98, 0LL, v19, PostBlock);
        v109 = v13;
        if ( !v13 )
        {
          HalPutDmaAdapter(v19);
          CmpFreePostBlock((PVOID)v21);
LABEL_90:
          v18 = -1073741670;
          goto LABEL_37;
        }
      }
      v22 = v98;
      if ( v98 != 1 )
      {
        if ( Event )
        {
          Object = 0LL;
          v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
          v104 = (PADAPTER_OBJECT)Object;
          if ( v18 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_93:
              v47 = (void *)v21;
LABEL_94:
              CmpFreePostBlock(v47);
              goto LABEL_37;
            }
LABEL_92:
            CmpFreePostBlock(v13);
            goto LABEL_93;
          }
          KeResetEvent((PRKEVENT)Object);
          v22 = v98;
        }
        v23 = v104;
        v24 = *(PADAPTER_OBJECT **)(v21 + 64);
        if ( v22 == 2 )
        {
          v24[13] = (PADAPTER_OBJECT)IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = v23;
          CurrentThread = KeGetCurrentThread();
          v37 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v37 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v21 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v37,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v19 = v103;
        }
        else
        {
          *v24 = v104;
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
          CmLockHive((*p_DmaOperations)->AllocateAdapterChannel);
          Handlea = 1;
          goto LABEL_27;
        }
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v19, 0LL) )
        {
          AllocateAdapterChannel = (*p_DmaOperations)->AllocateAdapterChannel;
          v40 = v19->DmaOperations;
          v41 = v40->AllocateAdapterChannel;
          if ( (unsigned __int64)AllocateAdapterChannel < (unsigned __int64)v41 )
          {
            ((void (*)(void))CmLockHive)();
            CmLockHive(v19->DmaOperations->AllocateAdapterChannel);
            Handlea = 2;
          }
          else
          {
            if ( AllocateAdapterChannel == v41 )
              goto LABEL_26;
            CmLockHive(v40->AllocateAdapterChannel);
            CmLockHive((*p_DmaOperations)->AllocateAdapterChannel);
            Handlea = 3;
          }
          v102 = v19->DmaOperations->AllocateAdapterChannel;
LABEL_27:
          LOCK_POST_LIST();
          LOBYTE(v27) = WatchTree;
          v18 = CmpNotifyChangeKey(DmaAdapter, v21, CompletionFilter, v27);
          if ( v18 >= 0 )
          {
            v96 = Count == 1;
            if ( Count == 1 )
            {
              ObfReferenceObject(v19);
              if ( v18 )
              {
                LOBYTE(v42) = WatchTree;
                v18 = CmpNotifyChangeKey(v19, v13, CompletionFilter, v42);
                v96 = Count == 1;
                if ( v18 < 0 )
                {
                  v52 = *(_QWORD *)v21;
                  v53 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
                    goto LABEL_173;
                  if ( *v53 != v21 )
                    goto LABEL_173;
                  *v53 = v52;
                  *(_QWORD *)(v52 + 8) = v53;
                  CurrentIrql = (OBJECT_ATTRIBUTES *)KeGetCurrentIrql();
                  v106 = CurrentIrql;
                  __writecr8(1uLL);
                  v55 = *(_QWORD *)(v21 + 16);
                  v56 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v55 + 8) != v21 + 16 || *v56 != v21 + 16 )
                    goto LABEL_173;
                  *v56 = v55;
                  *(_QWORD *)(v55 + 8) = v56;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v57 = KeGetCurrentIrql();
                      if ( v57 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v57 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                        v61 = (v60 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v60;
                        if ( v61 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          LOBYTE(CurrentIrql) = (_BYTE)v106;
                        }
                        v19 = v103;
                      }
                    }
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v96 = Count == 1;
                }
              }
              else
              {
                CmpFreePostBlock(v13);
                v96 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( Handlea != 1 )
            {
              if ( Handlea != 2 )
              {
                CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
                v28 = v102;
LABEL_31:
                CmUnlockHive(v28);
                v29 = (ULONG_PTR)*p_DmaOperations;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v29, v19->DmaOperations);
                else
                  CmpUnlockKcb(v29);
                CmpUnlockRegistry(v31, v30);
                if ( v19 )
                  HalPutDmaAdapter(v19);
                if ( v18 < 0 )
                {
                  CmpFreePostBlock((PVOID)v21);
                  if ( v104 )
                    HalPutDmaAdapter(v104);
                  goto LABEL_37;
                }
                if ( v98 != 1 )
                {
LABEL_37:
                  v32 = v94;
                  goto LABEL_38;
                }
                CmpReleaseShutdownRundown();
                v94 = 0;
                v62 = KeWaitForSingleObject(*(PVOID *)(v21 + 64), Executive, AccessMode, 1u, 0LL);
                v18 = v62;
                if ( v62 != 257 && v62 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v63 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v96 )
                  {
                    v64 = *v13;
                    if ( *v13 )
                    {
                      v65 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v64 + 8) != v13 || (_QWORD *)*v65 != v13 )
                        goto LABEL_173;
                      *v65 = v64;
                      *(_QWORD *)(v64 + 8) = v65;
                    }
                    v66 = v13[2];
                    v67 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v66 + 8) != v13 + 2 || (_QWORD *)*v67 != v13 + 2 )
                      goto LABEL_173;
                    *v67 = v66;
                    *(_QWORD *)(v66 + 8) = v67;
                  }
                  v68 = *(_QWORD *)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    v69 = *(_QWORD **)(v21 + 8);
                    if ( *(_QWORD *)(v68 + 8) != v21 || *v69 != v21 )
                      goto LABEL_173;
                    *v69 = v68;
                    *(_QWORD *)(v68 + 8) = v69;
                  }
                  v70 = *(_QWORD *)(v21 + 16);
                  v71 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v70 + 8) == v21 + 16 && *v71 == v21 + 16 )
                  {
                    *v71 = v70;
                    *(_QWORD *)(v70 + 8) = v71;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v72 = KeGetCurrentIrql();
                        if ( v72 <= 0xFu && v63 <= 0xFu && v72 >= 2u )
                        {
                          v73 = KeGetCurrentPrcb();
                          v74 = v73->SchedulerAssist;
                          v75 = ~(unsigned __int16)(-1LL << (v63 + 1));
                          v61 = (v75 & v74[5]) == 0;
                          v74[5] &= v75;
                          if ( v61 )
                            KiRemoveSystemWorkPriorityKick((__int64)v73);
                        }
                      }
                    }
                    __writecr8(v63);
                    UNLOCK_POST_LIST();
                    CmpUnlockRegistry(v77, v76);
                    v18 = *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL);
                    v78 = v108;
                    v108->Status = v18;
                    if ( v97 )
                      HIDWORD(v78->Pointer) = 0;
                    else
                      v78->Information = 0LL;
                    v32 = 0;
                    if ( v96 )
                      CmpFreePostBlock(v13);
                    CmpFreePostBlock((PVOID)v21);
LABEL_38:
                    HalPutDmaAdapter(DmaAdapter);
                    if ( !v32 )
                      return v18;
                    goto LABEL_39;
                  }
LABEL_173:
                  __fastfail(3u);
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v79 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v96 )
                {
                  v80 = *v13;
                  if ( *v13 )
                  {
                    v81 = (_QWORD *)v13[1];
                    if ( *(_QWORD **)(v80 + 8) != v13 || (_QWORD *)*v81 != v13 )
                      goto LABEL_173;
                    *v81 = v80;
                    *(_QWORD *)(v80 + 8) = v81;
                  }
                  v82 = v13[2];
                  v83 = (_QWORD *)v13[3];
                  if ( *(_QWORD **)(v82 + 8) != v13 + 2 || (_QWORD *)*v83 != v13 + 2 )
                    goto LABEL_173;
                  *v83 = v82;
                  *(_QWORD *)(v82 + 8) = v83;
                }
                v84 = *(_QWORD *)v21;
                if ( *(_QWORD *)v21 )
                {
                  v85 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(v84 + 8) != v21 || *v85 != v21 )
                    goto LABEL_173;
                  *v85 = v84;
                  *(_QWORD *)(v84 + 8) = v85;
                }
                v86 = *(_QWORD *)(v21 + 16);
                v87 = *(_QWORD **)(v21 + 24);
                if ( *(_QWORD *)(v86 + 8) != v21 + 16 || *v87 != v21 + 16 )
                  goto LABEL_173;
                *v87 = v86;
                *(_QWORD *)(v86 + 8) = v87;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v88 = KeGetCurrentIrql();
                    if ( v88 <= 0xFu && v79 <= 0xFu && v88 >= 2u )
                    {
                      v89 = KeGetCurrentPrcb();
                      v90 = v89->SchedulerAssist;
                      v91 = ~(unsigned __int16)(-1LL << (v79 + 1));
                      v61 = (v91 & v90[5]) == 0;
                      v90[5] &= v91;
                      if ( v61 )
                        KiRemoveSystemWorkPriorityKick((__int64)v89);
                    }
                  }
                }
                __writecr8(v79);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry(v93, v92);
                if ( !v96 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              CmUnlockHive(v102);
            }
            v28 = (*p_DmaOperations)->AllocateAdapterChannel;
            goto LABEL_31;
          }
          UNLOCK_POST_LIST();
          if ( Handlea != 1 )
          {
            if ( Handlea != 2 )
            {
              CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
              v48 = v102;
              goto LABEL_100;
            }
            CmUnlockHive(v102);
          }
          v48 = (*p_DmaOperations)->AllocateAdapterChannel;
LABEL_100:
          CmUnlockHive(v48);
          v49 = (ULONG_PTR)*p_DmaOperations;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v49, v19->DmaOperations);
          else
            CmpUnlockKcb(v49);
          CmpUnlockRegistry(v51, v50);
          if ( v104 )
            HalPutDmaAdapter(v104);
          if ( Count != 1 )
            goto LABEL_37;
          v47 = v13;
          goto LABEL_94;
        }
      }
      v44 = (ULONG_PTR)*p_DmaOperations;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v44, v19->DmaOperations);
      else
        CmpUnlockKcb(v44);
      CmpUnlockRegistry(v46, v45);
      if ( v104 )
        HalPutDmaAdapter(v104);
      if ( Count == 1 )
        CmpFreePostBlock(v13);
      CmpFreePostBlock((PVOID)v21);
      v18 = -1073741444;
      goto LABEL_37;
    }
    if ( !Asynchronous )
      goto LABEL_10;
    v14 = 3;
    v98 = 3;
    if ( !Count )
      goto LABEL_10;
  }
LABEL_83:
  CmpReleaseShutdownRundown();
  return -1073741811;
}
