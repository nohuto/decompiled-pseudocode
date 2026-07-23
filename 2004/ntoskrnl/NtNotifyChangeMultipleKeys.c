/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1405E2200
 * Callers:
 *     NtNotifyChangeKey @ 0x1405E2150 (NtNotifyChangeKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     KeInitializeApc @ 0x1402F94B0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     LOCK_POST_LIST @ 0x1405E21BC (LOCK_POST_LIST.c)
 *     UNLOCK_POST_LIST @ 0x1405E21D8 (UNLOCK_POST_LIST.c)
 *     CmUnlockHive @ 0x1405E2938 (CmUnlockHive.c)
 *     CmpNotifyChangeKey @ 0x1405E2980 (CmpNotifyChangeKey.c)
 *     CmLockHive @ 0x1405E2C78 (CmLockHive.c)
 *     CmObReferenceObjectByHandle @ 0x1405E3EAC (CmObReferenceObjectByHandle.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     CmpLockTwoKcbsShared @ 0x140672100 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     CmpAllocatePostBlock @ 0x14068D808 (CmpAllocatePostBlock.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmpFreePostBlock @ 0x1406ED780 (CmpFreePostBlock.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  int v19; // edi
  PADAPTER_OBJECT v20; // r14
  __int64 PostBlock; // rax
  __int64 v22; // rsi
  unsigned int v23; // edx
  PADAPTER_OBJECT v24; // rcx
  PADAPTER_OBJECT *v25; // rax
  _DMA_OPERATIONS **p_DmaOperations; // r15
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v28; // r9
  int (__fastcall *v29)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // r15
  unsigned __int64 v38; // rax
  bool v39; // r14
  struct _KTHREAD *CurrentThread; // rdx
  void *v41; // r8
  __int64 v42; // rdx
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  _DMA_OPERATIONS *v44; // rax
  int (__fastcall *v45)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rdx
  __int64 v46; // r9
  __int16 v47; // ax
  ULONG_PTR v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  void *v51; // rcx
  int (__fastcall *v52)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // rcx
  ULONG_PTR v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  OBJECT_ATTRIBUTES *CurrentIrql; // r11
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  unsigned __int8 v61; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v64; // edx
  bool v65; // zf
  NTSTATUS v66; // eax
  unsigned __int8 v67; // di
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // rcx
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r9
  _DWORD *v78; // r8
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  PIO_STATUS_BLOCK v82; // rax
  unsigned __int8 v83; // r15
  __int64 v84; // rax
  _QWORD *v85; // rcx
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // rax
  _QWORD *v89; // rcx
  __int64 v90; // rdx
  _QWORD *v91; // rcx
  unsigned __int8 v92; // al
  struct _KPRCB *v93; // r9
  _DWORD *v94; // r8
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  int Object; // [rsp+20h] [rbp-208h]
  char v99; // [rsp+40h] [rbp-1E8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1E7h]
  bool v101; // [rsp+42h] [rbp-1E6h]
  bool v102; // [rsp+44h] [rbp-1E4h]
  unsigned int v103; // [rsp+48h] [rbp-1E0h]
  int Handlea; // [rsp+50h] [rbp-1D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1D0h] BYREF
  int (__fastcall *v107)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+60h] [rbp-1C8h]
  PADAPTER_OBJECT v108; // [rsp+68h] [rbp-1C0h] BYREF
  PADAPTER_OBJECT v109; // [rsp+70h] [rbp-1B8h]
  __int64 v110; // [rsp+78h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v111; // [rsp+80h] [rbp-1A8h]
  PVOID v112; // [rsp+88h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v113; // [rsp+90h] [rbp-198h]
  _QWORD *v114; // [rsp+98h] [rbp-190h]
  int v115; // [rsp+A0h] [rbp-188h]
  _OWORD v116[19]; // [rsp+B0h] [rbp-178h] BYREF

  v111 = SubordinateObjects;
  v110 = (__int64)MasterKeyHandle;
  v113 = IoStatusBlock;
  DmaAdapter = 0LL;
  v109 = 0LL;
  v13 = 0LL;
  v114 = 0LL;
  v14 = 1;
  v103 = 1;
  memset(v116, 0, 0x128uLL);
  v102 = 0;
  v107 = 0LL;
  v115 = 0;
  v99 = CmpAcquireShutdownRundown();
  if ( !v99 )
    return -1073741431;
  v18 = 1LL;
  if ( Count <= 1 )
  {
    LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
    AccessMode = v16;
    if ( (_BYTE)v16 )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v14 = 4;
LABEL_9:
          v103 = v14;
          goto LABEL_10;
        }
        goto LABEL_83;
      }
      v38 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      v39 = 0;
      if ( v38 )
      {
        v47 = *(_WORD *)(v38 + 8);
        if ( v47 == 332 || v47 == 452 )
          v39 = 1;
      }
      v102 = v39;
      ProbeForWrite(IoStatusBlock, 8 * !v39 + 8LL, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v39 )
      {
        IoStatusBlock->Pointer = (PVOID)259;
      }
      else
      {
        IoStatusBlock->Status = 259;
        IoStatusBlock->Information = 0LL;
      }
      LOBYTE(v16) = AccessMode;
      if ( Asynchronous )
      {
        v14 = 2;
        goto LABEL_9;
      }
LABEL_10:
      if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
      {
        v19 = -1073741811;
        goto LABEL_39;
      }
      LOBYTE(v17) = v16;
      v19 = CmObReferenceObjectByHandle(v110, 16, v18, v17, (__int64)&DmaAdapter, 0LL);
      if ( v19 < 0 )
      {
LABEL_39:
        CmpReleaseShutdownRundown(v16, v15, v18);
        return v19;
      }
      v20 = 0LL;
      v108 = 0LL;
      if ( Count == 1 )
      {
        LODWORD(v116[6]) = -1;
        *((_QWORD *)&v116[9] + 1) = &v116[9];
        *(_QWORD *)&v116[9] = &v116[9];
        memset((char *)&v116[13] + 8, 0, 0x50uLL);
        LOBYTE(Object) = AccessMode;
        v19 = ObReferenceObjectByNameEx(v111, v42, 16LL, CmKeyObjectType, Object, v116, &v108);
        CmpCleanupParseContext(v116, 0LL);
        if ( v19 < 0 )
          goto LABEL_37;
        v20 = v108;
        if ( DmaAdapter->DmaOperations->AllocateAdapterChannel == v108->DmaOperations->AllocateAdapterChannel )
        {
          HalPutDmaAdapter(v108);
          v19 = -1073741811;
          goto LABEL_37;
        }
      }
      PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
      v22 = PostBlock;
      v110 = PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          HalPutDmaAdapter(v20);
        goto LABEL_90;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v103, 0LL, v20, PostBlock);
        v114 = v13;
        if ( !v13 )
        {
          HalPutDmaAdapter(v20);
          CmpFreePostBlock((PVOID)v22);
LABEL_90:
          v19 = -1073741670;
          goto LABEL_37;
        }
      }
      v23 = v103;
      if ( v103 != 1 )
      {
        if ( Event )
        {
          v112 = 0LL;
          v19 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v112, 0LL);
          v109 = (PADAPTER_OBJECT)v112;
          if ( v19 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_93:
              v51 = (void *)v22;
LABEL_94:
              CmpFreePostBlock(v51);
              goto LABEL_37;
            }
LABEL_92:
            CmpFreePostBlock(v13);
            goto LABEL_93;
          }
          KeResetEvent((PRKEVENT)v112);
          v23 = v103;
        }
        v24 = v109;
        v25 = *(PADAPTER_OBJECT **)(v22 + 64);
        if ( v23 == 2 )
        {
          v25[13] = (PADAPTER_OBJECT)IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = v24;
          CurrentThread = KeGetCurrentThread();
          v41 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v41 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v22 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v41,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v20 = v108;
        }
        else
        {
          *v25 = v109;
          if ( v23 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v22 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      p_DmaOperations = &DmaAdapter->DmaOperations;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( Count == 1 )
        CmpLockTwoKcbsShared(DmaOperations, v20->DmaOperations);
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
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v20, 0LL) )
        {
          AllocateAdapterChannel = (*p_DmaOperations)->AllocateAdapterChannel;
          v44 = v20->DmaOperations;
          v45 = v44->AllocateAdapterChannel;
          if ( (unsigned __int64)AllocateAdapterChannel < (unsigned __int64)v45 )
          {
            ((void (*)(void))CmLockHive)();
            CmLockHive(v20->DmaOperations->AllocateAdapterChannel);
            Handlea = 2;
          }
          else
          {
            if ( AllocateAdapterChannel == v45 )
              goto LABEL_26;
            CmLockHive(v44->AllocateAdapterChannel);
            CmLockHive((*p_DmaOperations)->AllocateAdapterChannel);
            Handlea = 3;
          }
          v107 = v20->DmaOperations->AllocateAdapterChannel;
LABEL_27:
          LOCK_POST_LIST();
          LOBYTE(v28) = WatchTree;
          v19 = CmpNotifyChangeKey(DmaAdapter, v22, CompletionFilter, v28);
          if ( v19 >= 0 )
          {
            v101 = Count == 1;
            if ( Count == 1 )
            {
              ObfReferenceObject(v20);
              if ( v19 )
              {
                LOBYTE(v46) = WatchTree;
                v19 = CmpNotifyChangeKey(v20, v13, CompletionFilter, v46);
                v101 = Count == 1;
                if ( v19 < 0 )
                {
                  v56 = *(_QWORD *)v22;
                  v57 = *(_QWORD **)(v22 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
                    goto LABEL_173;
                  if ( *v57 != v22 )
                    goto LABEL_173;
                  *v57 = v56;
                  *(_QWORD *)(v56 + 8) = v57;
                  CurrentIrql = (OBJECT_ATTRIBUTES *)KeGetCurrentIrql();
                  v111 = CurrentIrql;
                  __writecr8(1uLL);
                  v59 = *(_QWORD *)(v22 + 16);
                  v60 = *(_QWORD **)(v22 + 24);
                  if ( *(_QWORD *)(v59 + 8) != v22 + 16 || *v60 != v22 + 16 )
                    goto LABEL_173;
                  *v60 = v59;
                  *(_QWORD *)(v59 + 8) = v60;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v61 = KeGetCurrentIrql();
                      if ( v61 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v61 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                        v65 = (v64 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v64;
                        if ( v65 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          LOBYTE(CurrentIrql) = (_BYTE)v111;
                        }
                        v20 = v108;
                      }
                    }
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v101 = Count == 1;
                }
              }
              else
              {
                CmpFreePostBlock(v13);
                v101 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( Handlea != 1 )
            {
              if ( Handlea != 2 )
              {
                CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
                v29 = v107;
LABEL_31:
                CmUnlockHive(v29);
                v30 = (ULONG_PTR)*p_DmaOperations;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v30, v20->DmaOperations);
                else
                  CmpUnlockKcb(v30);
                CmpUnlockRegistry(v32, v31);
                if ( v20 )
                  HalPutDmaAdapter(v20);
                if ( v19 < 0 )
                {
                  CmpFreePostBlock((PVOID)v22);
                  if ( v109 )
                    HalPutDmaAdapter(v109);
                  goto LABEL_37;
                }
                if ( v103 != 1 )
                {
LABEL_37:
                  v36 = v99;
                  goto LABEL_38;
                }
                CmpReleaseShutdownRundown(v34, v33, v35);
                v99 = 0;
                v66 = KeWaitForSingleObject(*(PVOID *)(v22 + 64), Executive, AccessMode, 1u, 0LL);
                v19 = v66;
                if ( v66 != 257 && v66 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v67 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v101 )
                  {
                    v68 = *v13;
                    if ( *v13 )
                    {
                      v69 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v68 + 8) != v13 || (_QWORD *)*v69 != v13 )
                        goto LABEL_173;
                      *v69 = v68;
                      *(_QWORD *)(v68 + 8) = v69;
                    }
                    v70 = v13[2];
                    v71 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v70 + 8) != v13 + 2 || (_QWORD *)*v71 != v13 + 2 )
                      goto LABEL_173;
                    *v71 = v70;
                    *(_QWORD *)(v70 + 8) = v71;
                  }
                  v72 = *(_QWORD *)v22;
                  if ( *(_QWORD *)v22 )
                  {
                    v73 = *(_QWORD **)(v22 + 8);
                    if ( *(_QWORD *)(v72 + 8) != v22 || *v73 != v22 )
                      goto LABEL_173;
                    *v73 = v72;
                    *(_QWORD *)(v72 + 8) = v73;
                  }
                  v74 = *(_QWORD *)(v22 + 16);
                  v75 = *(_QWORD **)(v22 + 24);
                  if ( *(_QWORD *)(v74 + 8) == v22 + 16 && *v75 == v22 + 16 )
                  {
                    *v75 = v74;
                    *(_QWORD *)(v74 + 8) = v75;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v76 = KeGetCurrentIrql();
                        if ( v76 <= 0xFu && v67 <= 0xFu && v76 >= 2u )
                        {
                          v77 = KeGetCurrentPrcb();
                          v78 = v77->SchedulerAssist;
                          v79 = ~(unsigned __int16)(-1LL << (v67 + 1));
                          v65 = (v79 & v78[5]) == 0;
                          v78[5] &= v79;
                          if ( v65 )
                            KiRemoveSystemWorkPriorityKick((__int64)v77);
                        }
                      }
                    }
                    __writecr8(v67);
                    UNLOCK_POST_LIST();
                    CmpUnlockRegistry(v81, v80);
                    v19 = *(_DWORD *)(*(_QWORD *)(v22 + 64) + 24LL);
                    v82 = v113;
                    v113->Status = v19;
                    if ( v102 )
                      HIDWORD(v82->Pointer) = 0;
                    else
                      v82->Information = 0LL;
                    v36 = 0;
                    if ( v101 )
                      CmpFreePostBlock(v13);
                    CmpFreePostBlock((PVOID)v22);
LABEL_38:
                    HalPutDmaAdapter(DmaAdapter);
                    if ( !v36 )
                      return v19;
                    goto LABEL_39;
                  }
