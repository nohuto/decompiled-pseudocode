/*
 * XREFs of MiUserFault @ 0x1402B2070
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140213930 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAllowGuardFault @ 0x140220004 (MiAllowGuardFault.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x14023DA3C (MiCheckFatalAccessViolation.c)
 *     MiWaitForRotateToComplete @ 0x140251070 (MiWaitForRotateToComplete.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x14031CE98 (MiUnlockFaultPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x140339750 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiZeroFault @ 0x140359BB0 (MiZeroFault.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14052B8E8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053E51C (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x1405485C4 (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x140548CF4 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5E94 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1405F4B48 (MiCheckForUserStackOverflow.c)
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
  __int64 **Address; // rax
  int valid; // ebx
  _KPROCESS *v29; // rbx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  int v33; // eax
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // rsi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
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
  unsigned __int64 v50; // rdx
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
  unsigned __int64 v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rdx
  int v65; // r10d
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  struct _LIST_ENTRY *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 **v73; // rax
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  struct _LIST_ENTRY *v76; // r8
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rbx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  _KPROCESS *v84; // r10
  __int64 **v85; // r8
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  char v88; // bl
  __int64 v89; // rbp
  __int64 v90; // rbx
  __int64 v91; // rdi
  unsigned __int64 v92; // rdi
  unsigned __int64 v93; // rbx
  unsigned __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // [rsp+30h] [rbp-58h]
  char v98; // [rsp+90h] [rbp+8h] BYREF
  int v99; // [rsp+98h] [rbp+10h] BYREF
  int v100; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v101; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v99 = 0;
  v101 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 3;
  v97 = (__int64)Process;
  v8 = &Process[1].ActiveProcessorsPadding[6];
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u )
    goto LABEL_14;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_14;
  v9 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( *(_DWORD *)(v9 + 1160) )
  {
    if ( *(_KPROCESS **)(v9 + 1280) == Process )
      goto LABEL_14;
  }
  v10 = *(_QWORD *)(qword_140C4E688 + 8LL * Process[1].IdealProcessorPadding[5]);
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
    if ( !dword_140C4ED8C )
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
  v15 = &dword_140C4F7C0;
  v16 = v8[23] & 7;
  if ( v16 < 6u )
  {
    if ( v16 == 2 )
      v19 = &dword_140C4F7C0;
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
        Address = MiLocateAddress((unsigned __int64)a1);
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
  if ( v29[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(*a1, (__int64)(a1 + 7)) == 1 )
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
  if ( !v33 )
    goto LABEL_63;
  v34 = a1[v33 + 3];
  a1[9] = v34;
  if ( v33 == 1 )
  {
LABEL_119:
    v52 = a1[3];
    v53 = *(_QWORD *)v52;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
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
      valid = MiValidFault((__int64)a1, v53);
      goto LABEL_254;
    }
LABEL_132:
    v57 = a1[1];
    if ( (v57 & 2) != 0 && (*(_DWORD *)(v97 + 1124) & 0x10) != 0 && *a1 < 0xFFFF800000000000uLL )
      a1[1] = v57 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( !v53 )
    {
      v98 = 0;
      v58 = MiZeroFault(a1, &v98, &v99, &v101);
      v59 = v98;
      v60 = v58;
      if ( v98 )
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
    v99 = (v53 >> 5) & 0x1F;
    if ( (v53 & 0x400) == 0 )
    {
LABEL_148:
      v65 = 1;
      goto LABEL_149;
    }
    v75 = *(_QWORD *)v52;
    v100 = 0;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL
      && v52 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v75 & 1) != 0
      && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
    {
      v76 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v76 )
      {
        v77 = *((_QWORD *)&v76->Flink + ((v52 >> 3) & 0x1FF));
        v78 = v75 | 0x20;
        if ( (v77 & 0x20) == 0 )
          v78 = v75;
        v75 = v78;
        if ( (v77 & 0x42) != 0 )
          v75 = v78 | 0x42;
      }
    }
    v79 = (v75 >> 5) & 0x1F;
    if ( (v75 & 0x400) == 0 )
      goto LABEL_211;
    v80 = v75;
    if ( qword_140C4DF80 && (v75 & 0x10) == 0 )
      v80 = v75 & ~qword_140C4DF80;
    if ( HIDWORD(v80) == 0xFFFFFFFF )
    {
      v81 = (__int64)(v52 << 25) >> 16;
      if ( v81 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v82 = v81 & 0x7FFFFFFFF000LL;
          if ( (v81 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v83 = qword_140C4DE78;
            v65 = 1;
            v100 = 1;
            goto LABEL_216;
          }
          if ( v82 == qword_140C4DE88 && v82 )
          {
            v83 = qword_140C4DE80;
            v65 = 1;
            v100 = 1;
            goto LABEL_216;
          }
        }
        v84 = KeGetCurrentThread()->ApcState.Process;
        v85 = *(__int64 ***)&v84[1].Spare2[23];
        if ( v85 )
        {
          v86 = v81 >> 12;
          if ( v81 >> 12 < (*((unsigned int *)v85 + 6) | ((unsigned __int64)*((unsigned __int8 *)v85 + 32) << 32))
            || v86 > (*((unsigned int *)v85 + 7) | ((unsigned __int64)*((unsigned __int8 *)v85 + 33) << 32)) )
          {
            v85 = *(__int64 ***)&v84[1].Spare2[15];
            if ( v85 )
            {
              while ( 1 )
              {
                if ( v86 > (*((unsigned int *)v85 + 7) | ((unsigned __int64)*((unsigned __int8 *)v85 + 33) << 32)) )
                {
                  v85 = (__int64 **)v85[1];
                }
                else
                {
                  if ( v86 >= (*((unsigned int *)v85 + 6) | ((unsigned __int64)*((unsigned __int8 *)v85 + 32) << 32)) )
                  {
                    *(_QWORD *)&v84[1].Spare2[23] = v85;
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
          v83 = MiCheckUserVirtualAddress((__int64)(v52 << 25) >> 16, &v100, v85);
          v65 = 1;
          goto LABEL_216;
        }
LABEL_50:
        valid = -1073741819;
        goto LABEL_254;
      }
      if ( v81 >= 0xFFFFF68000000000uLL && v81 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v100 = 24;
      v83 = 0LL;
      v65 = 1;
    }
    else
    {
LABEL_211:
      v87 = v75;
      if ( qword_140C4DF80 && (v75 & 0x10) == 0 )
        v87 = v75 & ~qword_140C4DF80;
      v83 = v87 >> 16;
      LODWORD(v79) = 256;
      v65 = 1;
      if ( (v75 & 8) != 0 )
        LODWORD(v79) = 1;
    }
LABEL_216:
    v99 = v79;
    v101 = v83;
    if ( !v83 )
    {
      valid = -1073741819;
      goto LABEL_254;
    }
LABEL_149:
    if ( v99 == 256 )
      goto LABEL_252;
    v66 = a1[1] & 2;
    v67 = a1[2];
    if ( (a1[10] & 0x40) != 0 && (v52 > 0xFFFFF6BFFFFFFF78uLL || v52 < 0xFFFFF68000000000uLL) )
      goto LABEL_167;
    v68 = *(_QWORD *)v52;
    if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
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
      a1[12] = v101;
      return 3221225494LL;
    }
LABEL_218:
    v88 = v99;
    if ( v66 )
      LODWORD(v66) = v65;
    if ( *((char *)&MiReadWrite + (v99 & 7)) - (int)v66 < 10 )
      goto LABEL_167;
    if ( (v99 & 0xFFFFFFF8) != 0x10 || (v67 & 1) != 0 && *(_BYTE *)(v67 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_252;
    if ( !MiAllowGuardFault(v67) )
    {
LABEL_167:
      v72 = *a1;
      if ( *a1 < 0xFFFF800000000000uLL )
      {
        v73 = MiLocateAddress(v72);
        v72 = *a1;
        v4 = (__int64)v73;
      }
      MiCheckFatalAccessViolation(v72, v4, a1[1], v97);
      a1[11] = v4;
      valid = -1073741819;
      goto LABEL_170;
    }
    if ( (v68 & 0x800) == 0 || (v68 & 0x400) != 0 )
    {
      v93 = v68 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v88 & 0xF));
      if ( (unsigned int)MiPteInShadowRange(v52) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v93 & 1) != 0 )
            v93 |= 0x8000000000000000uLL;
          *(_QWORD *)v52 = v93;
          MiWritePteShadow(v52, v93);
          valid = -2147483647;
          goto LABEL_170;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v93 & 1) != 0 )
        {
          v93 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v52 = v93;
      goto LABEL_251;
    }
    v89 = MiLockTransitionLeafPage(v52, 0LL);
    v90 = v88 & 0xF;
    v91 = MI_READ_PTE_LOCK_FREE(v52);
    if ( v89 )
      *(_QWORD *)(v89 + 16) = (32LL * (unsigned int)v90) | *(_QWORD *)(v89 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    v92 = (32 * v90) | v91 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( (unsigned int)MiPteInShadowRange(v52) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v92 & 1) != 0 )
          v92 |= 0x8000000000000000uLL;
        *(_QWORD *)v52 = v92;
        MiWritePteShadow(v52, v92);
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
        && (v92 & 1) != 0 )
      {
        v92 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v52 = v92;
    goto LABEL_239;
  }
  MiUnlockPageTableInternal(v31, v34);
  a1[9] = 0LL;
LABEL_63:
  valid = 0;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    a1[9] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v31, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v35 = a1 + 6;
  while ( 1 )
  {
    v36 = *v35;
    v37 = *(_QWORD *)*v35;
    LOBYTE(v38) = v37;
    v39 = 0xFFFFF6FB7DBED7F8uLL;
    if ( *v35 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v37 & 1) != 0
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v40 )
        {
          LOBYTE(v38) = v37 | 0x20;
          v41 = *((_QWORD *)&v40->Flink + ((v36 >> 3) & 0x1FF));
          if ( (v41 & 0x20) == 0 )
            v38 = *(_QWORD *)*v35;
          if ( (v41 & 0x42) != 0 )
            LOBYTE(v38) = v38 | 0x42;
        }
      }
      v39 = 0xFFFFF6FB7DBED7F8uLL;
    }
    if ( (v38 & 1) != 0 )
      break;
    if ( v36 >= 0xFFFFF6FB7DBED000uLL && v36 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
    {
      if ( (v37 & 1) == 0 )
        goto LABEL_92;
      if ( (v37 & 0x20) == 0 || (v37 & 0x42) == 0 )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v42 )
        {
          v39 = v37 | 0x20;
          v43 = *((_QWORD *)&v42->Flink + ((v36 >> 3) & 0x1FF));
          if ( (v43 & 0x20) == 0 )
            v39 = v37;
          v37 = v39;
          if ( (v43 & 0x42) != 0 )
            v37 = v39 | 0x42;
        }
      }
    }
    if ( (v37 & 1) == 0 )
    {
LABEL_92:
      if ( v37 && (v37 & 0x400) == 0 )
      {
        if ( (v37 & 0x800) != 0 )
        {
          v44 = ((v37 >> 5) & 0x1F) == 24;
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
    valid = MiInPagePageTable(a1, v7, v39);
    if ( valid < 0 )
      goto LABEL_113;
    ++v7;
    ++v35;
LABEL_104:
    --v35;
    if ( !--v7 )
      goto LABEL_117;
  }
  if ( (v38 & 0x80u) == 0LL )
  {
    v47 = a1[9];
    if ( v47 && v36 != v47 )
    {
      MiLockPageTableInternal(v31, *v35, 0LL);
      MiUnlockPageTableInternal(v31, a1[9]);
      a1[9] = v36;
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
  valid = MiLargePageFault(a1, *v35, 0xFFFFF6FB7DBED7F8uLL);
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
  v94 = a1[9];
  v95 = a1[7];
  if ( v94 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v94 = a1[9];
    }
    MiUnlockPageTableInternal(v95, v94);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v96 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v95, v96);
  else
    MiUnlockWorkingSetShared(v95, v96);
  return (unsigned int)valid;
}
