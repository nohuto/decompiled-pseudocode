/*
 * XREFs of RtlpHpVsChunkSplit @ 0x140214BB0
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14023B660 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14023BA10 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14023C370 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14030C628 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14031A86C (RtlpHpVsSubsegmentCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  unsigned int v9; // r15d
  __int64 v11; // rbx
  unsigned int v12; // r11d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // r15d
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdi
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned int i; // r10d
  __int64 v29; // r9
  unsigned int v30; // r12d
  unsigned int v31; // r8d
  __int64 v32; // r15
  unsigned __int16 v33; // cx
  unsigned __int64 v34; // r8
  __int64 v35; // r15
  unsigned __int16 v36; // dx
  __int64 v37; // r15
  unsigned int v38; // r8d
  unsigned int v39; // edx
  unsigned int v40; // r9d
  unsigned __int64 v41; // r15
  __int64 v42; // rdx
  unsigned int v43; // r8d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r11
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  BOOLEAN v51; // al
  unsigned __int64 v52; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v60; // rcx
  unsigned __int8 v61; // al
  int v62; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v64; // rdx
  unsigned __int8 v65; // r15
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  unsigned int v68; // edx
  unsigned __int64 v69; // r9
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  unsigned int SessionId; // r11d
  ULONG_PTR v73; // r10
  unsigned int v74; // edx
  bool v75; // zf
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9
  int v82; // eax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  _DWORD *v85; // r9
  int v86; // eax
  int v87; // [rsp+34h] [rbp-44h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+40h] [rbp-38h]
  unsigned __int64 v90; // [rsp+48h] [rbp-30h]
  __int64 v91; // [rsp+50h] [rbp-28h]
  unsigned __int8 v92; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v94; // [rsp+C0h] [rbp+48h]
  unsigned int v95; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v96; // [rsp+C8h] [rbp+50h]
  int v97; // [rsp+C8h] [rbp+50h]
  unsigned int v98; // [rsp+D0h] [rbp+58h]
  unsigned int v99; // [rsp+D8h] [rbp+60h]
  unsigned __int8 v100; // [rsp+D8h] [rbp+60h]

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  v11 = 0LL;
  v12 = a3 - a2;
  v13 = (a3 - a2 + 4127) & 0xFFFFF000;
  v14 = ((a3 + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000)
      - v13;
  if ( v13 >= (((_DWORD)a3
              + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
              - (_DWORD)a2) & 0xFFFFF000) )
    v14 = 0;
  *(_QWORD *)(a1 + 56) -= (v14 >> 12)
                        + (unsigned int)((16
                                        * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
                                        + (unsigned __int64)(a3 & 0xFFF)
                                        + 4095) >> 12)
                        - (unsigned int)(((unsigned __int64)(16
                                                           * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16))
                                        + 4095) >> 12)
                        - (unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_WORD *)a3);
  v15 = v9 - a4;
  if ( v15 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v16 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v17 = 16 * v16;
    if ( (unsigned int)(16 * v16) < 0x20 )
    {
      a4 += v16;
      v15 -= v16;
    }
    else if ( (v17 & 0xFFFFFFC0) == 0 && v17 != 32 )
    {
      ++a4;
      --v15;
    }
  }
  if ( 16 * v15 < 0x20 )
    a4 += v15;
  v18 = 0;
  if ( 16 * v15 >= 0x20 )
    v18 = v15;
  v98 = v18;
  v19 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v20 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v12 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v20;
  v21 = v18;
  if ( !v18 )
    v19 = 16 * a4;
  v22 = 0xF0F0F0F0F0F0F0FLL;
  v23 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v12 - 1 + v19) >> 12))) & (-1LL << (v12 >> 12));
  v24 = (v23 ^ *(_QWORD *)(a2 + 16)) & v23;
  if ( v24 )
  {
    *(_DWORD *)(a3 + 8) = v20 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
      v22 = 0xF0F0F0F0F0F0F0FLL;
    }
    v55 = a2 + 24;
    _BitScanForward64(&v56, v24);
    v90 = (0x101010101010101LL
         * ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v24 - ((v24 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v24 - ((v24 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    _BitScanReverse64(&v57, v24);
    v58 = a2 + (unsigned int)((_DWORD)v56 << 12);
    v87 = v57 - v56 + 1;
    BugCheckParameter1 = ((1LL << v87) - 1) << v56;
    if ( *(_DWORD *)(a1 + 8) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v22 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v22;
      }
      v60 = a2 + 24;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v60, CurrentIrql, v22);
      else
        ExpAcquireSpinLockExclusive(v60, CurrentIrql, v22);
      v61 = CurrentIrql;
      v55 = a2 + 24;
      v92 = v61;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v92 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    }
    v62 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            a1 ^ *(_QWORD *)(a1 + 128),
            v58,
            (unsigned int)(v87 << 12));
    if ( v62 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= BugCheckParameter1;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v90);
      v62 = 0;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
      else
        *(_DWORD *)v55 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v64 = CurrentPrcb->SchedulerAssist;
      if ( v64 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v82 = v64[6] - 1;
          v64[6] = v82;
          if ( !v82 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v83 = KeGetCurrentIrql(), v83 <= 0xFu) )
      {
        v65 = v92;
        if ( v92 <= 0xFu && v83 >= 2u )
        {
          v84 = KeGetCurrentPrcb();
          v85 = v84->SchedulerAssist;
          v65 = v92;
          v86 = ~(unsigned __int16)(-1LL << (v92 + 1));
          v75 = (v86 & v85[5]) == 0;
          v85[5] &= v86;
          if ( v75 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      else
      {
        v65 = v92;
      }
      __writecr8(v65);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v55);
      BugCheckParameter1a = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v55) == 1 )
        SessionId = MmGetSessionIdEx(BugCheckParameter1a->ApcState.Process);
      else
        SessionId = -1;
      v73 = (ULONG_PTR)BugCheckParameter1a;
      --BugCheckParameter1a->SpecialApcDisable;
      v100 = ++BugCheckParameter1a->AbAllocationRegionCount;
      v74 = (*(char *)(v73 + 792) | *(char *)(v73 + 870)) ^ 0x3F;
      v75 = !_BitScanReverse((unsigned int *)&v76, v74);
      if ( v75 )
        goto LABEL_124;
      while ( 1 )
      {
        v77 = ~(1 << v76);
        v78 = (__int64)&BugCheckParameter1a->LockEntries[v76];
        v74 &= v77;
        v91 = v78;
        if ( (*(_BYTE *)(v78 + 26) & 1) != 0
          && (*(_DWORD *)(v78 + 32) & 1) == 0
          && (*(_QWORD *)(v78 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v55 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v78 + 40) == SessionId )
        {
          *(_BYTE *)(v78 + 26) &= ~1u;
          if ( *(_QWORD *)(v78 + 32) )
            break;
        }
        v75 = !_BitScanReverse((unsigned int *)&v76, v74);
        if ( v75 )
          goto LABEL_124;
      }
      if ( !v78 )
      {
LABEL_124:
        if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, v55, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v78 + 32) |= 2u;
        if ( *(__int64 *)(v78 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v78);
          v78 = v91;
          v73 = (ULONG_PTR)BugCheckParameter1a;
        }
        *(_DWORD *)(v78 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v78 + 25) &= ~1u;
        *(_QWORD *)(v78 + 32) = 0LL;
        v79 = (v78 - *(_QWORD *)(v73 + 800)) / 96;
        if ( v100 == 1 )
          *(_BYTE *)(v73 + 792) |= 1 << v79;
        else
          _InterlockedOr8((volatile signed __int8 *)(v73 + 870), 1 << v79);
      }
      --*(_BYTE *)(v73 + 794);
      KiAbThreadRemoveBoosts(v73);
      v75 = BugCheckParameter1a->SpecialApcDisable++ == -1;
      if ( v75
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    v21 = v98;
    if ( v62 < 0 )
    {
      v21 = v98 + a4;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v21 )
  {
    v25 = 16LL * a4 + a3;
    if ( a4 )
      v26 = (unsigned __int16)a4;
    else
      v26 = (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v25) ^ HIDWORD(*(_QWORD *)v25));
    HIDWORD(v94) = v26 & 0xFF00FFFF | 0x10000;
    LODWORD(v94) = v21 << 16;
    *(_QWORD *)v25 = v94 ^ RtlpHpHeapGlobals ^ v25;
    v27 = v25 + 16LL * v21;
    *(_DWORD *)(v25 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ ((unsigned int)(v25 - a2) >> 12));
    if ( v27 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v27 + 4) = WORD2(v27) ^ WORD2(RtlpHpHeapGlobals) ^ v21;
    for ( i = 0; ; i = v30 )
    {
      v29 = a2 + 48;
      v99 = i;
      v30 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v25 ^ *(_DWORD *)v25) >> 16;
      v95 = v30;
      v31 = (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v25 ^ *(_QWORD *)v25) >> 32);
      *(_BYTE *)(v25 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v25);
      if ( v31 )
      {
        v96 = v25 - 16LL * v31;
        v32 = RtlpHpHeapGlobals ^ *(_QWORD *)v96 ^ v96;
        if ( (v32 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v25 - 16LL * v31, v29);
          v25 = v96;
          v29 = a2 + 48;
          i = v99;
          v30 += WORD1(v32);
        }
      }
      v33 = *(_WORD *)(a2 + 32);
      v34 = v25 + 16LL * v30;
      if ( v34 < v29 + 16 * (unsigned __int64)v33 )
      {
        v35 = RtlpHpHeapGlobals ^ v34 ^ *(_QWORD *)v34;
        if ( (v35 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v34, v29);
          v33 = *(_WORD *)(a2 + 32);
          v29 = a2 + 48;
          i = v99;
          v30 += WORD1(v35);
        }
      }
      v36 = v33;
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v34 = v25 + 16LL * v30;
        if ( v34 < v29 + 16 * (unsigned __int64)v33 )
        {
          v37 = RtlpHpHeapGlobals ^ v34 ^ *(_QWORD *)v34;
          if ( (v37 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v34, v29);
            v36 = *(_WORD *)(a2 + 32);
            v29 = a2 + 48;
            i = v99;
            v30 += WORD1(v37);
          }
        }
      }
      if ( v95 != v30 )
      {
        v34 = v25 + 16LL * v30;
        *(_WORD *)(v25 + 2) = WORD1(RtlpHpHeapGlobals) ^ v30 ^ WORD1(v25);
        v36 = *(_WORD *)(a2 + 32);
        if ( v34 < v29 + 16 * (unsigned __int64)v36 )
        {
          *(_WORD *)(v34 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v34) ^ v30;
          v36 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v30 == v36 )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v34, v29);
        return a4;
      }
      if ( v30 <= i )
        break;
      v38 = (v25 - a2 + 4127) & 0xFFFFF000;
      v39 = (v25 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) - a2) & 0xFFFFF000;
      if ( v38 < v39 )
      {
        v40 = v39 - v38;
        v41 = *(_QWORD *)(a2 + 16) & (-1LL << (v38 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
      }
      else
      {
        v40 = 0;
        v41 = 0LL;
      }
      if ( v40 < 0x1000 )
        break;
      if ( !v41 )
        break;
      v70 = (0x101010101010101LL
           * ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v97 = v70;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v71 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v71 <= 8 )
          v71 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v70 <= v71 )
          break;
      }
      *(_BYTE *)(v25 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v25) ^ 1;
      *(_DWORD *)(v25 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v25 ^ ((unsigned int)(v25 - a2) >> 12)) | 0x200;
      if ( (a5 & 1) == 0 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
        LODWORD(v70) = v97;
      }
      RtlpHpVsSubsegmentCommitPages(a1, a2, v41, v70, 0);
      if ( (a5 & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
      *(_DWORD *)(v25 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0
      && ((v25 + 32) & 0xFFF) != 0
      && ((v25 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v25 < 16
                                                      * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) )
    {
      v66 = ((v25 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
      v67 = (__int64)(v66 - v25) >> 4;
      v68 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2)) - v67;
      *(_WORD *)(v25 + 2) = WORD1(RtlpHpHeapGlobals) ^ v67 ^ WORD1(v25);
      *(_OWORD *)v66 = 0LL;
      *(_OWORD *)(v66 + 16) = 0LL;
      *(_WORD *)(v66 + 2) = v68;
      v69 = v66 + 16LL * v68;
      *(_WORD *)(v66 + 4) = v67;
      *(_QWORD *)v66 ^= RtlpHpHeapGlobals ^ v66;
      if ( v69 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
        *(_WORD *)(v69 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v69) ^ v68;
      RtlpHpVsFreeChunkInsert(a1, a2);
    }
    v42 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v25) ^ *(unsigned __int16 *)(v25 + 2));
    v43 = (v25 - a2 + 4127) & 0xFFFFF000;
    v44 = ((v25 & 0xFFF) + v42 + 4095) >> 12;
    v45 = (unsigned __int64)(v42 + 4095) >> 12;
    v46 = (v42 + v25 - a2) & 0xFFFFF000;
    if ( v43 < v46 )
    {
      v47 = v46 - v43;
      v48 = *(_QWORD *)(a2 + 16) & (-1LL << (v43 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v46 - 1) >> 12)));
    }
    else
    {
      v47 = 0;
      v48 = 0LL;
    }
    v49 = v48 - ((v48 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v49 & 0x3333333333333333LL)
                                            + ((v49 >> 2) & 0x3333333333333333LL)
                                            + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v25 = RtlpHpHeapGlobals ^ v25 ^ (v44
                                             + (v47 >> 12)
                                             - v45
                                             - ((0x101010101010101LL
                                               * (((v49 & 0x3333333333333333LL)
                                                 + ((v49 >> 2) & 0x3333333333333333LL)
                                                 + (((v49 & 0x3333333333333333LL) + ((v49 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v50 = *(_QWORD *)(a1 + 24);
    if ( (v50 & 1) != 0 )
    {
      v54 = *(_QWORD *)(a1 + 16);
      if ( v54 )
        v11 = v54 ^ (a1 + 16);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
    }
    v51 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v25 ^ (unsigned int)v25) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v11 - 8) ^ *(_DWORD *)(v11 - 8)) )
        {
          v52 = *(_QWORD *)v11;
          if ( (v50 & 1) != 0 )
          {
            if ( !v52 )
              goto LABEL_57;
            v52 ^= v11;
          }
          if ( !v52 )
          {
LABEL_57:
            v51 = 0;
            break;
          }
        }
        else
        {
          v52 = *(_QWORD *)(v11 + 8);
          if ( (v50 & 1) != 0 )
          {
            if ( !v52 )
              goto LABEL_50;
            v52 ^= v11;
          }
          if ( !v52 )
          {
LABEL_50:
            v51 = 1;
            break;
          }
        }
        v11 = v52;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v11, v51, (PRTL_BALANCED_NODE)(v25 + 8));
  }
  return a4;
}
