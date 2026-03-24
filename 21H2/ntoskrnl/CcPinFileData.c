/*
 * XREFs of CcPinFileData @ 0x14031F630
 * Callers:
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     CcPreparePinWrite @ 0x1406940F0 (CcPreparePinWrite.c)
 *     CcMapDataCommon @ 0x1406942C4 (CcMapDataCommon.c)
 *     CcPinRead @ 0x1406EF1A0 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406EF380 (CcPinMappedData.c)
 *     CcMapData @ 0x1406EF810 (CcMapData.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     ExpReleaseFastMutexContended @ 0x1402F171C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x14031CD80 (CcAllocateInitializeBcb.c)
 *     ExAcquireSharedStarveExclusive @ 0x14031E520 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14031E5E0 (CcGetBcbListHeadLargeOffset.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14031E750 (ExpAcquireSharedStarveExclusive.c)
 *     CcGetVirtualAddress @ 0x140320F10 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1403213E0 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     CcDereferenceFileOffset @ 0x1404EB048 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB214 (CcReferenceFileOffset.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1405B491C (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        __int64 *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v10; // rsi
  __int64 v11; // r13
  volatile signed __int32 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 AbEntrySummary; // al
  __int64 v15; // rcx
  int SessionId; // eax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdi
  __int64 v28; // rdi
  __int16 v29; // ax
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  char v32; // al
  __int64 v33; // rax
  _QWORD *v34; // r15
  volatile signed __int32 *v35; // rbx
  unsigned __int64 v36; // rsi
  signed __int32 v37; // eax
  struct _KTHREAD *v38; // r8
  struct _ERESOURCE *v39; // rdi
  __int16 v40; // cx
  __int64 v41; // rsi
  struct _KTHREAD *v42; // rdi
  signed int v43; // r8d
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  unsigned int v46; // r15d
  struct _KTHREAD *v47; // rdi
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // eax
  __int64 v52; // rcx
  __int16 SpecialApcDisable; // ax
  unsigned __int8 v54; // di
  unsigned __int64 v55; // rdi
  signed __int32 v56; // eax
  __int64 v57; // rbx
  struct _KEVENT *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rdx
  struct _ERESOURCE *v61; // rcx
  int v62; // edx
  __int64 v63; // rbx
  unsigned int v64; // r8d
  __int16 v65; // ax
  unsigned int v66; // r15d
  unsigned int v67; // ebx
  char *v68; // rax
  struct _ERESOURCE *v69; // rcx
  __int64 v70; // r8
  unsigned __int8 v71; // dl
  unsigned __int8 v72; // al
  __int64 v73; // rax
  unsigned __int8 v74; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v77; // edx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  __int64 v83; // rbx
  struct _KEVENT *v84; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v86; // [rsp+30h] [rbp-D8h]
  int v87; // [rsp+34h] [rbp-D4h]
  _QWORD *P; // [rsp+38h] [rbp-D0h]
  __int64 v89; // [rsp+40h] [rbp-C8h] BYREF
  int v90; // [rsp+48h] [rbp-C0h] BYREF
  int v91; // [rsp+4Ch] [rbp-BCh]
  __int64 v92; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-B0h] BYREF
  int v94; // [rsp+60h] [rbp-A8h]
  int v95; // [rsp+64h] [rbp-A4h]
  __int64 v96; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+70h] [rbp-98h]
  int v98; // [rsp+78h] [rbp-90h]
  int v99; // [rsp+7Ch] [rbp-8Ch]
  int v100; // [rsp+80h] [rbp-88h]
  signed int v101; // [rsp+84h] [rbp-84h]
  int v102; // [rsp+88h] [rbp-80h]
  __int64 v103; // [rsp+90h] [rbp-78h]
  __int64 v104; // [rsp+98h] [rbp-70h]
  __int64 v105; // [rsp+A0h] [rbp-68h]
  __int64 v106; // [rsp+A8h] [rbp-60h]
  int v107; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v108; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v109; // [rsp+C0h] [rbp-48h]

  v10 = 0LL;
  v96 = 0LL;
  v91 = 0;
  v90 = 0;
  v89 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v106 = v11;
  if ( *a2 + a3 > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x129uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  *a8 = 0LL;
  if ( (a6 & 4) != 0 )
  {
    v90 = 0x40000 - (*(_DWORD *)a2 & 0x3FFFF);
    CcReferenceFileOffset(v11, *a2);
  }
  else
  {
    *a8 = CcGetVirtualAddress(v11, *a2, (unsigned int)&v89, (unsigned int)&v90, (a6 & 0x40) != 0, 0);
  }
  v12 = (volatile signed __int32 *)(v11 + 280);
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v11 + 280, KeGetCurrentIrql(), 0LL);
  v98 = 0;
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_6;
  if ( CurrentThread->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_6:
    _BitScanForward((unsigned int *)&v15, AbEntrySummary);
    v98 = v15;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    v10 = (__int64)&CurrentThread->LockEntries[v15];
    goto LABEL_7;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceAutoBoostEntryExhaustion(CurrentThread, v11 + 280);
LABEL_7:
  if ( v10 )
  {
    if ( (unsigned __int64)v12 >= 0xFFFF800000000000uLL
      && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v12 >> 39) & 0x1FF)) == 1 )
    {
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v10 + 40) = SessionId;
    *(_QWORD *)(v10 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(v12, 0) )
    ExpAcquireFastMutexContended(v11 + 280, v10);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 328) = CurrentIrql;
  v87 = 1;
  v93 = 0LL;
  v92 = 0LL;
  v20 = *a2;
  v21 = HIDWORD(*a2);
  v22 = a3;
  v23 = *a2 + a3;
  v96 = v23;
  v103 = 0LL;
  v24 = v20 + 0x80000;
  v25 = *(_QWORD *)(v11 + 32);
  v26 = HIDWORD(v20);
  if ( v25 <= 0x200000 || (LODWORD(v26) = v21, (*(_DWORD *)(v11 + 152) & 0x200) == 0) )
  {
    LODWORD(v21) = v26;
    goto LABEL_115;
  }
  if ( v25 <= 0x2000000 )
  {
    if ( v24 < v25 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(*(_QWORD *)(v11 + 88)
                                        + 8 * ((unsigned __int64)(unsigned int)v25 >> 18)
                                        + 16 * (v24 >> 19));
      goto LABEL_23;
    }
LABEL_115:
    BcbListHeadLargeOffset = (_QWORD *)(v11 + 16);
    goto LABEL_23;
  }
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(v11, v20 + 0x80000, 1);
  v22 = a3;
LABEL_23:
  v28 = *BcbListHeadLargeOffset - 16LL;
  v103 = v28;
  if ( (_DWORD)v21 || (v29 = *(_WORD *)v28, *(_WORD *)v28 != 765) || *(_DWORD *)(v28 + 36) )
  {
    while ( *(_WORD *)v28 == 765 && v20 < *(_QWORD *)(v28 + 32) )
    {
      v73 = *(_QWORD *)(v28 + 8);
      if ( v20 >= v73 )
      {
        v32 = 1;
        goto LABEL_34;
      }
      if ( v23 >= v73 )
        v23 = *(_QWORD *)(v28 + 8);
      v96 = v23;
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v103 = v28;
    }
  }
  else
  {
    v30 = v96;
    while ( v29 == 765 && (unsigned int)v20 < *(_DWORD *)(v28 + 32) )
    {
      v31 = *(_DWORD *)(v28 + 8);
      if ( (unsigned int)v20 >= v31 )
      {
        v32 = 1;
        goto LABEL_34;
      }
      if ( v30 >= v31 )
      {
        v30 = *(_DWORD *)(v28 + 8);
        LODWORD(v96) = v30;
        v23 = v96;
      }
      v28 = *(_QWORD *)(v28 + 16) - 16LL;
      v103 = v28;
      v29 = *(_WORD *)v28;
    }
  }
  v32 = 0;
LABEL_34:
  P = (_QWORD *)v28;
  if ( !v32 )
  {
    if ( (a6 & 8) != 0 )
    {
      v28 = 0LL;
      P = 0LL;
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    v93 = v20;
    v63 = v23 - v20;
    v62 = v20 & 0xFFF;
    LODWORD(v63) = v62 + v63;
    v92 = v63;
    v64 = v62 + v90;
    v90 += v62;
    if ( (a4 || (*(_DWORD *)(v11 + 152) & 4) != 0) && (v65 = v20, !a5) )
    {
      v66 = v91;
    }
    else
    {
      v65 = v20;
      v66 = 2;
      v91 = 2;
      if ( !v62 )
      {
        if ( (unsigned int)v22 >= 0x1000 )
          v66 = 3;
        v91 = v66;
      }
      if ( (v63 & 0xFFF) == 0 )
      {
        v66 |= 4u;
        v91 = v66;
      }
    }
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      a4 = 1;
    v67 = (v63 + 4095) & 0xFFFFF000;
    LODWORD(v92) = v67;
    *a8 -= v65 & 0xFFF;
    LODWORD(v93) = v93 & 0xFFFFF000;
    if ( v67 > v64 )
    {
      v67 = v64;
      LODWORD(v92) = v64;
    }
    v68 = CcAllocateInitializeBcb(v11, v28, &v93, &v92);
    v28 = (__int64)v68;
    P = v68;
    if ( (a6 & 1) != 0 )
    {
      if ( !v68 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        RtlRaiseStatus(0xC000009A);
      }
      if ( !a4 )
      {
        v69 = (struct _ERESOURCE *)(v68 + 72);
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite(v69, 0) )
            KeBugCheckEx(0x34u, 0x201F7uLL, v28, 0LL, 0LL);
        }
        else if ( !ExAcquireSharedStarveExclusive(v69, 0) )
        {
          KeBugCheckEx(0x34u, 0x201FEuLL, v28, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
      if ( (a6 & 4) == 0 )
      {
        LOBYTE(v70) = 1;
        CcMapAndRead(v67, v66, v70, *a8);
        ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
        if ( !*(_QWORD *)(v28 + 184) )
        {
          *(_QWORD *)(v28 + 184) = *a8;
          *(_QWORD *)(v28 + 56) = v89;
          v89 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
        *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
      }
      v34 = a8;
      goto LABEL_73;
    }
    if ( !v68 )
    {
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v68 + 72), 0) )
      KeBugCheckEx(0x34u, 0x2025EuLL, v28, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(v67, v66, 0LL, *a8) )
    {
      v86 = 0;
      v34 = a8;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    v34 = a8;
    if ( !*(_QWORD *)(v28 + 184) )
    {
      *(_QWORD *)(v28 + 184) = *a8;
      *(_QWORD *)(v28 + 56) = v89;
      v89 = 0LL;
    }
    goto LABEL_134;
  }
  if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
    a4 = 1;
  if ( *(_QWORD *)(v28 + 184) )
  {
    if ( (a6 & 1) != 0 )
    {
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
      if ( !a4 )
      {
        v61 = (struct _ERESOURCE *)(v28 + 72);
        if ( (a6 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v61, 1u);
        else
          ExAcquireSharedStarveExclusive(v61, 1u);
      }
    }
    else
    {
      if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
      {
        v28 = 0LL;
        P = 0LL;
        v86 = 0;
        v34 = a8;
        goto LABEL_74;
      }
      ++*(_DWORD *)(v28 + 64);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
      v87 = 0;
    }
    v34 = a8;
    *a8 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
    goto LABEL_73;
  }
  v33 = (unsigned int)(v20 - *(_DWORD *)(v28 + 8));
  v34 = a8;
  *a8 -= v33;
  v93 = *(_QWORD *)(v28 + 8);
  v92 = *(unsigned int *)(v28 + 4);
  if ( (a6 & 1) == 0 )
  {
    if ( !a4 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v28 + 72), 0) )
    {
      v28 = 0LL;
      P = 0LL;
      v86 = 0;
      goto LABEL_74;
    }
    ++*(_DWORD *)(v28 + 64);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    v87 = 0;
    if ( !(unsigned __int8)CcMapAndRead(*(unsigned int *)(v28 + 4), 0LL, 0LL, *a8) )
    {
      v86 = 0;
      goto LABEL_74;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(v11 + 280));
    if ( !*(_QWORD *)(v28 + 184) )
    {
      *(_QWORD *)(v28 + 184) = *a8;
      *(_QWORD *)(v28 + 56) = v89;
      v89 = 0LL;
    }
LABEL_134:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
    *v34 = *(_QWORD *)(v28 + 184) + (unsigned int)(*(_DWORD *)a2 - *(_DWORD *)(v28 + 8));
    goto LABEL_73;
  }
  ++*(_DWORD *)(v28 + 64);
  v35 = (volatile signed __int32 *)(v11 + 280);
  *(_QWORD *)(v11 + 288) = 0LL;
  v36 = *(unsigned __int8 *)(v11 + 328);
  v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 280), 1, 0);
  if ( v37 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v37);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v74 = KeGetCurrentIrql();
      if ( v74 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v74 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v18 = (v77 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v77;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v36);
  KeAbPostRelease(v11 + 280);
  v87 = 0;
  if ( !a4 )
  {
    v39 = (struct _ERESOURCE *)(v28 + 72);
    if ( (a6 & 2) != 0 )
    {
      ExAcquireResourceExclusiveLite(v39, 1u);
    }
    else
    {
      if ( (v39->Flag & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)v39, 0LL, 0LL);
      v40 = v39->Flag & 1;
      if ( v40 )
      {
        v71 = KeGetCurrentIrql();
        v38 = KeGetCurrentThread();
        if ( v71 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v71, 1uLL, 0LL);
        if ( (v38->ApcState.InProgressFlags & 2) != 0 )
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( !v71 && (v38->MiscFlags & 0x400) == 0 && !v38->WaitBlock[3].SpareLong )
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( v40 )
        ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)v39);
      else
        ExpAcquireSharedStarveExclusive((__int64)v39, 1, (__int64)v38, (_DWORD *)v22);
    }
  }
  if ( (a6 & 4) == 0 )
  {
    v41 = *a8;
    v42 = KeGetCurrentThread();
    v108 = v42;
    v100 = 0;
    v107 = 0;
    v43 = 0;
    v101 = 0;
    v44 = ((v41 & 0xFFF) + (unsigned __int64)(unsigned int)v92 + 4095) >> 12;
    v94 = v44;
    v45 = v41 & 0xFFFFFFFFFFFFF000uLL;
    v97 = v45;
    v46 = BYTE4(v42[1].Queue) + 4 * LODWORD(v42[1].WaitListEntry.Flink);
    while ( (_DWORD)v44 )
    {
      BYTE4(v42[1].Queue) = 1;
      v59 = v44 - 1;
      if ( (unsigned int)(v44 - 1) > LODWORD(v42[1].WaitListEntry.Flink) )
      {
        if ( v59 > 0xF )
          v59 = 15;
        LODWORD(v42[1].WaitListEntry.Flink) = v59;
      }
      v100 = 0;
      v60 = (unsigned int)((_DWORD)v44 << 12);
      v97 = (unsigned int)v60;
      v43 = MmCheckCachedPageStates(v45, v60, 0LL);
      v101 = v43;
      if ( v43 < 0 )
        break;
      v45 += v97;
      v97 = v45;
      LODWORD(v44) = 0;
      v94 = 0;
    }
    BYTE4(v42[1].Queue) = v46 & 3;
    LODWORD(v42[1].WaitListEntry.Flink) = v46 >> 2;
    if ( v43 < 0 )
      RtlRaiseStatus(v43);
    v105 = 0LL;
    v95 = 0;
    v47 = KeGetCurrentThread();
    --v47->SpecialApcDisable;
    if ( ++v47->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v47, v11 + 280, KeGetCurrentIrql(), 0LL);
    v105 = 0LL;
    v104 = 0LL;
    v102 = 0;
    v48 = v47->AbEntrySummary;
    if ( !v48 )
    {
      if ( !v47->AbOrphanedEntrySummary )
      {
        v50 = 0LL;
        v104 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v47, v11 + 280);
        goto LABEL_55;
      }
      v72 = v47->AbOrphanedEntrySummary;
      v47->AbOrphanedEntrySummary = 0;
      v47->AbEntrySummary |= v72;
      v48 = v47->AbEntrySummary;
    }
    _BitScanForward((unsigned int *)&v49, v48);
    v102 = v49;
    v47->AbEntrySummary = v48 & ~(1 << v49);
    v50 = (__int64)&v47->LockEntries[v49];
    v104 = v50;
LABEL_55:
    v105 = v50;
    if ( v50 )
    {
      if ( (unsigned __int64)v35 >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v35 >> 39) & 0x1FF)) == 1 )
      {
        v51 = MmGetSessionIdEx(v47->ApcState.Process);
      }
      else
      {
        v51 = -1;
      }
      *(_DWORD *)(v50 + 40) = v51;
      *(_QWORD *)(v50 + 32) = (unsigned __int64)v35 & 0x7FFFFFFFFFFFFFFCLL;
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)&v47->116 + 1, 0x10u);
    }
    --v47->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v47);
    SpecialApcDisable = v47->SpecialApcDisable;
    v47->SpecialApcDisable = SpecialApcDisable + 1;
    if ( SpecialApcDisable == -1 && ($C459BD0D405E8E46662177FB3D0A143F *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery(v52);
    v54 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v35, 0) )
      ExpAcquireFastMutexContended(v11 + 280, v50);
    if ( v50 )
      *(_BYTE *)(v50 + 26) |= 1u;
    v109 = KeGetCurrentThread();
    *(_QWORD *)(v11 + 288) = v109;
    *(_DWORD *)(v11 + 328) = v54;
    if ( !P[23] )
    {
      P[23] = *a8;
      P[7] = v89;
      v89 = 0LL;
    }
    *(_QWORD *)(v11 + 288) = 0LL;
    v55 = *(unsigned __int8 *)(v11 + 328);
    v56 = _InterlockedCompareExchange(v35, 1, 0);
    if ( v56 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v11 + 280), v56);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v78 >= 2u )
        {
          v79 = KeGetCurrentPrcb();
          v80 = v79->SchedulerAssist;
          v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
          v18 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v79);
        }
      }
    }
    __writecr8(v55);
    KeAbPostRelease(v11 + 280);
    v28 = (__int64)P;
    v34 = a8;
    *a8 = P[23] + (unsigned int)(*(_DWORD *)a2 - *((_DWORD *)P + 2));
    goto LABEL_73;
  }
  v28 = (__int64)P;
  v34 = a8;
LABEL_73:
  v86 = 1;
LABEL_74:
  if ( (a6 & 6) == 6 && v28 && *(_QWORD *)(v28 + 184) )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v28 + 56) + 16LL)) )
    {
      v58 = *(struct _KEVENT **)(v57 + 184);
      if ( v58 )
        KeSetEvent(v58, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v57 + 544));
    }
    *(_QWORD *)(v28 + 184) = 0LL;
    *(_QWORD *)(v28 + 56) = 0LL;
    v28 = (__int64)P;
  }
  if ( v87 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 280));
  if ( v89 )
  {
    v83 = *(_QWORD *)(v89 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v89 + 16)) )
    {
      v84 = *(struct _KEVENT **)(v83 + 184);
      if ( v84 )
        KeSetEvent(v84, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v83 + 544));
    }
    v28 = (__int64)P;
  }
  if ( (a6 & 4) != 0 )
    CcDereferenceFileOffset(v11, *a2);
  if ( v86 )
  {
    *a7 = v28;
    *a9 = *(_QWORD *)(v28 + 32);
  }
  else
  {
    *v34 = 0LL;
    if ( v28 )
      CcUnpinFileDataEx((char *)v28, a4, 0, (_DWORD *)v22);
  }
  return v86;
}
