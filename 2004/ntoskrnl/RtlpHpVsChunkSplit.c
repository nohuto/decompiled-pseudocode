/*
 * XREFs of RtlpHpVsChunkSplit @ 0x140289C90
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1402898C0 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14028EF10 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1402D8268 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402DBFD0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402DC140 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140339E08 (RtlpHpVsFreeChunkRemove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __int64 SchedulerAssist; // r9
  unsigned int v21; // r10d
  bool v22; // zf
  unsigned int v23; // r15d
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rdi
  int v28; // edx
  unsigned __int64 v29; // rdx
  unsigned int i; // r10d
  __int64 v31; // r9
  unsigned int v32; // r12d
  unsigned int v33; // r8d
  __int64 v34; // r15
  unsigned __int16 v35; // cx
  unsigned __int64 v36; // r8
  __int64 v37; // r15
  unsigned __int16 v38; // dx
  __int64 v39; // r15
  unsigned int v40; // r8d
  unsigned int v41; // edx
  unsigned int v42; // r9d
  unsigned __int64 v43; // r15
  __int64 v44; // rdx
  unsigned int v45; // r8d
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r11
  unsigned int v48; // eax
  unsigned int v49; // edx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  BOOLEAN v53; // al
  unsigned __int64 v54; // rax
  __int64 v56; // rax
  int v57; // eax
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // r12
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v63; // rcx
  unsigned __int8 v64; // al
  int v65; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v67; // rdx
  unsigned __int8 v68; // r15
  unsigned __int64 v69; // r8
  __int64 v70; // rcx
  unsigned int v71; // edx
  unsigned __int64 v72; // r9
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  unsigned int SessionId; // r11d
  ULONG_PTR v76; // r10
  int v77; // edx
  unsigned int v78; // edx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  int v89; // [rsp+34h] [rbp-44h]
  int v90; // [rsp+38h] [rbp-40h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-38h]
  struct _KTHREAD *BugCheckParameter1a; // [rsp+40h] [rbp-38h]
  unsigned __int64 v93; // [rsp+48h] [rbp-30h]
  __int64 v94; // [rsp+50h] [rbp-28h]
  unsigned __int8 v95; // [rsp+68h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v97; // [rsp+C0h] [rbp+48h]
  unsigned int v98; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v99; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v100; // [rsp+D0h] [rbp+58h]
  unsigned int v101; // [rsp+D8h] [rbp+60h]

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
  v100 = v18;
  v19 = 16 * a4 + 32;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  SchedulerAssist = (unsigned __int8)(RtlpHpHeapGlobals ^ (v12 >> 12) ^ a3);
  v21 = v100;
  v22 = v100 == 0;
  *(_DWORD *)(a3 + 8) = SchedulerAssist;
  v23 = v21;
  if ( v22 )
    v19 = 16 * a4;
  v24 = 0xF0F0F0F0F0F0F0FLL;
  v25 = (0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v12 - 1 + v19) >> 12))) & (-1LL << (v12 >> 12));
  v26 = (v25 ^ *(_QWORD *)(a2 + 16)) & v25;
  if ( v26 )
  {
    LODWORD(SchedulerAssist) = SchedulerAssist | 0x200;
    v22 = (a5 & 1) == 0;
    v57 = a5 & 1;
    *(_DWORD *)(a3 + 8) = SchedulerAssist;
    v90 = v57;
    if ( v22 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
      v24 = 0xF0F0F0F0F0F0F0FLL;
    }
    v58 = a2 + 24;
    _BitScanForward64(&v59, v26);
    v93 = (0x101010101010101LL
         * ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    _BitScanReverse64(&v60, v26);
    v61 = a2 + (unsigned int)((_DWORD)v59 << 12);
    v89 = v60 - v59 + 1;
    v101 = v89 << 12;
    BugCheckParameter1 = ((1LL << v89) - 1) << v59;
    if ( *(_DWORD *)(a1 + 8) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v24 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v24;
      }
      v63 = (volatile signed __int32 *)(a2 + 24);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v63, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v63, CurrentIrql, v24, SchedulerAssist);
      v64 = CurrentIrql;
      v58 = a2 + 24;
      v95 = v64;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v95 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    }
    v65 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            a1 ^ *(_QWORD *)(a1 + 128),
            v61,
            v101);
    if ( v65 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= BugCheckParameter1;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v93);
      v65 = 0;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v58, retaddr);
      else
        *(_DWORD *)v58 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v67 = CurrentPrcb->SchedulerAssist;
      if ( v67 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v84 = v67[6] - 1;
          v67[6] = v84;
          if ( !v84 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v85 = KeGetCurrentIrql(), v85 <= 0xFu) )
      {
        v68 = v95;
        if ( v95 <= 0xFu && v85 >= 2u )
        {
          v86 = KeGetCurrentPrcb();
          v87 = v86->SchedulerAssist;
          v68 = v95;
          v88 = ~(unsigned __int16)(-1LL << (v95 + 1));
          v22 = (v88 & v87[5]) == 0;
          v87[5] &= v88;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v86);
        }
      }
      else
      {
        v68 = v95;
      }
      __writecr8(v68);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v58);
      LODWORD(v99) = 0;
      BugCheckParameter1a = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v58) == 1 )
        SessionId = MmGetSessionIdEx((__int64)BugCheckParameter1a->ApcState.Process);
      else
        SessionId = -1;
      v76 = (ULONG_PTR)BugCheckParameter1a;
      --BugCheckParameter1a->SpecialApcDisable;
      ++BugCheckParameter1a->AbAllocationRegionCount;
      v77 = *(char *)(v76 + 792) | *(char *)(v76 + 870);
      LOBYTE(v101) = BugCheckParameter1a->AbAllocationRegionCount;
      v78 = v77 ^ 0x3F;
      v22 = !_BitScanReverse((unsigned int *)&v79, v78);
      if ( v22 )
        goto LABEL_124;
      while ( 1 )
      {
        v80 = ~(1 << v79);
        v81 = (__int64)&BugCheckParameter1a->LockEntries[v79];
        v78 &= v80;
        v94 = v81;
        if ( (*(_BYTE *)(v81 + 26) & 1) != 0
          && (*(_DWORD *)(v81 + 32) & 1) == 0
          && (*(_QWORD *)(v81 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v58 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v81 + 40) == SessionId )
        {
          *(_BYTE *)(v81 + 26) &= ~1u;
          if ( *(_QWORD *)(v81 + 32) )
            break;
        }
        v22 = !_BitScanReverse((unsigned int *)&v79, v78);
        if ( v22 )
          goto LABEL_124;
      }
      if ( !v81 )
      {
LABEL_124:
        if ( (*((_DWORD *)&BugCheckParameter1a->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1a, v58, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v81 + 32) |= 2u;
        if ( *(__int64 *)(v81 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v81);
          v81 = v94;
          v76 = (ULONG_PTR)BugCheckParameter1a;
        }
        LODWORD(v99) = *(_DWORD *)(v81 + 88) & 0x1FFFF;
        *(_DWORD *)(v81 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v81 + 25) &= ~1u;
        *(_QWORD *)(v81 + 32) = 0LL;
        v82 = (v81 - *(_QWORD *)(v76 + 800)) / 96;
        if ( (_BYTE)v101 == 1 )
          *(_BYTE *)(v76 + 792) |= 1 << v82;
        else
          _InterlockedOr8((volatile signed __int8 *)(v76 + 870), 1 << v82);
      }
      --*(_BYTE *)(v76 + 794);
      KiAbThreadRemoveBoosts(v76, v58, &v99);
      v22 = BugCheckParameter1a->SpecialApcDisable++ == -1;
      if ( v22
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)BugCheckParameter1a->ApcState.ApcListHead[0].Flink != &BugCheckParameter1a->152 )
      {
        KiCheckForKernelApcDelivery((__int64)BugCheckParameter1a);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v23 = v100;
    if ( v65 < 0 )
    {
      v23 = v100 + a4;
      a4 = 0;
    }
    if ( !v90 )
      RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v23 )
  {
    v27 = 16LL * a4 + a3;
    if ( a4 )
      v28 = (unsigned __int16)a4;
    else
      v28 = (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v27) ^ HIDWORD(*(_QWORD *)v27));
    HIDWORD(v97) = v28 & 0xFF00FFFF | 0x10000;
    LODWORD(v97) = v23 << 16;
    *(_QWORD *)v27 = v97 ^ RtlpHpHeapGlobals ^ v27;
    v29 = v27 + 16LL * v23;
    *(_DWORD *)(v27 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v27 ^ ((unsigned int)(v27 - a2) >> 12));
    if ( v29 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v29 + 4) = WORD2(v29) ^ WORD2(RtlpHpHeapGlobals) ^ v23;
    for ( i = 0; ; i = v32 )
    {
      v31 = a2 + 48;
      v101 = i;
      v32 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v27 ^ *(_DWORD *)v27) >> 16;
      v98 = v32;
      v33 = (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v27 ^ *(_QWORD *)v27) >> 32);
      *(_BYTE *)(v27 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v27);
      if ( v33 )
      {
        v99 = v27 - 16LL * v33;
        v34 = RtlpHpHeapGlobals ^ *(_QWORD *)v99 ^ v99;
        if ( (v34 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v27 - 16LL * v33, v31);
          v27 = v99;
          v31 = a2 + 48;
          i = v101;
          v32 += WORD1(v34);
        }
      }
      v35 = *(_WORD *)(a2 + 32);
      v36 = v27 + 16LL * v32;
      if ( v36 < v31 + 16 * (unsigned __int64)v35 )
      {
        v37 = RtlpHpHeapGlobals ^ v36 ^ *(_QWORD *)v36;
        if ( (v37 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, v36, v31);
          v35 = *(_WORD *)(a2 + 32);
          v31 = a2 + 48;
          i = v101;
          v32 += WORD1(v37);
        }
      }
      v38 = v35;
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v36 = v27 + 16LL * v32;
        if ( v36 < v31 + 16 * (unsigned __int64)v35 )
        {
          v39 = RtlpHpHeapGlobals ^ v36 ^ *(_QWORD *)v36;
          if ( (v39 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove(a1, a2, v36, v31);
            v38 = *(_WORD *)(a2 + 32);
            v31 = a2 + 48;
            i = v101;
            v32 += WORD1(v39);
          }
        }
      }
      if ( v98 != v32 )
      {
        v36 = v27 + 16LL * v32;
        *(_WORD *)(v27 + 2) = WORD1(RtlpHpHeapGlobals) ^ v32 ^ WORD1(v27);
        v38 = *(_WORD *)(a2 + 32);
        if ( v36 < v31 + 16 * (unsigned __int64)v38 )
        {
          *(_WORD *)(v36 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v36) ^ v32;
          v38 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v32 == v38 )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v36, v31);
        return a4;
      }
      if ( v32 <= i )
        break;
      v40 = (v27 - a2 + 4127) & 0xFFFFF000;
      v41 = (v27 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v27) ^ *(unsigned __int16 *)(v27 + 2)) - a2) & 0xFFFFF000;
      if ( v40 < v41 )
      {
        v42 = v41 - v40;
        v43 = *(_QWORD *)(a2 + 16) & (-1LL << (v40 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v41 - 1) >> 12)));
      }
      else
      {
        v42 = 0;
        v43 = 0LL;
      }
      if ( v42 < 0x1000 )
        break;
      if ( !v43 )
        break;
      v73 = (0x101010101010101LL
           * ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v99 = v73;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v74 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v74 <= 8 )
          v74 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v73 <= v74 )
          break;
      }
      *(_BYTE *)(v27 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v27) ^ 1;
      *(_DWORD *)(v27 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v27 ^ ((unsigned int)(v27 - a2) >> 12)) | 0x200;
      v101 = a5 & 1;
      if ( (a5 & 1) == 0 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), a6);
        LODWORD(v73) = v99;
      }
      RtlpHpVsSubsegmentCommitPages(a1, a2, v43, v73, 0);
      if ( !v101 )
        RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), a6);
      *(_DWORD *)(v27 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0
      && ((v27 + 32) & 0xFFF) != 0
      && ((v27 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v27 < 16
                                                      * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v27) ^ *(unsigned __int16 *)(v27 + 2)) )
    {
      v69 = ((v27 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
      v70 = (__int64)(v69 - v27) >> 4;
      v71 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v27) ^ *(unsigned __int16 *)(v27 + 2)) - v70;
      *(_WORD *)(v27 + 2) = WORD1(RtlpHpHeapGlobals) ^ v70 ^ WORD1(v27);
      *(_OWORD *)v69 = 0LL;
      *(_OWORD *)(v69 + 16) = 0LL;
      *(_WORD *)(v69 + 2) = v71;
      v72 = v69 + 16LL * v71;
      *(_WORD *)(v69 + 4) = v70;
      *(_QWORD *)v69 ^= RtlpHpHeapGlobals ^ v69;
      if ( v72 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
        *(_WORD *)(v72 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v72) ^ v71;
      RtlpHpVsFreeChunkInsert(a1, a2);
    }
    v44 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v27) ^ *(unsigned __int16 *)(v27 + 2));
    v45 = (v27 - a2 + 4127) & 0xFFFFF000;
    v46 = ((v27 & 0xFFF) + v44 + 4095) >> 12;
    v47 = (unsigned __int64)(v44 + 4095) >> 12;
    v48 = (v44 + v27 - a2) & 0xFFFFF000;
    if ( v45 < v48 )
    {
      v49 = v48 - v45;
      v50 = *(_QWORD *)(a2 + 16) & (-1LL << (v45 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v48 - 1) >> 12)));
    }
    else
    {
      v49 = 0;
      v50 = 0LL;
    }
    v51 = v50 - ((v50 >> 1) & 0x5555555555555555LL);
    *(_QWORD *)(a1 + 56) += (unsigned int)((0x101010101010101LL
                                          * (((v51 & 0x3333333333333333LL)
                                            + ((v51 >> 2) & 0x3333333333333333LL)
                                            + (((v51 & 0x3333333333333333LL) + ((v51 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    *(_WORD *)v27 = RtlpHpHeapGlobals ^ v27 ^ (v46
                                             + (v49 >> 12)
                                             - v47
                                             - ((0x101010101010101LL
                                               * (((v51 & 0x3333333333333333LL)
                                                 + ((v51 >> 2) & 0x3333333333333333LL)
                                                 + (((v51 & 0x3333333333333333LL) + ((v51 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
    v52 = *(_QWORD *)(a1 + 24);
    if ( (v52 & 1) != 0 )
    {
      v56 = *(_QWORD *)(a1 + 16);
      if ( v56 )
        v11 = v56 ^ (a1 + 16);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
    }
    v53 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v27 ^ (unsigned int)v27) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v11 - 8) ^ *(_DWORD *)(v11 - 8)) )
        {
          v54 = *(_QWORD *)v11;
          if ( (v52 & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_57;
            v54 ^= v11;
          }
          if ( !v54 )
          {
LABEL_57:
            v53 = 0;
            break;
          }
        }
        else
        {
          v54 = *(_QWORD *)(v11 + 8);
          if ( (v52 & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_50;
            v54 ^= v11;
          }
          if ( !v54 )
          {
LABEL_50:
            v53 = 1;
            break;
          }
        }
        v11 = v54;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v11, v53, (PRTL_BALANCED_NODE)(v27 + 8));
  }
  return a4;
}
