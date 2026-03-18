/*
 * XREFs of MiUserFault @ 0x14031CD90
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 * Callees:
 *     MiWaitForRotateToComplete @ 0x140201E8C (MiWaitForRotateToComplete.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14022FC80 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAllowGuardFault @ 0x140230B44 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14023659C (MiCheckFatalAccessViolation.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiZeroFault @ 0x1402AD610 (MiZeroFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140580028 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405A2E3C (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x1405A70EC (MiDelayFaultingThread.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406B42F4 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 **v1; // r12
  _KPROCESS *Process; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int16 *v8; // r14
  unsigned __int8 v9; // al
  volatile __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v13; // rcx
  signed __int32 v14; // ett
  unsigned __int8 v15; // r9
  _KPROCESS *v16; // rcx
  _KPROCESS *v17; // rbx
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int valid; // ebx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  _KPROCESS *v30; // rcx
  _DWORD *v31; // rdi
  struct _KPRCB *v32; // rbp
  _DWORD *v33; // rcx
  signed __int32 v34; // ett
  _KPROCESS *v35; // rdx
  __int64 v36; // r10
  unsigned __int64 v37; // r11
  __int64 v38; // rbx
  int v39; // ecx
  __int64 ProtoPteAddress; // rbx
  unsigned __int64 v41; // r8
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  unsigned int v44; // eax
  char v45; // bl
  unsigned int v46; // edi
  int v47; // edx
  __int64 v48; // r9
  unsigned __int64 v49; // rbx
  char v50; // di
  unsigned __int64 v52; // rdx
  __int64 v53; // rbp
  unsigned __int8 v54; // dl
  unsigned __int64 v55; // rdx
  __int64 v56; // rdi
  unsigned __int8 v57; // dl
  _QWORD *v58; // rdx
  __int64 v59; // rbx
  unsigned __int64 v60; // rdi
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  ULONG_PTR v63; // rcx
  bool v64; // sf
  bool v65; // of
  __int64 v66; // rcx
  _DWORD *v67; // r8
  _DWORD *SchedulerAssist; // r8
  int v69; // eax
  int v70; // eax
  __int64 **Address; // rax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v73; // rcx
  struct _LIST_ENTRY *v74; // r8
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  unsigned __int64 LockedVadEvent; // rax
  int v79; // eax
  struct _LIST_ENTRY *v80; // r8
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rdi
  __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  __int64 v86[3]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  char v88; // [rsp+80h] [rbp+8h] BYREF
  int v89; // [rsp+88h] [rbp+10h] BYREF
  __int64 v90; // [rsp+90h] [rbp+18h] BYREF
  __int64 v91; // [rsp+98h] [rbp+20h]

  v1 = 0LL;
  v89 = 0;
  v90 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u
    || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    || (v4 = *(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]), *(_DWORD *)(v4 + 1176))
    && *(_KPROCESS **)(v4 + 1296) == Process )
  {
    if ( !dword_140C5325C )
      goto LABEL_9;
    goto LABEL_145;
  }
  v5 = *(_QWORD *)(v4 + 17280);
  v6 = *(_QWORD *)(qword_140C51F48 + 8LL * Process[1].IdealProcessor[25]);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v58 = (_QWORD *)(*(_QWORD *)(v6 + 16) + 24512LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]),
        v7 = 16LL * (v58[268] + v58[269])
           + ((v58[134] + v58[135]) << 9)
           + ((*v58 + v58[1]) << 18)
           + v58[2820]
           + v58[2821],
        v7 < 0x420)
    && v5 >= v7 >> 4
    || !v7 )
  {
    v7 = *(_QWORD *)(v6 + 16896);
  }
  if ( v7 >= 0x420 || v5 < 0x4000 && v5 < v7 >> 4 )
  {
    if ( !dword_140C5325C )
      goto LABEL_9;
LABEL_145:
    v66 = 3LL;
    goto LABEL_146;
  }
  v65 = __OFSUB__(Process->BasePriority, 9);
  v64 = (char)(Process->BasePriority - 9) < 0;
  *(_DWORD *)&Process[1].Spare2[7] = 0;
  v66 = (unsigned int)(v64 == v65) + 1;
LABEL_146:
  MiDelayFaultingThread(v66);
LABEL_9:
  v8 = (unsigned __int16 *)&unk_140C53D00;
  v9 = Process[1].IdealProcessor[30] & 7;
  if ( v9 <= 4u )
  {
    if ( v9 == 2 )
    {
      v10 = (volatile __int32 *)&unk_140C53D00;
LABEL_12:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v69 = v13[6];
            v13[6] = v69 + 1;
            if ( v69 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        _m_prefetchw((const void *)v10);
        v14 = *v10 & 0x7FFFFFFF;
        if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
        {
          v61 = CurrentPrcb->SchedulerAssist;
          if ( v61 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v70 = v61[6] - 1;
              v61[6] = v70;
              if ( !v70 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql);
        }
      }
      if ( *((_DWORD *)v10 + 1) )
        _InterlockedExchange(v10 + 1, 0);
      v15 = CurrentIrql;
      goto LABEL_19;
    }
LABEL_11:
    v10 = (volatile __int32 *)&Process[1].IdealNode[2];
    goto LABEL_12;
  }
  if ( v9 == 5 )
    goto LABEL_11;
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
  {
    v67 = KeGetCurrentPrcb()->SchedulerAssist;
    v67[5] |= (-1 << (v15 + 1)) & 4;
  }
LABEL_19:
  *((_BYTE *)a1 + 68) = v15;
  v16 = KeGetCurrentThread()->ApcState.Process;
  if ( (v16[1].IdealProcessor[30] & 7) != 2 )
    v8 = &v16[1].IdealNode[2];
  if ( (HIBYTE(v16[1].IdealProcessor[31]) & 0x60) == 0x60
    && *((_QWORD *)v8 + 4)
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1);
    Address = MiLocateAddress((unsigned __int64)a1);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      MiUnlockVadTree(1, 0x11u);
      valid = -1073741819;
      goto LABEL_87;
    }
    MiUnlockVadTree(1, 0x11u);
  }
  if ( (unsigned __int64)(*a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
  {
    valid = -1073741819;
    goto LABEL_87;
  }
  v17 = KeGetCurrentThread()->ApcState.Process;
  if ( v17[1].Affinity.StaticBitmap[9] && (unsigned int)MiWaitForRotateToComplete(*a1, (__int64)(a1 + 7))
    || (v18 = v17[2].ActiveProcessors.StaticBitmap[2]) != 0 && (unsigned int)MiCheckHoldFaultForHotPatch(v18, a1)
    || (v19 = MiResolvePageTablePage(a1), valid = v19, v19 == -1073740748) )
  {
    valid = 0;
    goto LABEL_87;
  }
  if ( v19 < 0 )
  {
LABEL_87:
    v55 = a1[9];
    v56 = a1[7];
    if ( v55 )
    {
      if ( *((_WORD *)a1 + 33) )
      {
        MiEmptyDeferredWorkingSetEntries(a1 + 7);
        v55 = a1[9];
      }
      MiUnlockPageTableInternal(v56, v55);
      *((_BYTE *)a1 + 69) |= 2u;
      a1[9] = 0LL;
    }
    v57 = *((_BYTE *)a1 + 68);
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v56, v57);
    else
      MiUnlockWorkingSetShared(v56, v57);
    return valid;
  }
  v21 = a1[3];
  v22 = *(_QWORD *)v21;
  if ( v21 >= 0xFFFFF6FB7DBED000uLL
    && v21 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v22 & 1) == 0 )
      goto LABEL_29;
    if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v73 = *((_QWORD *)&Flink->Flink + ((v21 >> 3) & 0x1FF));
        if ( (v73 & 0x20) != 0 )
          v22 |= 0x20uLL;
        if ( (v73 & 0x42) != 0 )
          v22 |= 0x42uLL;
      }
    }
  }
  if ( (v22 & 1) != 0 )
  {
    valid = MiValidFault((__int64)a1, v22);
    goto LABEL_87;
  }
LABEL_29:
  v23 = a1[1];
  if ( (v23 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    a1[1] = v23 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v22 )
  {
    v89 = (v22 >> 5) & 0x1F;
    if ( (v22 & 0x400) == 0 )
      goto LABEL_64;
    v24 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL
      && v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v74 )
      {
        v75 = *((_QWORD *)&v74->Flink + ((v21 >> 3) & 0x1FF));
        if ( (v75 & 0x20) != 0 )
          v24 |= 0x20uLL;
        if ( (v75 & 0x42) != 0 )
          v24 |= 0x42uLL;
      }
    }
    v25 = (v24 >> 5) & 0x1F;
    v91 = v25;
    if ( (v24 & 0x400) == 0 )
      goto LABEL_102;
    v26 = v24;
    if ( qword_140C50780 && (v24 & 0x10) == 0 )
      v26 = v24 & ~qword_140C50780;
    v27 = 0xFFFFFFFFLL;
    if ( HIDWORD(v26) != 0xFFFFFFFF )
    {
LABEL_102:
      v59 = v24;
      if ( qword_140C50780 && (v24 & 0x10) == 0 )
        v59 = v24 & ~qword_140C50780;
      ProtoPteAddress = v59 >> 16;
      LODWORD(v25) = 256;
      if ( (v24 & 8) != 0 )
        LODWORD(v25) = 1;
LABEL_61:
      v89 = v25;
      v90 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
LABEL_64:
        if ( v89 == 256 )
        {
LABEL_74:
          a1[12] = v90;
          return 3221225494LL;
        }
        v47 = a1[1] & 2;
        v48 = a1[2];
        if ( (a1[10] & 0x40) == 0 || v21 <= 0xFFFFF6BFFFFFFF78uLL && v21 >= 0xFFFFF68000000000uLL )
        {
          v49 = *(_QWORD *)v21;
          if ( v21 >= 0xFFFFF6FB7DBED000uLL
            && v21 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
          {
            if ( (v49 & 1) == 0 )
              goto LABEL_70;
            if ( (v49 & 0x20) == 0 || (v49 & 0x42) == 0 )
            {
              v80 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v80 )
              {
                v81 = *((_QWORD *)&v80->Flink + ((v21 >> 3) & 0x1FF));
                if ( (v81 & 0x20) != 0 )
                  v49 |= 0x20uLL;
                if ( (v81 & 0x42) != 0 )
                  v49 |= 0x42uLL;
              }
            }
          }
          if ( (v49 & 1) == 0 )
          {
LABEL_70:
            v50 = v89;
            if ( (a1[1] & 2) != 0 )
              v47 = 1;
            if ( *((char *)MiReadWrite + (v89 & 7)) - v47 >= 10 )
            {
              if ( (v89 & 0xFFFFFFF8) != 0x10 || (v48 & 1) != 0 && *(_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                goto LABEL_74;
              if ( MiAllowGuardFault(a1[2]) )
              {
                if ( (v49 & 0x800) == 0 || (v49 & 0x400) != 0 )
                {
                  v60 = v49 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v50 & 0xF));
                  if ( MiPteInShadowRange(v21) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C51864) && (v60 & 1) != 0 )
                        v60 |= 0x8000000000000000uLL;
                      *(_QWORD *)v21 = v60;
                      MiWritePteShadow(v21, v60);
                      goto LABEL_117;
                    }
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (v60 & 1) != 0 )
                    {
                      v60 |= 0x8000000000000000uLL;
                    }
                  }
                  *(_QWORD *)v21 = v60;
LABEL_117:
                  MiReleaseFaultState((__int64)(a1 + 7), 17, 0LL);
                  return MiCheckForUserStackOverflow(*a1, 0LL);
                }
                v82 = MiLockTransitionLeafPageEx(v21, 0LL, 0);
                v83 = v50 & 0xF;
                v84 = MI_READ_PTE_LOCK_FREE(v21);
                if ( v82 )
                  *(_QWORD *)(v82 + 16) = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v83);
                v85 = (32 * v83) | v84 & 0xFFFFFFFFFFFFFC1FuLL;
                if ( MiPteInShadowRange(v21) )
                {
                  if ( (unsigned int)MiPteHasShadow() )
                  {
                    if ( !HIBYTE(word_140C51864) && (v85 & 1) != 0 )
                      v85 |= 0x8000000000000000uLL;
                    *(_QWORD *)v21 = v85;
                    MiWritePteShadow(v21, v85);
                    goto LABEL_246;
                  }
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                    && (v85 & 1) != 0 )
                  {
                    v85 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v21 = v85;
LABEL_246:
                if ( v82 )
                  _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                goto LABEL_117;
              }
            }
            goto LABEL_122;
          }
          if ( (a1[1] & 2) == 0 || (v49 & 0xA00) != 0 )
            goto LABEL_74;
        }
LABEL_122:
        v63 = *a1;
        if ( *a1 < 0xFFFF800000000000uLL )
        {
          MiLockVadTree(1);
          v1 = MiLocateAddress(*a1);
          MiUnlockVadTree(1, 0x11u);
          v63 = *a1;
        }
        MiCheckFatalAccessViolation(v63, (__int64)v1, a1[1], (__int64)Process);
        a1[11] = v1;
        MiReleaseFaultState((__int64)(a1 + 7), 17, 0LL);
        return 3221225477LL;
      }
      goto LABEL_101;
    }
    v28 = (__int64)(v21 << 25) >> 16;
    if ( v28 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
      {
        v29 = v28 & 0x7FFFFFFFF000LL;
        if ( (v28 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        {
          ProtoPteAddress = qword_140C50668;
          goto LABEL_61;
        }
        if ( v29 == qword_140C50678 && v29 )
        {
          ProtoPteAddress = qword_140C50670;
          goto LABEL_61;
        }
      }
      v30 = KeGetCurrentThread()->ApcState.Process;
      v31 = (_DWORD *)(v30[1].ActiveProcessors.StaticBitmap[28] + 284);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v27) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v30[1].ActiveProcessors.StaticBitmap[28] + 284, v27);
      }
      else
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
          if ( v32->NestingLevel <= 1u )
          {
            v76 = v33[6];
            v33[6] = v76 + 1;
            if ( v76 == -1 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
        _m_prefetchw(v31);
        v34 = *v31 & 0x7FFFFFFF;
        if ( v34 != _InterlockedCompareExchange(v31, v34 + 1, v34) )
        {
          v62 = v32->SchedulerAssist;
          if ( v62 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v77 = v62[6] - 1;
              v62[6] = v77;
              if ( !v77 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
          LOBYTE(v27) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v31, v27);
        }
        LODWORD(v25) = v91;
      }
      v35 = KeGetCurrentThread()->ApcState.Process;
      v36 = *(_QWORD *)&v35[1].Spare2[23];
      if ( v36 )
      {
        v37 = v28 >> 12;
        if ( v28 >> 12 >= (*(unsigned int *)(v36 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32))
          && v37 <= (*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) )
        {
LABEL_50:
          v86[0] = 0LL;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
          {
            v38 = v28 & 0x7FFFFFFFF000LL;
            if ( v38 == 2147352576 )
            {
              ProtoPteAddress = qword_140C50668;
              goto LABEL_58;
            }
            if ( v38 == qword_140C50678 && v38 )
            {
              ProtoPteAddress = qword_140C50670;
LABEL_58:
              v41 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v41 + 284, retaddr);
              }
              else
              {
                _InterlockedAnd((volatile signed __int32 *)(v41 + 284), 0xBFFFFFFF);
                _InterlockedDecrement((volatile signed __int32 *)(v41 + 284));
              }
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              if ( v43 )
              {
                if ( v42->NestingLevel <= 1u )
                {
                  v79 = v43[6] - 1;
                  v43[6] = v79;
                  if ( !v79 )
                    KiRemoveSystemWorkPriorityKick(v42);
                }
              }
              goto LABEL_61;
            }
          }
          if ( (*(_DWORD *)(v36 + 48) & 0x70) == 0x20
            && (*(_DWORD *)(v36 + 64) & 0x10000000) != 0
            && (LockedVadEvent = MiLocateLockedVadEvent(v36, 32),
                LockedVadEvent && *(struct _KTHREAD **)(LockedVadEvent + 8) != KeGetCurrentThread()) )
          {
            ProtoPteAddress = 0LL;
          }
          else
          {
            v39 = *(_DWORD *)(v36 + 48);
            if ( (v39 & 4) != 0 )
            {
              ProtoPteAddress = 0LL;
            }
            else if ( (v39 & 0x200000) != 0 )
            {
              if ( (v39 & 0x70) != 0x10 && (v39 & 0x70) != 0x30 )
                MiIsVadLargePrivate(v36);
              ProtoPteAddress = 0LL;
            }
            else if ( (*(_DWORD *)(v36 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v36 + 48) & 0x70) == 0x50 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(v36, v37, 4, v86);
            }
            else
            {
              ProtoPteAddress = 0LL;
            }
          }
          goto LABEL_58;
        }
        v36 = *(_QWORD *)&v35[1].Spare2[15];
        while ( v36 )
        {
          if ( v37 > (*(unsigned int *)(v36 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 33) << 32)) )
          {
            v36 = *(_QWORD *)(v36 + 8);
          }
          else
          {
            if ( v37 >= (*(unsigned int *)(v36 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v36 + 32) << 32)) )
            {
              *(_QWORD *)&v35[1].Spare2[23] = v36;
              goto LABEL_50;
            }
            v36 = *(_QWORD *)v36;
          }
        }
      }
      MiUnlockVadTree(1, 0x11u);
    }
LABEL_101:
    valid = -1073741819;
    goto LABEL_87;
  }
  v88 = 0;
  v44 = MiZeroFault((__int64)a1, &v88, &v89, &v90);
  v45 = v88;
  v46 = v44;
  if ( !v88 )
    goto LABEL_64;
  v52 = a1[9];
  v53 = a1[7];
  if ( v52 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v52 = a1[9];
    }
    MiUnlockPageTableInternal(v53, v52);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v54 = *((_BYTE *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v53, v54);
  else
    MiUnlockWorkingSetShared(v53, v54);
  if ( v45 == 2 )
    return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
  return v46;
}
