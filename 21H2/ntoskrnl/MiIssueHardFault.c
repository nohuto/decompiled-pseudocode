/*
 * XREFs of MiIssueHardFault @ 0x140319700
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 * Callees:
 *     MiOkToSetPteDirtyForNotValidFault @ 0x140229FC4 (MiOkToSetPteDirtyForNotValidFault.c)
 *     PfHardFaultRecord @ 0x14022C474 (PfHardFaultRecord.c)
 *     MiIssueHardFaultIo @ 0x14022DB84 (MiIssueHardFaultIo.c)
 *     MiMakeTransitionPteValid @ 0x140230140 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14023894C (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiReferenceInPageFile @ 0x1403279E8 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x140329200 (MiGetSessionIdForVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v37; // r14
  __int64 v38; // rsi
  int v39; // edi
  int v40; // eax
  unsigned int v41; // edx
  __int64 *v42; // rbx
  unsigned __int64 v43; // rbx
  __int64 TransitionPteValid; // rbx
  _BYTE *v45; // r15
  __int64 v46; // rcx
  char v47; // dl
  __int64 v48; // [rsp+0h] [rbp-70h]
  __int64 v49; // [rsp+0h] [rbp-70h]
  _BYTE v50[16]; // [rsp+20h] [rbp-50h] BYREF
  char v51[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v52; // [rsp+78h] [rbp+8h]
  _BYTE *v53; // [rsp+80h] [rbp+10h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp+18h] BYREF
  __int64 v55; // [rsp+90h] [rbp+20h]
  __int64 *v56; // [rsp+98h] [rbp+28h]
  unsigned __int64 *v57; // [rsp+A0h] [rbp+30h]
  __int64 v58; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v57 = (unsigned __int64 *)a1;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  *(_QWORD *)(a2 + 224) = v6;
  v51[0] = 0;
  v54 = 0LL;
  v55 = v2;
  SessionIdForVa = MiGetSessionIdForVa(v6);
  v9 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v10) = 1;
  v56 = (__int64 *)(a1 + 56);
  v11 = MiReleaseFaultState(a1 + 56, v10, v51);
  v12 = *(_QWORD *)(a1 + 16);
  v52 = v11;
  if ( v9 )
  {
    v13 = v55;
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
    v16 = v51[0];
    if ( v51[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = v51[0];
      v19 = ~(unsigned __int16)(-1LL << (v51[0] + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v16 = v51[0];
  }
  __writecr8(v16);
  v21 = *(unsigned int *)(a2 + 312);
  v22 = 0xFFFFFA8000000000uLL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    v23 = (*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0);
    MiZeroPhysicalPage(
      *(_QWORD *)(a2 + 8 * v23 + 312),
      3,
      *(unsigned __int8 *)(48LL * *(_QWORD *)(a2 + 8 * v23 + 312) - 0x58000000000LL + 34) >> 6);
    v21 = *(unsigned int *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v21;
  v53 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v7 = 2;
LABEL_33:
    v28 = a1 + 56;
    goto LABEL_34;
  }
  v24 = *(_DWORD *)(a2 + 192);
  if ( (v24 & 0x200008) == 0x200008 && (v24 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEC394 & 1) != 0) && (v24 & 0x100) == 0 && (v24 & 8) == 0 )
  {
    v25 = *(_QWORD *)(a2 + 96);
    v26 = *(_QWORD *)(a2 + 224);
    v48 = *(_QWORD *)(a2 + 200);
    v53 = v50;
    PfHardFaultRecord((__int64)v50, v25, v21, v26, v48, v4);
  }
  v27 = *(_QWORD *)(a1 + 56);
  v28 = a1 + 56;
  if ( (*(_BYTE *)(v27 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v27) + 4) )
    KiStackAttachProcess(PsInitialSystemProcess, 0, a2 + 104);
  v7 |= 2u;
  MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16));
LABEL_34:
  v29 = *(_QWORD *)(a1 + 16);
  if ( (v29 & 1) != 0 )
  {
    v30 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v30 == 1 )
    {
      v31 = *(unsigned __int8 *)(*(_QWORD *)v28 + 184LL);
      if ( ((unsigned __int8)v31 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v31 - 2)) & 6;
      if ( v7 < 2 )
      {
        v31 = *(_QWORD *)(v30 + 64);
        if ( *(_QWORD *)v31 == v30 + 56 )
        {
          *(_QWORD *)a2 = v30 + 56;
          *(_QWORD *)(a2 + 8) = v31;
          *(_QWORD *)v31 = a2;
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
          if ( (*(_BYTE *)(*(_QWORD *)v28 + 184LL) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4);
          else
            KeLeaveCriticalRegionThread(v4, v31, v21, v22);
          MiRelockFaultState(v28, v52, v34, v35);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v37 = *(_QWORD *)(a2 + 248);
  v38 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v37 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v37 + 8) > 0 )
    v37 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v53);
  v39 = MiFinishHardFault(a1, v52, a2, (__int64 *)&v54);
  v40 = (int)v53;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v52) = v40;
  if ( v39 )
    return (unsigned int)v39;
  if ( !v37 )
    v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v55 = *(_DWORD *)(a1 + 8) & 2;
  if ( (unsigned int)MI_PFN_IS_PROTO(v37) )
  {
    v38 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = MiCompleteProtoPteFault(a1, v54, (struct _LIST_ENTRY *)v41, 0, v12);
    if ( v39 >= 0 )
    {
      v42 = v56;
LABEL_57:
      if ( dword_140C4E868 && (_DWORD)v52 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v4) >= dword_140C4E86C )
        MiLogPageAccess(*v42, v38 | 1);
      if ( !v39 )
        return 276;
    }
    return (unsigned int)v39;
  }
  v58 = v12 & 1;
  if ( (v12 & 1) != 0 && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v43 = MI_READ_PTE_LOCK_FREE(v38) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( (unsigned int)MiPteInShadowRange(v38) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v43 & 1) != 0 )
          v43 |= 0x8000000000000000uLL;
        *(_QWORD *)v38 = v43;
        MiWritePteShadow(v38, v43);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v43 & 1) != 0 )
      {
        v43 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v38 = v43;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v38);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK((_QWORD *)(v37 + 16)) )
    TransitionPteValid |= 0x40uLL;
  if ( v55 )
  {
    if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v57) && (TransitionPteValid & 0x800) != 0 )
    {
      TransitionPteValid |= 0x42uLL;
      if ( (*(_BYTE *)(v37 + 34) & 0x10) == 0 )
      {
        if ( (unsigned int)MiGetPagingFileOffset(v37 + 16) )
          MiLockPageAndSetDirty(v37, 1LL);
      }
    }
  }
  v45 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v58 )
    goto LABEL_98;
  if ( *v45 != 4 )
  {
    if ( *v45 == 5 )
    {
      v46 = (__int64)v45;
      v47 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v47 = 0;
    v46 = 0LL;
LABEL_99:
    if ( v58 && *v45 == 3 )
      v47 = 1;
    v49 = TransitionPteValid;
    v42 = v56;
    if ( (unsigned int)MiAllocateWsle(*v56, v38, (_QWORD *)v37, 0, v49, v47, v46) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v37, 0);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned int)MiPteInShadowRange(v38) )
  {
LABEL_95:
    *(_QWORD *)v38 = TransitionPteValid;
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
  if ( !HIBYTE(word_140C4E048) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v38 = TransitionPteValid;
  MiWritePteShadow(v38, TransitionPteValid);
  return 276LL;
}
