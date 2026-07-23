/*
 * XREFs of CcPinFileData @ 0x140286B20
 * Callers:
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcPinRead @ 0x140631440 (CcPinRead.c)
 *     CcPinMappedData @ 0x140631980 (CcPinMappedData.c)
 *     CcMapData @ 0x140631E10 (CcMapData.c)
 *     CcPreparePinWrite @ 0x1406C41D0 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406C43A4 (CcMapDataCommon.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14023210C (CcAllocateInitializeBcb.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExAcquireSharedStarveExclusive @ 0x1402838F0 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x140285430 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140285BF0 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x140288400 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402888D0 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1404E5978 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E5B44 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405AEC9C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r13
  _QWORD *v13; // rbx
  volatile signed __int32 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v17; // rcx
  int SessionId; // eax
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // bl
  signed __int64 v22; // r15
  __int64 v23; // rsi
  unsigned __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v30; // rdi
  __int16 v31; // ax
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  char v34; // al
  __int64 v35; // rax
  _QWORD *v36; // r15
  volatile signed __int32 *v37; // rbx
  unsigned __int64 v38; // rsi
  unsigned __int32 v39; // eax
  struct _ERESOURCE *v40; // rdi
  __int16 v41; // cx
  __int64 v42; // rsi
  struct _KTHREAD *v43; // rdi
  NTSTATUS v44; // r8d
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rsi
  unsigned int v47; // r15d
  struct _KTHREAD *v48; // rdi
  unsigned __int8 v49; // al
  __int64 v50; // rcx
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rcx
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v55; // di
  unsigned __int64 v56; // rdi
  unsigned __int32 v57; // eax
  __int64 v58; // rbx
  struct _KEVENT *v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rdx
  struct _ERESOURCE *v62; // rcx
  int v63; // edx
  __int64 v64; // rbx
  unsigned int v65; // r8d
  __int16 v66; // ax
  unsigned int v67; // r15d
  unsigned int v68; // ebx
  char *v69; // rax
  struct _ERESOURCE *v70; // rcx
  __int64 v71; // r8
  unsigned __int8 v72; // dl
  struct _KTHREAD *v73; // r8
  unsigned __int8 v74; // al
  __int64 v75; // rax
  unsigned __int8 v76; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v79; // edx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  __int64 v85; // rbx
  struct _KEVENT *v86; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v88; // [rsp+30h] [rbp-D8h]
  int v89; // [rsp+34h] [rbp-D4h]
  _QWORD *P; // [rsp+38h] [rbp-D0h]
  __int64 v91; // [rsp+40h] [rbp-C8h] BYREF
  int v92; // [rsp+48h] [rbp-C0h] BYREF
  int v93; // [rsp+4Ch] [rbp-BCh]
  __int64 v94; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+58h] [rbp-B0h] BYREF
  int v96; // [rsp+60h] [rbp-A8h]
  int v97; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v98; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v99; // [rsp+70h] [rbp-98h]
  int v100; // [rsp+78h] [rbp-90h]
  int v101; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v102; // [rsp+80h] [rbp-88h]
  NTSTATUS v103; // [rsp+84h] [rbp-84h]
  int v104; // [rsp+88h] [rbp-80h]
  __int64 v105; // [rsp+90h] [rbp-78h]
  __int64 v106; // [rsp+98h] [rbp-70h]
  __int64 v107; // [rsp+A0h] [rbp-68h]
  __int64 v108; // [rsp+A8h] [rbp-60h]
  int v109; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v110; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v111; // [rsp+C0h] [rbp-48h]
  char v112; // [rsp+110h] [rbp+8h] BYREF
  _QWORD *v113; // [rsp+118h] [rbp+10h]
  unsigned int v114; // [rsp+120h] [rbp+18h]
  char v115; // [rsp+128h] [rbp+20h]

  v115 = a4;
  v114 = a3;
  v113 = a2;
  v10 = a6;
  v11 = 0LL;
  v98 = 0LL;
  v93 = 0;
  v92 = 0;
  v91 = 0LL;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v108 = v12;
  if ( (signed __int64)(*a2 + a3) > *(_QWORD *)(v12 + 32) )
    KeBugCheckEx(0x34u, 0x122uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  if ( (v10 & 4) != 0 )
  {
    v92 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v12, *a2);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v12, *a2, (unsigned int)&v91, (unsigned int)&v92, (v10 & 0x40) != 0, 0);
  }
  v14 = (volatile signed __int32 *)(v12 + 280);
  v101 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v12 + 280, KeGetCurrentIrql(), 0LL);
  v100 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v17, AbEntrySummary);
    v100 = v17;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    v11 = (__int64)&CurrentThread->LockEntries[v17];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v12 + 280);
LABEL_7:
  if ( v11 )
  {
    if ( (unsigned __int64)v14 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v14 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v11 + 40) = SessionId;
    *(_QWORD *)(v11 + 32) = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v12 + 280, &v101);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v19);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v14, 0) )
    ExpAcquireFastMutexContended(v12 + 280);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_QWORD *)(v12 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v12 + 328) = CurrentIrql;
  v89 = 1;
  v95 = 0LL;
  v94 = 0LL;
  v22 = *a2;
  v23 = HIDWORD(*a2);
  v24 = v114;
  v25 = *a2 + v114;
  v98 = v25;
  v105 = 0LL;
  v26 = v22 + 0x80000;
  v27 = *(_QWORD *)(v12 + 32);
  v28 = HIDWORD(v22);
  if ( v27 <= 0x200000 || (LODWORD(v28) = v23, (*(_DWORD *)(v12 + 152) & 0x200) == 0) )
  {
    LODWORD(v23) = v28;
    goto LABEL_115;
  }
  if ( v27 <= 0x2000000 )
  {
    if ( v26 < v27 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v12 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v27 >> 18)
                                        + 16 * (v26 >> 19));
      goto LABEL_23;
    }
LABEL_115:
    BcbListHeadLargeOffset = (_QWORD *)(v12 + 16);
    goto LABEL_23;
  }
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v12, v22 + 0x80000, 1);
  v24 = v114;
LABEL_23:
  v30 = *BcbListHeadLargeOffset - 16LL;
  v105 = v30;
  if ( (_DWORD)v23 || (v31 = *(_WORD *)v30, *(_WORD *)v30 != 765) || *(_DWORD *)(v30 + 36) )
  {
    while ( *(_WORD *)v30 == 765 && v22 < *(_QWORD *)(v30 + 32) )
    {
      v75 = *(_QWORD *)(v30 + 8);
      if ( v22 >= v75 )
      {
        v34 = 1;
        goto LABEL_34;
      }
      if ( v25 >= v75 )
        v25 = *(_QWORD *)(v30 + 8);
      v98 = v25;
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v105 = v30;
    }
  }
  else
  {
    v32 = v98;
    while ( v31 == 765 && (unsigned int)v22 < *(_DWORD *)(v30 + 32) )
    {
      v33 = *(_DWORD *)(v30 + 8);
      if ( (unsigned int)v22 >= v33 )
      {
        v34 = 1;
        goto LABEL_34;
      }
      if ( v32 >= v33 )
      {
        v32 = *(_DWORD *)(v30 + 8);
        LODWORD(v98) = v32;
        v25 = v98;
      }
      v30 = *(_QWORD *)(v30 + 16) - 16LL;
      v105 = v30;
      v31 = *(_WORD *)v30;
    }
  }
  v34 = 0;
LABEL_34:
  P = (_QWORD *)v30;
  if ( !v34 )
  {
    if ( (v10 & 8) != 0 )
    {
      v30 = 0LL;
      P = 0LL;
      v88 = 0;
      v36 = a8;
      goto LABEL_74;
    }
    v95 = v22;
    v64 = v25 - v22;
    v63 = v22 & 0xFFF;
    LODWORD(v64) = v63 + v64;
    v94 = v64;
    v65 = v63 + v92;
    v92 += v63;
    if ( (v115 || (*(_DWORD *)(v12 + 152) & 4) != 0) && (v66 = v22, !a5) )
    {
      v67 = v93;
    }
    else
    {
      v66 = v22;
      v67 = 2;
      v93 = 2;
      if ( !v63 )
      {
        if ( (unsigned int)v24 >= 0x1000 )
          v67 = 3;
        v93 = v67;
      }
      if ( (v64 & 0xFFF) == 0 )
      {
        v67 |= 4u;
        v93 = v67;
      }
    }
    if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
      v115 = 1;
    v68 = (v64 + 4095) & 0xFFFFF000;
    LODWORD(v94) = v68;
    *a8 -= v66 & 0xFFF;
    LODWORD(v95) = v95 & 0xFFFFF000;
    if ( v68 > v65 )
    {
      v68 = v65;
      LODWORD(v94) = v65;
    }
    v69 = CcAllocateInitializeBcb(v12, v30, &v95, &v94);
    v30 = (__int64)v69;
    P = v69;
    if ( (v10 & 1) != 0 )
    {
      if ( !v69 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v115 )
      {
        v70 = (struct _ERESOURCE *)(v69 + 72);
        if ( (v10 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v70, 0) )
            KeBugCheckEx(0x34u, 0x201F0uLL, v30, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v70, 0) )
        {
          KeBugCheckEx(0x34u, 0x201F7uLL, v30, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v89 = 0;
      if ( (v10 & 4) == 0 )
      {
        LOBYTE(v71) = 1;
        CcMapAndRead(v68, v67, v71, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
        if ( !*(_QWORD *)(v30 + 184) )
        {
          *(_QWORD *)(v30 + 184) = *a8;
          *(_QWORD *)(v30 + 56) = v91;
          v91 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
        *a8 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
      }
      v36 = a8;
      goto LABEL_73;
    }
    if ( !v69 )
    {
      v88 = 0;
      v36 = a8;
      goto LABEL_74;
    }
    if ( !v115 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v69 + 72), 0) )
      KeBugCheckEx(0x34u, 0x20257uLL, v30, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v89 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v68, v67, 0LL, *a8) )
    {
      v88 = 0;
      v36 = a8;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    v36 = a8;
    if ( !*(_QWORD *)(v30 + 184) )
    {
      *(_QWORD *)(v30 + 184) = *a8;
      *(_QWORD *)(v30 + 56) = v91;
      v91 = 0LL;
    }
    goto LABEL_134;
  }
  if ( (*(_DWORD *)(v12 + 152) & 0x200) == 0 )
    v115 = 1;
  if ( *(_QWORD *)(v30 + 184) )
  {
    if ( (v10 & 1) != 0 )
    {
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v89 = 0;
      if ( !v115 )
      {
        v62 = (struct _ERESOURCE *)(v30 + 72);
        if ( (v10 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v62, 1u);
        else
          ExAcquireSharedStarveExclusive(v62, 1u);
      }
    }
    else
    {
      if ( !v115 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
      {
        v30 = 0LL;
        P = 0LL;
        v88 = 0;
        v36 = a8;
        goto LABEL_74;
      }
      ++*(_DWORD *)(v30 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
      v89 = 0;
    }
    v36 = a8;
    *a8 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
    goto LABEL_73;
  }
  v35 = (unsigned int)(v22 - *(_DWORD *)(v30 + 8));
  v36 = a8;
  *a8 -= v35;
  v95 = *(_QWORD *)(v30 + 8);
  v94 = *(unsigned int *)(v30 + 4);
  if ( (v10 & 1) == 0 )
  {
    if ( !v115 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v30 + 72), 0) )
    {
      v30 = 0LL;
      P = 0LL;
      v88 = 0;
      goto LABEL_74;
    }
    ++*(_DWORD *)(v30 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    v89 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v30 + 4), 0LL, 0LL, *v36) )
    {
      v88 = 0;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v12 + 280));
    if ( !*(_QWORD *)(v30 + 184) )
    {
      *(_QWORD *)(v30 + 184) = *v36;
      *(_QWORD *)(v30 + 56) = v91;
      v91 = 0LL;
    }
LABEL_134:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
    *v36 = *(_QWORD *)(v30 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v30 + 8));
    goto LABEL_73;
  }
  ++*(_DWORD *)(v30 + 64);
  v37 = (volatile signed __int32 *)(v12 + 280);
  *(_QWORD *)(v12 + 288) = 0LL;
  v38 = *(unsigned __int8 *)(v12 + 328);
  v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 280), 1, 0);
  if ( v39 )
    ExpReleaseFastMutexContended(v12 + 280, v39);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v76 = KeGetCurrentIrql();
      if ( v76 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v76 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v20 = (v79 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v79;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v38);
  KeAbPostRelease(v12 + 280);
  v89 = 0;
  if ( !v115 )
  {
    v40 = (struct _ERESOURCE *)(v30 + 72);
    if ( (v10 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v40, 1u);
    }
    else
    {
      if ( (v40->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v40, 0LL, 0LL);
      v41 = v40->Flag & 1;
      if ( v41 )
      {
        v72 = KeGetCurrentIrql();
        v73 = KeGetCurrentThread();
        if ( v72 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v72, 1uLL, 0LL);
        if ( (v73->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v72 && (v73->MiscFlags & 0x400) == 0 && !v73->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v41 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v40);
      else
        ExpAcquireSharedStarveExclusive((__int64)v40, 1);
    }
  }
  if ( (v10 & 4) == 0 )
  {
    v42 = *a8;
    v43 = KeGetCurrentThread();
    v110 = v43;
    v102 = 0;
    v109 = 0;
    v44 = 0;
    v103 = 0;
    v112 = 1;
    v45 = ((v42 & 0xFFF) + (unsigned __int64)(unsigned int)v94 + 4095) >> 12;
    v96 = v45;
    v46 = v42 & 0xFFFFFFFFFFFFF000uLL;
    v99 = v46;
    v47 = BYTE4(v43[1].Queue) + 4 * LODWORD(v43[1].WaitListEntry.Flink);
    while ( (_DWORD)v45 )
    {
      BYTE4(v43[1].Queue) = 1;
      v60 = v45 - 1;
      if ( (unsigned int)(v45 - 1) > LODWORD(v43[1].WaitListEntry.Flink) )
      {
        if ( v60 > 0xF )
          v60 = 15;
        LODWORD(v43[1].WaitListEntry.Flink) = v60;
      }
      v102 = 0;
      v61 = (unsigned int)((_DWORD)v45 << 12);
      v99 = (unsigned int)v61;
      v44 = MmCheckCachedPageStates(v46, v61, 0LL, &v112);
      v103 = v44;
      if ( v44 < 0 )
        break;
      v46 += v99;
      v99 = v46;
      LODWORD(v45) = 0;
      v96 = 0;
    }
    BYTE4(v43[1].Queue) = v47 & 3;
    LODWORD(v43[1].WaitListEntry.Flink) = v47 >> 2;
    if ( v44 < 0 )
      RtlRaiseStatus(v44);
    v107 = 0LL;
    v97 = 0;
    v48 = KeGetCurrentThread();
    --v48->SpecialApcDisable;
    if ( ++v48->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v48, v12 + 280, KeGetCurrentIrql(), 0LL);
    v107 = 0LL;
    v106 = 0LL;
    v104 = 0;
    v49 = v48->AbEntrySummary;
    if ( !v49 )
    {
      if ( !v48->AbOrphanedEntrySummary )
      {
        v51 = 0LL;
        v106 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v48, v12 + 280);
        goto LABEL_55;
      }
      v74 = v48->AbOrphanedEntrySummary;
      v48->AbOrphanedEntrySummary = 0;
      v48->AbEntrySummary |= v74;
      v49 = v48->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v50, v49);
    v104 = v50;
    v48->AbEntrySummary = v49 & ~(1 << v50);
    v51 = (__int64)&v48->LockEntries[v50];
    v106 = v51;
LABEL_55:
    v107 = v51;
    if ( v51 )
    {
      if ( (unsigned __int64)v37 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v37 >> 39) & 0x1FF)) == 1 )
      {
        v52 = MmGetSessionIdEx((__int64)v48->ApcState.Process);
      }
      else
      {
        v52 = -1;
      }
      *(_DWORD *)(v51 + 40) = v52;
      *(_QWORD *)(v51 + 32) = (unsigned __int64)v37 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v48->116 + 1, 0x10u);
    }
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v48, v12 + 280, &v97);
    SpecialApcDisable = v48->SpecialApcDisable;
    v48->SpecialApcDisable = SpecialApcDisable + 1;
    if ( SpecialApcDisable == -1 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery(v53);
    v55 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v37, 0) )
      ExpAcquireFastMutexContended(v12 + 280);
    if ( v51 )
      *(_BYTE *)(v51 + 26) |= 1u;
    v111 = KeGetCurrentThread();
    *(_QWORD *)(v12 + 288) = v111;
    *(_DWORD *)(v12 + 328) = v55;
    if ( !P[23] )
    {
      P[23] = *a8;
      P[7] = v91;
      v91 = 0LL;
    }
    *(_QWORD *)(v12 + 288) = 0LL;
    v56 = *(unsigned __int8 *)(v12 + 328);
    v57 = _InterlockedCompareExchange(v37, 1, 0);
    if ( v57 )
      ExpReleaseFastMutexContended(v12 + 280, v57);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v80 = KeGetCurrentIrql();
        if ( v80 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v80 >= 2u )
        {
          v81 = KeGetCurrentPrcb();
          v82 = v81->SchedulerAssist;
          v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v56 + 1));
          v20 = (v83 & v82[5]) == 0;
          v82[5] &= v83;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v81);
        }
      }
    }
    __writecr8(v56);
    KeAbPostRelease(v12 + 280);
    v30 = (__int64)P;
    v36 = a8;
    *a8 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    goto LABEL_73;
  }
  v30 = (__int64)P;
  v36 = a8;
LABEL_73:
  v88 = 1;
LABEL_74:
  if ( (v10 & 6) == 6 && v30 && *(_QWORD *)(v30 + 184) )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(v30 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v30 + 56) + 16LL)) )
    {
      v59 = *(struct _KEVENT **)(v58 + 184);
      if ( v59 )
        KeSetEvent(v59, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v58 + 544));
    }
    *(_QWORD *)(v30 + 184) = 0LL;
    *(_QWORD *)(v30 + 56) = 0LL;
    v30 = (__int64)P;
  }
  if ( v89 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 280));
  if ( v91 )
  {
    v85 = *(_QWORD *)(v91 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v91 + 16)) )
    {
      v86 = *(struct _KEVENT **)(v85 + 184);
      if ( v86 )
        KeSetEvent(v86, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v85 + 544));
    }
    v30 = (__int64)P;
  }
  if ( (v10 & 4) != 0 )
    CcDereferenceFileOffset(v12, *a2);
  if ( v88 )
  {
    *a7 = v30;
    *a9 = *(_QWORD *)(v30 + 32);
  }
  else
  {
    *v36 = 0LL;
    if ( v30 )
      CcUnpinFileDataEx((char *)v30, v115, 0, (_DWORD *)v24);
  }
  return v88;
}
