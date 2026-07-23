/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1405F7BF0
 * Callers:
 *     NtNotifyChangeKey @ 0x1406BF900 (NtNotifyChangeKey.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmObReferenceObjectByName @ 0x1405CBB0C (CmObReferenceObjectByName.c)
 *     UNLOCK_POST_LIST @ 0x1405F784C (UNLOCK_POST_LIST.c)
 *     LOCK_POST_LIST @ 0x1405F7868 (LOCK_POST_LIST.c)
 *     CmLockHive @ 0x1405F7884 (CmLockHive.c)
 *     CmpNotifyChangeKey @ 0x1405F78B0 (CmpNotifyChangeKey.c)
 *     CmUnlockHive @ 0x1405F7BA8 (CmUnlockHive.c)
 *     CmpAllocatePostBlock @ 0x1405FAE94 (CmpAllocatePostBlock.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x14060C8A0 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x14066E70C (CmObReferenceObjectByHandle.c)
 *     CmpLockTwoKcbsShared @ 0x140676570 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140676600 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFreePostBlock @ 0x1406BDB90 (CmpFreePostBlock.c)
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
  NTSTATUS v19; // edi
  PADAPTER_OBJECT v20; // r14
  __int64 PostBlock; // rax
  __int64 v22; // rsi
  unsigned int v23; // edx
  PADAPTER_OBJECT v24; // rcx
  PADAPTER_OBJECT *v25; // rax
  _DMA_OPERATIONS **p_DmaOperations; // r15
  _DMA_OPERATIONS *DmaOperations; // rcx
  __int64 v28; // rcx
  ULONG_PTR v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // r15
  unsigned __int64 v37; // rax
  bool v38; // r14
  struct _KTHREAD *CurrentThread; // rdx
  void *v40; // r8
  __int64 v41; // r9
  unsigned __int64 AllocateAdapterChannel; // rcx
  _DMA_OPERATIONS *v43; // rax
  unsigned __int64 v44; // rdx
  __int16 v45; // ax
  ULONG_PTR v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  void *v49; // rcx
  __int64 v50; // rcx
  ULONG_PTR v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  OBJECT_ATTRIBUTES *CurrentIrql; // r11
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  unsigned __int8 v59; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v62; // edx
  bool v63; // zf
  NTSTATUS v64; // eax
  unsigned __int8 v65; // di
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  _DWORD *v76; // r8
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  PIO_STATUS_BLOCK v80; // rax
  unsigned __int8 v81; // r15
  __int64 v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  __int64 v86; // rax
  _QWORD *v87; // rcx
  __int64 v88; // rdx
  _QWORD *v89; // rcx
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r9
  _DWORD *v92; // r8
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  PVOID *Object; // [rsp+20h] [rbp-208h]
  PVOID *Objecta; // [rsp+20h] [rbp-208h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-200h]
  POBJECT_HANDLE_INFORMATION HandleInformationa; // [rsp+28h] [rbp-200h]
  char v100; // [rsp+40h] [rbp-1E8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1E7h]
  bool v102; // [rsp+42h] [rbp-1E6h]
  bool v103; // [rsp+44h] [rbp-1E4h]
  unsigned int v104; // [rsp+48h] [rbp-1E0h]
  int Handlea; // [rsp+50h] [rbp-1D8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1D0h] BYREF
  int (__fastcall *v108)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+60h] [rbp-1C8h]
  PADAPTER_OBJECT v109; // [rsp+68h] [rbp-1C0h] BYREF
  PADAPTER_OBJECT v110; // [rsp+70h] [rbp-1B8h]
  __int64 v111; // [rsp+78h] [rbp-1B0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v112; // [rsp+80h] [rbp-1A8h]
  PVOID v113; // [rsp+88h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v114; // [rsp+90h] [rbp-198h]
  _QWORD *v115; // [rsp+98h] [rbp-190h]
  int v116; // [rsp+A0h] [rbp-188h]
  _OWORD v117[19]; // [rsp+B0h] [rbp-178h] BYREF

  v112 = SubordinateObjects;
  v111 = (__int64)MasterKeyHandle;
  v114 = IoStatusBlock;
  DmaAdapter = 0LL;
  v110 = 0LL;
  v13 = 0LL;
  v115 = 0LL;
  v14 = 1;
  v104 = 1;
  memset(v117, 0, 0x128uLL);
  v103 = 0;
  v108 = 0LL;
  v116 = 0;
  v100 = CmpAcquireShutdownRundown();
  if ( !v100 )
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
          v104 = v14;
          goto LABEL_10;
        }
        goto LABEL_83;
      }
      v37 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      v38 = 0;
      if ( v37 )
      {
        v45 = *(_WORD *)(v37 + 8);
        if ( v45 == 332 || v45 == 452 )
          v38 = 1;
      }
      v103 = v38;
      ProbeForWrite(IoStatusBlock, 8 * !v38 + 8LL, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v38 )
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
      v19 = CmObReferenceObjectByHandle(v111, 16, v18, v17, (__int64)&DmaAdapter, 0LL);
      if ( v19 < 0 )
      {
LABEL_39:
        CmpReleaseShutdownRundown(v16, v15, v18);
        return v19;
      }
      v20 = 0LL;
      v109 = 0LL;
      if ( Count == 1 )
      {
        LODWORD(v117[6]) = -1;
        *((_QWORD *)&v117[9] + 1) = &v117[9];
        *(_QWORD *)&v117[9] = &v117[9];
        memset((char *)&v117[13] + 8, 0, 0x50uLL);
        v19 = CmObReferenceObjectByName((int)v112, 0, 16, v41, AccessMode, (__int64)v117, &v109);
        CmpCleanupParseContext(v117, 0LL);
        if ( v19 < 0 )
          goto LABEL_37;
        v20 = v109;
        if ( DmaAdapter->DmaOperations->AllocateAdapterChannel == v109->DmaOperations->AllocateAdapterChannel )
        {
          HalPutDmaAdapter(v109);
          v19 = -1073741811;
          goto LABEL_37;
        }
      }
      PostBlock = CmpAllocatePostBlock(v14, 0x10000LL, 0LL, 0LL);
      v22 = PostBlock;
      v111 = PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          HalPutDmaAdapter(v20);
        goto LABEL_90;
      }
      if ( Count == 1 )
      {
        v13 = (_QWORD *)CmpAllocatePostBlock(v104, 0LL, v20, PostBlock);
        v115 = v13;
        if ( !v13 )
        {
          HalPutDmaAdapter(v20);
          CmpFreePostBlock((PVOID)v22);
LABEL_90:
          v19 = -1073741670;
          goto LABEL_37;
        }
      }
      v23 = v104;
      if ( v104 != 1 )
      {
        if ( Event )
        {
          v113 = 0LL;
          v19 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v113, 0LL);
          v110 = (PADAPTER_OBJECT)v113;
          if ( v19 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_93:
              v49 = (void *)v22;
LABEL_94:
              CmpFreePostBlock(v49);
              goto LABEL_37;
            }
LABEL_92:
            CmpFreePostBlock(v13);
            goto LABEL_93;
          }
          KeResetEvent((PRKEVENT)v113);
          v23 = v104;
        }
        v24 = v110;
        v25 = *(PADAPTER_OBJECT **)(v22 + 64);
        if ( v23 == 2 )
        {
          v25[13] = (PADAPTER_OBJECT)IoStatusBlock;
          *(_QWORD *)(*(_QWORD *)(v22 + 64) + 8LL) = v24;
          CurrentThread = KeGetCurrentThread();
          v40 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v40 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v22 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v40,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v20 = v109;
        }
        else
        {
          *v25 = v110;
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
          CmLockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
          Handlea = 1;
          goto LABEL_27;
        }
        if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v20, 0LL) )
        {
          AllocateAdapterChannel = (unsigned __int64)(*p_DmaOperations)->AllocateAdapterChannel;
          v43 = v20->DmaOperations;
          v44 = (unsigned __int64)v43->AllocateAdapterChannel;
          if ( AllocateAdapterChannel < v44 )
          {
            CmLockHive(AllocateAdapterChannel);
            CmLockHive((__int64)v20->DmaOperations->AllocateAdapterChannel);
            Handlea = 2;
          }
          else
          {
            if ( AllocateAdapterChannel == v44 )
              goto LABEL_26;
            CmLockHive((__int64)v43->AllocateAdapterChannel);
            CmLockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
            Handlea = 3;
          }
          v108 = v20->DmaOperations->AllocateAdapterChannel;
LABEL_27:
          LOCK_POST_LIST();
          v19 = CmpNotifyChangeKey(
                  (__int64)DmaAdapter,
                  (_QWORD *)v22,
                  CompletionFilter,
                  WatchTree,
                  (__int64)Object,
                  (__int64)HandleInformation,
                  v22);
          if ( v19 >= 0 )
          {
            v102 = Count == 1;
            if ( Count == 1 )
            {
              ObfReferenceObject(v20);
              if ( v19 )
              {
                v19 = CmpNotifyChangeKey(
                        (__int64)v20,
                        v13,
                        CompletionFilter,
                        WatchTree,
                        (__int64)Objecta,
                        (__int64)HandleInformationa,
                        v22);
                v102 = Count == 1;
                if ( v19 < 0 )
                {
                  v54 = *(_QWORD *)v22;
                  v55 = *(_QWORD **)(v22 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
                    goto LABEL_173;
                  if ( *v55 != v22 )
                    goto LABEL_173;
                  *v55 = v54;
                  *(_QWORD *)(v54 + 8) = v55;
                  CurrentIrql = (OBJECT_ATTRIBUTES *)KeGetCurrentIrql();
                  v112 = CurrentIrql;
                  __writecr8(1uLL);
                  v57 = *(_QWORD *)(v22 + 16);
                  v58 = *(_QWORD **)(v22 + 24);
                  if ( *(_QWORD *)(v57 + 8) != v22 + 16 || *v58 != v22 + 16 )
                    goto LABEL_173;
                  *v58 = v57;
                  *(_QWORD *)(v57 + 8) = v58;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v59 = KeGetCurrentIrql();
                      if ( v59 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v59 >= 2u )
                      {
                        CurrentPrcb = KeGetCurrentPrcb();
                        SchedulerAssist = CurrentPrcb->SchedulerAssist;
                        v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                        v63 = (v62 & SchedulerAssist[5]) == 0;
                        SchedulerAssist[5] &= v62;
                        if ( v63 )
                        {
                          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                          LOBYTE(CurrentIrql) = (_BYTE)v112;
                        }
                        v20 = v109;
                      }
                    }
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v102 = Count == 1;
                }
              }
              else
              {
                CmpFreePostBlock(v13);
                v102 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( Handlea != 1 )
            {
              if ( Handlea != 2 )
              {
                CmUnlockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
                v28 = (__int64)v108;
LABEL_31:
                CmUnlockHive(v28);
                v29 = (ULONG_PTR)*p_DmaOperations;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v29, v20->DmaOperations);
                else
                  CmpUnlockKcb(v29);
                CmpUnlockRegistry(v31, v30);
                if ( v20 )
                  HalPutDmaAdapter(v20);
                if ( v19 < 0 )
                {
                  CmpFreePostBlock((PVOID)v22);
                  if ( v110 )
                    HalPutDmaAdapter(v110);
                  goto LABEL_37;
                }
                if ( v104 != 1 )
                {
LABEL_37:
                  v35 = v100;
                  goto LABEL_38;
                }
                CmpReleaseShutdownRundown(v33, v32, v34);
                v100 = 0;
                v64 = KeWaitForSingleObject(*(PVOID *)(v22 + 64), Executive, AccessMode, 1u, 0LL);
                v19 = v64;
                if ( v64 != 257 && v64 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v65 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v102 )
                  {
                    v66 = *v13;
                    if ( *v13 )
                    {
                      v67 = (_QWORD *)v13[1];
                      if ( *(_QWORD **)(v66 + 8) != v13 || (_QWORD *)*v67 != v13 )
                        goto LABEL_173;
                      *v67 = v66;
                      *(_QWORD *)(v66 + 8) = v67;
                    }
                    v68 = v13[2];
                    v69 = (_QWORD *)v13[3];
                    if ( *(_QWORD **)(v68 + 8) != v13 + 2 || (_QWORD *)*v69 != v13 + 2 )
                      goto LABEL_173;
                    *v69 = v68;
                    *(_QWORD *)(v68 + 8) = v69;
                  }
                  v70 = *(_QWORD *)v22;
                  if ( *(_QWORD *)v22 )
                  {
                    v71 = *(_QWORD **)(v22 + 8);
                    if ( *(_QWORD *)(v70 + 8) != v22 || *v71 != v22 )
                      goto LABEL_173;
                    *v71 = v70;
                    *(_QWORD *)(v70 + 8) = v71;
                  }
                  v72 = *(_QWORD *)(v22 + 16);
                  v73 = *(_QWORD **)(v22 + 24);
                  if ( *(_QWORD *)(v72 + 8) == v22 + 16 && *v73 == v22 + 16 )
                  {
                    *v73 = v72;
                    *(_QWORD *)(v72 + 8) = v73;
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v74 = KeGetCurrentIrql();
                        if ( v74 <= 0xFu && v65 <= 0xFu && v74 >= 2u )
                        {
                          v75 = KeGetCurrentPrcb();
                          v76 = v75->SchedulerAssist;
                          v77 = ~(unsigned __int16)(-1LL << (v65 + 1));
                          v63 = (v77 & v76[5]) == 0;
                          v76[5] &= v77;
                          if ( v63 )
                            KiRemoveSystemWorkPriorityKick((__int64)v75);
                        }
                      }
                    }
                    __writecr8(v65);
                    UNLOCK_POST_LIST();
                    CmpUnlockRegistry(v79, v78);
                    v19 = *(_DWORD *)(*(_QWORD *)(v22 + 64) + 24LL);
                    v80 = v114;
                    v114->Status = v19;
                    if ( v103 )
                      HIDWORD(v80->Pointer) = 0;
                    else
                      v80->Information = 0LL;
                    v35 = 0;
                    if ( v102 )
                      CmpFreePostBlock(v13);
                    CmpFreePostBlock((PVOID)v22);
LABEL_38:
                    HalPutDmaAdapter(DmaAdapter);
                    if ( !v35 )
                      return v19;
                    goto LABEL_39;
                  }
LABEL_173:
                  __fastfail(3u);
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v81 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v102 )
                {
                  v82 = *v13;
                  if ( *v13 )
                  {
                    v83 = (_QWORD *)v13[1];
                    if ( *(_QWORD **)(v82 + 8) != v13 || (_QWORD *)*v83 != v13 )
                      goto LABEL_173;
                    *v83 = v82;
                    *(_QWORD *)(v82 + 8) = v83;
                  }
                  v84 = v13[2];
                  v85 = (_QWORD *)v13[3];
                  if ( *(_QWORD **)(v84 + 8) != v13 + 2 || (_QWORD *)*v85 != v13 + 2 )
                    goto LABEL_173;
                  *v85 = v84;
                  *(_QWORD *)(v84 + 8) = v85;
                }
                v86 = *(_QWORD *)v22;
                if ( *(_QWORD *)v22 )
                {
                  v87 = *(_QWORD **)(v22 + 8);
                  if ( *(_QWORD *)(v86 + 8) != v22 || *v87 != v22 )
                    goto LABEL_173;
                  *v87 = v86;
                  *(_QWORD *)(v86 + 8) = v87;
                }
                v88 = *(_QWORD *)(v22 + 16);
                v89 = *(_QWORD **)(v22 + 24);
                if ( *(_QWORD *)(v88 + 8) != v22 + 16 || *v89 != v22 + 16 )
                  goto LABEL_173;
                *v89 = v88;
                *(_QWORD *)(v88 + 8) = v89;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v90 = KeGetCurrentIrql();
                    if ( v90 <= 0xFu && v81 <= 0xFu && v90 >= 2u )
                    {
                      v91 = KeGetCurrentPrcb();
                      v92 = v91->SchedulerAssist;
                      v93 = ~(unsigned __int16)(-1LL << (v81 + 1));
                      v63 = (v93 & v92[5]) == 0;
                      v92[5] &= v93;
                      if ( v63 )
                        KiRemoveSystemWorkPriorityKick((__int64)v91);
                    }
                  }
                }
                __writecr8(v81);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry(v95, v94);
                if ( !v102 )
                  goto LABEL_93;
                goto LABEL_92;
              }
              CmUnlockHive((__int64)v108);
            }
            v28 = (__int64)(*p_DmaOperations)->AllocateAdapterChannel;
            goto LABEL_31;
          }
          UNLOCK_POST_LIST();
          if ( Handlea != 1 )
          {
            if ( Handlea != 2 )
            {
              CmUnlockHive((__int64)(*p_DmaOperations)->AllocateAdapterChannel);
              v50 = (__int64)v108;
              goto LABEL_100;
            }
            CmUnlockHive((__int64)v108);
          }
          v50 = (__int64)(*p_DmaOperations)->AllocateAdapterChannel;
LABEL_100:
          CmUnlockHive(v50);
          v51 = (ULONG_PTR)*p_DmaOperations;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v51, v20->DmaOperations);
          else
            CmpUnlockKcb(v51);
          CmpUnlockRegistry(v53, v52);
          if ( v110 )
            HalPutDmaAdapter(v110);
          if ( Count != 1 )
            goto LABEL_37;
          v49 = v13;
          goto LABEL_94;
        }
      }
      v46 = (ULONG_PTR)*p_DmaOperations;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v46, v20->DmaOperations);
      else
        CmpUnlockKcb(v46);
      CmpUnlockRegistry(v48, v47);
      if ( v110 )
        HalPutDmaAdapter(v110);
      if ( Count == 1 )
        CmpFreePostBlock(v13);
      CmpFreePostBlock((PVOID)v22);
      v19 = -1073741444;
      goto LABEL_37;
    }
    if ( !Asynchronous )
      goto LABEL_10;
    v14 = 3;
    v104 = 3;
    if ( !Count )
      goto LABEL_10;
  }
LABEL_83:
  CmpReleaseShutdownRundown(v16, v15, 1LL);
  return -1073741811;
}
