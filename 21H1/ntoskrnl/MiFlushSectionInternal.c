/*
 * XREFs of MiFlushSectionInternal @ 0x140219740
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     MiCleanSection @ 0x14037C0AC (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiEndingOffset @ 0x14027D6D0 (MiEndingOffset.c)
 *     MiReadyFlushMdlToWrite @ 0x140280AEC (MiReadyFlushMdlToWrite.c)
 *     MiUnlockFlushMdl @ 0x1402815BC (MiUnlockFlushMdl.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x1402A5598 (MiRemoveUnusedSubsection.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     MiInitializePageFaultPacket @ 0x1402B3CF0 (MiInitializePageFaultPacket.c)
 *     MiWaitForPageWriteCompletion @ 0x1402CDB2C (MiWaitForPageWriteCompletion.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     MiIssueSynchronousFlush @ 0x1402FFCB0 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x14030A6C0 (MiExpandFlushMdl.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiIsRetryIoStatus @ 0x140354144 (MiIsRetryIoStatus.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x1405377C8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x140537AC0 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x14053B610 (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rsi
  struct _MDL *v12; // r13
  bool v13; // zf
  __int64 v14; // r8
  ULONG_PTR v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  int v22; // r14d
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  ULONG_PTR v26; // rsi
  unsigned __int64 v27; // rbx
  char v28; // al
  unsigned int *p_ByteCount; // r15
  unsigned int v30; // r14d
  int v31; // r12d
  unsigned __int64 v32; // rbx
  ULONG_PTR *v33; // r10
  int v34; // eax
  BOOL v35; // r13d
  int v36; // r14d
  unsigned int v37; // r9d
  struct _KPRCB *v38; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v40; // ett
  int v41; // r12d
  int v42; // ecx
  char v43; // al
  ULONG ByteOffset; // r8d
  unsigned int v45; // edx
  unsigned int v46; // esi
  int v47; // esi
  __int64 v48; // r14
  __int64 v49; // r12
  PVOID v50; // rbx
  __int64 v51; // r15
  __int64 v52; // rsi
  __int64 result; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  volatile LONG *v61; // rcx
  int v62; // eax
  int v63; // esi
  __int64 v64; // rsi
  __int64 v65; // r15
  _QWORD *v66; // rax
  __int64 Pool; // rax
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v81; // rax
  ULONG_PTR *v82; // r10
  unsigned __int64 v83; // r8
  struct _KPRCB *v84; // r9
  __int64 v85; // rdx
  signed __int32 v86; // eax
  __int64 v87; // rax
  LARGE_INTEGER *v88; // r8
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r9
  _DWORD *v92; // r8
  int v93; // eax
  int v94; // [rsp+44h] [rbp-284h]
  __int64 v95; // [rsp+48h] [rbp-280h]
  unsigned __int64 v96; // [rsp+50h] [rbp-278h]
  __int64 v97; // [rsp+58h] [rbp-270h]
  int v98; // [rsp+60h] [rbp-268h]
  int v99; // [rsp+70h] [rbp-258h]
  struct _MDL *P; // [rsp+78h] [rbp-250h]
  __int64 v101; // [rsp+80h] [rbp-248h]
  unsigned __int64 v102; // [rsp+88h] [rbp-240h]
  int v103; // [rsp+90h] [rbp-238h] BYREF
  int IoPriorityThread; // [rsp+94h] [rbp-234h]
  __int64 v105; // [rsp+98h] [rbp-230h]
  unsigned int v106; // [rsp+A0h] [rbp-228h]
  __int64 v107; // [rsp+A8h] [rbp-220h]
  _QWORD *v108; // [rsp+B0h] [rbp-218h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp-210h]
  PVOID v110; // [rsp+C0h] [rbp-208h]
  __int64 v111; // [rsp+C8h] [rbp-200h]
  __int64 v112; // [rsp+D0h] [rbp-1F8h]
  __int64 v113; // [rsp+D8h] [rbp-1F0h]
  int v114; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v115; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v116; // [rsp+F0h] [rbp-1D8h]
  unsigned __int64 v117; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v119; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+110h] [rbp-1B8h]
  __int64 v121; // [rsp+118h] [rbp-1B0h]
  _QWORD *v122; // [rsp+120h] [rbp-1A8h]
  _BYTE v123[192]; // [rsp+130h] [rbp-198h] BYREF
  _BYTE v124[144]; // [rsp+1F0h] [rbp-D8h] BYREF

  v122 = a3;
  BugCheckParameter1 = a1;
  v105 = a5;
  v103 = 0;
  v113 = a4;
  memset(v123, 0, 0xB8uLL);
  v9 = a6;
  v10 = 0;
  if ( (a6 & 2) == 0 )
    v10 = 2;
  if ( a5 )
  {
    v9 = a6 | 4;
    a6 |= 4u;
  }
  v11 = *a3;
  v110 = 0LL;
  v107 = 0LL;
  v12 = (struct _MDL *)v123;
  P = (struct _MDL *)v123;
  v13 = (*(_DWORD *)(v11 + 56) & 0x40000000) == 0;
  v112 = v11;
  if ( !v13 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    Pool = MiAllocatePool(64LL, 2560LL, 1632005453LL);
    v68 = v105;
    v69 = Pool;
    v110 = (PVOID)Pool;
    if ( v105 )
    {
      *(_QWORD *)(v105 + 40) = Pool;
      if ( !Pool )
        return 3221225626LL;
    }
    else if ( !Pool )
    {
      goto LABEL_8;
    }
    *(_WORD *)(Pool + 48) = 0;
    v70 = Pool + 48;
    *(_BYTE *)(Pool + 50) = 6;
    v12 = (struct _MDL *)(Pool + 80);
    v107 = Pool;
    *(_DWORD *)(Pool + 52) = 0;
    v71 = (_QWORD *)(Pool + 56);
    v71[1] = v71;
    *v71 = v71;
    *(_DWORD *)v69 = 0;
    *(_QWORD *)(v69 + 16) = 0LL;
    *(_QWORD *)(v69 + 40) = v68;
    *(_QWORD *)(v69 + 32) = v11;
    *(_QWORD *)(v69 + 72) = v12;
    *(_QWORD *)(v69 + 2112) = v70;
    *(_WORD *)(v69 + 312) = 0;
    *(_BYTE *)(v69 + 314) = 6;
    *(_DWORD *)(v69 + 316) = 0;
    *(_QWORD *)(v69 + 328) = v69 + 320;
    *(_QWORD *)(v69 + 320) = v69 + 320;
    *(_QWORD *)(v69 + 336) = v69 + 344;
    *(_DWORD *)(v69 + 264) = 0;
    *(_QWORD *)(v69 + 280) = 0LL;
    *(_QWORD *)(v69 + 304) = v68;
    *(_QWORD *)(v69 + 296) = v11;
    *(_QWORD *)(v69 + 2120) = v69 + 312;
    *(_WORD *)(v69 + 576) = 0;
    *(_BYTE *)(v69 + 578) = 6;
    *(_DWORD *)(v69 + 580) = 0;
    *(_QWORD *)(v69 + 592) = v69 + 584;
    *(_QWORD *)(v69 + 584) = v69 + 584;
    *(_QWORD *)(v69 + 600) = v69 + 608;
    *(_DWORD *)(v69 + 528) = 0;
    *(_QWORD *)(v69 + 544) = 0LL;
    *(_QWORD *)(v69 + 568) = v68;
    *(_QWORD *)(v69 + 560) = v11;
    *(_QWORD *)(v69 + 2128) = v69 + 576;
    *(_WORD *)(v69 + 840) = 0;
    *(_BYTE *)(v69 + 842) = 6;
    *(_DWORD *)(v69 + 844) = 0;
    *(_QWORD *)(v69 + 856) = v69 + 848;
    *(_QWORD *)(v69 + 848) = v69 + 848;
    *(_QWORD *)(v69 + 864) = v69 + 872;
    *(_DWORD *)(v69 + 792) = 0;
    *(_QWORD *)(v69 + 808) = 0LL;
    *(_QWORD *)(v69 + 832) = v68;
    *(_QWORD *)(v69 + 824) = v11;
    *(_QWORD *)(v69 + 2136) = v69 + 840;
    *(_WORD *)(v69 + 1104) = 0;
    *(_BYTE *)(v69 + 1106) = 6;
    *(_DWORD *)(v69 + 1108) = 0;
    *(_QWORD *)(v69 + 1120) = v69 + 1112;
    *(_QWORD *)(v69 + 1112) = v69 + 1112;
    *(_QWORD *)(v69 + 1128) = v69 + 1136;
    *(_DWORD *)(v69 + 1056) = 0;
    *(_QWORD *)(v69 + 1072) = 0LL;
    *(_QWORD *)(v69 + 1096) = v68;
    *(_QWORD *)(v69 + 1088) = v11;
    *(_QWORD *)(v69 + 2144) = v69 + 1104;
    *(_WORD *)(v69 + 1368) = 0;
    *(_BYTE *)(v69 + 1370) = 6;
    *(_DWORD *)(v69 + 1372) = 0;
    *(_QWORD *)(v69 + 1384) = v69 + 1376;
    *(_QWORD *)(v69 + 1376) = v69 + 1376;
    *(_DWORD *)(v69 + 1320) = 0;
    P = v12;
    *(_QWORD *)(v69 + 1336) = 0LL;
    *(_QWORD *)(v69 + 1392) = v69 + 1400;
    *(_QWORD *)(v69 + 1360) = v68;
    *(_QWORD *)(v69 + 1352) = v11;
    *(_QWORD *)(v69 + 2152) = v69 + 1368;
    *(_WORD *)(v69 + 1632) = 0;
    *(_BYTE *)(v69 + 1634) = 6;
    *(_DWORD *)(v69 + 1636) = 0;
    *(_QWORD *)(v69 + 1648) = v69 + 1640;
    *(_QWORD *)(v69 + 1640) = v69 + 1640;
    *(_QWORD *)(v69 + 1656) = v69 + 1664;
    *(_DWORD *)(v69 + 1584) = 0;
    *(_QWORD *)(v69 + 1600) = 0LL;
    *(_QWORD *)(v69 + 1624) = v68;
    *(_QWORD *)(v69 + 1616) = v11;
    *(_QWORD *)(v69 + 2160) = v69 + 1632;
    *(_WORD *)(v69 + 1896) = 0;
    *(_BYTE *)(v69 + 1898) = 6;
    *(_DWORD *)(v69 + 1900) = 0;
    *(_QWORD *)(v69 + 1912) = v69 + 1904;
    *(_QWORD *)(v69 + 1904) = v69 + 1904;
    *(_QWORD *)(v69 + 1920) = v69 + 1928;
    *(_DWORD *)(v69 + 1848) = 0;
    *(_QWORD *)(v69 + 1864) = 0LL;
    *(_QWORD *)(v69 + 1888) = v68;
    *(_QWORD *)(v69 + 1880) = v11;
    *(_QWORD *)(v69 + 2168) = v69 + 1896;
  }
LABEL_8:
  v119 = a2 + 8;
  v111 = MiReferenceControlAreaFile(v11);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v14 + 116) & 0x400) == 0
    && *(_BYTE *)(v14 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v9 < 0 )
    v10 |= 0x10u;
  v108 = a3;
  *a7 = 0;
  v15 = (ULONG_PTR)a3;
  v16 = BugCheckParameter1;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v14 + 484);
  v94 = 16;
  v99 = 0;
  v98 = 1;
  v97 = 0LL;
  v96 = v16;
  SpinLock = (PEX_SPIN_LOCK)(v11 + 72);
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( !*(_QWORD *)(v11 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v13 = (v75 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v75;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    if ( v110 )
    {
      ExFreePoolWithTag(v110, 0);
      if ( v105 )
        *(_QWORD *)(v105 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v11, v111);
    KeLeaveCriticalRegionThread(CurrentThread);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v18 = *(_QWORD *)(v11 + 120);
  v115 = 8 * v18;
  if ( 8 * v18 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v18 + 32)) <= 1 )
    __fastfail(0xEu);
  v101 = 0LL;
  v19 = 0LL;
  v20 = v113;
  while ( 1 )
  {
LABEL_14:
    if ( v15 == v20 )
    {
      v21 = v119;
    }
    else
    {
      v21 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
      v20 = v113;
    }
    v102 = v21;
    if ( !v16 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      v96 = v16;
    }
    if ( *(_DWORD *)(v15 + 104) && *(_QWORD *)(v15 + 8) )
      break;
    v19 += (__int64)(v21 - v16) >> 3 << 12;
    v66 = *(_QWORD **)(v15 + 16);
    v97 = v19;
    if ( !v66 )
    {
      if ( v21 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
      {
        v48 = v19;
        v49 = v101;
        v89 = MiEndingOffset(v15) & 0xFFF;
        if ( v89 )
          v48 = v97 - (unsigned int)(4096 - v89);
        goto LABEL_87;
      }
LABEL_225:
      v49 = v101;
      v48 = v19;
      goto LABEL_87;
    }
    if ( v20 == v15 )
      goto LABEL_225;
    v16 = v66[1];
    v15 = *(_QWORD *)(v15 + 16);
    v96 = v16;
    v108 = v66;
  }
  MiIncrementSubsectionViewCount(v15);
  if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v76 = KeGetCurrentIrql();
      if ( v76 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v76 >= 2u )
      {
        v77 = KeGetCurrentPrcb();
        v78 = v77->SchedulerAssist;
        v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v79 & v78[5]) == 0;
        v78[5] &= v79;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v77);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  v117 = v16;
  if ( v16 >= v21 )
    goto LABEL_82;
  while ( 2 )
  {
    v22 = v10;
    v95 = MiCheckProtoPtePageState(v16);
    if ( !v95 )
    {
      p_ByteCount = &v12->ByteCount;
      v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v96 = v16;
      if ( !v12->ByteCount )
        goto LABEL_68;
      goto LABEL_98;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v16;
        v24 = *(_QWORD *)v16;
        if ( (*(_QWORD *)v16 & 1) != 0 )
          goto LABEL_33;
        if ( (*(_QWORD *)v16 & 0xC00LL) != 0x800 )
          goto LABEL_63;
        if ( !v23 || !qword_140C4DE80 || (v23 & qword_140C4DE80) != 0 )
        {
          v24 = *(_QWORD *)v16;
          if ( qword_140C4DE80 && (v23 & 0x10) == 0 )
            v24 = v23 & ~qword_140C4DE80;
LABEL_33:
          v25 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL);
          v121 = v25;
          if ( (*(_QWORD *)(v25 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
            break;
        }
      }
      v26 = v25 - 0x58000000000LL;
      v114 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v114);
        while ( *(__int64 *)(v26 + 24) < 0 );
      }
      if ( *(_QWORD *)v16 == v23 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v26 )
    {
LABEL_63:
      p_ByteCount = &v12->ByteCount;
      goto LABEL_64;
    }
    v27 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v81 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
        LOBYTE(Flink) = v27 | 0x20;
        if ( (v81 & 0x20) == 0 )
          Flink = *(struct _LIST_ENTRY **)v16;
        LOBYTE(v27) = (_BYTE)Flink;
        if ( (v81 & 0x42) != 0 )
          LOBYTE(v27) = (unsigned __int8)Flink | 0x42;
      }
    }
    v28 = *(_BYTE *)(v26 + 34);
    p_ByteCount = &v12->ByteCount;
    if ( (v28 & 8) != 0 )
    {
      if ( !*p_ByteCount )
      {
        if ( (v10 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v26, v112, v95, 17LL);
          goto LABEL_68;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 |= 8u;
LABEL_219:
        v16 = v102;
        break;
      }
LABEL_133:
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_98;
    }
    if ( (v28 & 0x10) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_64:
      v45 = *p_ByteCount;
      v10 |= 4u;
      if ( !*p_ByteCount )
        v10 = v22;
      goto LABEL_66;
    }
    v30 = *p_ByteCount;
    if ( (v28 & 0x20) != 0 )
    {
      memset(v124, 0, 0x88uLL);
      if ( !v30 )
      {
        v103 = 1;
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v124);
        MiObtainProtoReference(v95, 1LL);
        MiWaitForCollidedFaultComplete((unsigned int)v124, v26, v95, 17, (__int64)&v103);
        goto LABEL_68;
      }
      goto LABEL_133;
    }
    v31 = 0;
    if ( !v30 )
    {
      v31 = 2;
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      v61 = SpinLock;
      ++*(_DWORD *)(v112 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel(v61);
      v12->Next = 0LL;
      v12->MdlFlags = 0;
      v12->StartVa = 0LL;
      *p_ByteCount = 0;
      v12->ByteOffset = v94;
    }
    v32 = v27 & 1;
    v33 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
    v34 = *(_DWORD *)(v26 + 16);
    v116 = v33;
    v35 = (v34 & 0x400) != 0LL;
    v36 = v31 & 2;
    v37 = 4;
    if ( !v32 )
      v36 = v31;
    if ( !v36 )
      v37 = 8;
    v106 = v37;
    if ( v33 == &MiSystemPartition )
    {
      v38 = KeGetCurrentPrcb();
      CachedResidentAvailable = v38->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v40 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v38->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v40 == CachedResidentAvailable )
          {
            v41 = 1;
            goto LABEL_52;
          }
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v41 = MiChargePartitionResidentAvailable(v33, 1LL, (unsigned int)-(v36 != 0));
    if ( !v41 )
      goto LABEL_196;
    v37 = v106;
    v33 = v116;
LABEL_52:
    v42 = v35;
    if ( !v36 )
      v42 = v35;
    if ( v42 && !(unsigned int)MiChargeCommit(v33, 1LL, v37) )
    {
      v82 = v116;
      v83 = 1LL;
      if ( v116 != &MiSystemPartition )
        goto LABEL_195;
      v84 = KeGetCurrentPrcb();
      v85 = (int)v84->CachedResidentAvailable;
      if ( (_DWORD)v85 == -1 )
        goto LABEL_195;
      if ( (unsigned __int64)(v85 + 1) <= 0x100 )
      {
        do
        {
          v86 = _InterlockedCompareExchange((volatile signed __int32 *)&v84->CachedResidentAvailable, v85 + 1, v85);
          v13 = (_DWORD)v85 == v86;
          LODWORD(v85) = v86;
          if ( v13 )
            goto LABEL_196;
        }
        while ( v86 != -1 && (unsigned __int64)(v86 + 1LL) <= 0x100 );
      }
      if ( (int)v85 > 192
        && (_DWORD)v85 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v84->CachedResidentAvailable,
                            192,
                            v85) )
      {
        v83 = (int)v85 - 192 + 1LL;
      }
      if ( v83 )
LABEL_195:
        _InterlockedExchangeAdd64((volatile signed __int64 *)v82 + 896, v83);
LABEL_196:
      v41 = 0;
      goto LABEL_59;
    }
    if ( !v32 )
    {
      MiUnlinkPageFromList(v26, 0);
      *(_QWORD *)(v26 + 24) &= 0xC000000000000000uLL;
    }
    v43 = *(_BYTE *)(v26 + 34);
    ++*(_WORD *)(v26 + 32);
    *(_BYTE *)(v26 + 34) = v43 | 8;
    *(_BYTE *)(v26 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v26) & 0x10) != 0 )
      MiClearPfnImageVerified(v26, 28LL);
LABEL_59:
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = P;
    if ( !v41 )
    {
      v63 = 3;
      goto LABEL_108;
    }
    *((_QWORD *)&P[1].Next + *p_ByteCount) = v121 / 48;
    ByteOffset = P->ByteOffset;
    v45 = *p_ByteCount + 1;
    *p_ByteCount = v45;
    if ( v41 != 3 || v45 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    {
      if ( v45 == ByteOffset )
      {
        v63 = 1;
        goto LABEL_108;
      }
      v16 = v96;
LABEL_66:
      v16 += 8LL;
      v96 = v16;
      if ( (v10 & 4) == 0 && (v16 != v102 || !v45) )
        goto LABEL_68;
      goto LABEL_98;
    }
    v63 = 2;
LABEL_108:
    MiUnlockProtoPoolPage(v95, 17LL);
    v16 = v96;
    if ( v63 == 3 )
      goto LABEL_98;
    if ( v63 == 2 || v94 == 1 || v96 + 8 >= v102 )
    {
      v16 = v96 + 8;
      v96 += 8LL;
      goto LABEL_98;
    }
    v64 = MiExpandFlushMdl(P);
    if ( v64 )
    {
      v65 = v107;
      if ( P != (struct _MDL *)v123 && (!v107 || P != (struct _MDL *)(v107 + 80)) )
        ExFreePoolWithTag(P, 0);
      P = (struct _MDL *)v64;
      v12 = (struct _MDL *)v64;
      if ( v65 )
        *(_QWORD *)(v65 + 72) = v64;
      v16 = v96 + 8;
      v94 = *(_DWORD *)(v64 + 44);
      v96 += 8LL;
      goto LABEL_68;
    }
    v16 = v96 + 8;
    v94 = P->ByteOffset;
    v96 += 8LL;
LABEL_98:
    v10 &= ~4u;
    v54 = v108;
    *p_ByteCount <<= 12;
    v55 = MiReadyFlushMdlToWrite(v12, v54, a6);
    if ( v107 )
    {
      v87 = MiIssueAsynchronousFlush(v111, v107, (_DWORD)v110, v105, v55, (a6 >> 2) & 4, IoPriorityThread, v115);
      v107 = v87;
      if ( v87 )
      {
        v12 = *(struct _MDL **)(v87 + 72);
        v94 = 16;
        goto LABEL_125;
      }
      v10 |= 1u;
      v98 = 0;
      goto LABEL_219;
    }
    v56 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (unsigned int)MiControlAreaUsingExtents(v112, 0LL, v55) )
    {
      MiFlushFileOnlyMdl(v57, v12, v58, a7);
    }
    else
    {
      v59 = a6 >> 2;
      LOBYTE(v59) = v59 & 4;
      MiIssueSynchronousFlush(v111, v12, v58, v59, v115, a7);
    }
    MiUnlockFlushMdl(v12);
    v60 = *a7;
    if ( (int)v60 >= 0 )
    {
      v99 = 0;
      if ( v12 == (struct _MDL *)v123 )
      {
LABEL_103:
        v12->ByteCount = 0;
        goto LABEL_68;
      }
      v94 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v123;
LABEL_125:
      P = v12;
      goto LABEL_103;
    }
    v96 = v56;
    v16 = v56;
    if ( (_DWORD)v60 == -1073741740 && (v10 & 0x10) != 0 )
    {
      v88 = (LARGE_INTEGER *)&Mi10Milliseconds;
      goto LABEL_215;
    }
    v46 = *p_ByteCount;
    if ( !(unsigned int)MiIsRetryIoStatus(v60, *p_ByteCount) )
      goto LABEL_78;
    if ( (--v99 & 0x1F) != 0 )
    {
      v88 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_215:
      KeDelayExecutionThread(0, 0, v88);
LABEL_216:
      *a7 = 0;
      v47 = 1;
      goto LABEL_79;
    }
    if ( v94 != 1 && v46 > 0x1000 )
    {
      v94 = 1;
      goto LABEL_216;
    }
LABEL_78:
    v47 = 0;
LABEL_79:
    v98 = v47;
    if ( v12 != (struct _MDL *)v123 )
    {
      if ( v94 != 1 )
        v94 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v123;
      P = (struct _MDL *)v123;
    }
    v12->ByteCount = 0;
    if ( v47 )
    {
LABEL_68:
      if ( v16 >= v102 )
        break;
      continue;
    }
    break;
  }
  v15 = (ULONG_PTR)v108;
LABEL_82:
  v48 = ((__int64)(v16 - v117) >> 3 << 12) + v97;
  v97 = v48;
  LOBYTE(v17) = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v15 + 16)
    && v16 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
  {
    v62 = MiEndingOffset(v15) & 0xFFF;
    if ( v62 )
    {
      v48 -= (unsigned int)(4096 - v62);
      v97 = v48;
    }
  }
  v49 = MiDecrementSubsectionViewCount(v15) + v101;
  v101 = v49;
  if ( !*(_QWORD *)(v15 + 96) && (*(_BYTE *)(v15 + 34) & 1) == 0 )
  {
    v49 += MiInsertUnusedSubsection(v15);
    v101 = v49;
  }
  if ( (v10 & 8) == 0 )
  {
    if ( v98 )
    {
      v20 = v113;
      if ( v15 != v113 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        v108 = (_QWORD *)v15;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8);
          v19 = v97;
          v96 = v16;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_87:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v90 = KeGetCurrentIrql();
      if ( v90 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v90 >= 2u )
      {
        v91 = KeGetCurrentPrcb();
        v92 = v91->SchedulerAssist;
        v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v93 & v92[5]) == 0;
        v92[5] &= v93;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v91);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  v50 = v110;
  v51 = v105;
  if ( v110 && !v105 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v110) < 0 )
      LOBYTE(v10) = v10 | 1;
    ExFreePoolWithTag(v50, 0);
  }
  v52 = v112;
  MiDereferenceControlAreaFile(v112, v111);
  if ( v49 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v52 + 60) & 0x3FF)), 1LL, v49);
  if ( v115 )
    IoDiskIoAttributionDereference(v115);
  KeLeaveCriticalRegionThread(CurrentThread);
  if ( (v10 & 1) != 0 )
    return MiFlushSectionInternal(BugCheckParameter1, v119 - 8, v122, v113, v51, a6 & 0xFFFFFFFB, a7);
  if ( (v10 & 8) != 0 )
  {
    result = 3221226547LL;
    *a7 = -1073740749;
  }
  else
  {
    result = *a7;
  }
  *((_QWORD *)a7 + 1) = v48;
  return result;
}
