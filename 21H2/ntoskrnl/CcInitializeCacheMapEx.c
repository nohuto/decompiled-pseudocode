/*
 * XREFs of CcInitializeCacheMapEx @ 0x1402D2E10
 * Callers:
 *     CcInitializeCacheMap @ 0x1402507D0 (CcInitializeCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     CcInitializeVolumeCacheMap @ 0x1402332F0 (CcInitializeVolumeCacheMap.c)
 *     CcGetPartitionWithCreate @ 0x1402390C0 (CcGetPartitionWithCreate.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     MmDisableModifiedWriteOfSection @ 0x14025F9E0 (MmDisableModifiedWriteOfSection.c)
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402FD5C8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     CcCreateVacbArray @ 0x1405FA200 (CcCreateVacbArray.c)
 *     MmCreateCacheManagerSection @ 0x1405FBBF8 (MmCreateCacheManagerSection.c)
 *     ObDeleteCapturedInsertInfo @ 0x140667490 (ObDeleteCapturedInsertInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapEx(__int64 Object, __int128 *a2, char a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // r12
  PVOID v8; // r14
  __int64 Partition; // r13
  __int128 v10; // xmm1
  unsigned __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  char v14; // dl
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rbx
  _QWORD *FileObjectExtension; // rdx
  _KSPIN_LOCK_QUEUE *v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // eax
  char v23; // dl
  char v24; // r8
  KSPIN_LOCK *v25; // r15
  unsigned int v26; // eax
  __int16 v27; // cx
  int v28; // ecx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  _WORD *v31; // rdi
  int v32; // r14d
  PVOID v33; // r15
  int PagePriorityThread; // ecx
  _QWORD *v35; // rax
  int v36; // ecx
  _QWORD *v37; // rdx
  int v38; // edi
  int v39; // esi
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rbx
  NTSTATUS v43; // edi
  _DWORD *v44; // rax
  unsigned int v45; // eax
  NTSTATUS v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rbx
  __int64 v50; // rdi
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rdi
  bool v58; // zf
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  struct _KEVENT *v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v78; // eax
  _QWORD *v79; // rax
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned __int64 v94; // rdi
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  int v103; // esi
  char *PoolWithTag; // rax
  unsigned __int64 v105; // rdi
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  _DWORD *v108; // r9
  int v109; // eax
  unsigned __int64 v110; // rdi
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  _QWORD *v115; // rax
  unsigned __int64 v116; // rdi
  unsigned __int8 v117; // al
  struct _KPRCB *v118; // r10
  _DWORD *v119; // r9
  int v120; // eax
  unsigned __int64 v121; // rdi
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  _DWORD *v124; // r9
  int v125; // eax
  NTSTATUS v126; // edi
  BOOLEAN IsNtstatusExpected; // al
  int v128; // ecx
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r10
  _DWORD *v131; // r9
  int v132; // eax
  unsigned __int8 v133; // al
  _DWORD *v134; // r9
  int v135; // eax
  unsigned __int64 v136; // r14
  unsigned __int8 v137; // al
  struct _KPRCB *v138; // r10
  _DWORD *v139; // r9
  int v140; // eax
  unsigned __int64 v141; // r14
  unsigned __int8 v142; // al
  struct _KPRCB *v143; // r10
  _DWORD *v144; // r9
  int v145; // eax
  unsigned int v146; // eax
  int v147; // eax
  unsigned __int8 v148; // al
  struct _KPRCB *v149; // r10
  _DWORD *v150; // r9
  int v151; // eax
  int v152; // ecx
  unsigned __int8 v153; // al
  _DWORD *v154; // r9
  int v155; // eax
  struct _KEVENT *v156; // rcx
  unsigned __int64 v157; // rbx
  unsigned __int8 v158; // al
  struct _KPRCB *v159; // r10
  _DWORD *v160; // r9
  int v161; // eax
  unsigned __int64 v162; // rbx
  unsigned __int8 v163; // al
  struct _KPRCB *v164; // r9
  _DWORD *v165; // r8
  int v166; // eax
  unsigned __int64 v167; // rcx
  __int64 v168; // rdi
  unsigned __int8 v169; // al
  struct _KPRCB *v170; // r10
  _DWORD *v171; // r9
  int v172; // eax
  unsigned __int8 v173; // al
  struct _KPRCB *v174; // r9
  _DWORD *v175; // r8
  int v176; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE v178; // [rsp+48h] [rbp-61h] BYREF
  int v179; // [rsp+60h] [rbp-49h]
  int v180; // [rsp+64h] [rbp-45h]
  unsigned int v181; // [rsp+68h] [rbp-41h]
  unsigned int v182; // [rsp+6Ch] [rbp-3Dh]
  PVOID v183; // [rsp+70h] [rbp-39h]
  PVOID P; // [rsp+78h] [rbp-31h]
  int v185; // [rsp+80h] [rbp-29h]
  PVOID Objecta; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int128 v187; // [rsp+90h] [rbp-19h]
  __int64 v188; // [rsp+A0h] [rbp-9h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-1h]
  char v190; // [rsp+100h] [rbp+57h]
  NTSTATUS Status; // [rsp+108h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v181 = 0;
  v8 = 0LL;
  P = 0LL;
  Partition = 0LL;
  Process = CurrentThread->ApcState.Process;
  v190 = 0;
  v180 = 0;
  v179 = 0;
  v185 = 0;
  v183 = 0LL;
  Status = 0;
  Objecta = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v178, 0, sizeof(v178));
  if ( CcDbgDisableDAX )
    v182 = a6 & 0xFFFFFFFE;
  else
    v182 = a6;
  v10 = *a2;
  v11 = *(_QWORD *)a2;
  v188 = *((_QWORD *)a2 + 2);
  v187 = __PAIR128__(*((unsigned __int64 *)&v10 + 1), v11);
  if ( !v11 )
  {
    LODWORD(v187) = 1;
    v11 = v187;
  }
  v12 = CurrentThread->MiscFlags & 0x400;
  if ( *(_BYTE *)(Object + 75) )
  {
    *(_QWORD *)&v187 = v11 + 0xFFFFF;
    v13 = (v11 + 0xFFFFF) & 0xFFF00000;
  }
  else
  {
    *(_QWORD *)&v187 = v11 + 0x3FFFF;
    v13 = (v11 + 0x3FFFF) & 0xFFFC0000;
  }
  LODWORD(v187) = v13;
  if ( !*(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) )
    goto LABEL_59;
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(Object + 48) )
      break;
    v17 = *(_DWORD **)(*(_QWORD *)(Object + 40) + 8LL);
    if ( v17 )
    {
      Partition = CcGetPartition(*(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL), v14, v15);
      FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(Object, 8LL);
      if ( FileObjectExtension && *FileObjectExtension != *(_QWORD *)(Partition + 8) )
      {
        v178.LockQueue.Next = v19;
        v178.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
        KxAcquireQueuedSpinLock(&v178, Partition + 128, v19, v20);
        v73 = v17[1];
        if ( !v73 || v73 == v17[134] )
        {
          Status = -1073741608;
          LOBYTE(v72) = 1;
          CcScheduleLazyWriteScan(Partition, v72, 0LL);
          v190 = 1;
        }
        else
        {
          Status = -1073740277;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
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
        v78 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v58 = (v78 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v78;
        if ( !v58 )
          goto LABEL_244;
        goto LABEL_121;
      }
      v178.LockQueue.Next = v19;
      v178.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      KxAcquireQueuedSpinLock(&v178, Partition + 128, v19, v20);
      if ( (*(_DWORD *)(Object + 80) & 0x20) == 0 )
        v17[38] &= ~0x40u;
      v21 = v17[38];
      if ( (v21 & 0x200000) != 0 && v12 )
        v17[38] = v21 & 0xFFDFFFFF;
      v22 = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
      if ( v22 )
        v17[128] = v22;
LABEL_18:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
      Partition = CcGetPartition(v17, v23, v24);
      v25 = (KSPIN_LOCK *)(Partition + 128);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v178);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v17[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v26 = v17[38] & 0xFFFFFFEF;
      v27 = v17[38] & 0xFFEF;
      v17[38] = v26;
      v28 = v27 & 0x100;
      if ( *((_QWORD *)v17 + 11) )
      {
        if ( !v28 )
        {
          ++v17[1];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
          v29 = v178.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v129 = KeGetCurrentIrql();
              if ( v129 <= 0xFu && v178.OldIrql <= 0xFu && v129 >= 2u )
              {
                v130 = KeGetCurrentPrcb();
                v131 = v130->SchedulerAssist;
                v132 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
                v58 = (v132 & v131[5]) == 0;
                v131[5] &= v132;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v130);
              }
            }
          }
          __writecr8(v29);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v30 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v133 = KeGetCurrentIrql();
              if ( v133 <= 0xFu && LockHandle.OldIrql <= 0xFu && v133 >= 2u )
              {
                v100 = KeGetCurrentPrcb();
                v134 = v100->SchedulerAssist;
                v135 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v58 = (v135 & v134[5]) == 0;
                v134[5] &= v135;
                if ( v58 )
                  goto LABEL_207;
              }
            }
          }
          goto LABEL_23;
        }
LABEL_160:
        if ( !*((_QWORD *)v17 + 22) )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
          *((_QWORD *)v17 + 22) = PoolWithTag;
          if ( !PoolWithTag )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
            v105 = v178.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v106 = KeGetCurrentIrql();
                if ( v106 <= 0xFu && v178.OldIrql <= 0xFu && v106 >= 2u )
                {
                  v107 = KeGetCurrentPrcb();
                  v108 = v107->SchedulerAssist;
                  v109 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
                  v58 = (v109 & v108[5]) == 0;
                  v108[5] &= v109;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v107);
                }
              }
            }
            __writecr8(v105);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v110 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v111 = KeGetCurrentIrql();
                if ( v111 <= 0xFu && LockHandle.OldIrql <= 0xFu && v111 >= 2u )
                {
                  v112 = KeGetCurrentPrcb();
                  v113 = v112->SchedulerAssist;
                  v114 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v58 = (v114 & v113[5]) == 0;
                  v113[5] &= v114;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v112);
                }
              }
            }
            __writecr8(v110);
            v43 = -1073741670;
            Status = -1073741670;
LABEL_245:
            v147 = v179;
LABEL_246:
            v103 = 0;
            v32 = 0;
            if ( v147 )
            {
              v8 = P;
              goto LABEL_248;
            }
            v33 = v183;
LABEL_32:
            v38 = v32;
            v39 = v32;
            if ( v17 )
            {
              if ( !v32 )
              {
                KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
                v32 = 1;
              }
              if ( Partition && !v38 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v178);
                v39 = 1;
              }
              if ( !v185 && !v17[28] && v17[1] )
                CcInsertIntoCleanSharedCacheMapList(v17);
              v40 = *((_QWORD *)v17 + 34);
              if ( v40 )
              {
                do
                {
                  v167 = v40 & 0xFFFFFFFFFFFFFFFEuLL;
                  v168 = *(_QWORD *)v167;
                  KeSetEvent((PRKEVENT)(v167 + 8), 0, 0);
                  v40 = v168;
                }
                while ( v168 );
              }
              v17[38] &= ~0x10000u;
              *((_QWORD *)v17 + 34) = 0LL;
            }
            if ( v39 )
            {
LABEL_45:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
              v41 = v178.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v169 = KeGetCurrentIrql();
                  if ( v169 <= 0xFu && v178.OldIrql <= 0xFu && v169 >= 2u )
                  {
                    v170 = KeGetCurrentPrcb();
                    v171 = v170->SchedulerAssist;
                    v172 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
                    v58 = (v172 & v171[5]) == 0;
                    v171[5] &= v172;
                    if ( v58 )
                      KiRemoveSystemWorkPriorityKick(v170);
                  }
                }
              }
              __writecr8(v41);
            }
            if ( v32 )
            {
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v42 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v173 = KeGetCurrentIrql();
                  if ( v173 <= 0xFu && LockHandle.OldIrql <= 0xFu && v173 >= 2u )
                  {
                    v174 = KeGetCurrentPrcb();
                    v175 = v174->SchedulerAssist;
                    v176 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v58 = (v176 & v175[5]) == 0;
                    v175[5] &= v176;
                    if ( v58 )
                      KiRemoveSystemWorkPriorityKick(v174);
                  }
                }
              }
              __writecr8(v42);
            }
            v43 = Status;
            v8 = P;
LABEL_51:
            if ( v8 )
              ExFreePoolWithTag(v8, 0x63536343u);
            if ( v33 )
              ExFreePoolWithTag(v33, 0x63506343u);
            if ( Objecta )
              ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
            if ( v43 < 0 )
            {
              if ( v190 )
                KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
              RtlRaiseStatus(v43);
            }
            return;
          }
          *(_WORD *)PoolWithTag = 0;
          PoolWithTag[2] = 6;
          *((_DWORD *)PoolWithTag + 1) = 0;
          v115 = PoolWithTag + 8;
          v115[1] = v115;
          *v115 = v115;
        }
        ++v17[1];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
        v116 = v178.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v117 = KeGetCurrentIrql();
            if ( v117 <= 0xFu && v178.OldIrql <= 0xFu && v117 >= 2u )
            {
              v118 = KeGetCurrentPrcb();
              v119 = v118->SchedulerAssist;
              v120 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
              v58 = (v120 & v119[5]) == 0;
              v119[5] &= v120;
              if ( v58 )
                KiRemoveSystemWorkPriorityKick(v118);
            }
          }
        }
        __writecr8(v116);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v121 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v122 = KeGetCurrentIrql();
            if ( v122 <= 0xFu && LockHandle.OldIrql <= 0xFu && v122 >= 2u )
            {
              v123 = KeGetCurrentPrcb();
              v124 = v123->SchedulerAssist;
              v125 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v58 = (v125 & v124[5]) == 0;
              v124[5] &= v125;
              if ( v58 )
                KiRemoveSystemWorkPriorityKick(v123);
            }
          }
        }
        __writecr8(v121);
        KeWaitForSingleObject(*((PVOID *)v17 + 22), Executive, 0, 0, 0LL);
        v126 = v17[39];
        if ( v126 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v126);
          v103 = v180;
          v128 = -1073741590;
          if ( IsNtstatusExpected )
            v128 = v126;
          v43 = v128;
LABEL_248:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v178);
          if ( v103 )
          {
            v156 = (struct _KEVENT *)*((_QWORD *)v17 + 22);
            if ( v156 )
              KeSetEvent(v156, 0, 0);
            v17[38] &= ~0x100u;
          }
          v58 = v17[1]-- == 1;
          if ( !v58 || (v17[38] & 0x20) != 0 || v17[28] )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
            v157 = v178.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v158 = KeGetCurrentIrql();
                if ( v158 <= 0xFu && v178.OldIrql <= 0xFu && v158 >= 2u )
                {
                  v159 = KeGetCurrentPrcb();
                  v160 = v159->SchedulerAssist;
                  v161 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
                  v58 = (v161 & v160[5]) == 0;
                  v160[5] &= v161;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v159);
                }
              }
            }
            __writecr8(v157);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v162 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v163 = KeGetCurrentIrql();
                if ( v163 <= 0xFu && LockHandle.OldIrql <= 0xFu && v163 >= 2u )
                {
                  v164 = KeGetCurrentPrcb();
                  v165 = v164->SchedulerAssist;
                  v166 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v58 = (v166 & v165[5]) == 0;
                  v165[5] &= v166;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v164);
                }
              }
            }
            __writecr8(v162);
            v33 = v183;
          }
          else
          {
            CcDeleteSharedCacheMap(v17, &LockHandle, &v178, 0LL);
            v33 = v183;
          }
          goto LABEL_51;
        }
LABEL_24:
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x63536343u);
          P = 0LL;
        }
        v31 = v17 + 94;
        if ( *((_WORD *)v17 + 188) )
          goto LABEL_94;
        while ( 1 )
        {
          v32 = 1;
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock(v25, &v178);
          if ( *(_QWORD *)(Object + 48) )
            break;
          if ( !*v31 )
          {
            v33 = v183;
            goto LABEL_30;
          }
          if ( v183 )
          {
            v31 = v183;
            v33 = 0LL;
LABEL_30:
            memset(v31, 0, 0x78uLL);
            *((_QWORD *)v31 + 1) = Object;
            *v31 = 766;
            *((_DWORD *)v31 + 1) = 4095;
            PagePriorityThread = (unsigned __int8)PsGetPagePriorityThread(CurrentThread);
            v35 = v31 + 48;
            v36 = (*(_DWORD *)v31 ^ (PagePriorityThread << 18)) & 0x1C0000;
            *((_QWORD *)v31 + 10) = 0LL;
            *(_DWORD *)v31 ^= v36;
            v37 = (_QWORD *)*((_QWORD *)v17 + 29);
            if ( (_DWORD *)*v37 == v17 + 56 )
            {
              *v35 = v17 + 56;
              *((_QWORD *)v31 + 13) = v37;
              *v37 = v35;
              *((_QWORD *)v17 + 29) = v35;
              *(_QWORD *)(Object + 48) = v31;
              goto LABEL_32;
            }
LABEL_223:
            __fastfail(3u);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
          v136 = v178.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v137 = KeGetCurrentIrql();
              if ( v137 <= 0xFu && v178.OldIrql <= 0xFu && v137 >= 2u )
              {
                v138 = KeGetCurrentPrcb();
                v139 = v138->SchedulerAssist;
                v140 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
                v58 = (v140 & v139[5]) == 0;
                v139[5] &= v140;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v138);
              }
            }
          }
          __writecr8(v136);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v141 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v142 = KeGetCurrentIrql();
              if ( v142 <= 0xFu && LockHandle.OldIrql <= 0xFu && v142 >= 2u )
              {
                v143 = KeGetCurrentPrcb();
                v144 = v143->SchedulerAssist;
                v145 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v58 = (v145 & v144[5]) == 0;
                v144[5] &= v145;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v143);
              }
            }
          }
          __writecr8(v141);
LABEL_94:
          v183 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x63506343u);
          if ( !v183 )
          {
            v43 = -1073741670;
            v147 = 1;
            Status = -1073741670;
            goto LABEL_246;
          }
        }
        v146 = v17[1];
        if ( v146 <= 1 )
          KeBugCheckEx(0x34u, 0x7DCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v33 = v183;
        v17[1] = v146 - 1;
        goto LABEL_45;
      }
      if ( v28 )
        goto LABEL_160;
      ++v17[1];
      v17[38] = v26 | 0x100;
      v55 = *((_QWORD *)v17 + 22);
      if ( v55 )
      {
        *(_WORD *)v55 = 0;
        *(_BYTE *)(v55 + 2) = 6;
        *(_DWORD *)(v55 + 4) = 0;
        v79 = (_QWORD *)(v55 + 8);
        v79[1] = v79;
        *v79 = v79;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
      v56 = v178.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v80 = KeGetCurrentIrql();
          if ( v80 <= 0xFu && v178.OldIrql <= 0xFu && v80 >= 2u )
          {
            v81 = KeGetCurrentPrcb();
            v82 = v81->SchedulerAssist;
            v83 = ~(unsigned __int16)(-1LL << (v178.OldIrql + 1));
            v58 = (v83 & v82[5]) == 0;
            v82[5] &= v83;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v81);
          }
        }
      }
      __writecr8(v56);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v57 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v84 = KeGetCurrentIrql();
          if ( v84 <= 0xFu && LockHandle.OldIrql <= 0xFu && v84 >= 2u )
          {
            v85 = KeGetCurrentPrcb();
            v86 = v85->SchedulerAssist;
            v87 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v58 = (v87 & v86[5]) == 0;
            v86[5] &= v87;
            if ( v58 )
              KiRemoveSystemWorkPriorityKick(v85);
          }
        }
      }
      __writecr8(v57);
      v58 = *((_QWORD *)v17 + 21) == 0LL;
      v180 = 1;
      if ( v58 )
      {
        if ( !Objecta )
          KeBugCheckEx(0x34u, 0x68CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *((_QWORD *)v17 + 21) = Objecta;
        v59 = *(_QWORD *)(Object + 24);
        Objecta = 0LL;
        if ( (*(_BYTE *)(v59 + 6) & 1) == 0 && !*(_QWORD *)(Object + 32) )
        {
          MmDisableModifiedWriteOfSection(*(_QWORD *)(Object + 40));
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v178.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v178.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock(&v178, v25, v63, v64);
          v17[38] |= 0x200u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v65 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v88 = KeGetCurrentIrql();
              if ( v88 <= 0xFu && LockHandle.OldIrql <= 0xFu && v88 >= 2u )
              {
                v89 = KeGetCurrentPrcb();
                v90 = v89->SchedulerAssist;
                v91 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v58 = (v91 & v90[5]) == 0;
                v90[5] &= v91;
                if ( v58 )
                  KiRemoveSystemWorkPriorityKick(v89);
              }
            }
          }
          __writecr8(v65);
        }
        Status = CcCreateVacbArray(v17, v187);
        v43 = Status;
        if ( Status >= 0 )
        {
          if ( (v182 & 1) != 0 )
          {
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            v178.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
            v178.LockQueue.Next = 0LL;
            KxAcquireQueuedSpinLock(&v178, v25, v92, v93);
            v17[38] |= 0x40000000u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v94 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v95 = KeGetCurrentIrql();
                if ( v95 <= 0xFu && LockHandle.OldIrql <= 0xFu && v95 >= 2u )
                {
                  v96 = KeGetCurrentPrcb();
                  v97 = v96->SchedulerAssist;
                  v98 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                  v58 = (v98 & v97[5]) == 0;
                  v97[5] &= v98;
                  if ( v58 )
                    KiRemoveSystemWorkPriorityKick(v96);
                }
              }
            }
            __writecr8(v94);
          }
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          v178.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
          v178.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock(&v178, v25, v60, v61);
          v62 = (struct _KEVENT *)*((_QWORD *)v17 + 22);
          v17[38] &= ~0x100u;
          if ( v62 )
            KeSetEvent(v62, 0, 0);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v178);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v30 = LockHandle.OldIrql;
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
                v58 = (v102 & v101[5]) == 0;
                v101[5] &= v102;
                if ( v58 )
LABEL_207:
                  KiRemoveSystemWorkPriorityKick(v100);
              }
            }
          }
LABEL_23:
          __writecr8(v30);
          goto LABEL_24;
        }
      }
      else
      {
        v43 = -1073741811;
      }
      v103 = v180;
      goto LABEL_248;
    }
    if ( v8 )
    {
      v17 = v8;
      v8 = 0LL;
      P = 0LL;
      v50 = *((_QWORD *)v17 + 66);
      v178.LockQueue.Next = 0LL;
      v178.LockQueue.Lock = (unsigned __int64 *volatile)(v50 + 128);
      KxAcquireQueuedSpinLock(&v178, v50 + 128, v15, v16);
      v51 = *(_QWORD **)(v50 + 24);
      v52 = v17 + 34;
      v53 = v50 + 16;
      if ( *v51 != v53 )
        goto LABEL_223;
      *((_QWORD *)v17 + 18) = v51;
      *v52 = v53;
      *v51 = v52;
      *(_QWORD *)(v53 + 8) = v52;
      v54 = *(_QWORD *)(Object + 40);
      v185 = 1;
      *(_QWORD *)(v54 + 8) = v17;
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
      goto LABEL_18;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v67 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v58 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v67);
LABEL_59:
    v44 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x228uLL, 0x63536343u);
    v17 = v44;
    if ( !v44 )
LABEL_289:
      RtlRaiseStatus(-1073741670);
    memset(v44, 0, 0x228uLL);
    v8 = v17;
    v45 = v181;
    P = v17;
    if ( (v182 & 1) != 0 )
    {
      v45 = v181 | 1;
      v181 |= 1u;
    }
    v46 = MmCreateCacheManagerSection(&Objecta, v187, v45, Object);
    Status = v46;
    if ( v46 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v152 = -1073740277;
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        v152 = -1073700856;
      Status = v152;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags
        || (KiIrqlFlags & 1) == 0
        || (v153 = KeGetCurrentIrql(), v153 > 0xFu)
        || LockHandle.OldIrql > 0xFu
        || v153 < 2u
        || (CurrentPrcb = KeGetCurrentPrcb(),
            v154 = CurrentPrcb->SchedulerAssist,
            v155 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1)),
            v58 = (v155 & v154[5]) == 0,
            v154[5] &= v155,
            !v58) )
      {
LABEL_244:
        __writecr8(OldIrql);
        v43 = Status;
        goto LABEL_245;
      }
LABEL_121:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      goto LABEL_244;
    }
    if ( v46 < 0 )
    {
      v43 = v46;
      v58 = FsRtlIsNtstatusExpected(v46) == 0;
      v147 = v179;
      if ( v58 )
      {
        v43 = -1073741590;
        Status = -1073741590;
      }
      goto LABEL_246;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    Partition = (__int64)CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(qword_140C4E688
                                                                        + 8LL
                                                                        * (*(_WORD *)(**(_QWORD **)(Object + 40) + 60LL) & 0x3FF))
                                                            + 176LL));
    if ( !Partition )
    {
      v43 = -1073741670;
      Status = -1073741670;
      goto LABEL_245;
    }
    v47 = *((_QWORD *)&v187 + 1);
    *v17 = 36176639;
    *((_QWORD *)v17 + 12) = Object;
    *((_QWORD *)v17 + 1) = v47;
    v48 = v188;
    *((_QWORD *)v17 + 5) = v188;
    *((_QWORD *)v17 + 6) = v48;
    v17[128] = HIDWORD(Process[1].ActiveProcessors.Bitmap[8]);
    *((_QWORD *)v17 + 66) = Partition;
    Status = CcInitializeVolumeCacheMap(Object, (__int64 **)v17 + 63);
    if ( Status < 0 )
      goto LABEL_289;
    v17[70] = 1;
    *((_QWORD *)v17 + 36) = 0LL;
    v17[74] = 0;
    *((_WORD *)v17 + 152) = 1;
    *((_BYTE *)v17 + 306) = 6;
    v17[77] = 0;
    *((_QWORD *)v17 + 40) = v17 + 78;
    *((_QWORD *)v17 + 39) = v17 + 78;
    *((_QWORD *)v17 + 13) = 0LL;
    if ( a3 )
      v17[38] |= 4u;
    if ( (*(_DWORD *)(Object + 80) & 0x20) != 0 )
      v17[38] |= 0x40u;
    if ( !v12 )
      v17[38] |= 0x200000u;
    *((_QWORD *)v17 + 27) = a5;
    *((_QWORD *)v17 + 3) = v17 + 4;
    *((_QWORD *)v17 + 2) = v17 + 4;
    *((_QWORD *)v17 + 26) = a4;
    v49 = v17 + 56;
    v49[1] = v49;
    *v49 = v49;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v66 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v148 = KeGetCurrentIrql();
      if ( v148 <= 0xFu && LockHandle.OldIrql <= 0xFu && v148 >= 2u )
      {
        v149 = KeGetCurrentPrcb();
        v150 = v149->SchedulerAssist;
        v151 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v58 = (v151 & v150[5]) == 0;
        v150[5] &= v151;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(v149);
      }
    }
  }
  __writecr8(v66);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x63536343u);
}
