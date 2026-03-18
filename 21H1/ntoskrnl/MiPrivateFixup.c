/*
 * XREFs of MiPrivateFixup @ 0x140344248
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiDereferenceControlAreaProbe @ 0x1402B6F8C (MiDereferenceControlAreaProbe.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiIsFaultPteIntact @ 0x140344F9C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
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
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // ebx
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // r8
  int PfnChannel; // eax
  __int64 v32; // rsi
  PSLIST_ENTRY v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r15
  __int64 v37; // rbx
  char EffectivePagePriorityThread; // al
  unsigned __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // bl
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 v48; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v50; // r9
  unsigned __int64 ValidPte; // rax
  __int64 v52; // rbx
  int v53; // ecx
  volatile signed __int64 *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  unsigned __int64 v60; // r12
  __int64 v61; // rcx
  char v62; // al
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  int v65; // eax
  _DWORD *v66; // r8
  int v67; // [rsp+30h] [rbp-69h]
  char v68[8]; // [rsp+48h] [rbp-51h] BYREF
  int v69[2]; // [rsp+50h] [rbp-49h]
  __int64 Page; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v71; // [rsp+60h] [rbp-39h]
  unsigned __int64 v72; // [rsp+68h] [rbp-31h]
  __int64 v73; // [rsp+70h] [rbp-29h]
  struct _KTHREAD *v74; // [rsp+78h] [rbp-21h]
  __int64 v75; // [rsp+80h] [rbp-19h]
  __int64 v76; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-9h]
  ULONG_PTR v78; // [rsp+98h] [rbp-1h]
  __int64 v79[9]; // [rsp+A0h] [rbp+7h] BYREF
  int IsFaultPteIntact; // [rsp+F8h] [rbp+5Fh]

  CurrentThread = KeGetCurrentThread();
  v6 = (__int64)(a1 + 7);
  v7 = a1[7];
  v9 = *a1;
  v68[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v16 = (*(_BYTE *)(v7 + 184) & 7) == 0;
  v75 = v6;
  v77 = v7;
  v72 = v9;
  v74 = CurrentThread;
  v73 = Process;
  if ( !v16 || (v12 = *(struct _KTHREAD **)(Process + 1248)) == 0LL )
  {
    v14 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
    v15 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v7 + 174));
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
    v17 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EE80, 1LL);
    if ( !v17 )
      return 3221225626LL;
LABEL_13:
    v71 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v76 = MI_READ_PTE_LOCK_FREE(v71);
    v18 = (a4 + 0x58000000000LL) / 48;
    v78 = v18;
    MiObtainFaultCharges(v15, 1u, 2);
    if ( v17 || v72 < 0xFFFF800000000000uLL )
    {
      v28 = *((_DWORD *)MiSearchNumaNodeTable((a4 + 0x58000000000LL) / 48) + 2);
      PfnChannel = MiGetPfnChannel(a4, v29, v30);
      Page = MiGetPage(
               (__int64)v15,
               (PfnChannel << byte_140C4DDCD) | (v28 << byte_140C4DDCC) | dword_140C4DE38 & (unsigned int)v18,
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
      *(_QWORD *)v69 = MiReleaseFaultState((__int64)(a1 + 7), 1u, v68);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v20 = v68[0];
        if ( v68[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = v68[0];
          v23 = ~(unsigned __int16)(-1LL << (v68[0] + 1));
          v16 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      else
      {
        v20 = v68[0];
      }
      __writecr8(v20);
      DriverPage = MiAllocateDriverPage(v15, v14, 0LL);
      Page = DriverPage;
      MiRelockFaultState((__int64)(a1 + 7), *(__int64 *)v69);
      if ( !(unsigned int)MiIsFaultPteIntact(a1, *a1, v71, &v76) )
      {
        v27 = -1073740748;
LABEL_29:
        if ( DriverPage != -1 )
          MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, v25, v26);
        MiReturnFaultCharges((__int64)v15, 1uLL, 2);
        if ( v17 )
          MiReleasePtes((__int64)&qword_140C4EE80, v17, 1u);
        return v27;
      }
    }
    v32 = 48 * DriverPage - 0x58000000000LL;
    v33 = MiGetInPageSupportBlock(2);
    v35 = 0LL;
    v36 = (__int64)v33;
    if ( !v33 )
    {
      if ( v17 )
        MiReleasePtes((__int64)&qword_140C4EE80, v17, 1u);
      MiReleaseFreshPage(v32, v35, v34);
      MiReturnFaultCharges((__int64)v15, 1uLL, 2);
      return 3221225626LL;
    }
    v37 = (__int64)v74;
    v69[0] = 0;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v74);
    v39 = v71;
    v40 = v72;
    *(_DWORD *)(v36 + 192) |= 0x20u;
    LOBYTE(v69[0]) = EffectivePagePriorityThread & 7 | 0x48;
    *(_DWORD *)(v36 + 80) = v41;
    *(_QWORD *)(v36 + 88) = v41;
    *(_QWORD *)(v36 + 248) = v32;
    MiInitializeReadInProgressPfn(v40, &Page, 1, v39, v36, EffectivePagePriorityThread & 7 | 0x48);
    if ( (*(_BYTE *)(v77 + 184) & 7) == 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v73 + 1272), 1uLL);
    v79[0] = MI_READ_PTE_LOCK_FREE(v39);
    *(_QWORD *)(v36 + 208) = a2;
    _InterlockedAdd64((volatile signed __int64 *)(a2 + 112), 1uLL);
    v42 = MiReleaseFaultState(v75, 1u, v68);
    --*(_WORD *)(v37 + 486);
    v73 = v42;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v43 = KeGetCurrentIrql(), v43 <= 0xFu) )
    {
      v44 = v68[0];
      if ( v68[0] <= 0xFu && v43 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v44 = v68[0];
        v47 = ~(unsigned __int16)(-1LL << (v68[0] + 1));
        v16 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    else
    {
      v44 = v68[0];
    }
    __writecr8(v44);
    v48 = Page;
    MiCopyPage(Page, v78, 0LL, v17 != 0LL ? 73 : 17);
    if ( !v17 )
    {
      v54 = (volatile signed __int64 *)a2;
LABEL_65:
      MiDereferenceControlAreaProbe(v54, 0);
      v27 = 0;
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiLeaveGuardedRegionUnsafe((__int64)v74, v55, v56, v57);
      MiRelockFaultState(v75, v73);
      IsFaultPteIntact = MiIsFaultPteIntact(a1, *a1, v71, v79);
      v60 = (unsigned __int8)MiLockPageInline(v32, v58, v59);
      *(_BYTE *)(v32 + 34) &= ~0x20u;
      v61 = *(_QWORD *)(v32 + 24);
      *(_QWORD *)v32 = 0LL;
      if ( (v61 & 0x4000000000000000LL) == 0 )
        *(_BYTE *)(v32 + 34) |= 0x10u;
      if ( IsFaultPteIntact == 1 )
      {
        MiAddLockedPageCharge(v32, 3);
        v62 = *(_BYTE *)(v32 + 34) & 0xF8 | 6;
        *(_QWORD *)(v32 + 24) ^= ((*(_QWORD *)(v32 + 24) + 1LL) ^ *(_QWORD *)(v32 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v32 + 34) = v62;
        if ( !v17 && v72 >= 0xFFFF800000000000uLL )
          *(_BYTE *)(v32 + 35) |= 8u;
      }
      else
      {
        v27 = -1073740748;
      }
      MiRemoveLockedPageChargeAndDecRef(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v63 = KeGetCurrentIrql();
          if ( v63 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
            v66 = v64->SchedulerAssist;
            v16 = (v65 & v66[5]) == 0;
            v66[5] &= v65;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v64);
          }
        }
      }
      __writecr8(v60);
      *(_DWORD *)(v36 + 192) &= ~0x20u;
      if ( *(int *)(v36 + 176) > 1 )
        KeSetEvent((PRKEVENT)(v36 + 56), 0, 0);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v36);
      return v27;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v32);
    ValidPte = MiMakeValidPte((unsigned __int64)v17, v48, ProtectionPfnCompatible | 0xA0000000, v50);
    v69[0] = 0;
    v52 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v53 = 1;
        if ( !HIBYTE(word_140C4DF48) && (v52 & 1) != 0 )
          v52 |= 0x8000000000000000uLL;
        goto LABEL_57;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v52 & 1) != 0 )
      {
        v52 |= 0x8000000000000000uLL;
      }
    }
    v53 = v69[0];
LABEL_57:
    *v17 = v52;
    if ( v53 )
      MiWritePteShadow((__int64)v17, v52);
    if ( (*(_QWORD *)(a4 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a4 + 8) <= 0 )
    {
      v54 = (volatile signed __int64 *)a2;
      MiRelocateImagePfn(a2, a5, v67, 2);
    }
    else
    {
      v54 = (volatile signed __int64 *)a2;
    }
    MiReleasePtes((__int64)&qword_140C4EE80, v17, 1u);
    goto LABEL_65;
  }
  if ( v12 != CurrentThread )
    *((_DWORD *)a1 + 20) |= 4u;
  return 297LL;
}
