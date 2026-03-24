/*
 * XREFs of MiUserFault @ 0x14020D770
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 * Callees:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAllowGuardFault @ 0x1402A2BC4 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x1402BF5EC (MiCheckFatalAccessViolation.c)
 *     MiWaitForRotateToComplete @ 0x1402D2AF0 (MiWaitForRotateToComplete.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140312148 (MiUnlockFaultPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14031B9F4 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x14032EA00 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiZeroFault @ 0x14034EE60 (MiZeroFault.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14052B6A8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E2DC (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140548384 (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x140548AB4 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5C64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406955F8 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1, __int64 a2, unsigned __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r13
  _KPROCESS *Process; // r11
  unsigned int v7; // r15d
  unsigned __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r10
  _QWORD *v11; // rdx
  bool v12; // sf
  bool v13; // of
  __int64 v14; // rcx
  LONG *v15; // rbp
  unsigned __int8 v16; // al
  unsigned __int8 CurrentIrql; // si
  _DWORD *v18; // r9
  LONG *v19; // rbx
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
  unsigned __int64 Flink; // r8
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 *v38; // rsi
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  struct _LIST_ENTRY *v41; // r9
  __int64 v42; // rax
  struct _LIST_ENTRY *v43; // rax
  __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  ULONG_PTR v49; // r9
  ULONG_PTR v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdi
  ULONG_PTR v53; // rsi
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // eax
  char v58; // bp
  unsigned int v59; // edi
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rdx
  int v64; // r10d
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  struct _LIST_ENTRY *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  ULONG_PTR v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  struct _LIST_ENTRY *v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rbx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r9
  __int64 v80; // rax
  _KPROCESS *v81; // r10
  __int64 v82; // r8
  unsigned __int64 v83; // rdx
  __int64 **v84; // r8
  __int64 v85; // rcx
  char v86; // bl
  __int64 v87; // rdx
  __int64 v88; // rbp
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rdi
  unsigned __int64 v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned __int64 v96; // rbx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rdx
  _KPROCESS *v103; // [rsp+30h] [rbp-58h]
  char v104; // [rsp+90h] [rbp+8h] BYREF
  int v105; // [rsp+98h] [rbp+10h] BYREF
  int v106; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v107; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v105 = 0;
  v107 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 3;
  v103 = Process;
  v8 = &Process[1].ActiveProcessorsPadding[6];
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u )
    goto LABEL_14;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_14;
  v9 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( *(_DWORD *)(v9 + 1160) )
  {
    if ( *(_KPROCESS **)(v9 + 1280) == Process )
      goto LABEL_14;
  }
  v10 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
  SchedulerAssist = *(_DWORD **)(v9 + 7488);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v11 = (_QWORD *)(*(_QWORD *)(v10 + 16) + 4544LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        a3 = 16LL * (v11[268] + v11[269]) + ((v11[134] + v11[135]) << 9) + ((*v11 + v11[1]) << 18) + v11[516] + v11[517],
        a3 < 0x420)
    && (unsigned __int64)SchedulerAssist >= a3 >> 4
    || !a3 )
  {
    a3 = *(_QWORD *)(v10 + 7104);
  }
  if ( a3 >= 0x420 || (unsigned __int64)SchedulerAssist < 0x4000 && (a3 >>= 4, (unsigned __int64)SchedulerAssist < a3) )
  {
LABEL_14:
    if ( !dword_140C4ED4C )
      goto LABEL_17;
    v14 = 3LL;
  }
  else
  {
    v13 = __OFSUB__(Process->BasePriority, 9);
    v12 = (char)(Process->BasePriority - 9) < 0;
    *(_DWORD *)&Process[1].Spare2[7] = 0;
    v14 = (unsigned int)(v12 == v13) + 1;
  }
  MiDelayFaultingThread(v14);
LABEL_17:
  v15 = &dword_140C4F780;
  v16 = v8[23] & 7;
  if ( v16 < 6u )
  {
    if ( v16 == 2 )
      v19 = &dword_140C4F780;
    else
      v19 = (LONG *)(v8 + 24);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, CurrentIrql, a3, SchedulerAssist);
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
      _m_prefetchw(v19);
      v23 = *v19 & 0x7FFFFFFF;
      if ( v23 != _InterlockedCompareExchange(v19, v23 + 1, v23) )
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
        ExpWaitForSpinLockSharedAndAcquire(v19, CurrentIrql);
      }
    }
    if ( v19[1] )
      _InterlockedExchange(v19 + 1, 0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v18 = KeGetCurrentPrcb()->SchedulerAssist;
      v18[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
  }
  *((_BYTE *)a1 + 68) = CurrentIrql;
  v26 = KeGetCurrentThread()->ApcState.Process;
  if ( (v26[1].IdealProcessorPadding[10] & 7) != 2 )
    v15 = (LONG *)&v26[1].IdealNode[2];
  if ( (HIBYTE(v26[1].IdealProcessorPadding[11]) & 0x60) == 0x60 )
  {
    if ( *((_QWORD *)v15 + 4) )
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
  v36 = v33;
  if ( !v33 )
    goto LABEL_63;
  v37 = a1[v33 + 3];
  a1[9] = v37;
  if ( v33 == 1 )
  {
LABEL_119:
    v53 = a1[3];
    v54 = *(_QWORD *)v53;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v36, v54, Flink, v35) )
    {
      if ( (v54 & 1) == 0 )
        goto LABEL_132;
      if ( (v54 & 0x20) == 0 || (v54 & 0x42) == 0 )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v55 = *(_QWORD *)(Flink + 8 * ((v53 >> 3) & 0x1FF));
          Flink = v54 | 0x20;
          if ( (v55 & 0x20) == 0 )
            Flink = v54;
          v54 = Flink;
          if ( (v55 & 0x42) != 0 )
            v54 = Flink | 0x42;
        }
      }
    }
    if ( (v54 & 1) != 0 )
    {
      valid = MiValidFault((__int64)a1, v54);
      goto LABEL_254;
    }
LABEL_132:
    v56 = a1[1];
    if ( (v56 & 2) != 0 && (v103[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    {
      v56 &= ~2uLL;
      a1[1] = v56;
    }
    if ( !v54 )
    {
      v104 = 0;
      v57 = MiZeroFault(a1, &v104, &v105, &v107);
      v58 = v104;
      v59 = v57;
      if ( v104 )
      {
        v60 = a1[9];
        v61 = a1[7];
        if ( v60 )
        {
          if ( *((_WORD *)a1 + 33) )
          {
            MiEmptyDeferredWorkingSetEntries(a1 + 7);
            v60 = a1[9];
          }
          MiUnlockPageTableInternal(v61, v60);
          *((_BYTE *)a1 + 69) |= 2u;
          a1[9] = 0LL;
        }
        v62 = *((unsigned __int8 *)a1 + 68);
        if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
          MiUnlockWorkingSetExclusive(v61, v62);
        else
          MiUnlockWorkingSetShared(v61, v62);
        if ( v58 == 2 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
        return v59;
      }
      goto LABEL_148;
    }
    v105 = (v54 >> 5) & 0x1F;
    if ( (v54 & 0x400) == 0 )
    {
LABEL_148:
      v64 = 1;
      goto LABEL_149;
    }
    v54 = *(_QWORD *)v53;
    v106 = 0;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v56, v54, Flink, v35)
      && (v54 & 1) != 0
      && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
    {
      v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v74 )
      {
        v75 = *((_QWORD *)&v74->Flink + ((v53 >> 3) & 0x1FF));
        v76 = v54 | 0x20;
        if ( (v75 & 0x20) == 0 )
          v76 = v54;
        v54 = v76;
        if ( (v75 & 0x42) != 0 )
          v54 = v76 | 0x42;
      }
    }
    v77 = (v54 >> 5) & 0x1F;
    if ( (v54 & 0x400) == 0 )
      goto LABEL_211;
    v78 = v54;
    if ( qword_140C4DF40 && (v54 & 0x10) == 0 )
      v78 = v54 & ~qword_140C4DF40;
    if ( HIDWORD(v78) == 0xFFFFFFFF )
    {
      v79 = (__int64)(v53 << 25) >> 16;
      if ( v79 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v80 = v79 & 0x7FFFFFFFF000LL;
          if ( (v79 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v56 = qword_140C4DE38;
            v64 = 1;
            v106 = 1;
            goto LABEL_216;
          }
          if ( v80 == qword_140C4DE48 && v80 )
          {
            v56 = qword_140C4DE40;
            v64 = 1;
            v106 = 1;
            goto LABEL_216;
          }
        }
        v81 = KeGetCurrentThread()->ApcState.Process;
        v82 = *(_QWORD *)&v81[1].Spare2[23];
        if ( v82 )
        {
          v83 = v79 >> 12;
          if ( v79 >> 12 < (*(unsigned int *)(v82 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v82 + 32) << 32))
            || v83 > (*(unsigned int *)(v82 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v82 + 33) << 32)) )
          {
            v84 = *(__int64 ***)&v81[1].Spare2[15];
            if ( v84 )
            {
              while ( 1 )
              {
                if ( v83 > (*((unsigned int *)v84 + 7) | ((unsigned __int64)*((unsigned __int8 *)v84 + 33) << 32)) )
                {
                  v84 = (__int64 **)v84[1];
                }
                else
                {
                  if ( v83 >= (*((unsigned int *)v84 + 6) | ((unsigned __int64)*((unsigned __int8 *)v84 + 32) << 32)) )
                  {
                    *(_QWORD *)&v81[1].Spare2[23] = v84;
                    goto LABEL_207;
                  }
                  v84 = (__int64 **)*v84;
                }
                if ( !v84 )
                {
                  valid = -1073741819;
                  goto LABEL_254;
                }
              }
            }
            goto LABEL_50;
          }
LABEL_207:
          v56 = MiCheckUserVirtualAddress((__int64)(v53 << 25) >> 16, &v106);
          v64 = 1;
          goto LABEL_216;
        }
LABEL_50:
        valid = -1073741819;
        goto LABEL_254;
      }
      if ( v79 >= 0xFFFFF68000000000uLL && v79 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v106 = 24;
      v56 = 0LL;
      v64 = 1;
    }
    else
    {
LABEL_211:
      v85 = v54;
      if ( qword_140C4DF40 && (v54 & 0x10) == 0 )
        v85 = v54 & ~qword_140C4DF40;
      v56 = v85 >> 16;
      LODWORD(v77) = 256;
      v64 = 1;
      if ( (v54 & 8) != 0 )
        LODWORD(v77) = 1;
    }
LABEL_216:
    v105 = v77;
    v107 = v56;
    if ( !v56 )
    {
      valid = -1073741819;
      goto LABEL_254;
    }
LABEL_149:
    if ( v105 == 256 )
      goto LABEL_252;
    v65 = a1[1] & 2;
    v66 = a1[2];
    if ( (a1[10] & 0x40) != 0 )
    {
      v54 = 0xFFFFF68000000000uLL;
      v56 = 0x3FFFFFFF78LL;
      if ( v53 > 0xFFFFF6BFFFFFFF78uLL || v53 < 0xFFFFF68000000000uLL )
        goto LABEL_167;
    }
    v67 = *(_QWORD *)v53;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v56, v54, v65, v66) )
    {
      if ( (v67 & 1) == 0 )
        goto LABEL_218;
      if ( (v67 & 0x20) == 0 || (v67 & 0x42) == 0 )
      {
        v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v68 )
        {
          v69 = *((_QWORD *)&v68->Flink + ((v53 >> 3) & 0x1FF));
          v70 = v67 | 0x20;
          if ( (v69 & 0x20) == 0 )
            v70 = v67;
          v67 = v70;
          if ( (v69 & 0x42) != 0 )
            v67 = v70 | 0x42;
        }
      }
    }
    if ( (v67 & 1) != 0 )
    {
      if ( v65 && (v67 & 0xA00) == 0 )
        goto LABEL_167;
LABEL_252:
      a1[12] = v107;
      return 3221225494LL;
    }
LABEL_218:
    v86 = v105;
    if ( v65 )
      LODWORD(v65) = v64;
    if ( *((char *)&MiReadWrite + (v105 & 7)) - (int)v65 < 10 )
      goto LABEL_167;
    if ( (v105 & 0xFFFFFFF8) != 0x10 || (v66 & 1) != 0 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_252;
    if ( !(unsigned int)MiAllowGuardFault(v66) )
    {
LABEL_167:
      v71 = *a1;
      if ( *a1 < 0xFFFF800000000000uLL )
      {
        v72 = MiLocateAddress(v71);
        v71 = *a1;
        v4 = v72;
      }
      MiCheckFatalAccessViolation(v71);
      a1[11] = v4;
      valid = -1073741819;
      goto LABEL_170;
    }
    if ( (v67 & 0x800) == 0 || (v67 & 0x400) != 0 )
    {
      v96 = v67 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v86 & 0xF));
      if ( (unsigned int)MiPteInShadowRange(v53, v87) )
      {
        if ( (unsigned int)MiPteHasShadow(v97, v73, v98, v99) )
        {
          if ( !HIBYTE(word_140C4E008) && (v96 & 1) != 0 )
            v96 |= 0x8000000000000000uLL;
          *(_QWORD *)v53 = v96;
          MiWritePteShadow(v53, v96);
          valid = -2147483647;
          goto LABEL_170;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v96 & 1) != 0 )
        {
          v96 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v53 = v96;
      goto LABEL_251;
    }
    v88 = MiLockTransitionLeafPage(v53);
    v89 = v86 & 0xF;
    v91 = MI_READ_PTE_LOCK_FREE(v53);
    if ( v88 )
      *(_QWORD *)(v88 + 16) = (32LL * (unsigned int)v89) | *(_QWORD *)(v88 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    v92 = (32 * v89) | v91 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (unsigned int)MiPteInShadowRange(v53, v90) )
    {
      if ( (unsigned int)MiPteHasShadow(v93, v73, v94, v95) )
      {
        if ( !HIBYTE(word_140C4E008) && (v92 & 1) != 0 )
          v92 |= 0x8000000000000000uLL;
        *(_QWORD *)v53 = v92;
        MiWritePteShadow(v53, v92);
LABEL_239:
        if ( v88 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          valid = -2147483647;
          goto LABEL_170;
        }
LABEL_251:
        valid = -2147483647;
LABEL_170:
        LOBYTE(v73) = 17;
        MiReleaseFaultState(a1 + 7, v73, 0LL);
        if ( valid == -2147483647 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 0LL);
        return (unsigned int)valid;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v92 & 1) != 0 )
      {
        v92 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v53 = v92;
    goto LABEL_239;
  }
  MiUnlockPageTableInternal(v31, v37);
  a1[9] = 0LL;
LABEL_63:
  valid = 0;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    a1[9] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v31, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v38 = a1 + 6;
  while ( 1 )
  {
    v39 = *v38;
    v35 = 0xFFFFF6FB7DBED000uLL;
    v40 = *(_QWORD *)*v38;
    v36 = v40;
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    if ( *v38 >= 0xFFFFF6FB7DBED000uLL && v39 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v41 )
        {
          v36 = v40 | 0x20;
          v42 = *((_QWORD *)&v41->Flink + ((v39 >> 3) & 0x1FF));
          if ( (v42 & 0x20) == 0 )
            v36 = *(_QWORD *)*v38;
          if ( (v42 & 0x42) != 0 )
            v36 |= 0x42uLL;
        }
      }
      Flink = 0xFFFFF6FB7DBED7F8uLL;
      v35 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (v36 & 1) != 0 )
      break;
    if ( v39 >= 0xFFFFF6FB7DBED000uLL
      && v39 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v36, v40, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL) )
    {
      if ( (v40 & 1) == 0 )
        goto LABEL_92;
      if ( (v40 & 0x20) == 0 || (v40 & 0x42) == 0 )
      {
        v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v43 )
        {
          Flink = v40 | 0x20;
          v44 = *((_QWORD *)&v43->Flink + ((v39 >> 3) & 0x1FF));
          if ( (v44 & 0x20) == 0 )
            Flink = v40;
          v40 = Flink;
          if ( (v44 & 0x42) != 0 )
            v40 = Flink | 0x42;
        }
      }
    }
    if ( (v40 & 1) == 0 )
    {
LABEL_92:
      if ( v40 && (v40 & 0x400) == 0 )
      {
        if ( (v40 & 0x800) != 0 )
        {
          v45 = ((v40 >> 5) & 0x1F) == 24;
        }
        else
        {
          v46 = MiSwizzleInvalidPte(512LL);
          v45 = v47 == v46;
        }
        if ( v45 )
        {
          MiUnlockFaultPageTable(a1 + 7);
          valid = -1073741819;
          goto LABEL_254;
        }
      }
    }
    valid = MiInPagePageTable(a1, v7, Flink);
    if ( valid < 0 )
      goto LABEL_113;
    ++v7;
    ++v38;
LABEL_104:
    --v38;
    if ( !--v7 )
      goto LABEL_117;
  }
  if ( (v36 & 0x80u) == 0LL )
  {
    v48 = a1[9];
    if ( v48 && v39 != v48 )
    {
      MiLockPageTableInternal(v31, *v38, 0LL);
      MiUnlockPageTableInternal(v31, a1[9]);
      a1[9] = v39;
    }
    goto LABEL_104;
  }
  v49 = a1[2];
  if ( (v49 & 1) == 0 || *(_BYTE *)(v49 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v50 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v50 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v50, a1[1], v49, 8uLL);
  }
  valid = MiLargePageFault(a1, *v38, 0xFFFFF6FB7DBED7F8uLL);
  if ( valid >= 0 )
    valid = -1073740748;
LABEL_113:
  v51 = a1[9];
  v52 = a1[7];
  if ( v51 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v51 = a1[9];
    }
    MiUnlockPageTableInternal(v52, v51);
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
  v100 = a1[9];
  v101 = a1[7];
  if ( v100 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v100 = a1[9];
    }
    MiUnlockPageTableInternal(v101, v100);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v102 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v101, v102);
  else
    MiUnlockWorkingSetShared(v101, v102);
  return (unsigned int)valid;
}
