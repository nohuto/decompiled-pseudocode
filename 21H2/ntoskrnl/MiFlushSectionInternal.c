/*
 * XREFs of MiFlushSectionInternal @ 0x1402BE6B0
 * Callers:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiCleanSection @ 0x14037EDDC (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405299D4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x14022A42C (MiWaitForPageWriteCompletion.c)
 *     MiIssueSynchronousFlush @ 0x14022D920 (MiIssueSynchronousFlush.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiExpandFlushMdl @ 0x140238E90 (MiExpandFlushMdl.c)
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiRemoveUnusedSubsection @ 0x140303854 (MiRemoveUnusedSubsection.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiReadyFlushMdlToWrite @ 0x1403270F8 (MiReadyFlushMdlToWrite.c)
 *     MiEndingOffset @ 0x140327590 (MiEndingOffset.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MiUnlockFlushMdl @ 0x140362008 (MiUnlockFlushMdl.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x14053D528 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x14053D820 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
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
  unsigned int v44; // r8d
  unsigned int v45; // edx
  unsigned int v46; // esi
  int v47; // esi
  __int64 v48; // r14
  __int64 v49; // r12
  PVOID v50; // rbx
  __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 result; // rax
  _QWORD *v57; // rdx
  char v58; // al
  unsigned __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // r8
  NTSTATUS v62; // ecx
  volatile LONG *v63; // rcx
  int v64; // eax
  int v65; // esi
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rsi
  char *v69; // r15
  _QWORD *v70; // rax
  char *Pool; // rax
  __int64 v72; // r8
  char *v73; // rdx
  char *v74; // rcx
  _QWORD *v75; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v88; // rax
  ULONG_PTR *v89; // r10
  unsigned __int64 v90; // r8
  struct _KPRCB *v91; // r9
  __int64 v92; // rdx
  signed __int32 v93; // eax
  __int64 v94; // rax
  LARGE_INTEGER *v95; // r8
  int v96; // eax
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r9
  _DWORD *v99; // r8
  int v100; // eax
  int v101; // [rsp+44h] [rbp-284h]
  __int64 v102; // [rsp+48h] [rbp-280h]
  unsigned __int64 v103; // [rsp+50h] [rbp-278h]
  __int64 v104; // [rsp+58h] [rbp-270h]
  int v105; // [rsp+60h] [rbp-268h]
  int v106; // [rsp+70h] [rbp-258h]
  unsigned int *P; // [rsp+78h] [rbp-250h]
  __int64 v108; // [rsp+80h] [rbp-248h]
  unsigned __int64 v109; // [rsp+88h] [rbp-240h]
  int v110; // [rsp+90h] [rbp-238h] BYREF
  int IoPriorityThread; // [rsp+94h] [rbp-234h]
  __int64 v112; // [rsp+98h] [rbp-230h]
  unsigned int v113; // [rsp+A0h] [rbp-228h]
  char *v114; // [rsp+A8h] [rbp-220h]
  _QWORD *v115; // [rsp+B0h] [rbp-218h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp-210h]
  PVOID v117; // [rsp+C0h] [rbp-208h]
  __int64 v118; // [rsp+C8h] [rbp-200h]
  __int64 v119; // [rsp+D0h] [rbp-1F8h]
  __int64 v120; // [rsp+D8h] [rbp-1F0h]
  int v121; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v123; // [rsp+F0h] [rbp-1D8h]
  unsigned __int64 v124; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v126; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter1; // [rsp+110h] [rbp-1B8h]
  __int64 v128; // [rsp+118h] [rbp-1B0h]
  __int64 *v129; // [rsp+120h] [rbp-1A8h]
  _BYTE v130[192]; // [rsp+130h] [rbp-198h] BYREF
  _QWORD v131[18]; // [rsp+1F0h] [rbp-D8h] BYREF

  v129 = a3;
  BugCheckParameter1 = a1;
  v112 = a5;
  v110 = 0;
  v120 = a4;
  memset(v130, 0, 0xB8uLL);
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
  v117 = 0LL;
  v114 = 0LL;
  v12 = (struct _MDL *)v130;
  P = (unsigned int *)v130;
  v13 = (*(_DWORD *)(v11 + 56) & 0x40000000) == 0;
  v119 = v11;
  if ( !v13 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    Pool = (char *)MiAllocatePool(64, 0xA00uLL, 0x61466D4Du);
    v72 = v112;
    v73 = Pool;
    v117 = Pool;
    if ( v112 )
    {
      *(_QWORD *)(v112 + 40) = Pool;
      if ( !Pool )
        return 3221225626LL;
    }
    else if ( !Pool )
    {
      goto LABEL_8;
    }
    *((_WORD *)Pool + 24) = 0;
    v74 = Pool + 48;
    Pool[50] = 6;
    v12 = (struct _MDL *)(Pool + 80);
    v114 = Pool;
    *((_DWORD *)Pool + 13) = 0;
    v75 = Pool + 56;
    v75[1] = v75;
    *v75 = v75;
    *(_DWORD *)v73 = 0;
    *((_QWORD *)v73 + 2) = 0LL;
    *((_QWORD *)v73 + 5) = v72;
    *((_QWORD *)v73 + 4) = v11;
    *((_QWORD *)v73 + 9) = v12;
    *((_QWORD *)v73 + 264) = v74;
    *((_WORD *)v73 + 156) = 0;
    v73[314] = 6;
    *((_DWORD *)v73 + 79) = 0;
    *((_QWORD *)v73 + 41) = v73 + 320;
    *((_QWORD *)v73 + 40) = v73 + 320;
    *((_QWORD *)v73 + 42) = v73 + 344;
    *((_DWORD *)v73 + 66) = 0;
    *((_QWORD *)v73 + 35) = 0LL;
    *((_QWORD *)v73 + 38) = v72;
    *((_QWORD *)v73 + 37) = v11;
    *((_QWORD *)v73 + 265) = v73 + 312;
    *((_WORD *)v73 + 288) = 0;
    v73[578] = 6;
    *((_DWORD *)v73 + 145) = 0;
    *((_QWORD *)v73 + 74) = v73 + 584;
    *((_QWORD *)v73 + 73) = v73 + 584;
    *((_QWORD *)v73 + 75) = v73 + 608;
    *((_DWORD *)v73 + 132) = 0;
    *((_QWORD *)v73 + 68) = 0LL;
    *((_QWORD *)v73 + 71) = v72;
    *((_QWORD *)v73 + 70) = v11;
    *((_QWORD *)v73 + 266) = v73 + 576;
    *((_WORD *)v73 + 420) = 0;
    v73[842] = 6;
    *((_DWORD *)v73 + 211) = 0;
    *((_QWORD *)v73 + 107) = v73 + 848;
    *((_QWORD *)v73 + 106) = v73 + 848;
    *((_QWORD *)v73 + 108) = v73 + 872;
    *((_DWORD *)v73 + 198) = 0;
    *((_QWORD *)v73 + 101) = 0LL;
    *((_QWORD *)v73 + 104) = v72;
    *((_QWORD *)v73 + 103) = v11;
    *((_QWORD *)v73 + 267) = v73 + 840;
    *((_WORD *)v73 + 552) = 0;
    v73[1106] = 6;
    *((_DWORD *)v73 + 277) = 0;
    *((_QWORD *)v73 + 140) = v73 + 1112;
    *((_QWORD *)v73 + 139) = v73 + 1112;
    *((_QWORD *)v73 + 141) = v73 + 1136;
    *((_DWORD *)v73 + 264) = 0;
    *((_QWORD *)v73 + 134) = 0LL;
    *((_QWORD *)v73 + 137) = v72;
    *((_QWORD *)v73 + 136) = v11;
    *((_QWORD *)v73 + 268) = v73 + 1104;
    *((_WORD *)v73 + 684) = 0;
    v73[1370] = 6;
    *((_DWORD *)v73 + 343) = 0;
    *((_QWORD *)v73 + 173) = v73 + 1376;
    *((_QWORD *)v73 + 172) = v73 + 1376;
    *((_DWORD *)v73 + 330) = 0;
    P = (unsigned int *)v12;
    *((_QWORD *)v73 + 167) = 0LL;
    *((_QWORD *)v73 + 174) = v73 + 1400;
    *((_QWORD *)v73 + 170) = v72;
    *((_QWORD *)v73 + 169) = v11;
    *((_QWORD *)v73 + 269) = v73 + 1368;
    *((_WORD *)v73 + 816) = 0;
    v73[1634] = 6;
    *((_DWORD *)v73 + 409) = 0;
    *((_QWORD *)v73 + 206) = v73 + 1640;
    *((_QWORD *)v73 + 205) = v73 + 1640;
    *((_QWORD *)v73 + 207) = v73 + 1664;
    *((_DWORD *)v73 + 396) = 0;
    *((_QWORD *)v73 + 200) = 0LL;
    *((_QWORD *)v73 + 203) = v72;
    *((_QWORD *)v73 + 202) = v11;
    *((_QWORD *)v73 + 270) = v73 + 1632;
    *((_WORD *)v73 + 948) = 0;
    v73[1898] = 6;
    *((_DWORD *)v73 + 475) = 0;
    *((_QWORD *)v73 + 239) = v73 + 1904;
    *((_QWORD *)v73 + 238) = v73 + 1904;
    *((_QWORD *)v73 + 240) = v73 + 1928;
    *((_DWORD *)v73 + 462) = 0;
    *((_QWORD *)v73 + 233) = 0LL;
    *((_QWORD *)v73 + 236) = v72;
    *((_QWORD *)v73 + 235) = v11;
    *((_QWORD *)v73 + 271) = v73 + 1896;
  }
LABEL_8:
  v126 = a2 + 8;
  v118 = MiReferenceControlAreaFile(v11);
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
  v115 = a3;
  *a7 = 0;
  v15 = (ULONG_PTR)a3;
  v16 = BugCheckParameter1;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v14 + 484);
  v101 = 16;
  v106 = 0;
  v105 = 1;
  v104 = 0LL;
  v103 = v16;
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
          v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v13 = (v79 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v79;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    if ( v117 )
    {
      ExFreePoolWithTag(v117, 0);
      if ( v112 )
        *(_QWORD *)(v112 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v11, v118);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v80, v81, v82);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v18 = *(_QWORD *)(v11 + 120);
  v122 = 8 * v18;
  if ( 8 * v18 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v18 + 32)) <= 1 )
    __fastfail(0xEu);
  v108 = 0LL;
  v19 = 0LL;
  v20 = v120;
  while ( 1 )
  {
LABEL_14:
    if ( v15 == v20 )
    {
      v21 = v126;
    }
    else
    {
      v21 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
      v20 = v120;
    }
    v109 = v21;
    if ( !v16 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      v103 = v16;
    }
    if ( *(_DWORD *)(v15 + 104) && *(_QWORD *)(v15 + 8) )
      break;
    v19 += (__int64)(v21 - v16) >> 3 << 12;
    v70 = *(_QWORD **)(v15 + 16);
    v104 = v19;
    if ( !v70 )
    {
      if ( v21 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
      {
        v48 = v19;
        v49 = v108;
        v96 = MiEndingOffset(v15) & 0xFFF;
        if ( v96 )
          v48 = v104 - (unsigned int)(4096 - v96);
        goto LABEL_87;
      }
LABEL_225:
      v49 = v108;
      v48 = v19;
      goto LABEL_87;
    }
    if ( v20 == v15 )
      goto LABEL_225;
    v16 = v70[1];
    v15 = *(_QWORD *)(v15 + 16);
    v103 = v16;
    v115 = v70;
  }
  MiIncrementSubsectionViewCount(v15);
  if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v83 = KeGetCurrentIrql();
      if ( v83 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v83 >= 2u )
      {
        v84 = KeGetCurrentPrcb();
        v85 = v84->SchedulerAssist;
        v86 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v86 & v85[5]) == 0;
        v85[5] &= v86;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v84);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  v124 = v16;
  if ( v16 >= v21 )
    goto LABEL_82;
  while ( 2 )
  {
    v22 = v10;
    v102 = MiCheckProtoPtePageState(v16);
    if ( !v102 )
    {
      p_ByteCount = &v12->ByteCount;
      v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v103 = v16;
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
        if ( !v23 || !qword_140C4DF80 || (v23 & qword_140C4DF80) != 0 )
        {
          v24 = *(_QWORD *)v16;
          if ( qword_140C4DF80 && (v23 & 0x10) == 0 )
            v24 = v23 & ~qword_140C4DF80;
LABEL_33:
          v25 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL);
          v128 = v25;
          if ( (*(_QWORD *)(v25 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
            break;
        }
      }
      v26 = v25 - 0x58000000000LL;
      v121 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v121);
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
        v88 = *((_QWORD *)&Flink->Flink + ((v16 >> 3) & 0x1FF));
        LOBYTE(Flink) = v27 | 0x20;
        if ( (v88 & 0x20) == 0 )
          Flink = *(struct _LIST_ENTRY **)v16;
        LOBYTE(v27) = (_BYTE)Flink;
        if ( (v88 & 0x42) != 0 )
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
          MiWaitForPageWriteCompletion(v26, v119, v102, 17);
          goto LABEL_68;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 |= 8u;
LABEL_219:
        v16 = v109;
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
      memset(v131, 0, 0x88uLL);
      if ( !v30 )
      {
        v110 = 1;
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v131);
        MiObtainProtoReference(v102, 1LL);
        MiWaitForCollidedFaultComplete(v131, v26, v102, 0x11u, &v110);
        goto LABEL_68;
      }
      goto LABEL_133;
    }
    v31 = 0;
    if ( !v30 )
    {
      v31 = 2;
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      v63 = SpinLock;
      ++*(_DWORD *)(v119 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel(v63);
      v12->Next = 0LL;
      v12->MdlFlags = 0;
      v12->StartVa = 0LL;
      *p_ByteCount = 0;
      v12->ByteOffset = v101;
    }
    v32 = v27 & 1;
    v33 = *(ULONG_PTR **)(qword_140C4E688 + 8 * ((*(_QWORD *)(v26 + 40) >> 39) & 0x3FFLL));
    v34 = *(_DWORD *)(v26 + 16);
    v123 = v33;
    v35 = (v34 & 0x400) != 0LL;
    v36 = v31 & 2;
    v37 = 4;
    if ( !v32 )
      v36 = v31;
    if ( !v36 )
      v37 = 8;
    v113 = v37;
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
    v41 = MiChargePartitionResidentAvailable((__int64)v33, 1uLL, (unsigned int)-(v36 != 0));
    if ( !v41 )
      goto LABEL_196;
    v37 = v113;
    v33 = v123;
LABEL_52:
    v42 = v35;
    if ( !v36 )
      v42 = v35;
    if ( v42 && !(unsigned int)MiChargeCommit(v33, 1LL, v37) )
    {
      v89 = v123;
      v90 = 1LL;
      if ( v123 != &MiSystemPartition )
        goto LABEL_195;
      v91 = KeGetCurrentPrcb();
      v92 = (int)v91->CachedResidentAvailable;
      if ( (_DWORD)v92 == -1 )
        goto LABEL_195;
      if ( (unsigned __int64)(v92 + 1) <= 0x100 )
      {
        do
        {
          v93 = _InterlockedCompareExchange((volatile signed __int32 *)&v91->CachedResidentAvailable, v92 + 1, v92);
          v13 = (_DWORD)v92 == v93;
          LODWORD(v92) = v93;
          if ( v13 )
            goto LABEL_196;
        }
        while ( v93 != -1 && (unsigned __int64)(v93 + 1LL) <= 0x100 );
      }
      if ( (int)v92 > 192
        && (_DWORD)v92 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v91->CachedResidentAvailable,
                            192,
                            v92) )
      {
        v90 = (int)v92 - 192 + 1LL;
      }
      if ( v90 )
LABEL_195:
        _InterlockedExchangeAdd64((volatile signed __int64 *)v89 + 896, v90);
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
      MiClearPfnImageVerified(v26, 28);
LABEL_59:
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = (struct _MDL *)P;
    if ( !v41 )
    {
      v65 = 3;
      goto LABEL_108;
    }
    *(_QWORD *)&P[2 * *p_ByteCount + 12] = v128 / 48;
    v44 = P[11];
    v45 = *p_ByteCount + 1;
    *p_ByteCount = v45;
    if ( v41 != 3 || v45 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    {
      if ( v45 == v44 )
      {
        v65 = 1;
        goto LABEL_108;
      }
      v16 = v103;
LABEL_66:
      v16 += 8LL;
      v103 = v16;
      if ( (v10 & 4) == 0 && (v16 != v109 || !v45) )
        goto LABEL_68;
      goto LABEL_98;
    }
    v65 = 2;
LABEL_108:
    MiUnlockProtoPoolPage(v102, 17LL);
    v16 = v103;
    if ( v65 == 3 )
      goto LABEL_98;
    if ( v65 == 2 || v101 == 1 || v103 + 8 >= v109 )
    {
      v16 = v103 + 8;
      v103 += 8LL;
      goto LABEL_98;
    }
    v68 = MiExpandFlushMdl(P, (unsigned int)((__int64)(v109 - v103) >> 3) + v101 - 1, v66, v67);
    if ( v68 )
    {
      v69 = v114;
      if ( P != (unsigned int *)v130 && (!v114 || P != (unsigned int *)(v114 + 80)) )
        ExFreePoolWithTag(P, 0);
      P = (unsigned int *)v68;
      v12 = (struct _MDL *)v68;
      if ( v69 )
        *((_QWORD *)v69 + 9) = v68;
      v16 = v103 + 8;
      v101 = *(_DWORD *)(v68 + 44);
      v103 += 8LL;
      goto LABEL_68;
    }
    v16 = v103 + 8;
    v101 = P[11];
    v103 += 8LL;
LABEL_98:
    v10 &= ~4u;
    v57 = v115;
    *p_ByteCount <<= 12;
    v58 = MiReadyFlushMdlToWrite(v12, v57, a6);
    if ( v114 )
    {
      v94 = MiIssueAsynchronousFlush(v118, (_DWORD)v114, (_DWORD)v117, v112, v58, (a6 >> 2) & 4, IoPriorityThread, v122);
      v114 = (char *)v94;
      if ( v94 )
      {
        v12 = *(struct _MDL **)(v94 + 72);
        v101 = 16;
        goto LABEL_125;
      }
      v10 |= 1u;
      v105 = 0;
      goto LABEL_219;
    }
    v59 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (unsigned int)MiControlAreaUsingExtents(v119) )
      MiFlushFileOnlyMdl(v60, v12, v61, a7);
    else
      MiIssueSynchronousFlush(v118, (int)v12, v61, (a6 >> 2) & 4, v122, (NTSTATUS *)a7);
    MiUnlockFlushMdl(v12);
    v62 = *a7;
    if ( (*a7 & 0x80000000) == 0 )
    {
      v106 = 0;
      if ( v12 == (struct _MDL *)v130 )
      {
LABEL_103:
        v12->ByteCount = 0;
        goto LABEL_68;
      }
      v101 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v130;
LABEL_125:
      P = (unsigned int *)v12;
      goto LABEL_103;
    }
    v103 = v59;
    v16 = v59;
    if ( v62 == -1073741740 && (v10 & 0x10) != 0 )
    {
      v95 = (LARGE_INTEGER *)&Mi10Milliseconds;
      goto LABEL_215;
    }
    v46 = *p_ByteCount;
    if ( !MiIsRetryIoStatus(v62, *p_ByteCount) )
      goto LABEL_78;
    if ( (--v106 & 0x1F) != 0 )
    {
      v95 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_215:
      KeDelayExecutionThread(0, 0, v95);
LABEL_216:
      *a7 = 0;
      v47 = 1;
      goto LABEL_79;
    }
    if ( v101 != 1 && v46 > 0x1000 )
    {
      v101 = 1;
      goto LABEL_216;
    }
LABEL_78:
    v47 = 0;
LABEL_79:
    v105 = v47;
    if ( v12 != (struct _MDL *)v130 )
    {
      if ( v101 != 1 )
        v101 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v130;
      P = (unsigned int *)v130;
    }
    v12->ByteCount = 0;
    if ( v47 )
    {
LABEL_68:
      if ( v16 >= v109 )
        break;
      continue;
    }
    break;
  }
  v15 = (ULONG_PTR)v115;
LABEL_82:
  v48 = ((__int64)(v16 - v124) >> 3 << 12) + v104;
  v104 = v48;
  LOBYTE(v17) = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v15 + 16)
    && v16 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
  {
    v64 = MiEndingOffset(v15) & 0xFFF;
    if ( v64 )
    {
      v48 -= (unsigned int)(4096 - v64);
      v104 = v48;
    }
  }
  v49 = MiDecrementSubsectionViewCount(v15) + v108;
  v108 = v49;
  if ( !*(_QWORD *)(v15 + 96) && (*(_BYTE *)(v15 + 34) & 1) == 0 )
  {
    v49 += MiInsertUnusedSubsection((_QWORD *)v15);
    v108 = v49;
  }
  if ( (v10 & 8) == 0 )
  {
    if ( v105 )
    {
      v20 = v120;
      if ( v15 != v120 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        v115 = (_QWORD *)v15;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8);
          v19 = v104;
          v103 = v16;
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
      v97 = KeGetCurrentIrql();
      if ( v97 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v97 >= 2u )
      {
        v98 = KeGetCurrentPrcb();
        v99 = v98->SchedulerAssist;
        v100 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v13 = (v100 & v99[5]) == 0;
        v99[5] &= v100;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v98);
      }
    }
  }
  __writecr8((unsigned __int8)v17);
  v50 = v117;
  v51 = v112;
  if ( v117 && !v112 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v117) < 0 )
      LOBYTE(v10) = v10 | 1;
    ExFreePoolWithTag(v50, 0);
  }
  v52 = v119;
  MiDereferenceControlAreaFile(v119, v118);
  if ( v49 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v52 + 60) & 0x3FF)), 1LL, v49);
  if ( v122 )
    IoDiskIoAttributionDereference(v122);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v53, v54, v55);
  if ( (v10 & 1) != 0 )
    return MiFlushSectionInternal(BugCheckParameter1, v126 - 8, v129, v120, v51, a6 & 0xFFFFFFFB, a7);
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
