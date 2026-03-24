/*
 * XREFs of MiPrivateFixup @ 0x14028CA28
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x14023B9BC (MiMakeProtectionPfnCompatible.c)
 *     MiGetInPageSupportBlock @ 0x14023EF24 (MiGetInPageSupportBlock.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiIsFaultPteIntact @ 0x14028D274 (MiIsFaultPteIntact.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiDereferenceControlAreaProbe @ 0x1402F7AB0 (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiRelockFaultState @ 0x1403052A8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406D1A78 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rsi
  _KPROCESS *Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v14; // ebx
  ULONG_PTR *v15; // r12
  bool v16; // zf
  _QWORD *v17; // r14
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
  __int64 v28; // rdx
  __int64 v29; // r8
  int PfnChannel; // eax
  __int64 v31; // rsi
  PSLIST_ENTRY v32; // r15
  __int64 v33; // rbx
  char EffectivePagePriorityThread; // al
  __int64 v35; // r12
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int8 v41; // cl
  unsigned __int8 v42; // bl
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  ULONG_PTR v46; // r12
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  ULONG_PTR v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  unsigned __int64 v59; // r12
  __int64 v60; // rcx
  char v61; // al
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  int v64; // eax
  _DWORD *v65; // r8
  int v66; // [rsp+30h] [rbp-69h]
  char v67[8]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v68; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  __int64 v70; // [rsp+60h] [rbp-39h]
  unsigned __int64 v71; // [rsp+68h] [rbp-31h]
  __int64 v72; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v73; // [rsp+78h] [rbp-21h]
  _QWORD *v74; // [rsp+80h] [rbp-19h]
  __int64 v75; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-9h]
  ULONG_PTR v77; // [rsp+98h] [rbp-1h]
  __int64 v78[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 7;
  v7 = a1[7];
  v9 = *a1;
  v67[0] = 0;
  Process = CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v74 = v6;
  v76 = v7;
  v71 = v9;
  v73 = CurrentThread;
  v72 = (__int64)Process;
  if ( !v16 || (v12 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10]) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v7 + 174));
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
    v17 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, 1u, (__int64)CurrentThread, a4);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v70 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v75 = MI_READ_PTE_LOCK_FREE(v70);
    v18 = (__int64)(a4 + 0x58000000000LL) / 48;
    v77 = v18;
    MiObtainFaultCharges(v15, 1u, 2);
    if ( v17 || v71 < 0xFFFF800000000000uLL )
    {
      v27 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(a4 + 0x58000000000LL) / 48) + 8);
      PfnChannel = MiGetPfnChannel(a4, v28, v29);
      Page = MiGetPage(
               (__int64)v15,
               (PfnChannel << byte_140C4DE8D) | (v27 << byte_140C4DE8C) | dword_140C4DEF8 & (unsigned int)v18,
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
      v68 = MiReleaseFaultState(a1 + 7, v19, v67);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v21 = v67[0];
        if ( v67[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = v67[0];
          v24 = ~(unsigned __int16)(-1LL << (v67[0] + 1));
          v16 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v21 = v67[0];
      }
      __writecr8(v21);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState(a1 + 7, v68);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v70, &v75) )
      {
        v26 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
        MiReturnFaultCharges(v15, 1LL, 2LL);
        if ( v17 )
          MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
        return v26;
      }
    }
    v31 = 48 * DriverPage - 0x58000000000LL;
    v32 = MiGetInPageSupportBlock(2);
    if ( !v32 )
    {
      if ( v17 )
        MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
      MiReleaseFreshPage(v31);
      MiReturnFaultCharges(v15, 1LL, 2LL);
      return 3221225626LL;
    }
    v33 = (__int64)v73;
    LODWORD(v68) = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v73);
    v35 = v70;
    v36 = v71;
    LODWORD(v32[12].Next) |= 0x20u;
    LOBYTE(v68) = EffectivePagePriorityThread & 7 | 0x48;
    v37 = v68;
    LODWORD(v32[5].Next) = v38;
    *((_QWORD *)&v32[5].Next + 1) = v38;
    *((_QWORD *)&v32[15].Next + 1) = v31;
    MiInitializeReadInProgressPfn(v36, (unsigned int)&Page, 1, v35, (__int64)v32, v37);
    if ( (*(_BYTE *)(v76 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 1272), 1uLL);
    v78[0] = MI_READ_PTE_LOCK_FREE(v35);
    v32[13].Next = (_SLIST_ENTRY *)a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    LOBYTE(v39) = 1;
    v40 = MiReleaseFaultState(v74, v39, v67);
    --*(_WORD *)(v33 + 486);
    v72 = v40;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v41 = KeGetCurrentIrql(), v41 <= 0xFu) )
    {
      v42 = v67[0];
      if ( v67[0] <= 0xFu && v41 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v42 = v67[0];
        v45 = ~(unsigned __int16)(-1LL << (v67[0] + 1));
        v16 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    else
    {
      v42 = v67[0];
    }
    __writecr8(v42);
    v46 = Page;
    MiCopyPage(Page, v77, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v56 = a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v56, 0LL);
      v26 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe(v73);
      MiRelockFaultState(v74, v72);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v70, v78);
      v59 = (unsigned __int8)MiLockPageInline(v31, v57, v58);
      *(_BYTE *)(v31 + 34) &= ~0x20u;
      v60 = *(_QWORD *)(v31 + 24);
      *(_QWORD *)v31 = 0LL;
      if ( (v60 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v31 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v31, 3LL);
        v61 = *(_BYTE *)(v31 + 34) & 0xF8 | 6;
        *(_QWORD *)(v31 + 24) ^= ((*(_QWORD *)(v31 + 24) + 1LL) ^ *(_QWORD *)(v31 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v31 + 34) = v61;
        if ( !v17 && v71 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v31 + 35) |= 8u;
      }
      else
      {
        v26 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v31);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v62 = KeGetCurrentIrql();
          if ( v62 <= 0xFu && (unsigned __int8)v59 <= 0xFu && v62 >= 2u )
          {
            v63 = KeGetCurrentPrcb();
            v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v59 + 1));
            v65 = v63->SchedulerAssist;
            v16 = (v64 & v65[5]) == 0;
            v65[5] &= v64;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
      }
      __writecr8(v59);
      LODWORD(v32[12].Next) &= ~0x20u;
      if ( SLODWORD(v32[11].Next) > 1 )
        KeSetEvent((PRKEVENT)(&v32[3].Next + 1), 0, 0);
      MiFreeInPageSupportBlock(v32);
      return v26;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v31);
    ValidPte = MiMakeValidPte(v17, v46, ProtectionPfnCompatible | 0xA0000000);
    LODWORD(v68) = 0;
    v49 = ValidPte;
    if ( (unsigned int)MiPteInShadowRange(v17, v50) )
    {
      if ( (unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
      {
        v55 = 1;
        if ( !HIBYTE(word_140C4E008) && (v49 & 1) != 0 )
          v49 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v49 & 1) != 0 )
      {
        v49 |= 0x8000000000000000uLL;
      }
    }
    v55 = v68;
LABEL_57:
    *v17 = v49;
    if ( v55 )
      MiWritePteShadow(v17, v49);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v56 = a2;
      MiRelocateImagePfn(a2, a5, v66, 2);
    }
    else
    {
      v56 = a2;
    }
    MiReleasePtes((__int64)&qword_140C4EF40, v17, 1u);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
