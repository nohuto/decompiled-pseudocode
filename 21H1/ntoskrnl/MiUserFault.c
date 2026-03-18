/*
 * XREFs of MiUserFault @ 0x14020CC40
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 * Callees:
 *     MiZeroFault @ 0x14020A440 (MiZeroFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiUnlockFaultPageTable @ 0x14022B558 (MiUnlockFaultPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiCheckUserVirtualAddress @ 0x1402B2640 (MiCheckUserVirtualAddress.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402EF840 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x1402F64E4 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14030F700 (MiCheckFatalAccessViolation.c)
 *     MiWaitForRotateToComplete @ 0x1403222E0 (MiWaitForRotateToComplete.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140525B88 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1405387BC (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140542864 (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405AFFD4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406C55F4 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 v1; // r13
  _KPROCESS *Process; // r11
  unsigned int v4; // r15d
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r8
  bool v11; // sf
  bool v12; // of
  __int64 v13; // rcx
  LONG *v14; // rbp
  unsigned __int8 v15; // al
  unsigned __int8 CurrentIrql; // si
  _DWORD *v17; // r9
  LONG *v18; // rbx
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v21; // rcx
  int v22; // eax
  signed __int32 v23; // ett
  _DWORD *v24; // rcx
  int v25; // eax
  _KPROCESS *v26; // rcx
  __int64 Address; // rax
  int valid; // ebx
  _KPROCESS *v29; // rbx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 *v36; // rsi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  struct _LIST_ENTRY *v40; // r9
  __int64 v41; // rax
  struct _LIST_ENTRY *v42; // rax
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  ULONG_PTR v48; // r9
  ULONG_PTR v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdi
  ULONG_PTR v52; // rsi
  unsigned __int64 v53; // rdx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rcx
  unsigned int v58; // eax
  char v59; // bp
  unsigned int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rdx
  int v65; // r10d
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  struct _LIST_ENTRY *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  ULONG_PTR v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  struct _LIST_ENTRY *v75; // r8
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rbx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r9
  __int64 v81; // rax
  _KPROCESS *v82; // r10
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  __int64 **v85; // r8
  __int64 v86; // rcx
  char v87; // bl
  __int64 v88; // rdx
  __int64 v89; // rbp
  __int64 v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rdi
  unsigned __int64 v93; // rdi
  __int64 v94; // rcx
  unsigned __int64 v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rdx
  _KPROCESS *v100; // [rsp+30h] [rbp-58h]
  char v101; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v102; // [rsp+98h] [rbp+10h] BYREF
  int v103; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v104; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0LL;
  v102 = 0;
  v104 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = 3;
  v100 = Process;
  v5 = &Process[1].ActiveProcessorsPadding[6];
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u )
    goto LABEL_14;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_14;
  v6 = *(_QWORD *)(qword_140C4E588 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( *(_DWORD *)(v6 + 1160) )
  {
    if ( *(_KPROCESS **)(v6 + 1280) == Process )
      goto LABEL_14;
  }
  v7 = *(_QWORD *)(qword_140C4E588 + 8LL * Process[1].IdealProcessorPadding[5]);
  v8 = *(_QWORD *)(v6 + 7488);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v9 = (_QWORD *)(*(_QWORD *)(v7 + 16) + 4544LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        v10 = 16LL * (v9[268] + v9[269]) + ((v9[134] + v9[135]) << 9) + ((*v9 + v9[1]) << 18) + v9[516] + v9[517],
        v10 < 0x420)
    && v8 >= v10 >> 4
    || !v10 )
  {
    v10 = *(_QWORD *)(v7 + 7104);
  }
  if ( v10 >= 0x420 || v8 < 0x4000 && v8 < v10 >> 4 )
  {
LABEL_14:
    if ( !dword_140C4EC8C )
      goto LABEL_17;
    v13 = 3LL;
  }
  else
  {
    v12 = __OFSUB__(Process->BasePriority, 9);
    v11 = (char)(Process->BasePriority - 9) < 0;
    *(_DWORD *)&Process[1].Spare2[7] = 0;
    v13 = (unsigned int)(v11 == v12) + 1;
  }
  MiDelayFaultingThread(v13);
LABEL_17:
  v14 = &dword_140C4F6C0;
  v15 = v5[23] & 7;
  if ( v15 < 6u )
  {
    if ( v15 == 2 )
      v18 = &dword_140C4F6C0;
    else
      v18 = (LONG *)(v5 + 24);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v21[6];
          v21[6] = v22 + 1;
          if ( v22 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v18);
      v23 = *v18 & 0x7FFFFFFF;
      if ( v23 != _InterlockedCompareExchange(v18, v23 + 1, v23) )
      {
        v24 = CurrentPrcb->SchedulerAssist;
        if ( v24 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v25 = v24[6] - 1;
            v24[6] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v18, CurrentIrql);
      }
    }
    if ( v18[1] )
      _InterlockedExchange(v18 + 1, 0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v17 = KeGetCurrentPrcb()->SchedulerAssist;
      v17[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  *((_BYTE *)a1 + 68) = CurrentIrql;
  v26 = KeGetCurrentThread()->ApcState.Process;
  if ( (v26[1].IdealProcessorPadding[10] & 7) != 2 )
    v14 = (LONG *)&v26[1].IdealNode[2];
  if ( (HIBYTE(v26[1].IdealProcessorPadding[11]) & 0x60) == 0x60 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      if ( (unsigned __int64)a1 < 0xFFFF800000000000uLL )
      {
        Address = MiLocateAddress(a1);
        if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
          goto LABEL_50;
      }
    }
  }
  if ( (unsigned __int64)(*a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
  {
    valid = -1073741819;
    goto LABEL_254;
  }
  v29 = KeGetCurrentThread()->ApcState.Process;
  if ( v29[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(*a1, a1 + 7) == 1 )
    goto LABEL_253;
  v30 = v29[2].ActiveProcessors.Bitmap[2];
  if ( v30 )
  {
    if ( (unsigned int)MiCheckHoldFaultForHotPatch(v30, a1) == 1 )
      goto LABEL_253;
  }
  v31 = a1[7];
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    goto LABEL_63;
  v32 = *a1;
  if ( *a1 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_63;
  v33 = MiFastLockLeafPageTable(a1[7], v32, 0LL);
  v34 = v33;
  if ( !v33 )
    goto LABEL_63;
  v35 = a1[v33 + 3];
  a1[9] = v35;
  if ( v33 == 1 )
  {
LABEL_119:
    v52 = a1[3];
    v53 = *(_QWORD *)v52;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v34, v53) )
    {
      if ( (v53 & 1) == 0 )
        goto LABEL_132;
      if ( (v53 & 0x20) == 0 || (v53 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v55 = *((_QWORD *)&Flink->Flink + ((v52 >> 3) & 0x1FF));
          v56 = v53 | 0x20;
          if ( (v55 & 0x20) == 0 )
            v56 = v53;
          v53 = v56;
          if ( (v55 & 0x42) != 0 )
            v53 = v56 | 0x42;
        }
      }
    }
    if ( (v53 & 1) != 0 )
    {
      valid = MiValidFault(a1);
      goto LABEL_254;
    }
LABEL_132:
    v57 = a1[1];
    if ( (v57 & 2) != 0 && (v100[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    {
      v57 &= ~2uLL;
      a1[1] = v57;
    }
    if ( !v53 )
    {
      v101 = 0;
      v58 = MiZeroFault((__int64)a1, &v101, &v102, &v104);
      v59 = v101;
      v60 = v58;
      if ( v101 )
      {
        v61 = a1[9];
        v62 = a1[7];
        if ( v61 )
        {
          if ( *((_WORD *)a1 + 33) )
          {
            MiEmptyDeferredWorkingSetEntries(a1 + 7);
            v61 = a1[9];
          }
          MiUnlockPageTableInternal(v62, v61);
          *((_BYTE *)a1 + 69) |= 2u;
          a1[9] = 0LL;
        }
        v63 = *((unsigned __int8 *)a1 + 68);
        if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
          MiUnlockWorkingSetExclusive(v62, v63);
        else
          MiUnlockWorkingSetShared(v62, v63);
        if ( v59 == 2 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
        return v60;
      }
      goto LABEL_148;
    }
    v102 = (v53 >> 5) & 0x1F;
    if ( (v53 & 0x400) == 0 )
    {
LABEL_148:
      v65 = 1;
      goto LABEL_149;
    }
    v53 = *(_QWORD *)v52;
    v103 = 0;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL
      && v52 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v57, v53)
      && (v53 & 1) != 0
      && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
    {
      v75 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v75 )
      {
        v76 = *((_QWORD *)&v75->Flink + ((v52 >> 3) & 0x1FF));
        v77 = v53 | 0x20;
        if ( (v76 & 0x20) == 0 )
          v77 = v53;
        v53 = v77;
        if ( (v76 & 0x42) != 0 )
          v53 = v77 | 0x42;
      }
    }
    v78 = (v53 >> 5) & 0x1F;
    if ( (v53 & 0x400) == 0 )
      goto LABEL_211;
    v79 = v53;
    if ( qword_140C4DE80 && (v53 & 0x10) == 0 )
      v79 = v53 & ~qword_140C4DE80;
    if ( HIDWORD(v79) == 0xFFFFFFFF )
    {
      v80 = (__int64)(v52 << 25) >> 16;
      if ( v80 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v81 = v80 & 0x7FFFFFFFF000LL;
          if ( (v80 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v57 = qword_140C4DD78;
            v65 = 1;
            v103 = 1;
            goto LABEL_216;
          }
          if ( v81 == qword_140C4DD88 && v81 )
          {
            v57 = qword_140C4DD80;
            v65 = 1;
            v103 = 1;
            goto LABEL_216;
          }
        }
        v82 = KeGetCurrentThread()->ApcState.Process;
        v83 = *(_QWORD *)&v82[1].Spare2[23];
        if ( v83 )
        {
          v84 = v80 >> 12;
          if ( v80 >> 12 < (*(unsigned int *)(v83 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v83 + 32) << 32))
            || v84 > (*(unsigned int *)(v83 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v83 + 33) << 32)) )
          {
            v85 = *(__int64 ***)&v82[1].Spare2[15];
            if ( v85 )
            {
              while ( 1 )
              {
                if ( v84 > (*((unsigned int *)v85 + 7) | ((unsigned __int64)*((unsigned __int8 *)v85 + 33) << 32)) )
                {
                  v85 = (__int64 **)v85[1];
                }
                else
                {
                  if ( v84 >= (*((unsigned int *)v85 + 6) | ((unsigned __int64)*((unsigned __int8 *)v85 + 32) << 32)) )
                  {
                    *(_QWORD *)&v82[1].Spare2[23] = v85;
                    goto LABEL_207;
                  }
                  v85 = (__int64 **)*v85;
                }
                if ( !v85 )
                {
                  valid = -1073741819;
                  goto LABEL_254;
                }
              }
            }
            goto LABEL_50;
          }
LABEL_207:
          v57 = MiCheckUserVirtualAddress((__int64)(v52 << 25) >> 16, &v103);
          v65 = 1;
          goto LABEL_216;
        }
LABEL_50:
        valid = -1073741819;
        goto LABEL_254;
      }
      if ( v80 >= 0xFFFFF68000000000uLL && v80 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v103 = 24;
      v57 = 0LL;
      v65 = 1;
    }
    else
    {
LABEL_211:
      v86 = v53;
      if ( qword_140C4DE80 && (v53 & 0x10) == 0 )
        v86 = v53 & ~qword_140C4DE80;
      v57 = v86 >> 16;
      LODWORD(v78) = 256;
      v65 = 1;
      if ( (v53 & 8) != 0 )
        LODWORD(v78) = 1;
    }
LABEL_216:
    v102 = v78;
    v104 = v57;
    if ( !v57 )
    {
      valid = -1073741819;
      goto LABEL_254;
    }
LABEL_149:
    if ( v102 == 256 )
      goto LABEL_252;
    v66 = a1[1] & 2;
    v67 = a1[2];
    if ( (a1[10] & 0x40) != 0 )
    {
      v53 = 0xFFFFF68000000000uLL;
      v57 = 0x3FFFFFFF78LL;
      if ( v52 > 0xFFFFF6BFFFFFFF78uLL || v52 < 0xFFFFF68000000000uLL )
        goto LABEL_167;
    }
    v68 = *(_QWORD *)v52;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v57, v53) )
    {
      if ( (v68 & 1) == 0 )
        goto LABEL_218;
      if ( (v68 & 0x20) == 0 || (v68 & 0x42) == 0 )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + ((v52 >> 3) & 0x1FF));
          v71 = v68 | 0x20;
          if ( (v70 & 0x20) == 0 )
            v71 = v68;
          v68 = v71;
          if ( (v70 & 0x42) != 0 )
            v68 = v71 | 0x42;
        }
      }
    }
    if ( (v68 & 1) != 0 )
    {
      if ( v66 && (v68 & 0xA00) == 0 )
        goto LABEL_167;
LABEL_252:
      a1[12] = v104;
      return 3221225494LL;
    }
LABEL_218:
    v87 = v102;
    if ( v66 )
      LODWORD(v66) = v65;
    if ( *((char *)&MiReadWrite + (v102 & 7)) - (int)v66 < 10 )
      goto LABEL_167;
    if ( (v102 & 0xFFFFFFF8) != 0x10 || (v67 & 1) != 0 && *(_BYTE *)(v67 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_252;
    if ( !(unsigned int)MiAllowGuardFault(v67) )
    {
LABEL_167:
      v72 = *a1;
      if ( *a1 < 0xFFFF800000000000uLL )
      {
        v73 = MiLocateAddress(v72);
        v72 = *a1;
        v1 = v73;
      }
      MiCheckFatalAccessViolation(v72);
      a1[11] = v1;
      valid = -1073741819;
      goto LABEL_170;
    }
    if ( (v68 & 0x800) == 0 || (v68 & 0x400) != 0 )
    {
      v95 = v68 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v87 & 0xF));
      if ( (unsigned int)MiPteInShadowRange(v52, v88) )
      {
        if ( (unsigned int)MiPteHasShadow(v96, v74) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v95 & 1) != 0 )
            v95 |= 0x8000000000000000uLL;
          *(_QWORD *)v52 = v95;
          MiWritePteShadow(v52, v95);
          valid = -2147483647;
          goto LABEL_170;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v95 & 1) != 0 )
        {
          v95 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v52 = v95;
      goto LABEL_251;
    }
    v89 = MiLockTransitionLeafPage(v52);
    v90 = v87 & 0xF;
    v92 = MI_READ_PTE_LOCK_FREE(v52);
    if ( v89 )
      *(_QWORD *)(v89 + 16) = (32LL * (unsigned int)v90) | *(_QWORD *)(v89 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    v93 = (32 * v90) | v92 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (unsigned int)MiPteInShadowRange(v52, v91) )
    {
      if ( (unsigned int)MiPteHasShadow(v94, v74) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v93 & 1) != 0 )
          v93 |= 0x8000000000000000uLL;
        *(_QWORD *)v52 = v93;
        MiWritePteShadow(v52, v93);
LABEL_239:
        if ( v89 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v89 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          valid = -2147483647;
          goto LABEL_170;
        }
LABEL_251:
        valid = -2147483647;
LABEL_170:
        LOBYTE(v74) = 17;
        MiReleaseFaultState(a1 + 7, v74, 0LL);
        if ( valid == -2147483647 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 0LL);
        return (unsigned int)valid;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v93 & 1) != 0 )
      {
        v93 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v52 = v93;
    goto LABEL_239;
  }
  MiUnlockPageTableInternal(v31, v35);
  a1[9] = 0LL;
LABEL_63:
  valid = 0;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    a1[9] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v31, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v36 = a1 + 6;
  while ( 1 )
  {
    v37 = *v36;
    v38 = *(_QWORD *)*v36;
    v34 = v38;
    v39 = 0xFFFFF6FB7DBED7F8uLL;
    if ( *v36 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v38 & 1) != 0
        && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v40 )
        {
          v34 = v38 | 0x20;
          v41 = *((_QWORD *)&v40->Flink + ((v37 >> 3) & 0x1FF));
          if ( (v41 & 0x20) == 0 )
            v34 = *(_QWORD *)*v36;
          if ( (v41 & 0x42) != 0 )
            v34 |= 0x42uLL;
        }
      }
      v39 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( (v34 & 1) != 0 )
      break;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v34, v38) )
    {
      if ( (v38 & 1) == 0 )
        goto LABEL_92;
      if ( (v38 & 0x20) == 0 || (v38 & 0x42) == 0 )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v42 )
        {
          v39 = v38 | 0x20;
          v43 = *((_QWORD *)&v42->Flink + ((v37 >> 3) & 0x1FF));
          if ( (v43 & 0x20) == 0 )
            v39 = v38;
          v38 = v39;
          if ( (v43 & 0x42) != 0 )
            v38 = v39 | 0x42;
        }
      }
    }
    if ( (v38 & 1) == 0 )
    {
LABEL_92:
      if ( v38 && (v38 & 0x400) == 0 )
      {
        if ( (v38 & 0x800) != 0 )
        {
          v44 = ((v38 >> 5) & 0x1F) == 24;
        }
        else
        {
          v45 = MiSwizzleInvalidPte(512LL);
          v44 = v46 == v45;
        }
        if ( v44 )
        {
          MiUnlockFaultPageTable(a1 + 7);
          valid = -1073741819;
          goto LABEL_254;
        }
      }
    }
    valid = MiInPagePageTable(a1, v4, v39);
    if ( valid < 0 )
      goto LABEL_113;
    ++v4;
    ++v36;
LABEL_104:
    --v36;
    if ( !--v4 )
      goto LABEL_117;
  }
  if ( (v34 & 0x80u) == 0LL )
  {
    v47 = a1[9];
    if ( v47 && v37 != v47 )
    {
      MiLockPageTableInternal(v31, *v36, 0LL);
      MiUnlockPageTableInternal(v31, a1[9]);
      a1[9] = v37;
    }
    goto LABEL_104;
  }
  v48 = a1[2];
  if ( (v48 & 1) == 0 || *(_BYTE *)(v48 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v49 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v49 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v49, a1[1], v48, 8uLL);
  }
  valid = MiLargePageFault(a1, *v36, 0xFFFFF6FB7DBED7F8uLL);
  if ( valid >= 0 )
    valid = -1073740748;
LABEL_113:
  v50 = a1[9];
  v51 = a1[7];
  if ( v50 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v50 = a1[9];
    }
    MiUnlockPageTableInternal(v51, v50);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
LABEL_117:
  if ( valid == -1073740748 )
  {
LABEL_253:
    valid = 0;
    goto LABEL_254;
  }
  if ( valid >= 0 )
    goto LABEL_119;
LABEL_254:
  v97 = a1[9];
  v98 = a1[7];
  if ( v97 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v97 = a1[9];
    }
    MiUnlockPageTableInternal(v98, v97);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v99 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v98, v99);
  else
    MiUnlockWorkingSetShared(v98, v99);
  return (unsigned int)valid;
}