LABEL_173:
                  __fastfail(3u);
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v83 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v101 )
                {
                  v84 = *v13;
                  if ( *v13 )
                  {
                    v85 = (_QWORD *)v13[1];
                    if ( *(_QWORD **)(v84 + 8) != v13 || (_QWORD *)*v85 != v13 )
                      goto LABEL_173;
                    *v85 = v84;
                    *(_QWORD *)(v84 + 8) = v85;
                  }
                  v86 = v13[2];
                  v87 = (_QWORD *)v13[3];
                  if ( *(_QWORD **)(v86 + 8) != v13 + 2 || (_QWORD *)*v87 != v13 + 2 )
                    goto LABEL_173;
                  *v87 = v86;
                  *(_QWORD *)(v86 + 8) = v87;
                }
                v88 = *(_QWORD *)v22;
                if ( *(_QWORD *)v22 )
                {
                  v89 = *(_QWORD **)(v22 + 8);
                  if ( *(_QWORD *)(v88 + 8) != v22 || *v89 != v22 )
                    goto LABEL_173;
                  *v89 = v88;
                  *(_QWORD *)(v88 + 8) = v89;
                }
                v90 = *(_QWORD *)(v22 + 16);
                v91 = *(_QWORD **)(v22 + 24);
                if ( *(_QWORD *)(v90 + 8) != v22 + 16 || *v91 != v22 + 16 )
                  goto LABEL_173;
                *v91 = v90;
                *(_QWORD *)(v90 + 8) = v91;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v92 = KeGetCurrentIrql();
                    if ( v92 <= 0xFu && v83 <= 0xFu && v92 >= 2u )
                    {
                      v93 = KeGetCurrentPrcb();
                      v94 = v93->SchedulerAssist;
                      v95 = ~(unsigned __int16)(-1LL << (v83 + 1));
                      v65 = (v95 & v94[5]) == 0;
                      v94[5] &= v95;
                      if ( v65 )
                        KiRemoveSystemWorkPriorityKick((__int64)v93);
                    }
                  }
                }
                __writecr8(v83);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry(v97, v96);
                if ( !v101 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              CmUnlockHive(v107);
            }
            v29 = (*p_DmaOperations)->AllocateAdapterChannel;
            goto LABEL_31;
          }
          UNLOCK_POST_LIST();
          if ( Handlea != 1 )
          {
            if ( Handlea != 2 )
            {
              CmUnlockHive((*p_DmaOperations)->AllocateAdapterChannel);
              v52 = v107;
              goto LABEL_100;
            }
            CmUnlockHive(v107);
          }
          v52 = (*p_DmaOperations)->AllocateAdapterChannel;
LABEL_100:
          CmUnlockHive(v52);
          v53 = (ULONG_PTR)*p_DmaOperations;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v53, v20->DmaOperations);
          else
            CmpUnlockKcb(v53);
          CmpUnlockRegistry(v55, v54);
          if ( v109 )
            HalPutDmaAdapter(v109);
          if ( Count != 1 )
            goto LABEL_37;
          v51 = v13;
          goto LABEL_94;
        }
      }
      v48 = (ULONG_PTR)*p_DmaOperations;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v48, v20->DmaOperations);
      else
        CmpUnlockKcb(v48);
      CmpUnlockRegistry(v50, v49);
      if ( v109 )
        HalPutDmaAdapter(v109);
      if ( Count == 1 )
        CmpFreePostBlock(v13);
      CmpFreePostBlock((PVOID)v22);
      v19 = -1073741444;
      goto LABEL_37;
    }
    if ( !Asynchronous )
      goto LABEL_10;
    v14 = 3;
    v103 = 3;
    if ( !Count )
      goto LABEL_10;
  }
LABEL_83:
  CmpReleaseShutdownRundown(v16, v15, 1LL);
  return -1073741811;
}
