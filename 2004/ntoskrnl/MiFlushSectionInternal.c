/*
 * XREFs of MiFlushSectionInternal @ 0x1402AC250
 * Callers:
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MiCleanSection @ 0x14037CD1C (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiEndingOffset @ 0x140224680 (MiEndingOffset.c)
 *     MiReadyFlushMdlToWrite @ 0x140227A9C (MiReadyFlushMdlToWrite.c)
 *     MiUnlockFlushMdl @ 0x14022856C (MiUnlockFlushMdl.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14024C568 (MiRemoveUnusedSubsection.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     MiInitializePageFaultPacket @ 0x14025ACC0 (MiInitializePageFaultPacket.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     MiWaitForPageWriteCompletion @ 0x14030F4FC (MiWaitForPageWriteCompletion.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiIssueSynchronousFlush @ 0x14033C5B0 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x140346FC0 (MiExpandFlushMdl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x140537E18 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x140538110 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rsi
  struct _MDL *v12; // r13
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r15
  ULONG_PTR v17; // r12
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // bl
  int v27; // r14d
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  ULONG_PTR v31; // rsi
  unsigned __int64 v32; // rbx
  char v33; // al
  unsigned int *p_ByteCount; // r15
  unsigned int v35; // r14d
  int v36; // r12d
  unsigned __int64 v37; // rbx
  ULONG_PTR *v38; // r10
  int v39; // eax
  BOOL v40; // r13d
  int v41; // r14d
  struct _KPRCB *v42; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v44; // ett
  int v45; // r12d
  int v46; // ecx
  char v47; // al
  ULONG ByteOffset; // r8d
  unsigned int v49; // edx
  unsigned int v50; // esi
  int v51; // esi
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // r12
  PVOID v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rsi
  _DWORD *v58; // rcx
  __int64 result; // rax
  __int64 *v60; // rdx
  char v61; // al
  __int64 v62; // r14
  unsigned __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  _DWORD *v67; // r14
  __int64 v68; // rcx
  volatile LONG *v69; // rcx
  int v70; // eax
  int v71; // eax
  int v72; // esi
  ULONG_PTR v73; // r14
  struct _MDL *v74; // rsi
  _QWORD *v75; // r15
  __int64 v76; // rax
  _QWORD *Pool; // rax
  __int64 v78; // r8
  _QWORD *v79; // rdx
  char *v80; // rcx
  _QWORD *v81; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v85; // eax
  unsigned __int8 v86; // al
  struct _KPRCB *v87; // r10
  int v88; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v90; // rax
  ULONG_PTR *v91; // r10
  unsigned __int64 v92; // r8
  __int64 v93; // rdx
  signed __int32 v94; // eax
  __int64 v95; // rax
  LARGE_INTEGER *v96; // r8
  __int16 v97; // ax
  int v98; // eax
  unsigned __int8 v99; // al
  struct _KPRCB *v100; // r9
  _DWORD *v101; // r8
  int v102; // eax
  unsigned __int8 v103[4]; // [rsp+40h] [rbp-288h] BYREF
  int v104; // [rsp+44h] [rbp-284h]
  unsigned __int64 v105; // [rsp+48h] [rbp-280h]
  ULONG_PTR v106; // [rsp+50h] [rbp-278h]
  __int64 v107; // [rsp+58h] [rbp-270h]
  int v108; // [rsp+60h] [rbp-268h]
  _DWORD *v109; // [rsp+68h] [rbp-260h]
  int v110; // [rsp+70h] [rbp-258h]
  PVOID P; // [rsp+78h] [rbp-250h]
  __int64 v112; // [rsp+80h] [rbp-248h]
  unsigned __int64 v113; // [rsp+88h] [rbp-240h]
  int v114; // [rsp+90h] [rbp-238h] BYREF
  int IoPriorityThread; // [rsp+94h] [rbp-234h]
  __int64 v116; // [rsp+98h] [rbp-230h]
  unsigned int v117; // [rsp+A0h] [rbp-228h]
  _QWORD *v118; // [rsp+A8h] [rbp-220h]
  __int64 *v119; // [rsp+B0h] [rbp-218h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B8h] [rbp-210h]
  PVOID v121; // [rsp+C0h] [rbp-208h]
  ULONG_PTR v122; // [rsp+C8h] [rbp-200h]
  __int64 v123; // [rsp+D0h] [rbp-1F8h]
  __int64 v124; // [rsp+D8h] [rbp-1F0h]
  int v125; // [rsp+E0h] [rbp-1E8h] BYREF
  __int64 v126; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v127; // [rsp+F0h] [rbp-1D8h]
  ULONG_PTR v128; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v130; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR v131; // [rsp+110h] [rbp-1B8h]
  __int64 v132; // [rsp+118h] [rbp-1B0h]
  __int64 *v133; // [rsp+120h] [rbp-1A8h]
  _BYTE v134[192]; // [rsp+130h] [rbp-198h] BYREF
  _BYTE v135[144]; // [rsp+1F0h] [rbp-D8h] BYREF

  v133 = a3;
  v131 = a1;
  v116 = a5;
  v109 = a7;
  v114 = 0;
  v103[0] = 0;
  v124 = a4;
  memset(v134, 0, 0xB8uLL);
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
  v121 = 0LL;
  v118 = 0LL;
  v12 = (struct _MDL *)v134;
  P = v134;
  v13 = (*(_DWORD *)(v11 + 56) & 0x40000000) == 0;
  v123 = v11;
  if ( !v13 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    Pool = MiAllocatePool(64, 0xA00uLL, 0x61466D4Du);
    v78 = v116;
    v79 = Pool;
    v121 = Pool;
    if ( v116 )
    {
      *(_QWORD *)(v116 + 40) = Pool;
      if ( !Pool )
        return 3221225626LL;
    }
    else if ( !Pool )
    {
      goto LABEL_8;
    }
    *((_WORD *)Pool + 24) = 0;
    v80 = (char *)(Pool + 6);
    *((_BYTE *)Pool + 50) = 6;
    v12 = (struct _MDL *)(Pool + 10);
    v118 = Pool;
    *((_DWORD *)Pool + 13) = 0;
    v81 = Pool + 7;
    v81[1] = v81;
    *v81 = v81;
    *(_DWORD *)v79 = 0;
    v79[2] = 0LL;
    v79[5] = v78;
    v79[4] = v11;
    v79[9] = v12;
    v79[264] = v80;
    *((_WORD *)v79 + 156) = 0;
    *((_BYTE *)v79 + 314) = 6;
    *((_DWORD *)v79 + 79) = 0;
    v79[41] = v79 + 40;
    v79[40] = v79 + 40;
    v79[42] = v79 + 43;
    *((_DWORD *)v79 + 66) = 0;
    v79[35] = 0LL;
    v79[38] = v78;
    v79[37] = v11;
    v79[265] = v79 + 39;
    *((_WORD *)v79 + 288) = 0;
    *((_BYTE *)v79 + 578) = 6;
    *((_DWORD *)v79 + 145) = 0;
    v79[74] = v79 + 73;
    v79[73] = v79 + 73;
    v79[75] = v79 + 76;
    *((_DWORD *)v79 + 132) = 0;
    v79[68] = 0LL;
    v79[71] = v78;
    v79[70] = v11;
    v79[266] = v79 + 72;
    *((_WORD *)v79 + 420) = 0;
    *((_BYTE *)v79 + 842) = 6;
    *((_DWORD *)v79 + 211) = 0;
    v79[107] = v79 + 106;
    v79[106] = v79 + 106;
    v79[108] = v79 + 109;
    *((_DWORD *)v79 + 198) = 0;
    v79[101] = 0LL;
    v79[104] = v78;
    v79[103] = v11;
    v79[267] = v79 + 105;
    *((_WORD *)v79 + 552) = 0;
    *((_BYTE *)v79 + 1106) = 6;
    *((_DWORD *)v79 + 277) = 0;
    v79[140] = v79 + 139;
    v79[139] = v79 + 139;
    v79[141] = v79 + 142;
    *((_DWORD *)v79 + 264) = 0;
    v79[134] = 0LL;
    v79[137] = v78;
    v79[136] = v11;
    v79[268] = v79 + 138;
    *((_WORD *)v79 + 684) = 0;
    *((_BYTE *)v79 + 1370) = 6;
    *((_DWORD *)v79 + 343) = 0;
    v79[173] = v79 + 172;
    v79[172] = v79 + 172;
    *((_DWORD *)v79 + 330) = 0;
    P = v12;
    v79[167] = 0LL;
    v79[174] = v79 + 175;
    v79[170] = v78;
    v79[169] = v11;
    v79[269] = v79 + 171;
    *((_WORD *)v79 + 816) = 0;
    *((_BYTE *)v79 + 1634) = 6;
    *((_DWORD *)v79 + 409) = 0;
    v79[206] = v79 + 205;
    v79[205] = v79 + 205;
    v79[207] = v79 + 208;
    *((_DWORD *)v79 + 396) = 0;
    v79[200] = 0LL;
    v79[203] = v78;
    v79[202] = v11;
    v79[270] = v79 + 204;
    *((_WORD *)v79 + 948) = 0;
    *((_BYTE *)v79 + 1898) = 6;
    *((_DWORD *)v79 + 475) = 0;
    v79[239] = v79 + 238;
    v79[238] = v79 + 238;
    v79[240] = v79 + 241;
    *((_DWORD *)v79 + 462) = 0;
    v79[233] = 0LL;
    v79[236] = v78;
    v79[235] = v11;
    v79[271] = v79 + 237;
  }
LABEL_8:
  v130 = a2 + 8;
  v122 = MiReferenceControlAreaFile(v11);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, v14, CurrentThread);
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v15 + 116) & 0x400) == 0
    && *(_BYTE *)(v15 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v9 < 0 )
    v10 |= 0x10u;
  v119 = a3;
  *a7 = 0;
  v16 = (__int64)a3;
  v17 = v131;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v15 + 484);
  v104 = 16;
  v110 = 0;
  v108 = 1;
  v107 = 0LL;
  v106 = v17;
  SpinLock = (PEX_SPIN_LOCK)(v11 + 72);
  v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( !*(_QWORD *)(v11 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v85 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v13 = (v85 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v85;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    if ( v121 )
    {
      ExFreePoolWithTag(v121, 0);
      if ( v116 )
        *(_QWORD *)(v116 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v11, v122);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v19 = *(_QWORD *)(v11 + 120);
  v126 = 8 * v19;
  if ( 8 * v19 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v19 + 32)) <= 1 )
    __fastfail(0xEu);
  v112 = 0LL;
  v20 = 0LL;
  v21 = v124;
  while ( 1 )
  {
LABEL_14:
    if ( v16 == v21 )
    {
      v22 = v130;
    }
    else
    {
      v22 = *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu));
      v21 = v124;
    }
    v113 = v22;
    if ( !v17 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      v106 = v17;
    }
    if ( *(_DWORD *)(v16 + 104) && *(_QWORD *)(v16 + 8) )
      break;
    v20 += (__int64)(v22 - v17) >> 3 << 12;
    v76 = *(_QWORD *)(v16 + 16);
    v107 = v20;
    if ( !v76 )
    {
      if ( v22 == *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu)) )
      {
        v97 = MiEndingOffset(v16);
        v52 = v107;
        v54 = v112;
        v98 = v97 & 0xFFF;
        if ( v98 )
          v52 = v107 - (unsigned int)(4096 - v98);
        goto LABEL_94;
      }
LABEL_235:
      v54 = v112;
      v52 = v20;
      goto LABEL_94;
    }
    if ( v21 == v16 )
      goto LABEL_235;
    v17 = *(_QWORD *)(v76 + 8);
    v16 = v76;
    v106 = v17;
    v119 = (__int64 *)v76;
  }
  MiIncrementSubsectionViewCount((_QWORD *)v16, 0LL);
  if ( (*(_BYTE *)(v16 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v16);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v86 = KeGetCurrentIrql();
      if ( v86 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v86 >= 2u )
      {
        v87 = KeGetCurrentPrcb();
        v23 = (__int64)v87->SchedulerAssist;
        v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v13 = (v88 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v88;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
  }
  __writecr8((unsigned __int8)v18);
  v24 = 0LL;
  v128 = v17;
  v25 = 0LL;
  v26 = 17;
  v105 = 0LL;
  v103[0] = 17;
  if ( v17 >= v22 )
    goto LABEL_89;
  while ( 1 )
  {
    v27 = v10;
    if ( (v17 & 0xFFF) != 0 )
    {
      if ( v26 != 17 )
        goto LABEL_26;
    }
    else if ( v26 != 17 )
    {
      MiUnlockProtoPoolPage(v25, v26);
    }
    v25 = MiCheckProtoPtePageState(v17, v103);
    v105 = v25;
    if ( v25 )
      break;
    p_ByteCount = &v12->ByteCount;
    v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v13 = v12->ByteCount == 0;
    v106 = v17;
    if ( !v13 )
    {
LABEL_106:
      v26 = v103[0];
      if ( v103[0] != 17 )
      {
        MiUnlockProtoPoolPage(v25, v103[0]);
        v26 = 17;
        v103[0] = 17;
      }
      goto LABEL_108;
    }
    v26 = v103[0];
LABEL_71:
    if ( v17 >= v113 )
      goto LABEL_86;
    v24 = 0LL;
  }
  v24 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_26:
      v28 = *(_QWORD *)v17;
      v29 = *(_QWORD *)v17;
      if ( (*(_QWORD *)v17 & 1) != 0 )
        goto LABEL_34;
      if ( (*(_QWORD *)v17 & 0xC00LL) != 0x800 )
        goto LABEL_64;
      if ( !v28 || !qword_140C4DD40 || (v28 & qword_140C4DD40) != 0 )
      {
        v29 = *(_QWORD *)v17;
        if ( qword_140C4DD40 && (v28 & 0x10) == 0 )
          v29 = v28 & ~qword_140C4DD40;
LABEL_34:
        v30 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL);
        v132 = v30;
        if ( (*(_QWORD *)(v30 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v31 = v30 - 0x58000000000LL;
    v125 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 - 0x58000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v125, v30, v24, v23);
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
      v24 = 0LL;
    }
    if ( *(_QWORD *)v17 == v28 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v31 )
  {
LABEL_64:
    p_ByteCount = &v12->ByteCount;
    goto LABEL_65;
  }
  v32 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v90 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
      LOBYTE(Flink) = v32 | 0x20;
      if ( (v90 & 0x20) == 0 )
        Flink = *(struct _LIST_ENTRY **)v17;
      LOBYTE(v32) = (_BYTE)Flink;
      if ( (v90 & 0x42) != 0 )
        LOBYTE(v32) = (unsigned __int8)Flink | 0x42;
    }
  }
  v33 = *(_BYTE *)(v31 + 34);
  p_ByteCount = &v12->ByteCount;
  if ( (v33 & 8) != 0 )
  {
    if ( !*p_ByteCount )
    {
      if ( (v10 & 2) != 0 )
      {
        MiWaitForPageWriteCompletion(v31, v123, v105, v103[0]);
        v26 = 17;
        v103[0] = 17;
        goto LABEL_70;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v26 = v103[0];
      v10 |= 8u;
LABEL_229:
      v17 = v113;
      goto LABEL_86;
    }
    goto LABEL_143;
  }
  if ( (v33 & 0x10) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_65:
    v49 = *p_ByteCount;
    v10 |= 4u;
    if ( !*p_ByteCount )
      v10 = v27;
LABEL_67:
    v17 += 8LL;
    v106 = v17;
    if ( (v10 & 4) == 0 && (v17 != v113 || !v49) )
    {
      v26 = v103[0];
      goto LABEL_70;
    }
    goto LABEL_105;
  }
  v35 = *p_ByteCount;
  if ( (v33 & 0x20) != 0 )
  {
    memset(v135, 0, 0x88uLL);
    if ( !v35 )
    {
      v114 = 1;
      MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, (__int64)v135);
      MiObtainProtoReference(v105, 1LL);
      MiWaitForCollidedFaultComplete((unsigned int)v135, v31, v105, v103[0], (__int64)&v114);
      v26 = 17;
      v103[0] = 17;
      goto LABEL_70;
    }
LABEL_143:
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_105:
    v25 = v105;
    goto LABEL_106;
  }
  v36 = 0;
  if ( !v35 )
  {
    v36 = 2;
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    v69 = SpinLock;
    ++*(_DWORD *)(v123 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel(v69);
    v70 = v104;
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->StartVa = 0LL;
    *p_ByteCount = 0;
    v12->ByteOffset = v70;
  }
  v37 = v32 & 1;
  v38 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FFLL));
  v39 = *(_DWORD *)(v31 + 16);
  v127 = v38;
  v40 = (v39 & 0x400) != 0LL;
  v41 = v36 & 2;
  v23 = 4LL;
  if ( !v37 )
    v41 = v36;
  if ( !v41 )
    v23 = 8LL;
  v117 = v23;
  if ( v38 == &MiSystemPartition )
  {
    v42 = KeGetCurrentPrcb();
    CachedResidentAvailable = v42->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      while ( CachedResidentAvailable != -1 )
      {
        v44 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v42->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v44 == CachedResidentAvailable )
        {
          v45 = 1;
          goto LABEL_53;
        }
        if ( !CachedResidentAvailable )
          break;
      }
    }
  }
  v45 = MiChargePartitionResidentAvailable((__int64)v38, 1uLL, (unsigned int)-(v41 != 0));
  if ( !v45 )
    goto LABEL_206;
  v23 = v117;
  v38 = v127;
LABEL_53:
  v46 = v40;
  if ( !v41 )
    v46 = v40;
  if ( v46 && !(unsigned int)MiChargeCommit(v38, 1LL, (unsigned int)v23) )
  {
    v91 = v127;
    v92 = 1LL;
    if ( v127 != &MiSystemPartition )
      goto LABEL_205;
    v23 = (__int64)KeGetCurrentPrcb();
    v93 = *(int *)(v23 + 33564);
    if ( (_DWORD)v93 == -1 )
      goto LABEL_205;
    if ( (unsigned __int64)(v93 + 1) <= 0x100 )
    {
      do
      {
        v94 = _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 33564), v93 + 1, v93);
        v13 = (_DWORD)v93 == v94;
        LODWORD(v93) = v94;
        if ( v13 )
          goto LABEL_206;
      }
      while ( v94 != -1 && (unsigned __int64)(v94 + 1LL) <= 0x100 );
    }
    if ( (int)v93 > 192
      && (_DWORD)v93 == _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 33564), 192, v93) )
    {
      v92 = (int)v93 - 192 + 1LL;
    }
    if ( v92 )
LABEL_205:
      _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 896, v92);
LABEL_206:
    v45 = 0;
    goto LABEL_60;
  }
  if ( !v37 )
  {
    MiUnlinkPageFromList(v31, 0);
    *(_QWORD *)(v31 + 24) &= 0xC000000000000000uLL;
  }
  v47 = *(_BYTE *)(v31 + 34);
  ++*(_WORD *)(v31 + 32);
  *(_BYTE *)(v31 + 34) = v47 | 8;
  *(_BYTE *)(v31 + 34) &= ~0x10u;
  if ( (*(_DWORD *)(v31 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v31) & 0x10) != 0 )
    MiClearPfnImageVerified(v31, 28LL);
LABEL_60:
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = (struct _MDL *)P;
  if ( !v45 )
  {
    v72 = 3;
    goto LABEL_118;
  }
  *((_QWORD *)P + *p_ByteCount + 6) = v132 / 48;
  ByteOffset = v12->ByteOffset;
  v49 = *p_ByteCount + 1;
  *p_ByteCount = v49;
  if ( v45 != 3 || v49 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    if ( v49 == ByteOffset )
    {
      v72 = 1;
      goto LABEL_118;
    }
    v17 = v106;
    goto LABEL_67;
  }
  v72 = 2;
LABEL_118:
  MiUnlockProtoPoolPage(v105, v103[0]);
  v17 = v106;
  v26 = 17;
  v103[0] = 17;
  if ( v72 != 3 )
  {
    if ( v72 == 2 || v104 == 1 || (v73 = v106 + 8, v106 + 8 >= v113) )
    {
      v17 = v106 + 8;
      v106 += 8LL;
    }
    else
    {
      v74 = (struct _MDL *)MiExpandFlushMdl(v12);
      if ( v74 )
      {
        v75 = v118;
        if ( v12 != (struct _MDL *)v134 && (!v118 || v12 != (struct _MDL *)(v118 + 10)) )
          ExFreePoolWithTag(v12, 0);
        P = v74;
        v12 = v74;
        if ( v75 )
          v75[9] = v74;
        v17 += 8LL;
        v104 = v74->ByteOffset;
        v106 = v73;
        goto LABEL_70;
      }
      v17 += 8LL;
      v104 = v12->ByteOffset;
      v106 = v73;
    }
  }
LABEL_108:
  v10 &= ~4u;
  v60 = v119;
  *p_ByteCount <<= 12;
  v61 = MiReadyFlushMdlToWrite((__int64)v12, v60, a6);
  if ( v118 )
  {
    v95 = MiIssueAsynchronousFlush(v122, (_DWORD)v118, (_DWORD)v121, v116, v61, (a6 >> 2) & 4, IoPriorityThread, v126);
    v118 = (_QWORD *)v95;
    if ( v95 )
    {
      v12 = *(struct _MDL **)(v95 + 72);
      v104 = 16;
      goto LABEL_135;
    }
    v10 |= 1u;
    v108 = 0;
    goto LABEL_229;
  }
  v62 = v123;
  v63 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( MiControlAreaUsingExtents(v123) )
  {
    MiFlushFileOnlyMdl(v64, v12, v65, v109);
  }
  else
  {
    v66 = a6 >> 2;
    LOBYTE(v66) = v66 & 4;
    MiIssueSynchronousFlush(v122, v12, v65, v66, v126, v109);
  }
  MiUnlockFlushMdl(v12, v62, (__int64)v109);
  v67 = v109;
  v68 = (unsigned int)*v109;
  if ( (int)v68 >= 0 )
  {
    v110 = 0;
    if ( v12 == (struct _MDL *)v134 )
    {
LABEL_113:
      v12->ByteCount = 0;
      goto LABEL_70;
    }
    v104 = 16;
    ExFreePoolWithTag(v12, 0);
    v12 = (struct _MDL *)v134;
LABEL_135:
    P = v12;
    goto LABEL_113;
  }
  v106 = v63;
  v17 = v63;
  if ( (_DWORD)v68 == -1073741740 && (v10 & 0x10) != 0 )
  {
    v96 = (LARGE_INTEGER *)&Mi10Milliseconds;
    goto LABEL_225;
  }
  v50 = *p_ByteCount;
  if ( !(unsigned int)MiIsRetryIoStatus(v68, *p_ByteCount) )
    goto LABEL_83;
  if ( (--v110 & 0x1F) != 0 )
  {
    v96 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_225:
    KeDelayExecutionThread(0, 0, v96);
LABEL_226:
    *v67 = 0;
    v51 = 1;
    goto LABEL_84;
  }
  if ( v104 != 1 && v50 > 0x1000 )
  {
    v104 = 1;
    goto LABEL_226;
  }
LABEL_83:
  v51 = 0;
LABEL_84:
  v108 = v51;
  if ( v12 != (struct _MDL *)v134 )
  {
    if ( v104 != 1 )
      v104 = 16;
    ExFreePoolWithTag(v12, 0);
    v12 = (struct _MDL *)v134;
    P = v134;
  }
  v12->ByteCount = 0;
  if ( v51 )
  {
LABEL_70:
    v25 = v105;
    goto LABEL_71;
  }
LABEL_86:
  if ( v26 != 17 )
  {
    MiUnlockProtoPoolPage(v105, v26);
    v103[0] = 17;
  }
  v16 = (__int64)v119;
LABEL_89:
  v52 = ((__int64)(v17 - v128) >> 3 << 12) + v107;
  v107 = v52;
  LOBYTE(v18) = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v16 + 16)
    && v17 == *(_QWORD *)(v16 + 8) + 8LL * (*(_DWORD *)(v16 + 44) - (*(_DWORD *)(v16 + 52) & 0x3FFFFFFFu)) )
  {
    v71 = MiEndingOffset(v16) & 0xFFF;
    if ( v71 )
    {
      v52 -= (unsigned int)(4096 - v71);
      v107 = v52;
    }
  }
  v53 = MiDecrementSubsectionViewCount((__int64 *)v16, 0);
  v54 = v53 + v112;
  v13 = *(_QWORD *)(v16 + 96) == 0LL;
  v112 += v53;
  if ( v13 && (*(_BYTE *)(v16 + 34) & 1) == 0 )
  {
    v54 += MiInsertUnusedSubsection(v16);
    v112 = v54;
  }
  if ( (v10 & 8) == 0 )
  {
    if ( v108 )
    {
      v21 = v124;
      if ( v16 != v124 )
      {
        v16 = *(_QWORD *)(v16 + 16);
        v119 = (__int64 *)v16;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          v20 = v107;
          v106 = v17;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_94:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v99 = KeGetCurrentIrql();
      if ( v99 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v99 >= 2u )
      {
        v100 = KeGetCurrentPrcb();
        v101 = v100->SchedulerAssist;
        v102 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v13 = (v102 & v101[5]) == 0;
        v101[5] &= v102;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v100);
      }
    }
  }
  __writecr8((unsigned __int8)v18);
  v55 = v121;
  v56 = v116;
  if ( v121 && !v116 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v121) < 0 )
      LOBYTE(v10) = v10 | 1;
    ExFreePoolWithTag(v55, 0);
  }
  v57 = v123;
  MiDereferenceControlAreaFile(v123, v122);
  if ( v54 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v57 + 60) & 0x3FF)), 1LL, v54);
  if ( v126 )
    IoDiskIoAttributionDereference(v126);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (v10 & 1) != 0 )
    return MiFlushSectionInternal(v131, v130 - 8, v133, v124, v56, a6 & 0xFFFFFFFB, v109);
  v58 = v109;
  if ( (v10 & 8) != 0 )
  {
    result = 3221226547LL;
    *v109 = -1073740749;
  }
  else
  {
    result = (unsigned int)*v109;
  }
  *((_QWORD *)v58 + 1) = v52;
  return result;
}
