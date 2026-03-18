/*
 * XREFs of MiMigratePfn @ 0x140279DD0
 * Callers:
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     MiComputeFaultNode @ 0x140232270 (MiComputeFaultNode.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiCanPageMove @ 0x140350E70 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x1403522C4 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x140352310 (MiCopyPfnEntryEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiMigratePfn(unsigned __int64 *a1, __int64 a2, __int64 a3, PSLIST_ENTRY *a4)
{
  unsigned int *p_PageColor; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r10
  __int64 v9; // rdi
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // r13d
  int v13; // r14d
  unsigned int v14; // ebx
  ULONG_PTR v15; // r12
  unsigned int v16; // r13d
  unsigned int *v17; // r14
  unsigned int *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r10
  unsigned int v22; // r11d
  unsigned int v23; // r12d
  unsigned int v24; // r14d
  ULONG_PTR Page; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v29; // r14
  __int64 v30; // kr00_8
  unsigned int *v31; // rbx
  PSLIST_ENTRY v32; // rax
  PSLIST_ENTRY v33; // r12
  unsigned int v34; // ebx
  _QWORD *v35; // r15
  __int64 v36; // rax
  __int64 updated; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KPRCB *v42; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v44; // zf
  ULONG_PTR v45; // rbx
  __int16 v46; // bx
  __int64 v47; // rdx
  int v48; // [rsp+20h] [rbp-68h] BYREF
  int v49; // [rsp+24h] [rbp-64h] BYREF
  __int64 v50; // [rsp+28h] [rbp-60h]
  ULONG_PTR v51; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h]
  __int64 **v53; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]
  int v55; // [rsp+90h] [rbp+8h] BYREF
  int v56; // [rsp+98h] [rbp+10h] BYREF
  PSLIST_ENTRY *v57; // [rsp+A8h] [rbp+20h]

  v57 = a4;
  p_PageColor = (unsigned int *)a1[7];
  v54 = *a1;
  v51 = a1[2];
  if ( (*(_QWORD *)(a2 + 40) & 0x2000000000000LL) != 0 )
    return a2;
  v7 = 0x2AAAAAAAAAAAAAABLL;
  if ( byte_140C51EDE )
  {
    v7 = (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9;
    if ( _bittest64((const signed __int64 *)qword_140C52408, v7) )
      return a2;
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
    || !(unsigned int)MiCanPageMove(a2, v7) )
  {
    return a2;
  }
  v9 = 0LL;
  v53 = 0LL;
  v10 = MiComputeFaultNode(v8, 0LL, &v53);
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v10 - 1) << byte_140C4DD0C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DD0D) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v14 = NodeShiftedColor >> byte_140C4DD0C;
  v15 = (a2 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v15;
  if ( v14 == *(_DWORD *)(MiSearchNumaNodeTable(v15) + 8) )
    return a2;
  v50 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v16 = v13 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v17 = (unsigned int *)(qword_140C4DD18 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
  v18 = &v17[(unsigned __int16)KeNumberNodes];
  if ( v17 < v18 )
  {
    while ( 1 )
    {
      v19 = MiSearchNumaNodeTable(v15);
      v20 = *v17;
      if ( (_DWORD)v20 == *(_DWORD *)(v19 + 8) )
        return a2;
      if ( *(_OWORD *)(*(_QWORD *)(v50 + 16) + 4544 * v20 + 4128) == 0LL && ++v17 < v18 )
        continue;
      break;
    }
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(a2) && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v23 = v22;
  }
  else
  {
    v23 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged() )
      v23 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v21, v22, v23) )
    return a2;
  v24 = 1;
  if ( (v51 & 1) != 0 && *(_BYTE *)(v51 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v54) == 12 )
    v24 = 9;
  Page = MiGetPage(v50, v16, v24);
  v51 = Page;
  if ( Page == -1LL )
  {
    v26 = v23;
    v27 = v50;
LABEL_31:
    MiReturnFaultCharges(v27, 1LL, v26);
    return a2;
  }
  v29 = 48 * Page - 0x58000000000LL;
  v30 = 48 * Page;
  if ( v14 != *(_DWORD *)(MiSearchNumaNodeTable((__int64)(48 * Page) / 48) + 8) )
  {
    v31 = (unsigned int *)(qword_140C4DD18 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
    if ( v31 < v18 )
    {
      while ( *v31 != *(_DWORD *)(MiSearchNumaNodeTable(BugCheckParameter2) + 8) )
      {
        if ( *v31 != *(_DWORD *)(MiSearchNumaNodeTable(v30 / 48) + 8) && ++v31 < v18 )
          continue;
        goto LABEL_38;
      }
      goto LABEL_40;
    }
  }
LABEL_38:
  if ( a3 )
  {
    v32 = MiGetInPageSupportBlock(6);
    if ( !v32 )
    {
LABEL_40:
      MiLockNestedPageAtDpcInline(v29);
      MiReturnFreeZeroPage(v29, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v27 = v50;
      v26 = v23;
      goto LABEL_31;
    }
    v33 = v32;
  }
  else
  {
    v33 = 0LL;
  }
  v34 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v29);
  if ( *(unsigned __int8 *)(v29 + 34) >> 6 != v34 )
    MiChangePageAttribute(v29, v34, 1);
  MiSetPfnTbFlushStamp(v29, 0LL, 1LL);
  MiCopyPfnEntryEx(v29, a2);
  *(_WORD *)(v29 + 32) = 1;
  *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v33 )
  {
    LODWORD(v33[12].Next) |= 0x20u;
    *(_BYTE *)(v29 + 34) |= 0x20u;
    *(_QWORD *)v29 = v33 + 2;
    *((_QWORD *)&v33[15].Next + 1) = v29;
  }
  v35 = (_QWORD *)(*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL);
  v36 = MI_READ_PTE_LOCK_FREE(v35);
  updated = MiUpdateTransitionPteFrame(v36, v51);
  if ( MiPteInShadowRange((unsigned __int64)v35) )
  {
    if ( (unsigned int)MiPteHasShadow(v39, v38, v40, v41) )
    {
      if ( !HIBYTE(word_140C4DE88) && (updated & 1) != 0 )
        updated |= 0x8000000000000000uLL;
      *v35 = updated;
      MiWritePteShadow(v35, updated);
      goto LABEL_57;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      updated |= 0x8000000000000000uLL;
    }
  }
  *v35 = updated;
LABEL_57:
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(a3, 3LL) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v57 = v33;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v42 = KeGetCurrentPrcb();
        SchedulerAssist = v42->SchedulerAssist;
        v44 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
    __writecr8(2uLL);
  }
  v45 = BugCheckParameter2;
  MiCopyPage(v51, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    MiLockProtoPoolPage(v35, 0LL);
    v56 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v56);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v48 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v48);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  *(_QWORD *)(a2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v45);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v49 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v49);
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  v46 = *(_WORD *)(v29 + 32);
  *(_BYTE *)(v29 + 34) &= ~0x20u;
  *(_QWORD *)v29 = 0LL;
  MiRemoveLockedPageCharge(v29);
  if ( !v33 )
    return v29;
  LODWORD(v33[12].Next) &= ~0x20u;
  if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) == 0 )
    return v29;
  if ( v46 == 1 )
  {
    if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
      v9 = MiCapturePageFileInfoInline(v29 + 16, 0LL);
    MiInsertPageInFreeOrZeroedList(v51);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v47) = 2;
    MiUnlockProtoPoolPage(a3, v47);
  }
  if ( v9 )
    MiReleasePageFileInfo(v50, v9, 1LL);
  return 0LL;
}
