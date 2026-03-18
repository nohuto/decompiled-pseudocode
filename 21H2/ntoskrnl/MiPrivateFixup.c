/*
 * XREFs of MiPrivateFixup @ 0x14024076C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiDereferenceControlAreaProbe @ 0x14027031C (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiRelockFaultState @ 0x14027D364 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiIsFaultPteIntact @ 0x1402803FC (MiIsFaultPteIntact.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1407BF070 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR *a2, int a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v10; // rdi
  _KPROCESS *Process; // rcx
  struct _KTHREAD *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // r15
  bool v15; // zf
  __int64 *v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // ebx
  int PfnChannel; // eax
  __int64 DriverPage; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r14
  char EffectivePagePriorityThread; // al
  int v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  ULONG_PTR v29; // rax
  __int64 v30; // rdx
  unsigned __int8 v31; // bl
  __int64 v32; // r15
  int ProtectionPfnCompatible; // eax
  __int64 ValidPte; // rbx
  int v35; // ecx
  ULONG_PTR v36; // rbx
  unsigned int v37; // ebx
  int IsFaultPteIntact; // r12d
  unsigned __int64 v39; // r15
  __int64 v40; // rcx
  char v41; // al
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v44; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  unsigned __int8 v48; // cl
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  int v56; // [rsp+30h] [rbp-61h]
  __int64 Page; // [rsp+50h] [rbp-41h] BYREF
  __int64 v58; // [rsp+58h] [rbp-39h]
  __int64 v59; // [rsp+60h] [rbp-31h]
  unsigned __int64 v60; // [rsp+68h] [rbp-29h]
  __int64 v61; // [rsp+70h] [rbp-21h]
  __int64 v62; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v63; // [rsp+80h] [rbp-11h]
  unsigned __int64 v64; // [rsp+88h] [rbp-9h]
  __int64 v65[9]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 v66; // [rsp+E8h] [rbp+57h] BYREF
  ULONG_PTR *v67; // [rsp+F0h] [rbp+5Fh]
  int v68; // [rsp+F8h] [rbp+67h]
  __int64 v69; // [rsp+100h] [rbp+6Fh]

  v69 = a4;
  v68 = a3;
  v67 = a2;
  v6 = a1[7];
  CurrentThread = KeGetCurrentThread();
  v10 = *a1;
  v66 = 0;
  v15 = (*(_BYTE *)(v6 + 184) & 7) == 0;
  Process = CurrentThread->ApcState.Process;
  v61 = (__int64)Process;
  v63 = v6;
  v60 = v10;
  if ( !v15 || (v12 = (struct _KTHREAD *)Process[1].Affinity.StaticBitmap[10]) == 0LL )
  {
    v13 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v14 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 174));
    if ( v10 >= 0xFFFF800000000000uLL )
    {
      if ( (MiFlags & 0x8000) == 0 || (MiFlags & 0x2000) == 0 )
        goto LABEL_6;
      v15 = ((*(_DWORD *)(a4 + 16) >> 5) & 2) == 0;
    }
    else
    {
      v15 = (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0;
    }
    if ( !v15 )
    {
      v16 = 0LL;
      goto LABEL_7;
    }
LABEL_6:
    v16 = (__int64 *)MiReservePtes(&qword_140C534C0, 1LL);
    if ( !v16 )
      return 3221225626LL;
LABEL_7:
    v59 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v62 = MI_READ_PTE_LOCK_FREE(v59);
    v17 = 0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4);
    v64 = v17;
    MiObtainFaultCharges(v14, 1LL, 2LL);
    if ( v16 || v60 < 0xFFFF800000000000uLL )
    {
      v19 = *(_DWORD *)(MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4)) + 8);
      PfnChannel = MiGetPfnChannel(a4);
      Page = MiGetPage(
               v14,
               (PfnChannel << byte_140C506CD) | (v19 << byte_140C506CC) | dword_140C50738 & (unsigned int)v17,
               0LL);
      DriverPage = Page;
      if ( Page == -1 )
      {
        v37 = -1073741670;
        goto LABEL_58;
      }
      v22 = v59;
    }
    else
    {
      LOBYTE(v18) = 1;
      v58 = MiReleaseFaultState(a1 + 7, v18, &v66);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v44 = v66;
        if ( v66 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = v66;
          v47 = ~(unsigned __int16)(-1LL << (v66 + 1));
          v15 = (v47 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v47;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v44 = v66;
      }
      __writecr8(v44);
      DriverPage = MiAllocateDriverPage(v14, v13, 0LL);
      Page = DriverPage;
      MiRelockFaultState(a1 + 7, v58);
      v22 = v59;
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v59, &v62) )
      {
        v37 = -1073740748;
LABEL_58:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
        MiReturnFaultCharges(v14, 1LL, 2LL);
        if ( v16 )
          MiReleasePtes(&qword_140C534C0, v16, 1LL);
        return v37;
      }
    }
    v23 = 48 * DriverPage - 0x220000000000LL;
    v24 = MiGetInPageSupportBlock(2LL);
    if ( v24 )
    {
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
      v26 = v60;
      v28 = (unsigned int)(v27 + 1);
      *(_DWORD *)(v24 + 192) |= 0x20u;
      *(_DWORD *)(v24 + 80) = v27;
      *(_QWORD *)(v24 + 88) = v27;
      *(_QWORD *)(v24 + 248) = v23;
      MiInitializeReadInProgressPfn(v26, (unsigned int)&Page, v27 + 1, v22, v24, EffectivePagePriorityThread & 7 | 0x48);
      if ( (*(_BYTE *)(v63 + 184) & 7) == 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v61 + 1272), (unsigned int)v28);
      v65[0] = MI_READ_PTE_LOCK_FREE(v22);
      v58 = *v67;
      v29 = v58;
      *(_QWORD *)(v24 + 208) = v67;
      _InterlockedAdd64((volatile signed __int64 *)(v29 + 112), v28);
      LOBYTE(v30) = v28;
      v61 = MiReleaseFaultState(a1 + 7, v30, &v66);
      --CurrentThread->SpecialApcDisable;
      if ( KiIrqlFlags
        && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v28) != 0
        && (v48 = KeGetCurrentIrql(), v48 <= 0xFu) )
      {
        v31 = v66;
        if ( v66 <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v31 = v66;
          v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + v66));
          v15 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
      else
      {
        v31 = v66;
      }
      __writecr8(v31);
      v32 = Page;
      MiCopyPage(Page, v64, 0LL, v16 != 0LL ? 73 : 17);
      if ( !v16 )
      {
        v36 = v58;
LABEL_24:
        MiDereferenceControlAreaProbe(v36, 0LL);
        v37 = 0;
        KeGetCurrentIrql();
        __writecr8(1uLL);
        v15 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v15
          && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        MiRelockFaultState(a1 + 7, v61);
        IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v59, v65);
        v39 = (unsigned __int8)MiLockPageInline(v23);
        *(_BYTE *)(v23 + 34) &= ~0x20u;
        v40 = *(_QWORD *)(v23 + 24);
        *(_QWORD *)v23 = 0LL;
        if ( (v40 & 0x4000000000000000LL) == 0 )
          *(_BYTE *)(v23 + 34) |= 0x10u;
        if ( IsFaultPteIntact )
        {
          MiAddLockedPageCharge(v23, 3LL);
          v41 = *(_BYTE *)(v23 + 34) & 0xF8 | 6;
          *(_QWORD *)(v23 + 24) ^= ((*(_QWORD *)(v23 + 24) + 1LL) ^ *(_QWORD *)(v23 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v23 + 34) = v41;
          if ( !v16 && v60 >= 0xFFFF800000000000uLL )
            *(_BYTE *)(v23 + 35) |= 8u;
        }
        else
        {
          v37 = -1073740748;
        }
        MiRemoveLockedPageChargeAndDecRef(v23);
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
              v15 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
        }
        __writecr8(v39);
        *(_DWORD *)(v24 + 192) &= ~0x20u;
        if ( *(int *)(v24 + 176) > 1 )
          KeSetEvent((PRKEVENT)(v24 + 56), 0, 0);
        MiFreeInPageSupportBlock((PSLIST_ENTRY)v24);
        return v37;
      }
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v23);
      ValidPte = MiMakeValidPte(v16, v32, ProtectionPfnCompatible | 0xA0000000);
      if ( (unsigned int)MiPteInShadowRange(v16) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v35 = 1;
          if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          goto LABEL_18;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      v35 = 0;
LABEL_18:
      *v16 = ValidPte;
      if ( v35 )
        MiWritePteShadow((__int64)v16, ValidPte);
      if ( _bittest64((const signed __int64 *)(v69 + 40), 0x28u) || *(__int64 *)(v69 + 8) <= 0 )
      {
        v36 = v58;
        MiRelocateImagePfn(v58, a5, v56, a6 | 0x24);
      }
      else
      {
        v36 = v58;
      }
      MiReleasePtes(&qword_140C534C0, v16, 1LL);
      goto LABEL_24;
    }
    if ( v16 )
      MiReleasePtes(&qword_140C534C0, v16, 1LL);
    MiReleaseFreshPage(v23);
    MiReturnFaultCharges(v14, 1LL, 2LL);
    return 3221225626LL;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
