/*
 * XREFs of MiPrivateFixup @ 0x140209BC8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiIsFaultPteIntact @ 0x14020A414 (MiIsFaultPteIntact.c)
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiDereferenceControlAreaProbe @ 0x140302800 (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rsi
  _KPROCESS *Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v14; // ebx
  __int64 v15; // r12
  bool v16; // zf
  __int64 *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v21; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  __int64 DriverPage; // rsi
  unsigned int v26; // ebx
  int v27; // ebx
  int PfnChannel; // eax
  __int64 v29; // rsi
  __int64 v30; // r15
  struct _KTHREAD *v31; // rbx
  char EffectivePagePriorityThread; // al
  __int64 v33; // r12
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // bl
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // r12
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // ecx
  ULONG_PTR v51; // rbx
  unsigned __int64 v52; // r12
  __int64 v53; // rcx
  char v54; // al
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  int v57; // eax
  _DWORD *v58; // r8
  int v59; // [rsp+30h] [rbp-69h]
  char v60[8]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v61; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  __int64 v63; // [rsp+60h] [rbp-39h]
  unsigned __int64 v64; // [rsp+68h] [rbp-31h]
  __int64 v65; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v66; // [rsp+78h] [rbp-21h]
  _QWORD *v67; // [rsp+80h] [rbp-19h]
  __int64 v68; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v69; // [rsp+90h] [rbp-9h]
  __int64 v70; // [rsp+98h] [rbp-1h]
  __int64 v71[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 7;
  v7 = a1[7];
  v9 = *a1;
  v60[0] = 0;
  Process = CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v67 = v6;
  v69 = v7;
  v64 = v9;
  v66 = CurrentThread;
  v65 = (__int64)Process;
  if ( !v16 || (v12 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10]) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v7 + 174));
    if ( v9 < 0xFFFF800000000000uLL )
    {
      v16 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    else
    {
      if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x4000) == 0 )
        goto LABEL_22;
      v16 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    if ( !v16 )
    {
      v17 = 0LL;
      goto LABEL_13;
    }
LABEL_22:
    v17 = (__int64 *)MiReservePtes(&qword_140C4EF80, 1LL);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v63 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v68 = MI_READ_PTE_LOCK_FREE(v63);
    v18 = (a4 + 0x58000000000LL) / 48;
    v70 = v18;
    MiObtainFaultCharges(v15, 1LL, 2LL);
    if ( v17 || v64 < 0xFFFF800000000000uLL )
    {
      v27 = *(_DWORD *)(MiSearchNumaNodeTable((a4 + 0x58000000000LL) / 48) + 8);
      PfnChannel = MiGetPfnChannel(a4);
      Page = MiGetPage(
               v15,
               (PfnChannel << byte_140C4DECD) | (v27 << byte_140C4DECC) | dword_140C4DF38 & (unsigned int)v18,
               0LL);
      DriverPage = Page;
      if ( Page == -1 )
      {
        v26 = -1073741670;
        goto LABEL_29;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      v61 = MiReleaseFaultState(a1 + 7, v19, v60);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v21 = v60[0];
        if ( v60[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = v60[0];
          v24 = ~(unsigned __int16)(-1LL << (v60[0] + 1));
          v16 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v21 = v60[0];
      }
      __writecr8(v21);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState(a1 + 7, v61);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v63, &v68) )
      {
        v26 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
        MiReturnFaultCharges(v15, 1LL, 2LL);
        if ( v17 )
          MiReleasePtes(&qword_140C4EF80, v17, 1LL);
        return v26;
      }
    }
    v29 = 48 * DriverPage - 0x58000000000LL;
    v30 = MiGetInPageSupportBlock(2LL);
    if ( !v30 )
    {
      if ( v17 )
        MiReleasePtes(&qword_140C4EF80, v17, 1LL);
      MiReleaseFreshPage(v29);
      MiReturnFaultCharges(v15, 1LL, 2LL);
      return 3221225626LL;
    }
    v31 = v66;
    LODWORD(v61) = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v66);
    v33 = v63;
    v34 = v64;
    *(_DWORD *)(v30 + 192) |= 0x20u;
    LOBYTE(v61) = EffectivePagePriorityThread & 7 | 0x48;
    v35 = v61;
    *(_DWORD *)(v30 + 80) = v36;
    *(_QWORD *)(v30 + 88) = v36;
    *(_QWORD *)(v30 + 248) = v29;
    MiInitializeReadInProgressPfn(v34, (unsigned int)&Page, 1, v33, v30, v35);
    if ( (*(_BYTE *)(v69 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 1272), 1uLL);
    v71[0] = MI_READ_PTE_LOCK_FREE(v33);
    *(_QWORD *)(v30 + 208) = a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    LOBYTE(v37) = 1;
    v38 = MiReleaseFaultState(v67, v37, v60);
    --v31->SpecialApcDisable;
    v65 = v38;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v39 = KeGetCurrentIrql(), v39 <= 0xFu) )
    {
      v40 = v60[0];
      if ( v60[0] <= 0xFu && v39 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v40 = v60[0];
        v43 = ~(unsigned __int16)(-1LL << (v60[0] + 1));
        v16 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    else
    {
      v40 = v60[0];
    }
    __writecr8(v40);
    v44 = Page;
    MiCopyPage(Page, v70, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v51 = a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v51, 0LL);
      v26 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe(v66);
      MiRelockFaultState(v67, v65);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v63, v71);
      v52 = (unsigned __int8)MiLockPageInline(v29);
      *(_BYTE *)(v29 + 34) &= ~0x20u;
      v53 = *(_QWORD *)(v29 + 24);
      *(_QWORD *)v29 = 0LL;
      if ( (v53 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v29 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v29, 3LL);
        v54 = *(_BYTE *)(v29 + 34) & 0xF8 | 6;
        *(_QWORD *)(v29 + 24) ^= ((*(_QWORD *)(v29 + 24) + 1LL) ^ *(_QWORD *)(v29 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v29 + 34) = v54;
        if ( !v17 && v64 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v29 + 35) |= 8u;
      }
      else
      {
        v26 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v29);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v55 = KeGetCurrentIrql();
          if ( v55 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
            v58 = v56->SchedulerAssist;
            v16 = (v57 & v58[5]) == 0;
            v58[5] &= v57;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
      }
      __writecr8(v52);
      *(_DWORD *)(v30 + 192) &= ~0x20u;
      if ( *(int *)(v30 + 176) > 1 )
        KeSetEvent((PRKEVENT)(v30 + 56), 0, 0);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v30);
      return v26;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v29);
    ValidPte = MiMakeValidPte(v17, v44, ProtectionPfnCompatible | 0xA0000000);
    LODWORD(v61) = 0;
    v47 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(v17) )
    {
      if ( (unsigned int)MiPteHasShadow(v49, v48) )
      {
        v50 = 1;
        if ( !HIBYTE(word_140C4E048) && (v47 & 1) != 0 )
          v47 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v47 & 1) != 0 )
      {
        v47 |= 0x8000000000000000uLL;
      }
    }
    v50 = v61;
LABEL_57:
    *v17 = v47;
    if ( v50 )
      MiWritePteShadow(v17);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v51 = a2;
      MiRelocateImagePfn(a2, a5, v59, 2);
    }
    else
    {
      v51 = a2;
    }
    MiReleasePtes(&qword_140C4EF80, v17, 1LL);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
