/*
 * XREFs of MiIssueHardFault @ 0x14025B740
 * Callers:
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiReferenceInPageFile @ 0x14022944C (MiReferenceInPageFile.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     PfHardFaultRecord @ 0x14025AE2C (PfHardFaultRecord.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14025D220 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x14025DE24 (MiIssueHardFaultIo.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14033A894 (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x140346A48 (MI_IS_SOFTWARE_PTE_SHADOW_STACK.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r12
  unsigned int v6; // ebx
  unsigned int SessionIdForVa; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v17; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  int v22; // r8d
  unsigned __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  int v31; // edx
  __int64 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 *v34; // rdx
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rsi
  int v38; // edi
  int v39; // eax
  int v40; // edx
  __int64 *v41; // rbx
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 TransitionPteValid; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  _BYTE *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // [rsp+0h] [rbp-70h]
  __int64 v58; // [rsp+0h] [rbp-70h]
  _BYTE v59[16]; // [rsp+20h] [rbp-50h] BYREF
  char v60[8]; // [rsp+70h] [rbp+0h] BYREF
  __int64 v61; // [rsp+78h] [rbp+8h]
  _BYTE *v62; // [rsp+80h] [rbp+10h] BYREF
  __int64 v63; // [rsp+88h] [rbp+18h] BYREF
  __int64 v64; // [rsp+90h] [rbp+20h]
  __int64 *v65; // [rsp+98h] [rbp+28h]
  _QWORD *v66; // [rsp+A0h] [rbp+30h]
  __int64 v67; // [rsp+A8h] [rbp+38h]

  v2 = *(_QWORD *)(a2 + 208);
  v4 = *(_QWORD *)(a2 + 152);
  v66 = (_QWORD *)a1;
  v6 = 0;
  *(_QWORD *)(a2 + 224) = *(_QWORD *)a1;
  v60[0] = 0;
  v63 = 0LL;
  v64 = v2;
  SessionIdForVa = MiGetSessionIdForVa();
  v8 = MiReferenceInPageFile(a2, SessionIdForVa);
  LOBYTE(v9) = 1;
  v65 = (__int64 *)(a1 + 56);
  v11 = MiReleaseFaultState(a1 + 56, v9, v60, v10);
  v13 = *(_QWORD *)(a1 + 16);
  v61 = v11;
  if ( v8 )
  {
    v14 = v64;
    *(_QWORD *)(a2 + 200) = v8;
    v6 = (*(_DWORD *)(v14 + 56) >> 5) & 1;
  }
  else
  {
    *(_QWORD *)(a2 + 200) = *(_QWORD *)(*(_QWORD *)(a2 + 200) + 56LL);
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( (v15 & 1) == 0 || *(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v4 + 1310);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 184LL) & 7) != 0 )
    --*(_WORD *)(v4 + 486);
  else
    --*(_WORD *)(v4 + 484);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v17 = v60[0];
    if ( v60[0] <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = v60[0];
      v12 = -1LL << (v60[0] + 1);
      v20 = ~(unsigned __int16)v12;
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v17 = v60[0];
  }
  __writecr8(v17);
  v22 = *(_DWORD *)(a2 + 312);
  v23 = 0xFFFFFA8000000000uLL;
  if ( (*(_DWORD *)(a2 + 192) & 0x20000) != 0 )
  {
    MiZeroPhysicalPage(*(_QWORD *)(a2
                                 + 8LL
                                 * ((*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0))
                                 + 312));
    v22 = *(_DWORD *)(a2 + 312);
  }
  *(_DWORD *)(a2 + 184) = v22;
  v62 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    v6 = 2;
LABEL_33:
    v28 = (__int64 *)(a1 + 56);
    goto LABEL_34;
  }
  v24 = *(_DWORD *)(a2 + 192);
  if ( (v24 & 0x200008) == 0x200008 && (v24 & 0x100) == 0 )
    goto LABEL_33;
  if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140CEBF94 & 1) != 0) && (v24 & 0x100) == 0 && (v24 & 8) == 0 )
  {
    v25 = *(_QWORD *)(a2 + 96);
    v26 = *(_QWORD *)(a2 + 224);
    v57 = *(_QWORD *)(a2 + 200);
    v62 = v59;
    PfHardFaultRecord((__int64)v59, v25, v22, v26, v57, v4);
  }
  v27 = *(_QWORD *)(a1 + 56);
  v28 = (__int64 *)(a1 + 56);
  if ( (*(_BYTE *)(v27 + 187) & 0x60) == 0x60 && !*(_QWORD *)(MiGetSharedVm(v27, v12) + 32) )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, a2 + 104);
  v6 |= 2u;
  MiIssueHardFaultIo(a2, v6 & 1, *(_QWORD *)(a1 + 16), v23);
LABEL_34:
  v29 = *(_QWORD *)(a1 + 16);
  if ( (v29 & 1) != 0 )
  {
    v30 = v29 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v30 == 1 )
    {
      v31 = *(unsigned __int8 *)(*v28 + 184);
      if ( (v31 & 7u) >= 2 )
        *(_DWORD *)(a2 + 192) ^= (*(_DWORD *)(a2 + 192) ^ (2 * v31 - 2)) & 6;
      if ( v6 < 2 )
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
          if ( (*(_BYTE *)(*v28 + 184) & 7) != 0 )
            KiLeaveGuardedRegionUnsafe(v4);
          else
            KeLeaveCriticalRegionThread(v4);
          MiRelockFaultState(v28, v61);
          return 0LL;
        }
      }
      __fastfail(3u);
    }
  }
  v36 = *(_QWORD *)(a2 + 248);
  v37 = *(_QWORD *)(a2 + 232);
  if ( (*(_QWORD *)(v36 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v36 + 8) > 0 )
    v36 = 0LL;
  MiWaitForInPageComplete(a1, a2, &v62);
  v38 = MiFinishHardFault(a1, v61, a2, &v63);
  v39 = (int)v62;
  --*(_BYTE *)(v4 + 1310);
  LODWORD(v61) = v39;
  if ( v38 )
    return (unsigned int)v38;
  if ( !v36 )
    v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v63) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
  v64 = *(_DWORD *)(a1 + 8) & 2;
  if ( (unsigned int)MI_PFN_IS_PROTO(v36) )
  {
    v37 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = MiCompleteProtoPteFault(a1, v63, v40, 0, v13);
    if ( v38 >= 0 )
    {
      v41 = v65;
LABEL_57:
      if ( dword_140C4E628 && (_DWORD)v61 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v4) >= dword_140C4E62C )
        MiLogPageAccess(*v41, v37 | 1);
      if ( !v38 )
        return 276;
    }
    return (unsigned int)v38;
  }
  v67 = v13 & 1;
  if ( (v13 & 1) != 0 && *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v42 = MI_READ_PTE_LOCK_FREE(v37) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    if ( MiPteInShadowRange(v37) )
    {
      if ( (unsigned int)MiPteHasShadow(v44, v43, v45, v46) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v42 & 1) != 0 )
          v42 |= 0x8000000000000000uLL;
        *(_QWORD *)v37 = v42;
        MiWritePteShadow(v37, v42);
        goto LABEL_76;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v42 & 1) != 0 )
      {
        v42 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v37 = v42;
  }
LABEL_76:
  TransitionPteValid = MiMakeTransitionPteValid(v37);
  if ( (unsigned int)MI_IS_SOFTWARE_PTE_SHADOW_STACK(v36 + 16) )
    TransitionPteValid |= 0x40uLL;
  if ( v64 )
  {
    if ( (unsigned int)MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *v66, v48, v49) )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        TransitionPteValid |= 0x42uLL;
        if ( (*(_BYTE *)(v36 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v36 + 16) )
            MiLockPageAndSetDirty(v36, 1LL);
        }
      }
    }
  }
  v50 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v67 )
    goto LABEL_98;
  if ( *v50 != 4 )
  {
    if ( *v50 == 5 )
    {
      v55 = (__int64)v50;
      v56 = 0;
      goto LABEL_99;
    }
LABEL_98:
    v56 = 0;
    v55 = 0LL;
LABEL_99:
    if ( v67 && *v50 == 3 )
      v56 = 1;
    v58 = TransitionPteValid;
    v41 = v65;
    if ( (unsigned int)MiAllocateWsle(*v65, v37, v36, 0, v58, v56, v55) )
      goto LABEL_57;
    MiLockAndDecrementShareCount(v36, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !MiPteInShadowRange(v37) )
  {
LABEL_95:
    *(_QWORD *)v37 = TransitionPteValid;
    return 276LL;
  }
  if ( !(unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (TransitionPteValid & 1) != 0 )
    {
      TransitionPteValid |= 0x8000000000000000uLL;
    }
    goto LABEL_95;
  }
  if ( !HIBYTE(word_140C4DE08) && (TransitionPteValid & 1) != 0 )
    TransitionPteValid |= 0x8000000000000000uLL;
  *(_QWORD *)v37 = TransitionPteValid;
  MiWritePteShadow(v37, TransitionPteValid);
  return 276LL;
}
