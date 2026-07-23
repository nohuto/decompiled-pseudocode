/*
 * XREFs of ExAllocateHeapPool @ 0x140212080
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x140211FF0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     ExpAddTagForBigPages @ 0x140211B40 (ExpAddTagForBigPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14023BAA4 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14025E1A8 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpSegAlloc @ 0x1402CC910 (RtlpHpSegAlloc.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x1403094BC (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140309560 (RtlpHpLfhBucketUpdateStats.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     InterlockedPushListSList @ 0x140405370 (InterlockedPushListSList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpLogHeapFailure @ 0x140591B24 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasAppend @ 0x140592E70 (RtlpHpExtrasAppend.c)
 *     EtwTracePool @ 0x1405A6294 (EtwTracePool.c)
 *     ExCheckSingleFilter @ 0x1405B1BFC (ExCheckSingleFilter.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B834C (ExAllocateHeapSpecialPool.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D75E0 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall ExAllocateHeapPool(
        unsigned int PoolType,
        ULONG_PTR BugCheckParameter3,
        ULONG Tag,
        ULONG_PTR BugCheckParameter2,
        char a5)
{
  __int64 v5; // r14
  ULONG_PTR v6; // rbx
  unsigned int v7; // r15d
  ULONG_PTR v9; // rdi
  unsigned __int32 v10; // r8d
  __int64 v11; // r10
  POOL_TYPE v12; // r12d
  char v13; // r9
  ULONG v14; // esi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  int v24; // ecx
  unsigned __int64 v25; // r15
  unsigned int v26; // edx
  unsigned int v27; // r9d
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r10
  bool v31; // zf
  unsigned __int8 v32; // al
  void *v33; // rax
  int v34; // r9d
  __int64 Internal; // rdi
  unsigned __int32 v36; // r10d
  int v37; // edx
  int v38; // edx
  int v39; // r8d
  __int64 v40; // r11
  __int64 v41; // r13
  unsigned int v42; // ebx
  unsigned int v43; // r9d
  __int64 v44; // r15
  int v45; // eax
  volatile signed __int32 *v46; // r14
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned __int16 *v53; // rbx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned __int64 v60; // rax
  int v61; // edi
  unsigned int v62; // edi
  int v63; // eax
  unsigned __int64 v64; // r15
  unsigned int v65; // edx
  int v66; // r8d
  unsigned __int64 v67; // rcx
  int v68; // r9d
  __int64 v69; // rax
  int v70; // r13d
  __int64 v71; // r10
  __int64 v72; // rdx
  unsigned int v73; // edi
  int v74; // r9d
  __int64 v75; // rcx
  int v76; // eax
  volatile signed __int32 *v77; // r14
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // ecx
  unsigned int v83; // r8d
  unsigned int v84; // r8d
  unsigned __int64 OldIrql; // r14
  int v86; // eax
  _SLIST_ENTRY *v87; // rdx
  ULONG v88; // eax
  volatile signed __int32 v89; // r11d
  int updated; // eax
  __int64 v91; // rax
  volatile signed __int32 v92; // r11d
  unsigned __int64 v93; // r14
  unsigned __int64 v94; // r8
  __int64 HeapSpecialPool; // rax
  __int64 v96; // r9
  int v97; // ecx
  __int64 v98; // rax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r10
  _DWORD *v101; // r9
  int v102; // eax
  __int64 v103; // r9
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v110; // eax
  __int64 v111; // [rsp+40h] [rbp-A1h]
  unsigned int v112; // [rsp+40h] [rbp-A1h]
  int v113; // [rsp+48h] [rbp-99h]
  int v114; // [rsp+48h] [rbp-99h]
  int v115; // [rsp+48h] [rbp-99h]
  __int64 v116; // [rsp+48h] [rbp-99h]
  __int64 v117; // [rsp+50h] [rbp-91h]
  __int64 v118; // [rsp+50h] [rbp-91h]
  __int64 *v119; // [rsp+58h] [rbp-89h]
  int v120; // [rsp+58h] [rbp-89h]
  __int64 v121; // [rsp+58h] [rbp-89h]
  int v122; // [rsp+60h] [rbp-81h] BYREF
  int v123; // [rsp+64h] [rbp-7Dh] BYREF
  __int64 v124; // [rsp+68h] [rbp-79h] BYREF
  _SLIST_ENTRY **v125; // [rsp+70h] [rbp-71h] BYREF
  __int64 v126; // [rsp+78h] [rbp-69h] BYREF
  PSLIST_ENTRY ListEnd; // [rsp+80h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE v128; // [rsp+88h] [rbp-59h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v130; // [rsp+B8h] [rbp-29h] BYREF
  __int64 v131; // [rsp+C8h] [rbp-19h]
  __int128 v132; // [rsp+D0h] [rbp-11h] BYREF
  __int64 v133; // [rsp+E0h] [rbp-1h]
  __int64 v134; // [rsp+E8h] [rbp+7h]
  __int64 v135; // [rsp+F0h] [rbp+Fh]
  __int64 retaddr; // [rsp+138h] [rbp+57h]
  int v137; // [rsp+150h] [rbp+6Fh]

  v5 = 0LL;
  v6 = (unsigned int)BugCheckParameter2;
  v111 = 0LL;
  v7 = (PoolType >> 9) & 2;
  v9 = BugCheckParameter3;
  v10 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v10 = PoolType & 0xFFFFFFFB;
  v11 = 1LL;
  v12 = v10 | 0x200;
  if ( (ExpPoolFlags & 0x400) == 0 || (v10 & 0x201) != 0 )
    v12 = v10;
  if ( (ExpPoolFlags & 8) == 0 )
    goto LABEL_6;
  if ( (v12 & 0x80000080) != 0 )
  {
    v12 &= ~0x80u;
    if ( v12 < NonPagedPool )
    {
      v13 = a5;
      if ( (MmVerifierData & 1) != 0 )
        v13 = 1;
LABEL_7:
      v14 = Tag & 0x7FFFFFFF;
      v137 = v14;
      if ( !v14 )
      {
        v14 = 811884866;
        v137 = 811884866;
      }
      if ( BugCheckParameter3 <= 0xFE0
        && (MmSpecialPoolTag
         && BugCheckParameter3
         && ((unsigned int)ExCheckSingleFilter(v14, (unsigned int)MmSpecialPoolTag) || v94 >= v9 + 16 && v94 < v9 + 32)
         || ((unsigned __int8)v13 & (unsigned __int8)v11) != 0) )
      {
        HeapSpecialPool = ExAllocateHeapSpecialPool((unsigned int)v12, v9, v14);
        v111 = HeapSpecialPool;
        if ( HeapSpecialPool )
        {
          if ( _InterlockedIncrement(&ExpSpecialAllocations) == 1 )
            _InterlockedIncrement(&dword_140C4ED58);
          v5 = HeapSpecialPool;
          goto LABEL_67;
        }
        v11 = 1LL;
      }
      if ( !v9 )
        v9 = v11;
      if ( (_DWORD)v6 == 0x80000000 )
        goto LABEL_201;
      if ( (unsigned int)v6 >= (unsigned __int16)KeNumberNodes )
        KeBugCheckEx(0xC2u, 0xEuLL, v6, (int)v12 & 0xFFFFFFFFFFFFFF7FuLL, v14);
      if ( (_DWORD)v6 == 0x80000000 )
LABEL_201:
        LODWORD(v6) = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
      if ( (unsigned int)v6 >= dword_140C57F10 )
        LODWORD(v6) = 0;
      v15 = &qword_140C57F40[1048 * (unsigned int)v6];
      if ( v12 < NonPagedPool )
      {
        v17 = v15[3];
      }
      else if ( (v12 & 0x21) == 0x21 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 672) + 14560LL);
      }
      else
      {
        if ( (v12 & 1) != 0 )
        {
          v16 = 2LL;
        }
        else
        {
          v16 = 0LL;
          if ( (v12 & 0x200) != 0 )
            v16 = v11;
        }
        v17 = v15[v16];
      }
      if ( v9 <= 0xFE0 )
      {
        v18 = v9 + 16;
        if ( (v12 & 4) != 0 )
        {
          v18 += *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 7);
          if ( v18 > 0xFE0 )
          {
            v18 -= *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 7);
            LOWORD(v12) = v12 & 0xFFFB;
          }
        }
        v19 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v19 < 0x201 )
          goto LABEL_27;
        if ( v19 > 0xF80 )
          goto LABEL_27;
        v50 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)v19 >> 4));
        v19 = (unsigned __int16)RtlpBucketBlockSizes[v50];
        v51 = v50 - 33;
        v52 = *(_QWORD *)(v17 + 40);
        if ( !v52 )
          goto LABEL_27;
        v53 = (unsigned __int16 *)(v52 + ((v51 + 1LL) << 6));
        ++*((_DWORD *)v53 + 5);
        if ( !*v53 || (Internal = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v52 + ((v51 + 1LL) << 6)))) == 0 )
        {
          ++*((_DWORD *)v53 + 6);
          Internal = 0LL;
        }
        if ( !Internal )
        {
          v81 = v53[8];
          v82 = *v53;
          v125 = 0LL;
          ListEnd = 0LL;
          v83 = 0;
          if ( v82 < v81 )
            v83 = v81 - v82;
          v84 = v83 >> 1;
          if ( v84 )
          {
            v86 = RtlpHpVsContextMultiAlloc((int)v17 + 640, v19, v84 + 1, 0, (__int64)&v125, (__int64)&ListEnd);
            if ( v86 )
            {
              Internal = (__int64)v125;
              v87 = *v125;
              v125 = (_SLIST_ENTRY **)*v125;
              v88 = v86 - 1;
              if ( v88 )
                InterlockedPushListSList((PSLIST_HEADER)v53, v87, ListEnd, v88);
            }
            else
            {
              Internal = 0LL;
            }
          }
          else
          {
            Internal = 0LL;
          }
        }
        if ( (v12 & 0x400) != 0 )
        {
          if ( !Internal )
          {
LABEL_82:
            v11 = 1LL;
LABEL_27:
            v20 = *(_QWORD *)(v17 + 48);
            v21 = v20;
            v22 = (v7 | *(_DWORD *)(v17 + 20)) & 0x93000F0B;
            if ( (v20 || (v21 = qword_140C1DCA8) != 0) && v19 > v21 )
            {
              v103 = *(_QWORD *)(v17 + 56);
              if ( v103 )
                RtlpLogHeapFailure(20, v17, 0, v103, v19, v20);
              goto LABEL_181;
            }
            v113 = 0;
            v23 = 0LL;
            v126 = 0LL;
            if ( (v22 & 0x1000000) != 0 )
              goto LABEL_31;
            v24 = *(_DWORD *)(v17 + 24);
            v113 = v24;
            if ( !v24 )
              goto LABEL_31;
            v22 |= 8u;
            if ( (_WORD)v24 == 1
              && (int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))RtlpInterceptorRoutines)(
                        v17,
                        0LL,
                        (unsigned int)v11,
                        &v126) >= 0 )
            {
              v23 = v126;
              v11 = 1LL;
LABEL_31:
              v25 = v23 + v19;
              if ( (v22 & 0x10000000) != 0 )
                v25 += 16LL;
              if ( (v22 & 0x20000F08) != 0 )
                v25 = ((v25 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
              if ( !v25 )
                v25 = v11;
              if ( v25 < v19 || v19 > 0x7FFFFFFFFFFFFFFFLL )
              {
                Internal = 0LL;
              }
              else
              {
                v26 = v22 & 0x13000003;
                if ( v25 > (unsigned int)*(unsigned __int16 *)(v17 + 892) - 16 )
                  goto LABEL_128;
                v27 = v25;
                if ( (_DWORD)v19 != (_DWORD)v25 )
                  v27 = v25 + 2;
                v119 = (__int64 *)(v17
                                 + 832
                                 + 8 * (*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((v27 + 15) >> 4)) + 16LL));
                if ( (*v119 & 1) == 0
                  || (updated = RtlpHpLfhBucketUpdateStats(v17 + 832, v27, (unsigned int)v11),
                      v26 = v22 & 0x13000003,
                      updated) )
                {
                  v28 = 128LL;
                  v29 = *(unsigned __int8 *)(v17 + 888);
                  v30 = *v119;
                  if ( (RtlpHpLfhPerfFlags & 0x400) != 0 )
                    v28 = 192LL;
                  v134 = v28;
                  v31 = *(_BYTE *)(v30 + 2) == 1;
                  v135 = v28 + v29 - (((_BYTE)v29 - 1) & 7) + 7;
                  if ( v31 )
                    v32 = 0;
                  else
                    v32 = *(_BYTE *)(BYTE5(KeGetCurrentThread()[1].Ucb) + v28 + v30);
                  v33 = (void *)RtlpHpLfhSlotAllocate(
                                  (int)v17 + 832,
                                  v30,
                                  *(_QWORD *)(v28 + v29 - (((_BYTE)v29 - 1) & 7) + 7 + v30 + 8LL * v32),
                                  v19,
                                  v26);
                  v26 = v22 & 0x13000003;
                  Internal = (__int64)v33;
                  if ( v33 && (v22 & 2) != 0 )
                  {
                    memset(v33, 0, (unsigned int)v19);
                    v26 = v22 & 0x13000003;
                  }
                }
                else
                {
                  Internal = -1LL;
                }
                if ( Internal == -1 )
                {
LABEL_128:
                  if ( v25 > 0x20000 )
                  {
                    if ( v25 > *(unsigned int *)(v17 + 464) )
                    {
                      v105 = RtlpHpLargeAlloc(v17, v19, v25, v26);
                    }
                    else
                    {
                      v104 = v17 + 256;
                      if ( v25 > *(unsigned int *)(v17 + 272) )
                        v104 = v17 + 448;
                      v105 = RtlpHpSegAlloc(v104, v19, v25, v25, v26);
                    }
                    Internal = v105;
                  }
                  else
                  {
                    v123 = 0;
                    v133 = 0LL;
                    v132 = 0LL;
                    Internal = RtlpHpVsContextAllocateInternal(
                                 (int)v17 + 640,
                                 v19,
                                 v25,
                                 v26,
                                 (__int64)&v132,
                                 (__int64)&v123);
                    if ( v123 && (v22 & 1) == 0 )
                      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(v17 + 648), &v132);
                  }
                }
                if ( !Internal )
                  goto LABEL_181;
                if ( (v22 & 0x30000F08) != 0 )
                {
                  v106 = RtlpHpExtrasAppend(v17, Internal, v19, v34, v126, v22, 0);
                  if ( v113 )
                  {
                    *(_BYTE *)(v106 + 2) ^= (*(_BYTE *)(v106 + 2) ^ v113) & 0xF;
                    if ( (_WORD)v113 != 1
                      || (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                                v17,
                                Internal,
                                2LL,
                                v106 + 16) < 0 )
                    {
                      RtlpHpFreeHeap(v17, Internal, v22, 0LL, 0LL);
                      goto LABEL_181;
                    }
                  }
                }
              }
              if ( !Internal )
                goto LABEL_181;
              goto LABEL_54;
            }
LABEL_181:
            if ( v111 )
              RtlpHpFreeHeap(v17, v111, 0LL, 0LL, 0LL);
            goto LABEL_247;
          }
          memset((void *)Internal, 0, v19);
        }
        if ( Internal )
        {
LABEL_54:
          v36 = v137;
          *(_BYTE *)(Internal + 2) = v19 >> 4;
          *(_DWORD *)(Internal + 4) = v137;
          *(_BYTE *)Internal = 0;
          v37 = v12 & 0x6D | 2;
          *(_QWORD *)&LockHandle.OldIrql = 0LL;
          *(_BYTE *)(Internal + 3) = v37;
          LockHandle.LockQueue = 0LL;
          if ( v137 == PoolHitTag )
            __debugbreak();
          if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          {
            EtwTracePool(3616, v37, v137, Internal + 16, v19);
            LOBYTE(v37) = v12 & 0x6D | 2;
            v36 = v137;
          }
          v38 = v37 & 0x20;
          v114 = v38;
          if ( v38 )
          {
            v41 = ExpSessionPoolTrackTable;
            v39 = ExpSessionPoolTrackTableMask;
            v40 = ExpSessionPoolTrackTableSize;
          }
          else
          {
            v39 = PoolTrackTableMask;
            v40 = PoolTrackTableSize;
            v41 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
          }
          v117 = v40;
          v120 = v39;
          v42 = v39 & ((40543 * v36) ^ ((40543 * (unsigned __int64)v36) >> 32));
          v43 = v42;
          v112 = v42;
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v44 = 56LL * v42;
                v45 = *(_DWORD *)(v44 + v41);
                v46 = (volatile signed __int32 *)(v44 + v41);
                if ( v45 == v36 )
                {
                  if ( (v12 & 1) != 0 )
                  {
                    v47 = 8LL;
                    v48 = 10LL;
                  }
                  else
                  {
                    v47 = 2LL;
                    v48 = 4LL;
                  }
                  _InterlockedIncrement64((volatile signed __int64 *)&v46[v48]);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)&v46[v47], v19);
LABEL_65:
                  if ( (v12 & 4) != 0 )
                  {
                    *(_BYTE *)(Internal + 3) &= ~4u;
                    v54 = (*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 7) - 1) & (-16 - Internal);
                    if ( v54 )
                    {
                      v55 = Internal + v54;
                      v56 = (__int64)v54 >> 4;
                      *(_BYTE *)v55 = v56;
                      *(_BYTE *)(v55 + 2) = *(_BYTE *)(Internal + 2) - v56;
                      *(_BYTE *)(v55 + 1) = *(_BYTE *)(Internal + 1);
                      *(_BYTE *)(v55 + 3) = *(_BYTE *)(Internal + 3) | 4;
                      *(_DWORD *)(v55 + 4) = *(_DWORD *)(Internal + 4);
                      if ( (unsigned __int8)*(_WORD *)v55 > 1u )
                        *(_QWORD *)(Internal + 16) = ExpPoolQuotaCookie ^ v55;
                      Internal = v55;
                    }
                  }
                  v5 = Internal + 16;
LABEL_67:
                  if ( v5 )
                    return v5;
LABEL_247:
                  if ( (v12 & 0x10) != 0 )
                    RtlRaiseStatus(-1073741670);
                  return v5;
                }
                if ( !v45 )
                  break;
LABEL_72:
                v42 = v39 & (v42 + 1);
                if ( v42 == v43 )
                {
                  ExpInsertPoolTrackerExpansion(v36, v19, v12 & 0x6D | 2u);
                  goto LABEL_65;
                }
              }
              if ( !v38 )
                break;
LABEL_151:
              if ( v42 == v40 - 1 )
                goto LABEL_72;
              if ( v38 )
              {
                _InterlockedCompareExchange(v46, v36, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                if ( !*(_DWORD *)(PoolTrackTable + 56LL * v42) )
                {
                  *(_DWORD *)(PoolTrackTable + 56LL * v42) = v137;
                  *v46 = v137;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                OldIrql = LockHandle.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    CurrentIrql = KeGetCurrentIrql();
                    if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      SchedulerAssist = CurrentPrcb->SchedulerAssist;
                      v110 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                      v31 = (v110 & SchedulerAssist[5]) == 0;
                      SchedulerAssist[5] &= v110;
                      if ( v31 )
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                }
                __writecr8(OldIrql);
                v38 = v114;
                v36 = v137;
                v39 = v120;
                v43 = v112;
                v40 = v117;
              }
            }
            v89 = *(_DWORD *)(v44 + PoolTrackTable);
            if ( !v89 )
            {
              v40 = v117;
              goto LABEL_151;
            }
            *v46 = v89;
            v40 = v117;
          }
        }
        goto LABEL_82;
      }
      v57 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v57 >= 0x10000 || (((_WORD)v9 + 15) & 0xFF0u) > 0xFC0 )
        v57 = (v57 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v57 < v9 )
        goto LABEL_181;
      if ( (v57 & 0xFFF) == 0 && v57 <= *(unsigned int *)(v17 + 464) )
      {
        v80 = v17 + 256;
        if ( v57 > *(unsigned int *)(v17 + 272) )
          v80 = v17 + 448;
        v67 = RtlpHpSegAlloc(v80, v57, v57, v57, ((unsigned int)v12 >> 9) & 2);
        v111 = v67;
        goto LABEL_114;
      }
      v58 = *(_QWORD *)(v17 + 48);
      v59 = 0LL;
      v60 = v58;
      v61 = v7 | *(_DWORD *)(v17 + 20);
      v124 = 0LL;
      v62 = v61 & 0x93000F0B;
      if ( (v58 || (v60 = qword_140C1DCA8) != 0) && v57 > v60 )
      {
        v96 = *(_QWORD *)(v17 + 56);
        if ( v96 )
          RtlpLogHeapFailure(20, v17, 0, v96, v57, v58);
        goto LABEL_179;
      }
      v115 = 0;
      if ( (v62 & 0x1000000) == 0 )
      {
        v63 = *(_DWORD *)(v17 + 24);
        v115 = v63;
        if ( v63 )
        {
          v62 |= 8u;
          if ( (_WORD)v63 != 1
            || (int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))RtlpInterceptorRoutines)(
                      v17,
                      0LL,
                      (unsigned int)v11,
                      &v124) < 0 )
          {
LABEL_179:
            v67 = 0LL;
            v111 = 0LL;
LABEL_114:
            if ( !v67 )
              goto LABEL_247;
            if ( !(unsigned int)ExpAddTagForBigPages(v67, v14, v57, v12, 0, 0) )
              goto LABEL_181;
            memset(&v128, 0, sizeof(v128));
            if ( v14 == PoolHitTag )
              __debugbreak();
            v69 = DWORD1(PerfGlobalGroupMask);
            if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
              v69 = EtwTracePool(3616, v12, v14, v111, v57);
            if ( (v12 & 0x20) != 0 )
            {
              v72 = ExpSessionPoolTrackTable;
              v70 = ExpSessionPoolTrackTableMask;
              v71 = ExpSessionPoolTrackTableSize;
            }
            else
            {
              LODWORD(v69) = KeGetPcr()->Prcb.Number;
              v70 = PoolTrackTableMask;
              v71 = PoolTrackTableSize;
              v72 = (__int64)*(&ExPoolTagTables + v69);
            }
            v116 = v71;
            v118 = v72;
            v73 = v70 & ((40543 * v14) ^ ((40543 * (unsigned __int64)v14) >> 32));
            v74 = v73;
            while ( 1 )
            {
              v75 = 56LL * v73;
              v76 = *(_DWORD *)(v75 + v72);
              v77 = (volatile signed __int32 *)(v75 + v72);
              v121 = v75;
              if ( v76 == v14 )
              {
                if ( (v12 & 1) != 0 )
                {
                  v78 = 8LL;
                  v79 = 10LL;
                }
                else
                {
                  v78 = 2LL;
                  v79 = 4LL;
                }
                _InterlockedIncrement64((volatile signed __int64 *)&v77[v79]);
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v77[v78], v57);
                v5 = v111;
                goto LABEL_67;
              }
              if ( v76 )
              {
LABEL_143:
                v73 = v70 & (v73 + 1);
                if ( v73 == v74 )
                {
                  ExpInsertPoolTrackerExpansion(v14, v57, (unsigned int)v12);
                  v5 = v111;
                  goto LABEL_67;
                }
              }
              else if ( (v12 & 0x20) != 0 || (v92 = *(_DWORD *)(v75 + PoolTrackTable)) == 0 )
              {
                if ( v73 == v71 - 1 )
                  goto LABEL_143;
                if ( (v12 & 0x20) != 0 )
                {
                  _InterlockedCompareExchange(v77, v14, 0);
                }
                else
                {
                  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v128);
                  if ( !*(_DWORD *)(v121 + PoolTrackTable) )
                  {
                    *(_DWORD *)(v121 + PoolTrackTable) = v14;
                    *v77 = v14;
                  }
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v128);
                  v93 = v128.OldIrql;
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v99 = KeGetCurrentIrql();
                      if ( v99 <= 0xFu && v128.OldIrql <= 0xFu && v99 >= 2u )
                      {
                        v100 = KeGetCurrentPrcb();
                        v101 = v100->SchedulerAssist;
                        v102 = ~(unsigned __int16)(-1LL << (v128.OldIrql + 1));
                        v31 = (v102 & v101[5]) == 0;
                        v101[5] &= v102;
                        if ( v31 )
                          KiRemoveSystemWorkPriorityKick(v100);
                      }
                    }
                  }
                  __writecr8(v93);
                  v72 = v118;
                  v74 = v70 & ((40543 * v14) ^ ((40543 * (unsigned __int64)v14) >> 32));
                  v71 = v116;
                }
              }
              else
              {
                *v77 = v92;
              }
            }
          }
          v59 = v124;
          v11 = 1LL;
        }
      }
      v64 = v59 + v57;
      if ( (v62 & 0x10000000) != 0 )
        v64 += 16LL;
      if ( (v62 & 0x20000F08) != 0 )
        v64 = ((v64 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      if ( !v64 )
        v64 = v11;
      if ( v64 < v57 || v57 > 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_179;
      v65 = v62 & 0x13000003;
      v66 = v64;
      if ( v64 <= (unsigned int)*(unsigned __int16 *)(v17 + 892) - 16 )
      {
        v111 = RtlpHpLfhContextAllocate(v17 + 832, (unsigned int)v57, (unsigned int)v64, v65);
        v67 = v111;
        v66 = v64;
        if ( v111 != -1 )
        {
LABEL_112:
          if ( v67 && (v62 & 0x30000F08) != 0 )
          {
            v98 = RtlpHpExtrasAppend(v17, v67, v57, v68, v124, v62, 0);
            if ( v115 )
            {
              *(_BYTE *)(v98 + 2) ^= (*(_BYTE *)(v98 + 2) ^ v115) & 0xF;
              if ( (_WORD)v115 == 1
                && (int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                          v17,
                          v111,
                          2LL,
                          v98 + 16) >= 0 )
              {
                v67 = v111;
              }
              else
              {
                RtlpHpFreeHeap(v17, v111, v62, 0LL, 0LL);
                v67 = 0LL;
                v111 = 0LL;
              }
            }
            else
            {
              v67 = v111;
            }
          }
          goto LABEL_114;
        }
        v65 = v62 & 0x13000003;
      }
      if ( v64 > 0x20000 )
      {
        if ( v64 <= *(unsigned int *)(v17 + 464) )
        {
          v97 = v17 + 256;
          if ( v64 > *(unsigned int *)(v17 + 272) )
            v97 = v17 + 448;
          v91 = RtlpHpSegAlloc(v97, v57, v64, v64, v65);
        }
        else
        {
          v91 = RtlpHpLargeAlloc(v17, v57, v64, v65);
        }
        v111 = v91;
        v67 = v91;
      }
      else
      {
        v122 = 0;
        v131 = 0LL;
        v130 = 0LL;
        v67 = RtlpHpVsContextAllocateInternal((int)v17 + 640, v57, v66, v65, (__int64)&v130, (__int64)&v122);
        v111 = v67;
        if ( v122 && (v62 & 1) == 0 )
        {
          RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(v17 + 648), &v130);
          v67 = v111;
        }
      }
      goto LABEL_112;
    }
LABEL_6:
    v13 = a5;
    goto LABEL_7;
  }
  return VeAllocatePoolWithTagPriority(v12, BugCheckParameter3, Tag, HighPoolPriority, retaddr);
}
