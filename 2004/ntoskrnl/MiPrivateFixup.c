/*
 * XREFs of MiPrivateFixup @ 0x140314F08
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiDereferenceControlAreaProbe @ 0x14025DF5C (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(_QWORD *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v9; // rsi
  __int64 Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v14; // ebx
  ULONG_PTR *v15; // r12
  bool v16; // zf
  _QWORD *v17; // r14
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v20; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  __int64 DriverPage; // rsi
  unsigned int v25; // ebx
  int v26; // ebx
  int PfnChannel; // eax
  __int64 v28; // rsi
  PSLIST_ENTRY v29; // r15
  __int64 v30; // rbx
  char EffectivePagePriorityThread; // al
  unsigned __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 v36; // cl
  unsigned __int8 v37; // bl
  struct _KPRCB *v38; // r10
  _DWORD *v39; // r9
  int v40; // eax
  __int64 v41; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v43; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ecx
  volatile signed __int64 *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // r12
  __int64 v56; // rcx
  char v57; // al
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  int v60; // eax
  _DWORD *v61; // r8
  int v62; // [rsp+30h] [rbp-69h]
  char v63[8]; // [rsp+48h] [rbp-51h] BYREF
  int v64[2]; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-39h]
  unsigned __int64 v67; // [rsp+68h] [rbp-31h]
  __int64 v68; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v69; // [rsp+78h] [rbp-21h]
  __int64 *v70; // [rsp+80h] [rbp-19h]
  __int64 v71; // [rsp+88h] [rbp-11h] BYREF
  __int64 v72; // [rsp+90h] [rbp-9h]
  ULONG_PTR v73; // [rsp+98h] [rbp-1h]
  __int64 v74[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 7;
  v7 = a1[7];
  v9 = *a1;
  v63[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v70 = v6;
  v72 = v7;
  v67 = v9;
  v69 = CurrentThread;
  v68 = Process;
  if ( !v16 || (v12 = *(struct _KTHREAD **)(Process + 1248)) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v7 + 174));
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
    v17 = (_QWORD *)MiReservePtes((__int64)&qword_140C4ED40, 1u, (__int64)CurrentThread, a4);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v66 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v71 = MI_READ_PTE_LOCK_FREE(v66);
    v18 = (__int64)(a4 + 0x58000000000LL) / 48;
    v73 = v18;
    MiObtainFaultCharges(v15, 1u, 2);
    if ( v17 || v67 < 0xFFFF800000000000uLL )
    {
      v26 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a4 + 0x58000000000LL) / 48) + 2);
      PfnChannel = MiGetPfnChannel(a4);
      Page = MiGetPage(
               (__int64)v15,
               (PfnChannel << byte_140C4DC8D) | (v26 << byte_140C4DC8C) | dword_140C4DCF8 & (unsigned int)v18,
               0LL);
      DriverPage = Page;
      if ( Page == -1 )
      {
        v25 = -1073741670;
        goto LABEL_29;
      }
    }
    else
    {
      *(_QWORD *)v64 = MiReleaseFaultState((__int64)(a1 + 7), 1u, v63);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v20 = v63[0];
        if ( v63[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = v63[0];
          v23 = ~(unsigned __int16)(-1LL << (v63[0] + 1));
          v16 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v20 = v63[0];
      }
      __writecr8(v20);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState(a1 + 7, *(__int64 *)v64);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v66, &v71) )
      {
        v25 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
        MiReturnFaultCharges((__int64)v15, 1uLL, 2);
        if ( v17 )
          MiReleasePtes((__int64)&qword_140C4ED40, v17, 1u);
        return v25;
      }
    }
    v28 = 48 * DriverPage - 0x58000000000LL;
    v29 = MiGetInPageSupportBlock(2);
    if ( !v29 )
    {
      if ( v17 )
        MiReleasePtes((__int64)&qword_140C4ED40, v17, 1u);
      MiReleaseFreshPage(v28);
      MiReturnFaultCharges((__int64)v15, 1uLL, 2);
      return 3221225626LL;
    }
    v30 = (__int64)v69;
    v64[0] = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v69);
    v32 = v66;
    v33 = v67;
    LODWORD(v29[12].Next) |= 0x20u;
    LOBYTE(v64[0]) = EffectivePagePriorityThread & 7 | 0x48;
    LODWORD(v29[5].Next) = v34;
    *((_QWORD *)&v29[5].Next + 1) = v34;
    *((_QWORD *)&v29[15].Next + 1) = v28;
    MiInitializeReadInProgressPfn(v33, &Page, 1, v32, (__int64)v29, EffectivePagePriorityThread & 7 | 0x48);
    if ( (*(_BYTE *)(v72 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v68 + 1272), 1uLL);
    v74[0] = MI_READ_PTE_LOCK_FREE(v32);
    v29[13].Next = (_SLIST_ENTRY *)a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    v35 = MiReleaseFaultState((__int64)v70, 1u, v63);
    --*(_WORD *)(v30 + 486);
    v68 = v35;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v36 = KeGetCurrentIrql(), v36 <= 0xFu) )
    {
      v37 = v63[0];
      if ( v63[0] <= 0xFu && v36 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        v37 = v63[0];
        v40 = ~(unsigned __int16)(-1LL << (v63[0] + 1));
        v16 = (v40 & v39[5]) == 0;
        v39[5] &= v40;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
    else
    {
      v37 = v63[0];
    }
    __writecr8(v37);
    v41 = Page;
    MiCopyPage(Page, v73, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v51 = (volatile signed __int64 *)a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v51, 0);
      v25 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe((__int64)v69);
      MiRelockFaultState(v70, v68);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v66, v74);
      v55 = (unsigned __int8)MiLockPageInline(v28);
      *(_BYTE *)(v28 + 34) &= ~0x20u;
      v56 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)v28 = 0LL;
      if ( (v56 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v28 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v28, 3LL, v53);
        v52 = *(_QWORD *)(v28 + 24);
        v57 = *(_BYTE *)(v28 + 34) & 0xF8 | 6;
        *(_QWORD *)(v28 + 24) = v52 ^ ((v52 + 1) ^ v52) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v28 + 34) = v57;
        if ( !v17 && v67 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v28 + 35) |= 8u;
      }
      else
      {
        v25 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v28, v52, v53, v54);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v58 = KeGetCurrentIrql();
          if ( v58 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v58 >= 2u )
          {
            v59 = KeGetCurrentPrcb();
            v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
            v61 = v59->SchedulerAssist;
            v16 = (v60 & v61[5]) == 0;
            v61[5] &= v60;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v59);
          }
        }
      }
      __writecr8(v55);
      LODWORD(v29[12].Next) &= ~0x20u;
      if ( SLODWORD(v29[11].Next) > 1 )
        KeSetEvent((PRKEVENT)(&v29[3].Next + 1), 0, 0);
      MiFreeInPageSupportBlock(v29);
      return v25;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v28);
    ValidPte = MiMakeValidPte((unsigned __int64)v17, v41, ProtectionPfnCompatible | 0xA0000000, v43);
    v64[0] = 0;
    v45 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      if ( (unsigned int)MiPteHasShadow(v47, v46, v48, v49) )
      {
        v50 = 1;
        if ( !HIBYTE(word_140C4DE08) && (v45 & 1) != 0 )
          v45 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v45 & 1) != 0 )
      {
        v45 |= 0x8000000000000000uLL;
      }
    }
    v50 = v64[0];
LABEL_57:
    *v17 = v45;
    if ( v50 )
      MiWritePteShadow(v17, v45);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v51 = (volatile signed __int64 *)a2;
      MiRelocateImagePfn(a2, a5, v62, 2);
    }
    else
    {
      v51 = (volatile signed __int64 *)a2;
    }
    MiReleasePtes((__int64)&qword_140C4ED40, v17, 1u);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
