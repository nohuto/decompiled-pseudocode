/*
 * XREFs of MiIssueHardFault @ 0x1402B4770
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReferenceInPageFile @ 0x14028249C (MiReferenceInPageFile.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     PfHardFaultRecord @ 0x1402B3E5C (PfHardFaultRecord.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x1402B6250 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x1402B6E54 (MiIssueHardFaultIo.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402FD554 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140308C48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  unsigned int v6; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v15; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  __int64 v20; // r8
  _DWORD *v21; // r9
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 *v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v33; // r14
  unsigned __int64 v34; // rsi
  int v35; // edi
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // edx
  __int64 *v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 TransitionPteValid; // rbx
  __int64 v45; // r8
  _BYTE *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  char v50; // dl
  __int64 v51; // [rsp+0h] [rbp-70h]
  __int64 v52; // [rsp+0h] [rbp-70h]
  _BYTE v53[16]; // [rsp+20h] [rbp-50h] BYREF
  char v54[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v55; // [rsp+78h] [rbp+8h]
  _BYTE *v56; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp+18h] BYREF
  __int64 v58; // [rsp+90h] [rbp+20h]
  __int64 *v59; // [rsp+98h] [rbp+28h]
  _QWORD *v60; // [rsp+A0h] [rbp+30h]
  __int64 v61; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v60 = (_QWORD *)a1;
  v6 = 0;
  *(_QWORD *)(a2 + 224) = *(_QWORD *)a1;
  v54[0] = 0;
  v57 = 0LL;
  v58 = v2;
  SessionIdForVa = MiGetSessionIdForVa();
  v8 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v9) = 1;
  v59 = (__int64 *)(a1 + 56);
  v10 = MiReleaseFaultState(a1 + 56, v9, v54);
  v11 = *(_QWORD *)(a1 + 16);
  v55 = v10;
  if ( v8 )
  {
    v12 = v58;
    *(_QWORD *)(a2 + 200) = v8;
    v6 = (*(_DWORD *)(v12 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( (v13 & 1) == 0 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v4 + 1310);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v4 + 486);
  else
    --*(_WORD *)(v4 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v15 = v54[0];
    if ( v54[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = v54[0];
      v18 = ~(unsigned __int16)(-1LL << (v54[0] + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v15 = v54[0];
  }
  __writecr8(v15);
  v20 = *(unsigned int *)(a2 + 312);
  v21 = (_DWORD *)0xFFFFFA8000000000LL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v20 = *(unsigned int *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v20;
  v56 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v6 = 2;
LABEL_33:
    v26 = a1 + 56;
    goto LABEL_34;
  }
  v22 = *(_DWORD *)(a2 + 192);
  if ( (v22 & 0x200008) == 0x200008 && (v22 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEC0D4 & 1) != 0) && (v22 & 0x100) == 0 && (v22 & 8) == 0 )
  {
    v23 = *(_QWORD *)(a2 + 96);
    v24 = *(_QWORD *)(a2 + 224);
    v51 = *(_QWORD *)(a2 + 200);
    v56 = v53;
    PfHardFaultRecord((__int64)v53, v23, v20, v24, v51, v4);
  }
  v25 = *(_QWORD *)(a1 + 56);
  v26 = a1 + 56;
  if ( (*(_BYTE *)(v25 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v25) + 4) )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, a2 + 104, v21);
  v6 |= 2u;
  MiIssueHardFaultIo(a2, v6 & 1, *(_QWORD *)(a1 + 16), v21);
LABEL_34:
  v27 = *(_QWORD *)(a1 + 16);
  if ( (v27 & 1) != 0 )
  {
    v28 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v28 == 1 )
    {
      v29 = *(unsigned __int8 *)(*(_QWORD *)v26 + 184LL);
      if ( ((unsigned __int8)v29 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v29 - 2)) & 6;
      if ( v6 < 2 )
      {
        v29 = *(_QWORD *)(v28 + 64);
        if ( *(_QWORD *)v29 == v28 + 56 )
        {
          *(_QWORD *)a2 = v28 + 56;
          *(_QWORD *)(a2 + 8) = v29;
          *(_QWORD *)v29 = a2;
          *(_QWORD *)(v28 + 64) = a2;
          *(_QWORD *)(v28 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v30 = *(__int64 **)(v28 + 48);
        v31 = v28 + 40;
        if ( *v30 == v31 )
        {
          *(_QWORD *)a2 = v31;
          *(_QWORD *)(a2 + 8) = v30;
          *v30 = a2;
          *(_QWORD *)(v31 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)v26 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4, v29, v20, (__int64)v21);
          else
            KeLeaveCriticalRegionThread(v4, v29, v20, (__int64)v21);
          MiRelockFaultState(v26, v55);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v33 = *(_QWORD *)(a2 + 248);
  v34 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v33 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v33 + 8) > 0 )
    v33 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v56);
  v35 = MiFinishHardFault(a1, v55, a2, (__int64 *)&v57);
  v37 = (int)v56;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v55) = v37;
  if ( v35 )
    return (unsigned int)v35;
  if ( !v33 )
    v33 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
  v38 = *(_DWORD *)(a1 + 8) & 2;
  v58 = v38;
  if ( (unsigned int)MI_PFN_IS_PROTO(v33, v38, v36) )
  {
    v34 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v35 = MiCompleteProtoPteFault(a1, v57, (struct _LIST_ENTRY *)v39, 0, v11);
    if ( v35 >= 0 )
    {
      v40 = v59;
LABEL_57:
      if ( dword_140C4E768 && (_DWORD)v55 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v4) >= dword_140C4E76C )
        MiLogPageAccess(*v40, v34 | 1);
      if ( !v35 )
        return 276;
    }
    return (unsigned int)v35;
  }
  v61 = v11 & 1;
  if ( (v11 & 1) != 0 && *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v41 = MI_READ_PTE_LOCK_FREE(v34) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( MiPteInShadowRange(v34) )
    {
      if ( (unsigned int)MiPteHasShadow(v43, v42) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v41 & 1) != 0 )
          v41 |= 0x8000000000000000uLL;
        *(_QWORD *)v34 = v41;
        MiWritePteShadow(v34, v41);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v41 & 1) != 0 )
      {
        v41 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v34 = v41;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v34);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v33 + 16) )
    TransitionPteValid |= 0x40uLL;
  if ( v58 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v60) )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v33 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v33 + 16) )
            MiLockPageAndSetDirty(v33, 1LL, v45);
        }
      }
    }
  }
  v46 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v61 )
    goto LABEL_98;
  if ( *v46 != 4 )
  {
    if ( *v46 == 5 )
    {
      v49 = (__int64)v46;
      v50 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v50 = 0;
    v49 = 0LL;
LABEL_99:
    if ( v61 && *v46 == 3 )
      v50 = 1;
    v52 = TransitionPteValid;
    v40 = v59;
    if ( (unsigned int)MiAllocateWsle(*v59, v34, v33, 0, v52, v50, v49) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v33, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !MiPteInShadowRange(v34) )
  {
LABEL_95:
    *(_QWORD *)v34 = TransitionPteValid;
    return 276LL;
  }
  if ( !(unsigned int)MiPteHasShadow(v48, v47) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (TransitionPteValid & 1) != 0 )
    {
      TransitionPteValid |= 0x8000000000000000uLL;
    }
    goto LABEL_95;
  }
  if ( !HIBYTE(word_140C4DF48) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v34 = TransitionPteValid;
  MiWritePteShadow(v34, TransitionPteValid);
  return 276LL;
}
