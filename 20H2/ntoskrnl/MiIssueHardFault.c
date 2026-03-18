/*
 * XREFs of MiIssueHardFault @ 0x1402CFFA0
 * Callers:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1402CBBA0 (MiInPagePageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiLockPageAndSetDirty @ 0x14029F10C (MiLockPageAndSetDirty.c)
 *     MiReferenceInPageFile @ 0x1402A03EC (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x1402A1C00 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x1402D0F14 (MiIssueHardFaultIo.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     PfHardFaultRecord @ 0x1402D1190 (PfHardFaultRecord.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14030CCF4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiMakeTransitionPteValid @ 0x1403115D0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140317FF8 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v16; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  int v21; // r8d
  unsigned __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  int v30; // edx
  __int64 *v31; // rax
  unsigned __int64 v32; // rcx
  __int64 *v33; // rdx
  __int64 v35; // r14
  unsigned __int64 v36; // rsi
  int v37; // edi
  int v38; // eax
  unsigned int v39; // edx
  __int64 *v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 TransitionPteValid; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  _BYTE *v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  char v55; // dl
  __int64 v56; // [rsp+0h] [rbp-70h]
  __int64 v57; // [rsp+0h] [rbp-70h]
  _BYTE v58[16]; // [rsp+20h] [rbp-50h] BYREF
  char v59[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v60; // [rsp+78h] [rbp+8h]
  _BYTE *v61; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v62; // [rsp+88h] [rbp+18h] BYREF
  __int64 v63; // [rsp+90h] [rbp+20h]
  __int64 *v64; // [rsp+98h] [rbp+28h]
  _QWORD *v65; // [rsp+A0h] [rbp+30h]
  __int64 v66; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v65 = (_QWORD *)a1;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  *(_QWORD *)(a2 + 224) = v6;
  v59[0] = 0;
  v62 = 0LL;
  v63 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v9 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v10) = 1;
  v64 = (__int64 *)(a1 + 56);
  v11 = MiReleaseFaultState(a1 + 56, v10, v59);
  v12 = *(_QWORD *)(a1 + 16);
  v60 = v11;
  if ( v9 )
  {
    v13 = v63;
    *(_QWORD *)(a2 + 200) = v9;
    v7 = (*(_DWORD *)(v13 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v14 = *(_QWORD *)(a1 + 16);
  if ( (v14 & 1) == 0 || *(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v4 + 1310);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v4 + 486);
  else
    --*(_WORD *)(v4 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v16 = v59[0];
    if ( v59[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = v59[0];
      v19 = ~(unsigned __int16)(-1LL << (v59[0] + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = v59[0];
  }
  __writecr8(v16);
  v21 = *(_DWORD *)(a2 + 312);
  v22 = 0xFFFFFA8000000000uLL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v21 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v21;
  v61 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v7 = 2;
LABEL_33:
    v27 = (__int64 *)(a1 + 56);
    goto LABEL_34;
  }
  v23 = *(_DWORD *)(a2 + 192);
  if ( (v23 & 0x200008) == 0x200008 && (v23 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEC054 & 1) != 0) && (v23 & 0x100) == 0 && (v23 & 8) == 0 )
  {
    v24 = *(_QWORD *)(a2 + 96);
    v25 = *(_QWORD *)(a2 + 224);
    v56 = *(_QWORD *)(a2 + 200);
    v61 = v58;
    PfHardFaultRecord((unsigned int)v58, v24, v21, v25, v56, v4);
  }
  v26 = *(_QWORD *)(a1 + 56);
  v27 = (__int64 *)(a1 + 56);
  if ( (*(_BYTE *)(v26 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v26) + 4) )
    KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
  v7 |= 2u;
  MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16), v22);
LABEL_34:
  v28 = *(_QWORD *)(a1 + 16);
  if ( (v28 & 1) != 0 )
  {
    v29 = v28 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v29 == 1 )
    {
      v30 = *(unsigned __int8 *)(*v27 + 184);
      if ( (v30 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v30 - 2)) & 6;
      if ( v7 < 2 )
      {
        v33 = *(__int64 **)(v29 + 64);
        if ( *v33 == v29 + 56 )
        {
          *(_QWORD *)a2 = v29 + 56;
          *(_QWORD *)(a2 + 8) = v33;
          *v33 = a2;
          *(_QWORD *)(v29 + 64) = a2;
          *(_QWORD *)(v29 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v31 = *(__int64 **)(v29 + 48);
        v32 = v29 + 40;
        if ( *v31 == v32 )
        {
          *(_QWORD *)a2 = v32;
          *(_QWORD *)(a2 + 8) = v31;
          *v31 = a2;
          *(_QWORD *)(v32 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*v27 + 184) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4);
          else
            KeLeaveCriticalRegionThread(v4);
          MiRelockFaultState(v27, v60);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v35 = *(_QWORD *)(a2 + 248);
  v36 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v35 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v35 + 8) > 0 )
    v35 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v61);
  v37 = MiFinishHardFault(a1, v60, a2, (__int64 *)&v62);
  v38 = (int)v61;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v60) = v38;
  if ( v37 )
    return (unsigned int)v37;
  if ( !v35 )
    v35 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v62) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
  v63 = *(_DWORD *)(a1 + 8) & 2;
  if ( (unsigned int)MI_PFN_IS_PROTO(v35) )
  {
    v36 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v37 = MiCompleteProtoPteFault(a1, v62, (struct _LIST_ENTRY *)v39, 0, v12);
    if ( v37 >= 0 )
    {
      v40 = v64;
LABEL_57:
      if ( dword_140C4E6A8 && (_DWORD)v60 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v4) >= dword_140C4E6AC )
        MiLogPageAccess(*v40, v36 | 1);
      if ( !v37 )
        return 276;
    }
    return (unsigned int)v37;
  }
  v66 = v12 & 1;
  if ( (v12 & 1) != 0 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v41 = MI_READ_PTE_LOCK_FREE(v36) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( MiPteInShadowRange(v36) )
    {
      if ( (unsigned int)MiPteHasShadow(v43, v42, v44, v45) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v41 & 1) != 0 )
          v41 |= 0x8000000000000000uLL;
        *(_QWORD *)v36 = v41;
        MiWritePteShadow(v36, v41);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v41 & 1) != 0 )
      {
        v41 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v36 = v41;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v36);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v35 + 16) )
    TransitionPteValid |= 0x40uLL;
  if ( v63 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v65, v47, v48) )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v35 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v35 + 16) )
            MiLockPageAndSetDirty(v35, 1);
        }
      }
    }
  }
  v49 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v66 )
    goto LABEL_98;
  if ( *v49 != 4 )
  {
    if ( *v49 == 5 )
    {
      v54 = (__int64)v49;
      v55 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v55 = 0;
    v54 = 0LL;
LABEL_99:
    if ( v66 && *v49 == 3 )
      v55 = 1;
    v57 = TransitionPteValid;
    v40 = v64;
    if ( (unsigned int)MiAllocateWsle(*v64, v36, (_QWORD *)v35, 0, v57, v55, v54) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v35, 0);
    return (unsigned int)-1073741801;
  }
  if ( !MiPteInShadowRange(v36) )
  {
LABEL_95:
    *(_QWORD *)v36 = TransitionPteValid;
    return 276LL;
  }
  if ( !(unsigned int)MiPteHasShadow(v51, v50, v52, v53) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (TransitionPteValid & 1) != 0 )
    {
      TransitionPteValid |= 0x8000000000000000uLL;
    }
    goto LABEL_95;
  }
  if ( !HIBYTE(word_140C4DE88) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v36 = TransitionPteValid;
  MiWritePteShadow(v36, TransitionPteValid);
  return 276LL;
}
