/*
 * XREFs of MiUserFault @ 0x14029F750
 * Callers:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MiCheckUserVirtualAddress @ 0x140259610 (MiCheckUserVirtualAddress.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14025D264 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiZeroFault @ 0x14029CF50 (MiZeroFault.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiUnlockFaultPageTable @ 0x1402BE1D8 (MiUnlockFaultPageTable.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140329910 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x140333384 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14034CDD0 (MiCheckFatalAccessViolation.c)
 *     MiWaitForRotateToComplete @ 0x14035FBF0 (MiWaitForRotateToComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405261D8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x140538E0C (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140542EB4 (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B06F4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406E5004 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 **v1; // r13
  _KPROCESS *Process; // r11
  int v4; // r15d
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
  __int64 **Address; // rax
  int valid; // ebx
  _KPROCESS *v29; // rbx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  int v33; // eax
  unsigned __int64 Flink; // r8
  unsigned __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
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
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // eax
  char v58; // bp
  unsigned int v59; // edi
  unsigned __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rdx
  int v64; // r10d
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdi
  struct _LIST_ENTRY *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 **v72; // rax
  struct _LIST_ENTRY *v73; // r8
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r9
  __int64 v79; // rax
  _KPROCESS *v80; // r10
  __int64 v81; // r8
  unsigned __int64 v82; // rdx
  __int64 v83; // rcx
  char v84; // bl
  __int64 v85; // rbp
  __int64 v86; // rbx
  __int64 v87; // rdi
  unsigned __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // rdx
  __int64 v99; // rdi
  __int64 v100; // rdx
  _KPROCESS *v101; // [rsp+30h] [rbp-58h]
  char v102; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v103; // [rsp+98h] [rbp+10h] BYREF
  int v104; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v105; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0LL;
  v103 = 0;
  v105 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = 3;
  v101 = Process;
  v5 = &Process[1].ActiveProcessorsPadding[6];
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u )
    goto LABEL_14;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_14;
  v6 = *(_QWORD *)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( *(_DWORD *)(v6 + 1160) )
  {
    if ( *(_KPROCESS **)(v6 + 1280) == Process )
      goto LABEL_14;
  }
  v7 = *(_QWORD *)(qword_140C4E448 + 8LL * Process[1].IdealProcessorPadding[5]);
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
    if ( !dword_140C4EB4C )
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
  v14 = &dword_140C4F580;
  v15 = v5[23] & 7;
  if ( v15 < 6u )
  {
    if ( v15 == 2 )
      v18 = &dword_140C4F580;
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
      valid = MiValidFault(a1);
      goto LABEL_254;
    }
LABEL_132:
    v56 = a1[1];
    if ( (v56 & 2) != 0 && (v101[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    {
      v56 &= ~2uLL;
      a1[1] = v56;
    }
    if ( !v54 )
    {
      v102 = 0;
      v57 = MiZeroFault((__int64)a1, &v102, &v103, &v105);
      v58 = v102;
      v59 = v57;
      if ( v102 )
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
    v103 = (v54 >> 5) & 0x1F;
    if ( (v54 & 0x400) == 0 )
    {
LABEL_148:
      v64 = 1;
      goto LABEL_149;
    }
    v54 = *(_QWORD *)v53;
    v104 = 0;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v56, v54, Flink, v35)
      && (v54 & 1) != 0
      && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
    {
      v73 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v73 )
      {
        v74 = *((_QWORD *)&v73->Flink + ((v53 >> 3) & 0x1FF));
        v75 = v54 | 0x20;
        if ( (v74 & 0x20) == 0 )
          v75 = v54;
        v54 = v75;
        if ( (v74 & 0x42) != 0 )
          v54 = v75 | 0x42;
      }
    }
    v76 = (v54 >> 5) & 0x1F;
    if ( (v54 & 0x400) == 0 )
      goto LABEL_211;
    v77 = v54;
    if ( qword_140C4DD40 && (v54 & 0x10) == 0 )
      v77 = v54 & ~qword_140C4DD40;
    if ( HIDWORD(v77) == 0xFFFFFFFF )
    {
      v78 = (__int64)(v53 << 25) >> 16;
      if ( v78 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v79 = v78 & 0x7FFFFFFFF000LL;
          if ( (v78 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v56 = qword_140C4DC38;
            v64 = 1;
            v104 = 1;
            goto LABEL_216;
          }
          if ( v79 == qword_140C4DC48 && v79 )
          {
            v56 = qword_140C4DC40;
            v64 = 1;
            v104 = 1;
            goto LABEL_216;
          }
        }
        v80 = KeGetCurrentThread()->ApcState.Process;
        v81 = *(_QWORD *)&v80[1].Spare2[23];
        if ( v81 )
        {
          v82 = v78 >> 12;
          if ( v78 >> 12 < (*(unsigned int *)(v81 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v81 + 32) << 32))
            || v82 > (*(unsigned int *)(v81 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v81 + 33) << 32)) )
          {
            v81 = *(_QWORD *)&v80[1].Spare2[15];
            if ( v81 )
            {
              while ( 1 )
              {
                if ( v82 > (*(unsigned int *)(v81 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v81 + 33) << 32)) )
                {
                  v81 = *(_QWORD *)(v81 + 8);
                }
                else
                {
                  if ( v82 >= (*(unsigned int *)(v81 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v81 + 32) << 32)) )
                  {
                    *(_QWORD *)&v80[1].Spare2[23] = v81;
                    goto LABEL_207;
                  }
                  v81 = *(_QWORD *)v81;
                }
                if ( !v81 )
                {
                  valid = -1073741819;
                  goto LABEL_254;
                }
              }
            }
            goto LABEL_50;
          }
LABEL_207:
          v56 = MiCheckUserVirtualAddress((__int64)(v53 << 25) >> 16, &v104, v81);
          v64 = 1;
          goto LABEL_216;
        }
LABEL_50:
        valid = -1073741819;
        goto LABEL_254;
      }
      if ( v78 >= 0xFFFFF68000000000uLL && v78 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v104 = 24;
      v56 = 0LL;
      v64 = 1;
    }
    else
    {
LABEL_211:
      v83 = v54;
      if ( qword_140C4DD40 && (v54 & 0x10) == 0 )
        v83 = v54 & ~qword_140C4DD40;
      v56 = v83 >> 16;
      LODWORD(v76) = 256;
      v64 = 1;
      if ( (v54 & 8) != 0 )
        LODWORD(v76) = 1;
    }
LABEL_216:
    v103 = v76;
    v105 = v56;
    if ( !v56 )
    {
      valid = -1073741819;
      goto LABEL_254;
    }
LABEL_149:
    if ( v103 == 256 )
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
      a1[12] = v105;
      return 3221225494LL;
    }
LABEL_218:
    v84 = v103;
    if ( v65 )
      LODWORD(v65) = v64;
    if ( *((char *)&MiReadWrite + (v103 & 7)) - (int)v65 < 10 )
      goto LABEL_167;
    if ( (v103 & 0xFFFFFFF8) != 0x10 || (v66 & 1) != 0 && *(_BYTE *)(v66 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_252;
    if ( !(unsigned int)MiAllowGuardFault(v66) )
    {
LABEL_167:
      v71 = *a1;
      if ( *a1 < 0xFFFF800000000000uLL )
      {
        v72 = MiLocateAddress(v71);
        v71 = *a1;
        v1 = v72;
      }
      MiCheckFatalAccessViolation(v71);
      a1[11] = v1;
      valid = -1073741819;
      goto LABEL_170;
    }
    if ( (v67 & 0x800) == 0 || (v67 & 0x400) != 0 )
    {
      v93 = v67 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v84 & 0xF));
      if ( MiPteInShadowRange(v53) )
      {
        if ( (unsigned int)MiPteHasShadow(v95, v94, v96, v97) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v93 & 1) != 0 )
            v93 |= 0x8000000000000000uLL;
          *(_QWORD *)v53 = v93;
          MiWritePteShadow(v53, v93);
          valid = -2147483647;
          goto LABEL_170;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v93 & 1) != 0 )
        {
          v93 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v53 = v93;
      goto LABEL_251;
    }
    v85 = MiLockTransitionLeafPage(v53, 0LL);
    v86 = v84 & 0xF;
    v87 = MI_READ_PTE_LOCK_FREE(v53);
    if ( v85 )
      *(_QWORD *)(v85 + 16) = (32LL * (unsigned int)v86) | *(_QWORD *)(v85 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    v88 = (32 * v86) | v87 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( MiPteInShadowRange(v53) )
    {
      if ( (unsigned int)MiPteHasShadow(v90, v89, v91, v92) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v88 & 1) != 0 )
          v88 |= 0x8000000000000000uLL;
        *(_QWORD *)v53 = v88;
        MiWritePteShadow(v53, v88);
LABEL_239:
        if ( v85 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          valid = -2147483647;
          goto LABEL_170;
        }
LABEL_251:
        valid = -2147483647;
LABEL_170:
        MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
        if ( valid == -2147483647 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 0LL);
        return (unsigned int)valid;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v88 & 1) != 0 )
      {
        v88 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v53 = v88;
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
          v46 = MiSwizzleInvalidPte(512LL, v40, Flink, v35);
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
    valid = MiInPagePageTable(a1, v4);
    if ( valid < 0 )
      goto LABEL_113;
    ++v4;
    ++v38;
LABEL_104:
    --v38;
    if ( !--v4 )
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
  valid = MiLargePageFault(a1, *v38);
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
  v98 = a1[9];
  v99 = a1[7];
  if ( v98 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v98 = a1[9];
    }
    MiUnlockPageTableInternal(v99, v98);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v100 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v99, v100);
  else
    MiUnlockWorkingSetShared(v99, v100);
  return (unsigned int)valid;
}
