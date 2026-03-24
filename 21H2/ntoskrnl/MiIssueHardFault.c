/*
 * XREFs of MiIssueHardFault @ 0x14030E9B0
 * Callers:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x14030BDC0 (MiInPagePageTable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiAllocateWsle @ 0x140211CC0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x1402ABE84 (MiOkToSetPteDirtyForNotValidFault.c)
 *     PfHardFaultRecord @ 0x1402AE114 (PfHardFaultRecord.c)
 *     MiIssueHardFaultIo @ 0x1402AF824 (MiIssueHardFaultIo.c)
 *     MiMakeTransitionPteValid @ 0x1402B1F90 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402BA73C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MiWaitForInPageComplete @ 0x14031B1F0 (MiWaitForInPageComplete.c)
 *     MiReferenceInPageFile @ 0x14031CC98 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x14031E4B0 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  __int64 v6; // rcx
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
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rsi
  _DWORD *v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  int v31; // edx
  __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  __int64 v38; // r14
  __int64 v39; // rsi
  int v40; // edi
  int v41; // eax
  unsigned int v42; // edx
  __int64 *v43; // rbx
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 TransitionPteValid; // rbx
  __int64 v48; // rdx
  _BYTE *v49; // r15
  __int64 v50; // r8
  __int64 v51; // rcx
  char v52; // dl
  __int64 v53; // r8
  __int64 v54; // [rsp+0h] [rbp-70h]
  __int64 v55; // [rsp+0h] [rbp-70h]
  _BYTE v56[16]; // [rsp+20h] [rbp-50h] BYREF
  char v57[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v58; // [rsp+78h] [rbp+8h]
  _BYTE *v59; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp+18h] BYREF
  __int64 v61; // [rsp+90h] [rbp+20h]
  __int64 *v62; // [rsp+98h] [rbp+28h]
  unsigned __int64 *v63; // [rsp+A0h] [rbp+30h]
  __int64 v64; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v63 = (unsigned __int64 *)a1;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  *(_QWORD *)(a2 + 224) = v6;
  v57[0] = 0;
  v60 = 0LL;
  v61 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v9 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v10) = 1;
  v62 = (__int64 *)(a1 + 56);
  v11 = MiReleaseFaultState(a1 + 56, v10, v57);
  v12 = *(_QWORD *)(a1 + 16);
  v58 = v11;
  if ( v9 )
  {
    v13 = v61;
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
    v16 = v57[0];
    if ( v57[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = v57[0];
      v19 = ~(unsigned __int16)(-1LL << (v57[0] + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = v57[0];
  }
  __writecr8(v16);
  v21 = *(_DWORD *)(a2 + 312);
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v22 = (*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0);
    MiZeroPhysicalPage(
      *(_QWORD *)(a2 + 8 * v22 + 312),
      3,
      *(unsigned __int8 *)(48LL * *(_QWORD *)(a2 + 8 * v22 + 312) - 0x58000000000LL + 34) >> 6,
      0xFFFFFA8000000000uLL);
    v21 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v21;
  v59 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v7 = 2;
LABEL_33:
    v27 = a1 + 56;
    goto LABEL_34;
  }
  v23 = *(_DWORD *)(a2 + 192);
  if ( (v23 & 0x200008) == 0x200008 && (v23 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEC354 & 1) != 0) && (v23 & 0x100) == 0 && (v23 & 8) == 0 )
  {
    v24 = *(_QWORD *)(a2 + 96);
    v25 = *(_QWORD *)(a2 + 224);
    v54 = *(_QWORD *)(a2 + 200);
    v59 = v56;
    PfHardFaultRecord((__int64)v56, v24, v21, v25, v54, v4);
  }
  v26 = *(_QWORD *)(a1 + 56);
  v27 = a1 + 56;
  if ( (*(_BYTE *)(v26 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v26) + 4) )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, a2 + 104, v28);
  v7 |= 2u;
  MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16));
LABEL_34:
  v29 = *(_QWORD *)(a1 + 16);
  if ( (v29 & 1) != 0 )
  {
    v30 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v30 == 1 )
    {
      v31 = *(unsigned __int8 *)(*(_QWORD *)v27 + 184LL);
      if ( (v31 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v31 - 2)) & 6;
      if ( v7 < 2 )
      {
        v34 = *(__int64 **)(v30 + 64);
        if ( *v34 == v30 + 56 )
        {
          *(_QWORD *)a2 = v30 + 56;
          *(_QWORD *)(a2 + 8) = v34;
          *v34 = a2;
          *(_QWORD *)(v30 + 64) = a2;
          *(_QWORD *)(v30 + 72) += *(unsigned int *)(a2 + 184);
          goto LABEL_44;
        }
      }
      else
      {
        v32 = *(__int64 **)(v30 + 48);
        v33 = v30 + 40;
        if ( *v32 == v33 )
        {
          *(_QWORD *)a2 = v33;
          *(_QWORD *)(a2 + 8) = v32;
          *v32 = a2;
          *(_QWORD *)(v33 + 8) = a2;
LABEL_44:
          KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( (*(_BYTE *)(*(_QWORD *)v27 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4);
          else
            KeLeaveCriticalRegionThread(v4);
          MiRelockFaultState(v27, v58, v35, v36);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v38 = *(_QWORD *)(a2 + 248);
  v39 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v38 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v38 + 8) > 0 )
    v38 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v59);
  v40 = MiFinishHardFault(a1, v58, a2, (__int64 *)&v60);
  v41 = (int)v59;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v58) = v41;
  if ( v40 )
    return (unsigned int)v40;
  if ( !v38 )
    v38 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v60) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v61 = *(_DWORD *)(a1 + 8) & 2;
  if ( (unsigned int)MI_PFN_IS_PROTO(v38) )
  {
    v39 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = MiCompleteProtoPteFault(a1, v60, (struct _LIST_ENTRY *)v42, 0, v12);
    if ( v40 >= 0 )
    {
      v43 = v62;
LABEL_57:
      if ( dword_140C4E828 && (_DWORD)v58 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v4) >= dword_140C4E82C )
        MiLogPageAccess(*v43, v39 | 1);
      if ( !v40 )
        return 276;
    }
    return (unsigned int)v40;
  }
  v64 = v12 & 1;
  if ( (v12 & 1) != 0 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v44 = MI_READ_PTE_LOCK_FREE(v39) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( (unsigned int)MiPteInShadowRange(v39, v45) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v44 & 1) != 0 )
          v44 |= 0x8000000000000000uLL;
        *(_QWORD *)v39 = v44;
        MiWritePteShadow(v39, v44, v46);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v44 & 1) != 0 )
      {
        v44 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v39 = v44;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v39);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v38 + 16)) )
    TransitionPteValid |= 0x40uLL;
  if ( v61 )
  {
    if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v63) && (TransitionPteValid & 0x800) != 0 )
    {
      TransitionPteValid |= 0x42uLL;
      if ( (*(_BYTE *)(v38 + 34) & 0x10) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset(v38 + 16) )
          MiLockPageAndSetDirty(v38, 1LL);
      }
    }
  }
  v49 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v64 )
    goto LABEL_98;
  if ( *v49 != 4 )
  {
    if ( *v49 == 5 )
    {
      v51 = (__int64)v49;
      v52 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v52 = 0;
    v51 = 0LL;
LABEL_99:
    if ( v64 && *v49 == 3 )
      v52 = 1;
    v55 = TransitionPteValid;
    v43 = v62;
    if ( (unsigned int)MiAllocateWsle(*v62, v39, (_QWORD *)v38, 0, v55, v52, v51) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v38, 0LL, v53);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned int)MiPteInShadowRange(v39, v48) )
  {
LABEL_95:
    *(_QWORD *)v39 = TransitionPteValid;
    return 276LL;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (TransitionPteValid & 1) != 0 )
    {
      TransitionPteValid |= 0x8000000000000000uLL;
    }
    goto LABEL_95;
  }
  if ( !HIBYTE(word_140C4E008) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v39 = TransitionPteValid;
  MiWritePteShadow(v39, TransitionPteValid, v50);
  return 276LL;
}
