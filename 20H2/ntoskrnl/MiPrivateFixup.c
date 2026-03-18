/*
 * XREFs of MiPrivateFixup @ 0x140239840
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140236AF4 (MiIsFaultPteIntact.c)
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     MiDereferenceControlAreaProbe @ 0x1402D104C (MiDereferenceControlAreaProbe.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v9; // rsi
  __int64 Process; // rcx
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
  __int64 v26; // rdx
  unsigned int v27; // ebx
  int v28; // ebx
  int PfnChannel; // eax
  __int64 v30; // rsi
  PSLIST_ENTRY v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rbx
  char EffectivePagePriorityThread; // al
  __int64 v36; // r12
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int8 v42; // cl
  unsigned __int8 v43; // bl
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int64 v47; // r12
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ecx
  ULONG_PTR v56; // rbx
  unsigned __int64 v57; // r12
  __int64 v58; // rcx
  char v59; // al
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r9
  int v62; // eax
  _DWORD *v63; // r8
  int v64; // [rsp+30h] [rbp-69h]
  char v65[8]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v66; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  __int64 v68; // [rsp+60h] [rbp-39h]
  unsigned __int64 v69; // [rsp+68h] [rbp-31h]
  __int64 v70; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v71; // [rsp+78h] [rbp-21h]
  __int64 *v72; // [rsp+80h] [rbp-19h]
  __int64 v73; // [rsp+88h] [rbp-11h] BYREF
  __int64 v74; // [rsp+90h] [rbp-9h]
  __int64 v75; // [rsp+98h] [rbp-1h]
  __int64 v76[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = (__int64 *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)a1;
  v65[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v72 = v6;
  v74 = v7;
  v69 = v9;
  v71 = CurrentThread;
  v70 = Process;
  if ( !v16 || (v12 = *(struct _KTHREAD **)(Process + 1248)) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v7 + 174));
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
    v17 = (__int64 *)MiReservePtes(&qword_140C4EDC0, 1LL);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v68 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v73 = MI_READ_PTE_LOCK_FREE(v68);
    v18 = (a4 + 0x58000000000LL) / 48;
    v75 = v18;
    MiObtainFaultCharges(v15, 1LL, 2LL);
    if ( v17 || v69 < 0xFFFF800000000000uLL )
    {
      v28 = *(_DWORD *)(MiSearchNumaNodeTable((a4 + 0x58000000000LL) / 48) + 8);
      PfnChannel = MiGetPfnChannel(a4);
      Page = MiGetPage(
               v15,
               (PfnChannel << byte_140C4DD0D) | (v28 << byte_140C4DD0C) | dword_140C4DD78 & (unsigned int)v18,
               0LL);
      DriverPage = Page;
      if ( Page == -1 )
      {
        v27 = -1073741670;
        goto LABEL_29;
      }
    }
    else
    {
      LOBYTE(v19) = 1;
      v66 = MiReleaseFaultState(a1 + 56, v19, v65);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v21 = v65[0];
        if ( v65[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = v65[0];
          v24 = ~(unsigned __int16)(-1LL << (v65[0] + 1));
          v16 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v21 = v65[0];
      }
      __writecr8(v21);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState((__int64 *)(a1 + 56), v66);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *(_QWORD *)a1, v68, &v73) )
      {
        v27 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, v26);
        MiReturnFaultCharges(v15, 1LL, 2LL);
        if ( v17 )
          MiReleasePtes(&qword_140C4EDC0, v17, 1LL);
        return v27;
      }
    }
    v30 = 48 * DriverPage - 0x58000000000LL;
    v31 = MiGetInPageSupportBlock(2);
    v32 = 0LL;
    v33 = (__int64)v31;
    if ( !v31 )
    {
      if ( v17 )
        MiReleasePtes(&qword_140C4EDC0, v17, 1LL);
      MiReleaseFreshPage(v30, v32);
      MiReturnFaultCharges(v15, 1LL, 2LL);
      return 3221225626LL;
    }
    v34 = (__int64)v71;
    LODWORD(v66) = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v71);
    v36 = v68;
    v37 = v69;
    *(_DWORD *)(v33 + 192) |= 0x20u;
    LOBYTE(v66) = EffectivePagePriorityThread & 7 | 0x48;
    v38 = v66;
    *(_DWORD *)(v33 + 80) = v39;
    *(_QWORD *)(v33 + 88) = v39;
    *(_QWORD *)(v33 + 248) = v30;
    MiInitializeReadInProgressPfn(v37, (unsigned int)&Page, 1, v36, v33, v38);
    if ( (*(_BYTE *)(v74 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 1272), 1uLL);
    v76[0] = MI_READ_PTE_LOCK_FREE(v36);
    *(_QWORD *)(v33 + 208) = a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    LOBYTE(v40) = 1;
    v41 = MiReleaseFaultState(v72, v40, v65);
    --*(_WORD *)(v34 + 486);
    v70 = v41;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v42 = KeGetCurrentIrql(), v42 <= 0xFu) )
    {
      v43 = v65[0];
      if ( v65[0] <= 0xFu && v42 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v43 = v65[0];
        v46 = ~(unsigned __int16)(-1LL << (v65[0] + 1));
        v16 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    else
    {
      v43 = v65[0];
    }
    __writecr8(v43);
    v47 = Page;
    MiCopyPage(Page, v75, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v56 = a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v56, 0LL);
      v27 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe((__int64)v71);
      MiRelockFaultState(v72, v70);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *(_QWORD *)a1, v68, v76);
      v57 = (unsigned __int8)MiLockPageInline(v30);
      *(_BYTE *)(v30 + 34) &= ~0x20u;
      v58 = *(_QWORD *)(v30 + 24);
      *(_QWORD *)v30 = 0LL;
      if ( (v58 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v30 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v30, 3LL);
        v59 = *(_BYTE *)(v30 + 34) & 0xF8 | 6;
        *(_QWORD *)(v30 + 24) ^= ((*(_QWORD *)(v30 + 24) + 1LL) ^ *(_QWORD *)(v30 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v30 + 34) = v59;
        if ( !v17 && v69 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v30 + 35) |= 8u;
      }
      else
      {
        v27 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v30);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v60 = KeGetCurrentIrql();
          if ( v60 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v60 >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
            v63 = v61->SchedulerAssist;
            v16 = (v62 & v63[5]) == 0;
            v63[5] &= v62;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
      }
      __writecr8(v57);
      *(_DWORD *)(v33 + 192) &= ~0x20u;
      if ( *(int *)(v33 + 176) > 1 )
        KeSetEvent((PRKEVENT)(v33 + 56), 0, 0);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v33);
      return v27;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v30);
    ValidPte = MiMakeValidPte(v17, v47, ProtectionPfnCompatible | 0xA0000000);
    LODWORD(v66) = 0;
    v50 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      if ( (unsigned int)MiPteHasShadow(v52, v51, v53, v54) )
      {
        v55 = 1;
        if ( !HIBYTE(word_140C4DE88) && (v50 & 1) != 0 )
          v50 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v50 & 1) != 0 )
      {
        v50 |= 0x8000000000000000uLL;
      }
    }
    v55 = v66;
LABEL_57:
    *v17 = v50;
    if ( v55 )
      MiWritePteShadow(v17, v50);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v56 = a2;
      MiRelocateImagePfn(a2, a5, v64, 2);
    }
    else
    {
      v56 = a2;
    }
    MiReleasePtes(&qword_140C4EDC0, v17, 1LL);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *(_DWORD *)(a1 + 80) |= 4u;
  return 297LL;
}
