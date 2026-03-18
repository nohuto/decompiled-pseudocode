/*
 * XREFs of MiUserFault @ 0x14026EA90
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiZeroFault @ 0x140224FB0 (MiZeroFault.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockFaultPageTable @ 0x140299728 (MiUnlockFaultPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x1402B1E10 (MiCheckUserVirtualAddress.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FFF60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAllowGuardFault @ 0x140306340 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x14031DB30 (MiCheckFatalAccessViolation.c)
 *     MiWaitForRotateToComplete @ 0x140330980 (MiWaitForRotateToComplete.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140529BA8 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x14053C7DC (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x140546884 (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B4254 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406BBEC4 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1)
{
  __int64 **v1; // r13
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
  unsigned __int64 *v37; // rsi
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
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
  __int64 v50; // rdi
  unsigned __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // eax
  char v56; // bp
  unsigned int v57; // edi
  __int64 v58; // rbx
  __int64 v59; // rdx
  int v61; // r10d
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdi
  struct _LIST_ENTRY *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 **v69; // rax
  __int64 v70; // rdx
  struct _LIST_ENTRY *v71; // r8
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rbx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r9
  __int64 v77; // rax
  _KPROCESS *v78; // r10
  __int64 **v79; // r8
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  char v82; // bl
  __int64 v83; // rbp
  __int64 v84; // rbx
  __int64 v85; // rdi
  unsigned __int64 v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rbx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdi
  __int64 v95; // rdx
  _KPROCESS *v96; // [rsp+30h] [rbp-58h]
  char v97; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v98; // [rsp+98h] [rbp+10h] BYREF
  int v99; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v100; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0LL;
  v98 = 0;
  v100 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = 3;
  v96 = Process;
  v5 = &Process[1].ActiveProcessorsPadding[6];
  a1[7] = (char *)Process + 1664;
  if ( *(_DWORD *)&Process[1].Spare2[7] <= 0x10u )
    goto LABEL_14;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    goto LABEL_14;
  v6 = *(_QWORD *)(qword_140C4E4C8 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( *(_DWORD *)(v6 + 1160) )
  {
    if ( *(_KPROCESS **)(v6 + 1280) == Process )
      goto LABEL_14;
  }
  v7 = *(_QWORD *)(qword_140C4E4C8 + 8LL * Process[1].IdealProcessorPadding[5]);
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
    if ( !dword_140C4EBCC )
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
  v14 = &dword_140C4F600;
  v15 = v5[23] & 7;
  if ( v15 < 6u )
  {
    if ( v15 == 2 )
      v18 = &dword_140C4F600;
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
  a1[9] = a1[v33 + 3];
  if ( v33 == 1 )
  {
LABEL_119:
    v51 = a1[3];
    v52 = *(_QWORD *)v51;
    if ( v51 >= 0xFFFFF6FB7DBED000uLL
      && v51 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v36, v52, Flink, v35) )
    {
      if ( (v52 & 1) == 0 )
        goto LABEL_132;
      if ( (v52 & 0x20) == 0 || (v52 & 0x42) == 0 )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v53 = *(_QWORD *)(Flink + 8 * ((v51 >> 3) & 0x1FF));
          Flink = v52 | 0x20;
          if ( (v53 & 0x20) == 0 )
            Flink = v52;
          v52 = Flink;
          if ( (v53 & 0x42) != 0 )
            v52 = Flink | 0x42;
        }
      }
    }
    if ( (v52 & 1) != 0 )
    {
      valid = MiValidFault((__int64)a1, v52);
      goto LABEL_254;
    }
LABEL_132:
    v54 = a1[1];
    if ( (v54 & 2) != 0 && (v96[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    {
      v54 &= ~2uLL;
      a1[1] = v54;
    }
    if ( !v52 )
    {
      v97 = 0;
      v55 = MiZeroFault((__int64)a1, &v97, &v98, &v100);
      v56 = v97;
      v57 = v55;
      if ( v97 )
      {
        v58 = a1[7];
        if ( a1[9] )
        {
          if ( *((_WORD *)a1 + 33) )
            MiEmptyDeferredWorkingSetEntries(a1 + 7);
          MiUnlockPageTableInternal(v58);
          *((_BYTE *)a1 + 69) |= 2u;
          a1[9] = 0LL;
        }
        v59 = *((unsigned __int8 *)a1 + 68);
        if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
          MiUnlockWorkingSetExclusive(v58, v59);
        else
          MiUnlockWorkingSetShared(v58, v59);
        if ( v56 == 2 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 1LL);
        return v57;
      }
      goto LABEL_148;
    }
    v98 = (v52 >> 5) & 0x1F;
    if ( (v52 & 0x400) == 0 )
    {
LABEL_148:
      v61 = 1;
      goto LABEL_149;
    }
    v52 = *(_QWORD *)v51;
    v99 = 0;
    if ( v51 >= 0xFFFFF6FB7DBED000uLL
      && v51 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v54, v52, Flink, v35)
      && (v52 & 1) != 0
      && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
    {
      v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v71 )
      {
        v72 = *((_QWORD *)&v71->Flink + ((v51 >> 3) & 0x1FF));
        v73 = v52 | 0x20;
        if ( (v72 & 0x20) == 0 )
          v73 = v52;
        v52 = v73;
        if ( (v72 & 0x42) != 0 )
          v52 = v73 | 0x42;
      }
    }
    v74 = (v52 >> 5) & 0x1F;
    if ( (v52 & 0x400) == 0 )
      goto LABEL_211;
    v75 = v52;
    if ( qword_140C4DDC0 && (v52 & 0x10) == 0 )
      v75 = v52 & ~qword_140C4DDC0;
    if ( HIDWORD(v75) == 0xFFFFFFFF )
    {
      v76 = (__int64)(v51 << 25) >> 16;
      if ( v76 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v77 = v76 & 0x7FFFFFFFF000LL;
          if ( (v76 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            v54 = qword_140C4DCB8;
            v61 = 1;
            v99 = 1;
            goto LABEL_216;
          }
          if ( v77 == qword_140C4DCC8 && v77 )
          {
            v54 = qword_140C4DCC0;
            v61 = 1;
            v99 = 1;
            goto LABEL_216;
          }
        }
        v78 = KeGetCurrentThread()->ApcState.Process;
        v79 = *(__int64 ***)&v78[1].Spare2[23];
        if ( v79 )
        {
          v80 = v76 >> 12;
          if ( v76 >> 12 < (*((unsigned int *)v79 + 6) | ((unsigned __int64)*((unsigned __int8 *)v79 + 32) << 32))
            || v80 > (*((unsigned int *)v79 + 7) | ((unsigned __int64)*((unsigned __int8 *)v79 + 33) << 32)) )
          {
            v79 = *(__int64 ***)&v78[1].Spare2[15];
            if ( v79 )
            {
              while ( 1 )
              {
                if ( v80 > (*((unsigned int *)v79 + 7) | ((unsigned __int64)*((unsigned __int8 *)v79 + 33) << 32)) )
                {
                  v79 = (__int64 **)v79[1];
                }
                else
                {
                  if ( v80 >= (*((unsigned int *)v79 + 6) | ((unsigned __int64)*((unsigned __int8 *)v79 + 32) << 32)) )
                  {
                    *(_QWORD *)&v78[1].Spare2[23] = v79;
                    goto LABEL_207;
                  }
                  v79 = (__int64 **)*v79;
                }
                if ( !v79 )
                {
                  valid = -1073741819;
                  goto LABEL_254;
                }
              }
            }
            goto LABEL_50;
          }
LABEL_207:
          v54 = MiCheckUserVirtualAddress((__int64)(v51 << 25) >> 16, &v99, v79);
          v61 = 1;
          goto LABEL_216;
        }
LABEL_50:
        valid = -1073741819;
        goto LABEL_254;
      }
      if ( v76 >= 0xFFFFF68000000000uLL && v76 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_50;
      v99 = 24;
      v54 = 0LL;
      v61 = 1;
    }
    else
    {
LABEL_211:
      v81 = v52;
      if ( qword_140C4DDC0 && (v52 & 0x10) == 0 )
        v81 = v52 & ~qword_140C4DDC0;
      v54 = v81 >> 16;
      LODWORD(v74) = 256;
      v61 = 1;
      if ( (v52 & 8) != 0 )
        LODWORD(v74) = 1;
    }
LABEL_216:
    v98 = v74;
    v100 = v54;
    if ( !v54 )
    {
      valid = -1073741819;
      goto LABEL_254;
    }
LABEL_149:
    if ( v98 == 256 )
      goto LABEL_252;
    v62 = a1[1] & 2;
    v63 = a1[2];
    if ( (a1[10] & 0x40) != 0 )
    {
      v52 = 0xFFFFF68000000000uLL;
      v54 = 0x3FFFFFFF78LL;
      if ( v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL )
        goto LABEL_167;
    }
    v64 = *(_QWORD *)v51;
    if ( v51 >= 0xFFFFF6FB7DBED000uLL
      && v51 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v54, v52, v62, v63) )
    {
      if ( (v64 & 1) == 0 )
        goto LABEL_218;
      if ( (v64 & 0x20) == 0 || (v64 & 0x42) == 0 )
      {
        v65 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v65 )
        {
          v66 = *((_QWORD *)&v65->Flink + ((v51 >> 3) & 0x1FF));
          v67 = v64 | 0x20;
          if ( (v66 & 0x20) == 0 )
            v67 = v64;
          v64 = v67;
          if ( (v66 & 0x42) != 0 )
            v64 = v67 | 0x42;
        }
      }
    }
    if ( (v64 & 1) != 0 )
    {
      if ( v62 && (v64 & 0xA00) == 0 )
        goto LABEL_167;
LABEL_252:
      a1[12] = v100;
      return 3221225494LL;
    }
LABEL_218:
    v82 = v98;
    if ( v62 )
      LODWORD(v62) = v61;
    if ( *((char *)&MiReadWrite + (v98 & 7)) - (int)v62 < 10 )
      goto LABEL_167;
    if ( (v98 & 0xFFFFFFF8) != 0x10 || (v63 & 1) != 0 && *(_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_252;
    if ( !(unsigned int)MiAllowGuardFault(v63) )
    {
LABEL_167:
      v68 = *a1;
      if ( *a1 < 0xFFFF800000000000uLL )
      {
        v69 = MiLocateAddress(v68);
        v68 = *a1;
        v1 = v69;
      }
      MiCheckFatalAccessViolation(v68);
      a1[11] = v1;
      valid = -1073741819;
      goto LABEL_170;
    }
    if ( (v64 & 0x800) == 0 || (v64 & 0x400) != 0 )
    {
      v90 = v64 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v82 & 0xF));
      if ( MiPteInShadowRange(v51) )
      {
        if ( (unsigned int)MiPteHasShadow(v91, v70, v92, v93) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v90 & 1) != 0 )
            v90 |= 0x8000000000000000uLL;
          *(_QWORD *)v51 = v90;
          MiWritePteShadow(v51, v90);
          valid = -2147483647;
          goto LABEL_170;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v90 & 1) != 0 )
        {
          v90 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v51 = v90;
      goto LABEL_251;
    }
    v83 = MiLockTransitionLeafPage(v51, 0LL);
    v84 = v82 & 0xF;
    v85 = MI_READ_PTE_LOCK_FREE(v51);
    if ( v83 )
      *(_QWORD *)(v83 + 16) = (32LL * (unsigned int)v84) | *(_QWORD *)(v83 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
    v86 = (32 * v84) | v85 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( MiPteInShadowRange(v51) )
    {
      if ( (unsigned int)MiPteHasShadow(v87, v70, v88, v89) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v86 & 1) != 0 )
          v86 |= 0x8000000000000000uLL;
        *(_QWORD *)v51 = v86;
        MiWritePteShadow(v51, v86);
LABEL_239:
        if ( v83 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          valid = -2147483647;
          goto LABEL_170;
        }
LABEL_251:
        valid = -2147483647;
LABEL_170:
        LOBYTE(v70) = 17;
        MiReleaseFaultState(a1 + 7, v70, 0LL);
        if ( valid == -2147483647 )
          return (unsigned int)MiCheckForUserStackOverflow(*a1, 0LL);
        return (unsigned int)valid;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v86 & 1) != 0 )
      {
        v86 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v51 = v86;
    goto LABEL_239;
  }
  MiUnlockPageTableInternal(v31);
  a1[9] = 0LL;
LABEL_63:
  valid = 0;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    a1[9] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v31, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  }
  v37 = a1 + 6;
  while ( 1 )
  {
    v38 = *v37;
    v35 = 0xFFFFF6FB7DBED000uLL;
    v39 = *(_QWORD *)*v37;
    v36 = v39;
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    if ( *v37 >= 0xFFFFF6FB7DBED000uLL && v38 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v40 )
        {
          v36 = v39 | 0x20;
          v41 = *((_QWORD *)&v40->Flink + ((v38 >> 3) & 0x1FF));
          if ( (v41 & 0x20) == 0 )
            v36 = *(_QWORD *)*v37;
          if ( (v41 & 0x42) != 0 )
            v36 |= 0x42uLL;
        }
      }
      Flink = 0xFFFFF6FB7DBED7F8uLL;
      v35 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (v36 & 1) != 0 )
      break;
    if ( v38 >= 0xFFFFF6FB7DBED000uLL
      && v38 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v36, v39, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL) )
    {
      if ( (v39 & 1) == 0 )
        goto LABEL_92;
      if ( (v39 & 0x20) == 0 || (v39 & 0x42) == 0 )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v42 )
        {
          Flink = v39 | 0x20;
          v43 = *((_QWORD *)&v42->Flink + ((v38 >> 3) & 0x1FF));
          if ( (v43 & 0x20) == 0 )
            Flink = v39;
          v39 = Flink;
          if ( (v43 & 0x42) != 0 )
            v39 = Flink | 0x42;
        }
      }
    }
    if ( (v39 & 1) == 0 )
    {
LABEL_92:
      if ( v39 && (v39 & 0x400) == 0 )
      {
        if ( (v39 & 0x800) != 0 )
        {
          v44 = ((v39 >> 5) & 0x1F) == 24;
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
    valid = MiInPagePageTable(a1, v4, Flink);
    if ( valid < 0 )
      goto LABEL_113;
    ++v4;
    ++v37;
LABEL_104:
    --v37;
    if ( !--v4 )
      goto LABEL_117;
  }
  if ( (v36 & 0x80u) == 0LL )
  {
    v47 = a1[9];
    if ( v47 && v38 != v47 )
    {
      MiLockPageTableInternal(v31, *v37, 0LL);
      MiUnlockPageTableInternal(v31);
      a1[9] = v38;
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
  valid = MiLargePageFault(a1, *v37, 0xFFFFF6FB7DBED7F8uLL);
  if ( valid >= 0 )
    valid = -1073740748;
LABEL_113:
  v50 = a1[7];
  if ( a1[9] )
  {
    if ( *((_WORD *)a1 + 33) )
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
    MiUnlockPageTableInternal(v50);
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
  v94 = a1[7];
  if ( a1[9] )
  {
    if ( *((_WORD *)a1 + 33) )
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
    MiUnlockPageTableInternal(v94);
    *((_BYTE *)a1 + 69) |= 2u;
    a1[9] = 0LL;
  }
  v95 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v94, v95);
  else
    MiUnlockWorkingSetShared(v94, v95);
  return (unsigned int)valid;
}
