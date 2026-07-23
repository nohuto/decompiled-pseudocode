/*
 * XREFs of CcInitializeCacheMapEx @ 0x14022D790
 * Callers:
 *     CcInitializeCacheMap @ 0x140321BE0 (CcInitializeCacheMap.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FF48C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeVolumeCacheMap @ 0x1403043CC (CcInitializeVolumeCacheMap.c)
 *     CcGetPartitionWithCreate @ 0x14030A8F0 (CcGetPartitionWithCreate.c)
 *     MmDisableModifiedWriteOfSection @ 0x14030F740 (MmDisableModifiedWriteOfSection.c)
 *     FsRtlIsNtstatusExpected @ 0x140312560 (FsRtlIsNtstatusExpected.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObDeleteCapturedInsertInfo @ 0x14068DEB0 (ObDeleteCapturedInsertInfo.c)
 *     CcCreateVacbArray @ 0x1406C9240 (CcCreateVacbArray.c)
 *     MmCreateCacheManagerSection @ 0x1406CC9C8 (MmCreateCacheManagerSection.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapEx(_BYTE *Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  PVOID v8; // r14
  __int64 Partition; // r13
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // rbx
  _QWORD *FileObjectExtension; // rcx
  _KSPIN_LOCK_QUEUE *v16; // r8
  int v17; // eax
  int v18; // eax
  KSPIN_LOCK *v19; // r15
  unsigned int v20; // eax
  __int16 v21; // cx
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rdi
  _WORD *v25; // rdi
  int v26; // r14d
  PVOID v27; // r15
  int PagePriorityThread; // ecx
  _QWORD *v29; // rax
  int v30; // ecx
  _QWORD *v31; // rdx
  int v32; // edi
  int v33; // esi
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  NTSTATUS v37; // edi
  _DWORD *v38; // rax
  unsigned int v39; // eax
  NTSTATUS v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rbx
  __int64 v44; // rdi
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdi
  bool v52; // zf
  __int64 v53; // rax
  struct _KEVENT *v54; // rcx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rbx
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v68; // eax
  _QWORD *v69; // rax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned __int64 v82; // rdi
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  int v91; // esi
  char *PoolWithTag; // rax
  unsigned __int64 v93; // rdi
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  unsigned __int64 v98; // rdi
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  _QWORD *v103; // rax
  unsigned __int64 v104; // rdi
  unsigned __int8 v105; // al
  struct _KPRCB *v106; // r10
  _DWORD *v107; // r9
  int v108; // eax
  unsigned __int64 v109; // rdi
  unsigned __int8 v110; // al
  struct _KPRCB *v111; // r10
  _DWORD *v112; // r9
  int v113; // eax
  NTSTATUS v114; // edi
  BOOLEAN IsNtstatusExpected; // al
  int v116; // ecx
  unsigned __int8 v117; // al
  struct _KPRCB *v118; // r10
  _DWORD *v119; // r9
  int v120; // eax
  unsigned __int8 v121; // al
  _DWORD *v122; // r9
  int v123; // eax
  unsigned __int64 v124; // r14
  unsigned __int8 v125; // al
  struct _KPRCB *v126; // r10
  _DWORD *v127; // r9
  int v128; // eax
  unsigned __int64 v129; // r14
  unsigned __int8 v130; // al
  struct _KPRCB *v131; // r10
  _DWORD *v132; // r9
  int v133; // eax
  unsigned int v134; // eax
  int v135; // eax
  unsigned __int8 v136; // al
  struct _KPRCB *v137; // r10
  _DWORD *v138; // r9
  int v139; // eax
  int v140; // ecx
  unsigned __int8 v141; // al
  _DWORD *v142; // r9
  int v143; // eax
  struct _KEVENT *v144; // rcx
  unsigned __int64 v145; // rbx
  unsigned __int8 v146; // al
  struct _KPRCB *v147; // r10
  _DWORD *v148; // r9
  int v149; // eax
  unsigned __int64 v150; // rbx
  unsigned __int8 v151; // al
  struct _KPRCB *v152; // r9
  _DWORD *v153; // r8
  int v154; // eax
  unsigned __int64 v155; // rcx
  __int64 v156; // rdi
  unsigned __int8 v157; // al
  struct _KPRCB *v158; // r10
  _DWORD *v159; // r9
  int v160; // eax
  unsigned __int8 v161; // al
  struct _KPRCB *v162; // r9
  _DWORD *v163; // r8
  int v164; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE v166; // [rsp+48h] [rbp-61h] BYREF
  int v167; // [rsp+60h] [rbp-49h]
  int v168; // [rsp+64h] [rbp-45h]
  unsigned int v169; // [rsp+68h] [rbp-41h]
  unsigned int v170; // [rsp+6Ch] [rbp-3Dh]
  PVOID v171; // [rsp+70h] [rbp-39h]
  PVOID P; // [rsp+78h] [rbp-31h]
  int v173; // [rsp+80h] [rbp-29h]
  PVOID Objecta; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int128 v175; // [rsp+90h] [rbp-19h]
  __int64 v176; // [rsp+A0h] [rbp-9h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-1h]
  char v178; // [rsp+100h] [rbp+57h]
  NTSTATUS Status; // [rsp+108h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v169 = 0;
  v8 = 0LL;
  P = 0LL;
  Partition = 0LL;
  Process = CurrentThread->ApcState.Process;
  v178 = 0;
  v168 = 0;
  v167 = 0;
  v173 = 0;
  v171 = 0LL;
  Status = 0;
  Objecta = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v166, 0, sizeof(v166));
  if ( CcDbgDisableDAX )
    v170 = a6 & 0xFFFFFFFE;
  else
    v170 = a6;
  v10 = *a2;
  v11 = *(_QWORD *)a2;
  v176 = *((_QWORD *)a2 + 2);
  v175 = __PAIR128__(*((unsigned __int64 *)&v10 + 1), v11);
  if ( !v11 )
  {
    LODWORD(v175) = 1;
    v11 = v175;
  }
  v12 = CurrentThread->MiscFlags & 0x400;
  if ( Object[75] )
  {
    *(_QWORD *)&v175 = v11 + 0xFFFFF;
    v13 = (v11 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v175 = v11 + 0x3FFFF;
    v13 = (v11 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v175) = v13;
  if ( !*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL) )
    goto LABEL_59;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *((_QWORD *)Object + 6) )
      break;
    v14 = *(_DWORD **)(*((_QWORD *)Object + 5) + 8LL);
    if ( v14 )
    {
      Partition = CcGetPartition(*(_QWORD *)(*((_QWORD *)Object + 5) + 8LL));
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(Object, 8LL);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(Partition + 8) )
      {
        v166.LockQueue.Next = v16;
        v166.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)(Partition + 128));
        v63 = v14[1];
        if ( !v63 || v63 == v14[134] )
        {
          Status = -1073741608;
          LOBYTE(v62) = 1;
          CcScheduleLazyWriteScan(Partition, v62, 0LL);
          v178 = 1;
        }
        else
        {
          Status = -1073740277;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_244;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_244;
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 0xFu )
          goto LABEL_244;
        if ( LockHandle.OldIrql > 0xFu )
          goto LABEL_244;
        if ( CurrentIrql < 2u )
          goto LABEL_244;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v52 = (v68 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v68;
        if ( !v52 )
          goto LABEL_244;
        goto LABEL_121;
      }
      v166.LockQueue.Next = v16;
      v166.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)(Partition + 128));
      if ( (*((_DWORD *)Object + 20) & 0x20) == 0 )
        v14[38] &= ~0x40u;
      v17 = v14[38];
      if ( (v17 & 0x200000) != 0 && v12 )
        v14[38] = v17 & 0xFFDFFFFF;
      v18 = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
      if ( v18 )
        v14[128] = v18;
LABEL_18:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
      Partition = CcGetPartition(v14);
      v19 = (KSPIN_LOCK *)(Partition + 128);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v166);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v14[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v20 = v14[38] & 0xFFFFFFEF;
      v21 = v14[38] & 0xFFEF;
      v14[38] = v20;
      v22 = v21 & 0x100;
      if ( *((_QWORD *)v14 + 11) )
      {
        if ( !v22 )
        {
          ++v14[1];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
          v23 = v166.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v117 = KeGetCurrentIrql();
              if ( v117 <= 0xFu && v166.OldIrql <= 0xFu && v117 >= 2u )
              {
                v118 = KeGetCurrentPrcb();
                v119 = v118->SchedulerAssist;
                v120 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
                v52 = (v120 & v119[5]) == 0;
                v119[5] &= v120;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick(v118);
              }
            }
          }
          __writecr8(v23);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v24 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v121 = KeGetCurrentIrql();
              if ( v121 <= 0xFu && LockHandle.OldIrql <= 0xFu && v121 >= 2u )
              {
                v88 = KeGetCurrentPrcb();
                v122 = v88->SchedulerAssist;
                v123 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v52 = (v123 & v122[5]) == 0;
                v122[5] &= v123;
                if ( v52 )
                  goto LABEL_207;
              }
            }
          }
          goto LABEL_23;
        }
LABEL_160:
        if ( !*((_QWORD *)v14 + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)v14 + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
            v93 = v166.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v94 = KeGetCurrentIrql();
                if ( v94 <= 0xFu && v166.OldIrql <= 0xFu && v94 >= 2u )
                {
                  v95 = KeGetCurrentPrcb();
                  v96 = v95->SchedulerAssist;
                  v97 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
                  v52 = (v97 & v96[5]) == 0;
                  v96[5] &= v97;
                  if ( v52 )
                    KiRemoveSystemWorkPriorityKick(v95);
                }
              }
            }
            __writecr8(v93);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v98 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v99 = KeGetCurrentIrql();
                if ( v99 <= 0xFu && LockHandle.OldIrql <= 0xFu && v99 >= 2u )
                {
                  v100 = KeGetCurrentPrcb();
                  v101 = v100->SchedulerAssist;
                  v102 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v52 = (v102 & v101[5]) == 0;
                  v101[5] &= v102;
                  if ( v52 )
                    KiRemoveSystemWorkPriorityKick(v100);
                }
              }
            }
            __writecr8(v98);
            v37 = -1073741670;
            Status = -1073741670;
LABEL_245:
            v135 = v167;
LABEL_246:
            v91 = 0;
            v26 = 0;
            if ( v135 )
            {
              v8 = P;
              goto LABEL_248;
            }
            v27 = v171;
LABEL_32:
            v32 = v26;
            v33 = v26;
            if ( v14 )
            {
              if ( !v26 )
              {
                KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
                v26 = 1;
              }
              if ( Partition && !v32 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v166);
                v33 = 1;
              }
              if ( !v173 && !v14[28] && v14[1] )
                CcInsertIntoCleanSharedCacheMapList(v14);
              v34 = *((_QWORD *)v14 + 34);
              if ( v34 )
              {
                do
                {
                  v155 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
                  v156 = *(_QWORD *)v155;
                  KeSetEvent((PRKEVENT)(v155 + 8), 0, 0);
                  v34 = v156;
                }
                while ( v156 );
              }
              v14[38] &= ~0x10000u;
              *((_QWORD *)v14 + 34) = 0LL;
            }
            if ( v33 )
            {
LABEL_45:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
              v35 = v166.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v157 = KeGetCurrentIrql();
                  if ( v157 <= 0xFu && v166.OldIrql <= 0xFu && v157 >= 2u )
                  {
                    v158 = KeGetCurrentPrcb();
                    v159 = v158->SchedulerAssist;
                    v160 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
                    v52 = (v160 & v159[5]) == 0;
                    v159[5] &= v160;
                    if ( v52 )
                      KiRemoveSystemWorkPriorityKick(v158);
                  }
                }
              }
              __writecr8(v35);
            }
            if ( v26 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v36 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v161 = KeGetCurrentIrql();
                  if ( v161 <= 0xFu && LockHandle.OldIrql <= 0xFu && v161 >= 2u )
                  {
                    v162 = KeGetCurrentPrcb();
                    v163 = v162->SchedulerAssist;
                    v164 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v52 = (v164 & v163[5]) == 0;
                    v163[5] &= v164;
                    if ( v52 )
                      KiRemoveSystemWorkPriorityKick(v162);
                  }
                }
              }
              __writecr8(v36);
            }
            v37 = Status;
            v8 = P;
LABEL_51:
            if ( v8 )
              ExFreePoolWithTag(v8, 0x63536343u);
            if ( v27 )
              ExFreePoolWithTag(v27, 0x63506343u);
            if ( Objecta )
              ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
            if ( v37 < 0 )
            {
              if ( v178 )
                KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
              RtlRaiseStatus(v37);
            }
            return;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v103 = PoolWithTag + 8;
          v103[1] = v103;
          *v103 = v103;
        }
        ++v14[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
        v104 = v166.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v105 = KeGetCurrentIrql();
            if ( v105 <= 0xFu && v166.OldIrql <= 0xFu && v105 >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              v107 = v106->SchedulerAssist;
              v108 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
              v52 = (v108 & v107[5]) == 0;
              v107[5] &= v108;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v106);
            }
          }
        }
        __writecr8(v104);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v109 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v110 = KeGetCurrentIrql();
            if ( v110 <= 0xFu && LockHandle.OldIrql <= 0xFu && v110 >= 2u )
            {
              v111 = KeGetCurrentPrcb();
              v112 = v111->SchedulerAssist;
              v113 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v52 = (v113 & v112[5]) == 0;
              v112[5] &= v113;
              if ( v52 )
                KiRemoveSystemWorkPriorityKick(v111);
            }
          }
        }
        __writecr8(v109);
        KeWaitForSingleObject(*((PVOID *)v14 + 22), Executive, 0, 0, 0LL);
        v114 = v14[39];
        if ( v114 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v114);
          v91 = v168;
          v116 = -1073741590;
          if ( IsNtstatusExpected )
            v116 = v114;
          v37 = v116;
LABEL_248:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v166);
          if ( v91 )
          {
            v144 = (struct _KEVENT *)*((_QWORD *)v14 + 22);
            if ( v144 )
              KeSetEvent(v144, 0, 0);
            v14[38] &= ~0x100u;
          }
          v52 = v14[1]-- == 1;
          if ( !v52 || (v14[38] & 0x20) != 0 || v14[28] )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
            v145 = v166.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v146 = KeGetCurrentIrql();
                if ( v146 <= 0xFu && v166.OldIrql <= 0xFu && v146 >= 2u )
                {
                  v147 = KeGetCurrentPrcb();
                  v148 = v147->SchedulerAssist;
                  v149 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
                  v52 = (v149 & v148[5]) == 0;
                  v148[5] &= v149;
                  if ( v52 )
                    KiRemoveSystemWorkPriorityKick(v147);
                }
              }
            }
            __writecr8(v145);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v150 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v151 = KeGetCurrentIrql();
                if ( v151 <= 0xFu && LockHandle.OldIrql <= 0xFu && v151 >= 2u )
                {
                  v152 = KeGetCurrentPrcb();
                  v153 = v152->SchedulerAssist;
                  v154 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v52 = (v154 & v153[5]) == 0;
                  v153[5] &= v154;
                  if ( v52 )
                    KiRemoveSystemWorkPriorityKick(v152);
                }
              }
            }
            __writecr8(v150);
            v27 = v171;
          }
          else
          {
            CcDeleteSharedCacheMap(v14, &LockHandle, &v166, 0LL);
            v27 = v171;
          }
          goto LABEL_51;
        }
LABEL_24:
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x63536343u);
          P = 0LL;
        }
        v25 = v14 + 94;
        if ( *((_WORD *)v14 + 188) )
          goto LABEL_94;
        while ( 1 )
        {
          v26 = 1;
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock(v19, &v166);
          if ( *((_QWORD *)Object + 6) )
            break;
          if ( !*v25 )
          {
            v27 = v171;
            goto LABEL_30;
          }
          if ( v171 )
          {
            v25 = v171;
            v27 = 0LL;
LABEL_30:
            memset(v25, 0, 0x78uLL);
            *((_QWORD *)v25 + 1) = Object;
            *v25 = 766;
            *((_DWORD *)v25 + 1) = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread((__int64)CurrentThread);
            v29 = v25 + 48;
            v30 = (*(_DWORD *)v25 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v25 + 10) = 0LL;
            *(_DWORD *)v25 ^= v30;
            v31 = (_QWORD *)*((_QWORD *)v14 + 29);
            if ( (_DWORD *)*v31 == v14 + 56 )
            {
              *v29 = v14 + 56;
              *((_QWORD *)v25 + 13) = v31;
              *v31 = v29;
              *((_QWORD *)v14 + 29) = v29;
              *((_QWORD *)Object + 6) = v25;
              goto LABEL_32;
            }
LABEL_223:
            __fastfail(3u);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
          v124 = v166.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v125 = KeGetCurrentIrql();
              if ( v125 <= 0xFu && v166.OldIrql <= 0xFu && v125 >= 2u )
              {
                v126 = KeGetCurrentPrcb();
                v127 = v126->SchedulerAssist;
                v128 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
                v52 = (v128 & v127[5]) == 0;
                v127[5] &= v128;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick(v126);
              }
            }
          }
          __writecr8(v124);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v129 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v130 = KeGetCurrentIrql();
              if ( v130 <= 0xFu && LockHandle.OldIrql <= 0xFu && v130 >= 2u )
              {
                v131 = KeGetCurrentPrcb();
                v132 = v131->SchedulerAssist;
                v133 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v52 = (v133 & v132[5]) == 0;
                v132[5] &= v133;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick(v131);
              }
            }
          }
          __writecr8(v129);
LABEL_94:
          v171 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !v171 )
          {
            v37 = -1073741670;
            v135 = 1;
            Status = -1073741670;
            goto LABEL_246;
          }
        }
        v134 = v14[1];
        if ( v134 <= 1 )
          KeBugCheckEx(0x34u, 0x7E3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v27 = v171;
        v14[1] = v134 - 1;
        goto LABEL_45;
      }
      if ( v22 )
        goto LABEL_160;
      ++v14[1];
      v14[38] = v20 | 0x100;
      v49 = *((_QWORD *)v14 + 22);
      if ( v49 )
      {
        *(_WORD *)v49 = 0;
        *(_BYTE *)(v49 + 2) = 6;
        *(_DWORD *)(v49 + 4) = 0;
        v69 = (_QWORD *)(v49 + 8);
        v69[1] = v69;
        *v69 = v69;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
      v50 = v166.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v70 = KeGetCurrentIrql();
          if ( v70 <= 0xFu && v166.OldIrql <= 0xFu && v70 >= 2u )
          {
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            v73 = ~(unsigned __int16)(-1LL << (v166.OldIrql + 1));
            v52 = (v73 & v72[5]) == 0;
            v72[5] &= v73;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v71);
          }
        }
      }
      __writecr8(v50);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v51 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && LockHandle.OldIrql <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v52 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v52 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
      }
      __writecr8(v51);
      v52 = *((_QWORD *)v14 + 21) == 0LL;
      v168 = 1;
      if ( v52 )
      {
        if ( !Objecta )
          KeBugCheckEx(0x34u, 0x693uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *((_QWORD *)v14 + 21) = Objecta;
        v53 = *((_QWORD *)Object + 3);
        Objecta = 0LL;
        if ( (*(_BYTE *)(v53 + 6) & 1) == 0 && !*((_QWORD *)Object + 4) )
        {
          MmDisableModifiedWriteOfSection(*((_QWORD *)Object + 5));
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v166.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v166.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)v19);
          v14[38] |= 0x200u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v55 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v78 = KeGetCurrentIrql();
              if ( v78 <= 0xFu && LockHandle.OldIrql <= 0xFu && v78 >= 2u )
              {
                v79 = KeGetCurrentPrcb();
                v80 = v79->SchedulerAssist;
                v81 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v52 = (v81 & v80[5]) == 0;
                v80[5] &= v81;
                if ( v52 )
                  KiRemoveSystemWorkPriorityKick(v79);
              }
            }
          }
          __writecr8(v55);
        }
        Status = CcCreateVacbArray(v14, v175);
        v37 = Status;
        if ( Status >= 0 )
        {
          if ( (v170 & 1) != 0 )
          {
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            v166.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
            v166.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)v19);
            v14[38] |= 0x40000000u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v82 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v83 = KeGetCurrentIrql();
                if ( v83 <= 0xFu && LockHandle.OldIrql <= 0xFu && v83 >= 2u )
                {
                  v84 = KeGetCurrentPrcb();
                  v85 = v84->SchedulerAssist;
                  v86 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v52 = (v86 & v85[5]) == 0;
                  v85[5] &= v86;
                  if ( v52 )
                    KiRemoveSystemWorkPriorityKick(v84);
                }
              }
            }
            __writecr8(v82);
          }
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v166.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v166.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)v19);
          v54 = (struct _KEVENT *)*((_QWORD *)v14 + 22);
          v14[38] &= ~0x100u;
          if ( v54 )
            KeSetEvent(v54, 0, 0);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v166);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v24 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v87 = KeGetCurrentIrql();
              if ( v87 <= 0xFu && LockHandle.OldIrql <= 0xFu && v87 >= 2u )
              {
                v88 = KeGetCurrentPrcb();
                v89 = v88->SchedulerAssist;
                v90 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v52 = (v90 & v89[5]) == 0;
                v89[5] &= v90;
                if ( v52 )
LABEL_207:
                  KiRemoveSystemWorkPriorityKick(v88);
              }
            }
          }
LABEL_23:
          __writecr8(v24);
          goto LABEL_24;
        }
      }
      else
      {
        v37 = -1073741811;
      }
      v91 = v168;
      goto LABEL_248;
    }
    if ( v8 )
    {
      v14 = v8;
      v8 = 0LL;
      P = 0LL;
      v44 = *((_QWORD *)v14 + 66);
      v166.LockQueue.Next = 0LL;
      v166.LockQueue.Lock = (unsigned __int64 *volatile)(v44 + 128);
      KxAcquireQueuedSpinLock((__int64)&v166, (volatile __int64 *)(v44 + 128));
      v45 = *(_QWORD **)(v44 + 24);
      v46 = v14 + 34;
      v47 = v44 + 16;
      if ( *v45 != v47 )
        goto LABEL_223;
      *((_QWORD *)v14 + 18) = v45;
      *v46 = v47;
      *v45 = v46;
      *(_QWORD *)(v47 + 8) = v46;
      v48 = *((_QWORD *)Object + 5);
      v173 = 1;
      *(_QWORD *)(v48 + 8) = v14;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      goto LABEL_18;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v57 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v52 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
    }
    __writecr8(v57);
LABEL_59:
    v38 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x228uLL, 0x63536343u);
    v14 = v38;
    if ( !v38 )
LABEL_289:
      RtlRaiseStatus(-1073741670);
    memset(v38, 0, 0x228uLL);
    v8 = v14;
    v39 = v169;
    P = v14;
    if ( (v170 & 1) != 0 )
    {
      v39 = v169 | 1;
      v169 |= 1u;
    }
    v40 = MmCreateCacheManagerSection(&Objecta, v175, v39, Object);
    Status = v40;
    if ( v40 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v140 = -1073740277;
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        v140 = -1073700856;
      Status = v140;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (v141 = KeGetCurrentIrql(), v141 > 0xFu)
        || LockHandle.OldIrql > 0xFu
        || v141 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v142 = CurrentPrcb->SchedulerAssist,
            v143 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)),
            v52 = (v143 & v142[5]) == 0,
            v142[5] &= v143,
            !v52) )
      {
LABEL_244:
        __writecr8(OldIrql);
        v37 = Status;
        goto LABEL_245;
      }
LABEL_121:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_244;
    }
    if ( v40 < 0 )
    {
      v37 = v40;
      v52 = FsRtlIsNtstatusExpected(v40) == 0;
      v135 = v167;
      if ( v52 )
      {
        v37 = -1073741590;
        Status = -1073741590;
      }
      goto LABEL_246;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    Partition = CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(qword_140C4E588
                                                               + 8LL
                                                               * (*(_WORD *)(**((_QWORD **)Object + 5) + 60LL) & 0x3FF))
                                                   + 176LL));
    if ( !Partition )
    {
      v37 = -1073741670;
      Status = -1073741670;
      goto LABEL_245;
    }
    v41 = *((_QWORD *)&v175 + 1);
    *v14 = 36176639;
    *((_QWORD *)v14 + 12) = Object;
    *((_QWORD *)v14 + 1) = v41;
    v42 = v176;
    *((_QWORD *)v14 + 5) = v176;
    *((_QWORD *)v14 + 6) = v42;
    v14[128] = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
    *((_QWORD *)v14 + 66) = Partition;
    Status = CcInitializeVolumeCacheMap(Object, v14 + 126);
    if ( Status < 0 )
      goto LABEL_289;
    v14[70] = 1;
    *((_QWORD *)v14 + 36) = 0LL;
    v14[74] = 0;
    *((_WORD *)v14 + 152) = 1;
    *((_BYTE *)v14 + 306) = 6;
    v14[77] = 0;
    *((_QWORD *)v14 + 40) = v14 + 78;
    *((_QWORD *)v14 + 39) = v14 + 78;
    *((_QWORD *)v14 + 13) = 0LL;
    if ( a3 )
      v14[38] |= 4u;
    if ( (*((_DWORD *)Object + 20) & 0x20) != 0 )
      v14[38] |= 0x40u;
    if ( !v12 )
      v14[38] |= 0x200000u;
    *((_QWORD *)v14 + 27) = a5;
    *((_QWORD *)v14 + 3) = v14 + 4;
    *((_QWORD *)v14 + 2) = v14 + 4;
    *((_QWORD *)v14 + 26) = a4;
    v43 = v14 + 56;
    v43[1] = v43;
    *v43 = v43;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v56 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v136 = KeGetCurrentIrql();
      if ( v136 <= 0xFu && LockHandle.OldIrql <= 0xFu && v136 >= 2u )
      {
        v137 = KeGetCurrentPrcb();
        v138 = v137->SchedulerAssist;
        v139 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v52 = (v139 & v138[5]) == 0;
        v138[5] &= v139;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v137);
      }
    }
  }
  __writecr8(v56);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
