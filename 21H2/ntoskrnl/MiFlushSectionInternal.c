/*
 * XREFs of MiFlushSectionInternal @ 0x140219DB0
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     MiCleanSection @ 0x14037F28C (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140529794 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14023B270 (MiCheckProtoPtePageState.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiIsRetryIoStatus @ 0x1402558E4 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x140299EBC (MiWaitForPageWriteCompletion.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiIssueSynchronousFlush @ 0x1402AF5C0 (MiIssueSynchronousFlush.c)
 *     MiChargePartitionResidentAvailable @ 0x1402B0CC8 (MiChargePartitionResidentAvailable.c)
 *     MiExpandFlushMdl @ 0x1402BAC80 (MiExpandFlushMdl.c)
 *     MiRemoveUnusedSubsection @ 0x1402F8B04 (MiRemoveUnusedSubsection.c)
 *     MiInitializePageFaultPacket @ 0x1402FCC78 (MiInitializePageFaultPacket.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140315DE0 (MiIncrementSubsectionViewCount.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiReadyFlushMdlToWrite @ 0x14031C3A8 (MiReadyFlushMdlToWrite.c)
 *     MiEndingOffset @ 0x14031C840 (MiEndingOffset.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     MiUnlockFlushMdl @ 0x1403572B8 (MiUnlockFlushMdl.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x14053D2E8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14053D5E0 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x140541130 (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v9; // r9
  int v10; // ebx
  int v11; // edi
  __int64 v12; // rsi
  struct _MDL *v13; // r13
  bool v14; // zf
  __int64 v15; // r8
  ULONG_PTR v16; // r15
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  int v23; // r14d
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  ULONG_PTR v27; // rsi
  unsigned __int64 v28; // rbx
  char v29; // al
  unsigned int *p_ByteCount; // r15
  unsigned int v31; // r14d
  int v32; // r12d
  unsigned __int64 v33; // rbx
  ULONG_PTR *v34; // r10
  int v35; // eax
  BOOL v36; // r13d
  int v37; // r14d
  __int64 v38; // r9
  struct _KPRCB *v39; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v41; // ett
  int v42; // r12d
  int v43; // ecx
  char v44; // al
  ULONG ByteOffset; // r8d
  unsigned int v46; // edx
  unsigned int v47; // esi
  int v48; // esi
  __int64 v49; // r14
  __int64 v50; // r12
  PVOID v51; // rbx
  __int64 v52; // r15
  __int64 v53; // rsi
  __int64 result; // rax
  _QWORD *v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  volatile LONG *v62; // rcx
  int v63; // eax
  int v64; // esi
  __int64 v65; // rsi
  __int64 v66; // r15
  _QWORD *v67; // rax
  __int64 Pool; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v82; // rax
  ULONG_PTR *v83; // r10
  unsigned __int64 v84; // r8
  struct _KPRCB *v85; // r9
  __int64 v86; // rdx
  signed __int32 v87; // eax
  __int64 v88; // rax
  LARGE_INTEGER *v89; // r8
  int v90; // eax
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r9
  _DWORD *v93; // r8
  int v94; // eax
  int v95; // [rsp+44h] [rbp-284h]
  __int64 v96; // [rsp+48h] [rbp-280h]
  unsigned __int64 v97; // [rsp+50h] [rbp-278h]
  __int64 v98; // [rsp+58h] [rbp-270h]
  int v99; // [rsp+60h] [rbp-268h]
  int v100; // [rsp+70h] [rbp-258h]
  struct _MDL *P; // [rsp+78h] [rbp-250h]
  __int64 v102; // [rsp+80h] [rbp-248h]
  unsigned __int64 v103; // [rsp+88h] [rbp-240h]
  int v104; // [rsp+90h] [rbp-238h] BYREF
  int IoPriorityThread; // [rsp+94h] [rbp-234h]
  __int64 v106; // [rsp+98h] [rbp-230h]
  int v107; // [rsp+A0h] [rbp-228h]
  __int64 v108; // [rsp+A8h] [rbp-220h]
  _QWORD *v109; // [rsp+B0h] [rbp-218h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp-210h]
  PVOID v111; // [rsp+C0h] [rbp-208h]
  __int64 v112; // [rsp+C8h] [rbp-200h]
  __int64 v113; // [rsp+D0h] [rbp-1F8h]
  __int64 v114; // [rsp+D8h] [rbp-1F0h]
  int v115; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v116; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v117; // [rsp+F0h] [rbp-1D8h]
  unsigned __int64 v118; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v120; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+110h] [rbp-1B8h]
  __int64 v122; // [rsp+118h] [rbp-1B0h]
  _QWORD *v123; // [rsp+120h] [rbp-1A8h]
  _BYTE v124[192]; // [rsp+130h] [rbp-198h] BYREF
  _BYTE v125[144]; // [rsp+1F0h] [rbp-D8h] BYREF

  v123 = a3;
  BugCheckParameter1 = a1;
  v106 = a5;
  v104 = 0;
  v114 = a4;
  memset(v124, 0, 0xB8uLL);
  v10 = a6;
  v11 = 0;
  if ( (a6 & 2) == 0 )
    v11 = 2;
  if ( a5 )
  {
    v10 = a6 | 4;
    a6 |= 4u;
  }
  v12 = *a3;
  v111 = 0LL;
  v108 = 0LL;
  v13 = (struct _MDL *)v124;
  P = (struct _MDL *)v124;
  v14 = (*(_DWORD *)(v12 + 56) & 0x40000000) == 0;
  v113 = v12;
  if ( !v14 )
  {
    v10 &= ~4u;
    a6 = v10;
  }
  if ( (v10 & 4) != 0 )
  {
    Pool = MiAllocatePool(64LL, 2560LL, 1632005453LL, v9);
    v69 = v106;
    v70 = Pool;
    v111 = (PVOID)Pool;
    if ( v106 )
    {
      *(_QWORD *)(v106 + 40) = Pool;
      if ( !Pool )
        return 3221225626LL;
    }
    else if ( !Pool )
    {
      goto LABEL_8;
    }
    *(_WORD *)(Pool + 48) = 0;
    v71 = Pool + 48;
    *(_BYTE *)(Pool + 50) = 6;
    v13 = (struct _MDL *)(Pool + 80);
    v108 = Pool;
    *(_DWORD *)(Pool + 52) = 0;
    v72 = (_QWORD *)(Pool + 56);
    v72[1] = v72;
    *v72 = v72;
    *(_DWORD *)v70 = 0;
    *(_QWORD *)(v70 + 16) = 0LL;
    *(_QWORD *)(v70 + 40) = v69;
    *(_QWORD *)(v70 + 32) = v12;
    *(_QWORD *)(v70 + 72) = v13;
    *(_QWORD *)(v70 + 2112) = v71;
    *(_WORD *)(v70 + 312) = 0;
    *(_BYTE *)(v70 + 314) = 6;
    *(_DWORD *)(v70 + 316) = 0;
    *(_QWORD *)(v70 + 328) = v70 + 320;
    *(_QWORD *)(v70 + 320) = v70 + 320;
    *(_QWORD *)(v70 + 336) = v70 + 344;
    *(_DWORD *)(v70 + 264) = 0;
    *(_QWORD *)(v70 + 280) = 0LL;
    *(_QWORD *)(v70 + 304) = v69;
    *(_QWORD *)(v70 + 296) = v12;
    *(_QWORD *)(v70 + 2120) = v70 + 312;
    *(_WORD *)(v70 + 576) = 0;
    *(_BYTE *)(v70 + 578) = 6;
    *(_DWORD *)(v70 + 580) = 0;
    *(_QWORD *)(v70 + 592) = v70 + 584;
    *(_QWORD *)(v70 + 584) = v70 + 584;
    *(_QWORD *)(v70 + 600) = v70 + 608;
    *(_DWORD *)(v70 + 528) = 0;
    *(_QWORD *)(v70 + 544) = 0LL;
    *(_QWORD *)(v70 + 568) = v69;
    *(_QWORD *)(v70 + 560) = v12;
    *(_QWORD *)(v70 + 2128) = v70 + 576;
    *(_WORD *)(v70 + 840) = 0;
    *(_BYTE *)(v70 + 842) = 6;
    *(_DWORD *)(v70 + 844) = 0;
    *(_QWORD *)(v70 + 856) = v70 + 848;
    *(_QWORD *)(v70 + 848) = v70 + 848;
    *(_QWORD *)(v70 + 864) = v70 + 872;
    *(_DWORD *)(v70 + 792) = 0;
    *(_QWORD *)(v70 + 808) = 0LL;
    *(_QWORD *)(v70 + 832) = v69;
    *(_QWORD *)(v70 + 824) = v12;
    *(_QWORD *)(v70 + 2136) = v70 + 840;
    *(_WORD *)(v70 + 1104) = 0;
    *(_BYTE *)(v70 + 1106) = 6;
    *(_DWORD *)(v70 + 1108) = 0;
    *(_QWORD *)(v70 + 1120) = v70 + 1112;
    *(_QWORD *)(v70 + 1112) = v70 + 1112;
    *(_QWORD *)(v70 + 1128) = v70 + 1136;
    *(_DWORD *)(v70 + 1056) = 0;
    *(_QWORD *)(v70 + 1072) = 0LL;
    *(_QWORD *)(v70 + 1096) = v69;
    *(_QWORD *)(v70 + 1088) = v12;
    *(_QWORD *)(v70 + 2144) = v70 + 1104;
    *(_WORD *)(v70 + 1368) = 0;
    *(_BYTE *)(v70 + 1370) = 6;
    *(_DWORD *)(v70 + 1372) = 0;
    *(_QWORD *)(v70 + 1384) = v70 + 1376;
    *(_QWORD *)(v70 + 1376) = v70 + 1376;
    *(_DWORD *)(v70 + 1320) = 0;
    P = v13;
    *(_QWORD *)(v70 + 1336) = 0LL;
    *(_QWORD *)(v70 + 1392) = v70 + 1400;
    *(_QWORD *)(v70 + 1360) = v69;
    *(_QWORD *)(v70 + 1352) = v12;
    *(_QWORD *)(v70 + 2152) = v70 + 1368;
    *(_WORD *)(v70 + 1632) = 0;
    *(_BYTE *)(v70 + 1634) = 6;
    *(_DWORD *)(v70 + 1636) = 0;
    *(_QWORD *)(v70 + 1648) = v70 + 1640;
    *(_QWORD *)(v70 + 1640) = v70 + 1640;
    *(_QWORD *)(v70 + 1656) = v70 + 1664;
    *(_DWORD *)(v70 + 1584) = 0;
    *(_QWORD *)(v70 + 1600) = 0LL;
    *(_QWORD *)(v70 + 1624) = v69;
    *(_QWORD *)(v70 + 1616) = v12;
    *(_QWORD *)(v70 + 2160) = v70 + 1632;
    *(_WORD *)(v70 + 1896) = 0;
    *(_BYTE *)(v70 + 1898) = 6;
    *(_DWORD *)(v70 + 1900) = 0;
    *(_QWORD *)(v70 + 1912) = v70 + 1904;
    *(_QWORD *)(v70 + 1904) = v70 + 1904;
    *(_QWORD *)(v70 + 1920) = v70 + 1928;
    *(_DWORD *)(v70 + 1848) = 0;
    *(_QWORD *)(v70 + 1864) = 0LL;
    *(_QWORD *)(v70 + 1888) = v69;
    *(_QWORD *)(v70 + 1880) = v12;
    *(_QWORD *)(v70 + 2168) = v70 + 1896;
  }
LABEL_8:
  v120 = a2 + 8;
  v112 = MiReferenceControlAreaFile(v12);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v15 + 116) & 0x400) == 0
    && *(_BYTE *)(v15 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v10 < 0 )
    v11 |= 0x10u;
  v109 = a3;
  *a7 = 0;
  v16 = (ULONG_PTR)a3;
  v17 = BugCheckParameter1;
  *((_QWORD *)a7 + 1) = 0LL;
  v13->Next = 0LL;
  v13->MdlFlags = 0;
  v13->StartVa = 0LL;
  *(_QWORD *)&v13->ByteCount = 0LL;
  --*(_WORD *)(v15 + 484);
  v95 = 16;
  v100 = 0;
  v99 = 1;
  v98 = 0LL;
  v97 = v17;
  SpinLock = (PEX_SPIN_LOCK)(v12 + 72);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  if ( !*(_QWORD *)(v12 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v14 = (v76 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v76;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    if ( v111 )
    {
      ExFreePoolWithTag(v111, 0);
      if ( v106 )
        *(_QWORD *)(v106 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v12, v112);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v19 = *(_QWORD *)(v12 + 120);
  v116 = 8 * v19;
  if ( 8 * v19 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v19 + 32)) <= 1 )
    __fastfail(0xEu);
  v102 = 0LL;
  v20 = 0LL;
  v21 = v114;
  while ( 1 )
  {
LABEL_14:
    if ( v16 == v21 )
    {
      v22 = v120;
    }
    else
    {
      v22 = *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu));
      v21 = v114;
    }
    v103 = v22;
    if ( !v17 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      v97 = v17;
    }
    if ( *(_DWORD *)(v16 + 104) && *(_QWORD *)(v16 + 8) )
      break;
    v20 += (__int64)(v22 - v17) >> 3 << 12;
    v67 = *(_QWORD **)(v16 + 16);
    v98 = v20;
    if ( !v67 )
    {
      if ( v22 == *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu)) )
      {
        v49 = v20;
        v50 = v102;
        v90 = MiEndingOffset(v16) & 0xFFF;
        if ( v90 )
          v49 = v98 - (unsigned int)(4096 - v90);
        goto LABEL_87;
      }
LABEL_225:
      v50 = v102;
      v49 = v20;
      goto LABEL_87;
    }
    if ( v21 == v16 )
      goto LABEL_225;
    v17 = v67[1];
    v16 = *(_QWORD *)(v16 + 16);
    v97 = v17;
    v109 = v67;
  }
  MiIncrementSubsectionViewCount(v16);
  if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v16);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v77 = KeGetCurrentIrql();
      if ( v77 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v77 >= 2u )
      {
        v78 = KeGetCurrentPrcb();
        v79 = v78->SchedulerAssist;
        v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v14 = (v80 & v79[5]) == 0;
        v79[5] &= v80;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v78);
      }
    }
  }
  __writecr8((unsigned __int8)v18);
  v118 = v17;
  if ( v17 >= v22 )
    goto LABEL_82;
  while ( 2 )
  {
    v23 = v11;
    v96 = MiCheckProtoPtePageState(v17);
    if ( !v96 )
    {
      p_ByteCount = &v13->ByteCount;
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v97 = v17;
      if ( !v13->ByteCount )
        goto LABEL_68;
      goto LABEL_98;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)v17;
        v25 = *(_QWORD *)v17;
        if ( (*(_QWORD *)v17 & 1) != 0 )
          goto LABEL_33;
        if ( (*(_QWORD *)v17 & 0xC00LL) != 0x800 )
          goto LABEL_63;
        if ( !v24 || !qword_140C4DF40 || (v24 & qword_140C4DF40) != 0 )
        {
          v25 = *(_QWORD *)v17;
          if ( qword_140C4DF40 && (v24 & 0x10) == 0 )
            v25 = v24 & ~qword_140C4DF40;
LABEL_33:
          v26 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL);
          v122 = v26;
          if ( (*(_QWORD *)(v26 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
            break;
        }
      }
      v27 = v26 - 0x58000000000LL;
      v115 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v115);
        while ( *(__int64 *)(v27 + 24) < 0 );
      }
      if ( *(_QWORD *)v17 == v24 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v27 )
    {
LABEL_63:
      p_ByteCount = &v13->ByteCount;
      goto LABEL_64;
    }
    v28 = *(_QWORD *)v17;
    if ( v17 >= 0xFFFFF6FB7DBED000uLL
      && v17 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v28 & 1) != 0
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v82 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
        LOBYTE(Flink) = v28 | 0x20;
        if ( (v82 & 0x20) == 0 )
          Flink = *(struct _LIST_ENTRY **)v17;
        LOBYTE(v28) = (_BYTE)Flink;
        if ( (v82 & 0x42) != 0 )
          LOBYTE(v28) = (unsigned __int8)Flink | 0x42;
      }
    }
    v29 = *(_BYTE *)(v27 + 34);
    p_ByteCount = &v13->ByteCount;
    if ( (v29 & 8) != 0 )
    {
      if ( !*p_ByteCount )
      {
        if ( (v11 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v27, v113, v96, 17LL);
          goto LABEL_68;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 |= 8u;
LABEL_219:
        v17 = v103;
        break;
      }
LABEL_133:
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_98;
    }
    if ( (v29 & 0x10) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_64:
      v46 = *p_ByteCount;
      v11 |= 4u;
      if ( !*p_ByteCount )
        v11 = v23;
      goto LABEL_66;
    }
    v31 = *p_ByteCount;
    if ( (v29 & 0x20) != 0 )
    {
      memset(v125, 0, 0x88uLL);
      if ( !v31 )
      {
        v104 = 1;
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v125);
        MiObtainProtoReference(v96, 1LL);
        MiWaitForCollidedFaultComplete((unsigned int)v125, v27, v96, 17, (__int64)&v104);
        goto LABEL_68;
      }
      goto LABEL_133;
    }
    v32 = 0;
    if ( !v31 )
    {
      v32 = 2;
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      v62 = SpinLock;
      ++*(_DWORD *)(v113 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel(v62);
      v13->Next = 0LL;
      v13->MdlFlags = 0;
      v13->StartVa = 0LL;
      *p_ByteCount = 0;
      v13->ByteOffset = v95;
    }
    v33 = v28 & 1;
    v34 = *(ULONG_PTR **)(qword_140C4E648 + 8 * ((*(_QWORD *)(v27 + 40) >> 39) & 0x3FFLL));
    v35 = *(_DWORD *)(v27 + 16);
    v117 = v34;
    v36 = (v35 & 0x400) != 0LL;
    v37 = v32 & 2;
    v38 = 4LL;
    if ( !v33 )
      v37 = v32;
    if ( !v37 )
      v38 = 8LL;
    v107 = v38;
    if ( v34 == &MiSystemPartition )
    {
      v39 = KeGetCurrentPrcb();
      CachedResidentAvailable = v39->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v41 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v39->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v41 == CachedResidentAvailable )
          {
            v42 = 1;
            goto LABEL_52;
          }
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v42 = MiChargePartitionResidentAvailable(v34, 1LL, (unsigned int)-(v37 != 0), v38);
    if ( !v42 )
      goto LABEL_196;
    LODWORD(v38) = v107;
    v34 = v117;
LABEL_52:
    v43 = v36;
    if ( !v37 )
      v43 = v36;
    if ( v43 && !(unsigned int)MiChargeCommit(v34, 1LL, (unsigned int)v38) )
    {
      v83 = v117;
      v84 = 1LL;
      if ( v117 != &MiSystemPartition )
        goto LABEL_195;
      v85 = KeGetCurrentPrcb();
      v86 = (int)v85->CachedResidentAvailable;
      if ( (_DWORD)v86 == -1 )
        goto LABEL_195;
      if ( (unsigned __int64)(v86 + 1) <= 0x100 )
      {
        do
        {
          v87 = _InterlockedCompareExchange((volatile signed __int32 *)&v85->CachedResidentAvailable, v86 + 1, v86);
          v14 = (_DWORD)v86 == v87;
          LODWORD(v86) = v87;
          if ( v14 )
            goto LABEL_196;
        }
        while ( v87 != -1 && (unsigned __int64)(v87 + 1LL) <= 0x100 );
      }
      if ( (int)v86 > 192
        && (_DWORD)v86 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v85->CachedResidentAvailable,
                            192,
                            v86) )
      {
        v84 = (int)v86 - 192 + 1LL;
      }
      if ( v84 )
LABEL_195:
        _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 896, v84);
LABEL_196:
      v42 = 0;
      goto LABEL_59;
    }
    if ( !v33 )
    {
      MiUnlinkPageFromList(v27, 0);
      *(_QWORD *)(v27 + 24) &= 0xC000000000000000uLL;
    }
    v44 = *(_BYTE *)(v27 + 34);
    ++*(_WORD *)(v27 + 32);
    *(_BYTE *)(v27 + 34) = v44 | 8;
    *(_BYTE *)(v27 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v27) & 0x10) != 0 )
      MiClearPfnImageVerified(v27);
LABEL_59:
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = P;
    if ( !v42 )
    {
      v64 = 3;
      goto LABEL_108;
    }
    *((_QWORD *)&P[1].Next + *p_ByteCount) = v122 / 48;
    ByteOffset = P->ByteOffset;
    v46 = *p_ByteCount + 1;
    *p_ByteCount = v46;
    if ( v42 != 3 || v46 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    {
      if ( v46 == ByteOffset )
      {
        v64 = 1;
        goto LABEL_108;
      }
      v17 = v97;
LABEL_66:
      v17 += 8LL;
      v97 = v17;
      if ( (v11 & 4) == 0 && (v17 != v103 || !v46) )
        goto LABEL_68;
      goto LABEL_98;
    }
    v64 = 2;
LABEL_108:
    MiUnlockProtoPoolPage(v96, 17LL);
    v17 = v97;
    if ( v64 == 3 )
      goto LABEL_98;
    if ( v64 == 2 || v95 == 1 || v97 + 8 >= v103 )
    {
      v17 = v97 + 8;
      v97 += 8LL;
      goto LABEL_98;
    }
    v65 = MiExpandFlushMdl(P);
    if ( v65 )
    {
      v66 = v108;
      if ( P != (struct _MDL *)v124 && (!v108 || P != (struct _MDL *)(v108 + 80)) )
        ExFreePoolWithTag(P, 0);
      P = (struct _MDL *)v65;
      v13 = (struct _MDL *)v65;
      if ( v66 )
        *(_QWORD *)(v66 + 72) = v65;
      v17 = v97 + 8;
      v95 = *(_DWORD *)(v65 + 44);
      v97 += 8LL;
      goto LABEL_68;
    }
    v17 = v97 + 8;
    v95 = P->ByteOffset;
    v97 += 8LL;
LABEL_98:
    v11 &= ~4u;
    v55 = v109;
    *p_ByteCount <<= 12;
    v56 = MiReadyFlushMdlToWrite(v13, v55, a6);
    if ( v108 )
    {
      v88 = MiIssueAsynchronousFlush(v112, v108, (_DWORD)v111, v106, v56, (a6 >> 2) & 4, IoPriorityThread, v116);
      v108 = v88;
      if ( v88 )
      {
        v13 = *(struct _MDL **)(v88 + 72);
        v95 = 16;
        goto LABEL_125;
      }
      v11 |= 1u;
      v99 = 0;
      goto LABEL_219;
    }
    v57 = *(_QWORD *)(48 * (__int64)v13[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (unsigned int)MiControlAreaUsingExtents(v113, 0LL, v56) )
    {
      MiFlushFileOnlyMdl(v58, v13, v59, a7);
    }
    else
    {
      v60 = a6 >> 2;
      LOBYTE(v60) = v60 & 4;
      MiIssueSynchronousFlush(v112, v13, v59, v60, v116, a7);
    }
    MiUnlockFlushMdl(v13);
    v61 = *a7;
    if ( (int)v61 >= 0 )
    {
      v100 = 0;
      if ( v13 == (struct _MDL *)v124 )
      {
LABEL_103:
        v13->ByteCount = 0;
        goto LABEL_68;
      }
      v95 = 16;
      ExFreePoolWithTag(v13, 0);
      v13 = (struct _MDL *)v124;
LABEL_125:
      P = v13;
      goto LABEL_103;
    }
    v97 = v57;
    v17 = v57;
    if ( (_DWORD)v61 == -1073741740 && (v11 & 0x10) != 0 )
    {
      v89 = (LARGE_INTEGER *)&Mi10Milliseconds;
      goto LABEL_215;
    }
    v47 = *p_ByteCount;
    if ( !(unsigned int)MiIsRetryIoStatus(v61, *p_ByteCount) )
      goto LABEL_78;
    if ( (--v100 & 0x1F) != 0 )
    {
      v89 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_215:
      KeDelayExecutionThread(0, 0, v89);
LABEL_216:
      *a7 = 0;
      v48 = 1;
      goto LABEL_79;
    }
    if ( v95 != 1 && v47 > 0x1000 )
    {
      v95 = 1;
      goto LABEL_216;
    }
LABEL_78:
    v48 = 0;
LABEL_79:
    v99 = v48;
    if ( v13 != (struct _MDL *)v124 )
    {
      if ( v95 != 1 )
        v95 = 16;
      ExFreePoolWithTag(v13, 0);
      v13 = (struct _MDL *)v124;
      P = (struct _MDL *)v124;
    }
    v13->ByteCount = 0;
    if ( v48 )
    {
LABEL_68:
      if ( v17 >= v103 )
        break;
      continue;
    }
    break;
  }
  v16 = (ULONG_PTR)v109;
LABEL_82:
  v49 = ((__int64)(v17 - v118) >> 3 << 12) + v98;
  v98 = v49;
  LOBYTE(v18) = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v16 + 16)
    && v17 == *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu)) )
  {
    v63 = MiEndingOffset(v16) & 0xFFF;
    if ( v63 )
    {
      v49 -= (unsigned int)(4096 - v63);
      v98 = v49;
    }
  }
  v50 = MiDecrementSubsectionViewCount(v16) + v102;
  v102 = v50;
  if ( !*(_QWORD *)(v16 + 96) && (*(_BYTE *)(v16 + 34) & 1) == 0 )
  {
    v50 += MiInsertUnusedSubsection(v16);
    v102 = v50;
  }
  if ( (v11 & 8) == 0 )
  {
    if ( v99 )
    {
      v21 = v114;
      if ( v16 != v114 )
      {
        v16 = *(_QWORD *)(v16 + 16);
        v109 = (_QWORD *)v16;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          v20 = v98;
          v97 = v17;
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
      v91 = KeGetCurrentIrql();
      if ( v91 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v91 >= 2u )
      {
        v92 = KeGetCurrentPrcb();
        v93 = v92->SchedulerAssist;
        v94 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v14 = (v94 & v93[5]) == 0;
        v93[5] &= v94;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v92);
      }
    }
  }
  __writecr8((unsigned __int8)v18);
  v51 = v111;
  v52 = v106;
  if ( v111 && !v106 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v111) < 0 )
      LOBYTE(v11) = v11 | 1;
    ExFreePoolWithTag(v51, 0);
  }
  v53 = v113;
  MiDereferenceControlAreaFile(v113, v112);
  if ( v50 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v53 + 60) & 0x3FF)), 1LL, v50);
  if ( v116 )
    IoDiskIoAttributionDereference(v116);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (v11 & 1) != 0 )
    return MiFlushSectionInternal(BugCheckParameter1, v120 - 8, v123, v114, v52, a6 & 0xFFFFFFFB, a7);
  if ( (v11 & 8) != 0 )
  {
    result = 3221226547LL;
    *a7 = -1073740749;
  }
  else
  {
    result = *a7;
  }
  *((_QWORD *)a7 + 1) = v49;
  return result;
}
