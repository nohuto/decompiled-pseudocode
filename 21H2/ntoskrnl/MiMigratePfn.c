/*
 * XREFs of MiMigratePfn @ 0x1402185F0
 * Callers:
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     MiGetInPageSupportBlock @ 0x14023EF24 (MiGetInPageSupportBlock.c)
 *     MiComputeFaultNode @ 0x14023F100 (MiComputeFaultNode.c)
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x14026D9E0 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x140303050 (MiReturnFreeZeroPage.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140323430 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x1403272D0 (MiIsPfnCommitNotCharged.c)
 *     MiChargeForLockedPage @ 0x140328AA0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiMigratePfn(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int *p_PageColor; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // r10
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
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned int v34; // ebx
  _QWORD *v35; // r15
  __int64 v36; // rax
  __int64 updated; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _KPRCB *v43; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v45; // zf
  ULONG_PTR v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int16 v49; // bx
  __int64 v50; // rdx
  int v51; // [rsp+20h] [rbp-68h] BYREF
  int v52; // [rsp+24h] [rbp-64h] BYREF
  __int64 v53; // [rsp+28h] [rbp-60h]
  ULONG_PTR v54; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h]
  __int64 v56; // [rsp+40h] [rbp-48h] BYREF
  __int64 v57; // [rsp+48h] [rbp-40h]
  int v58; // [rsp+90h] [rbp+8h] BYREF
  int v59; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v60; // [rsp+A8h] [rbp+20h]

  v60 = a4;
  p_PageColor = (unsigned int *)a1[7];
  v57 = *a1;
  v54 = a1[2];
  if ( (*(_QWORD *)(a2 + 40) & 0x2000000000000LL) != 0 )
    return a2;
  v7 = 0x2AAAAAAAAAAAAAABLL;
  if ( byte_140C5205E )
  {
    v7 = (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9;
    if ( _bittest64((const signed __int64 *)qword_140C52588, v7) )
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
  v56 = 0LL;
  v10 = MiComputeFaultNode(v8, 0LL, &v56);
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v10 - 1) << byte_140C4DE8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DE8D) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v14 = NodeShiftedColor >> byte_140C4DE8C;
  v15 = (a2 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v15;
  if ( v14 == *(_DWORD *)(MiSearchNumaNodeTable(v15) + 8) )
    return a2;
  v53 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v16 = v13 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v17 = (unsigned int *)(qword_140C4DE98 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
  v18 = &v17[(unsigned __int16)KeNumberNodes];
  if ( v17 < v18 )
  {
    while ( 1 )
    {
      v19 = MiSearchNumaNodeTable(v15);
      v20 = *v17;
      if ( (_DWORD)v20 == *(_DWORD *)(v19 + 8) )
        return a2;
      if ( *(_OWORD *)(*(_QWORD *)(v53 + 16) + 4544 * v20 + 4128) == 0LL && ++v17 < v18 )
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
  if ( (v54 & 1) != 0 && *(_BYTE *)(v54 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v57) == 12 )
    v24 = 9;
  Page = MiGetPage(v53, v16, v24);
  v54 = Page;
  if ( Page == -1LL )
  {
    v26 = v23;
    v27 = v53;
LABEL_31:
    MiReturnFaultCharges(v27, 1LL, v26);
    return a2;
  }
  v29 = 48 * Page - 0x58000000000LL;
  v30 = 48 * Page;
  if ( v14 != *(_DWORD *)(MiSearchNumaNodeTable((__int64)(48 * Page) / 48) + 8) )
  {
    v31 = (unsigned int *)(qword_140C4DE98 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
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
    v32 = MiGetInPageSupportBlock(6LL);
    if ( !v32 )
    {
LABEL_40:
      MiLockNestedPageAtDpcInline(v29);
      MiReturnFreeZeroPage(v29, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v27 = v53;
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
    MiChangePageAttribute(v29, v34, 1LL);
  MiSetPfnTbFlushStamp(v29, 0LL, 1LL);
  MiCopyPfnEntryEx(v29, a2);
  *(_WORD *)(v29 + 32) = 1;
  *(_QWORD *)(v29 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v33 )
  {
    *(_DWORD *)(v33 + 192) |= 0x20u;
    *(_BYTE *)(v29 + 34) |= 0x20u;
    *(_QWORD *)v29 = v33 + 32;
    *(_QWORD *)(v33 + 248) = v29;
  }
  v35 = (_QWORD *)(*(_QWORD *)(v29 + 8) | 0x8000000000000000uLL);
  v36 = MI_READ_PTE_LOCK_FREE(v35);
  updated = MiUpdateTransitionPteFrame(v36, v54);
  if ( (unsigned int)MiPteInShadowRange(v35, v38) )
  {
    if ( (unsigned int)MiPteHasShadow(v40, v39, v41, v42) )
    {
      if ( !HIBYTE(word_140C4E008) && (updated & 1) != 0 )
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
    v58 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v58);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v60 = v33;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v43 = KeGetCurrentPrcb();
        SchedulerAssist = v43->SchedulerAssist;
        v45 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(2uLL);
  }
  v46 = BugCheckParameter2;
  MiCopyPage(v54, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    MiLockProtoPoolPage(v35, 0LL);
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v59);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2, v47, v48);
  }
  *(_QWORD *)(a2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v46);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v52 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v52);
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  v49 = *(_WORD *)(v29 + 32);
  *(_BYTE *)(v29 + 34) &= ~0x20u;
  *(_QWORD *)v29 = 0LL;
  MiRemoveLockedPageCharge(v29);
  if ( !v33 )
    return v29;
  *(_DWORD *)(v33 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) == 0 )
    return v29;
  if ( v49 == 1 )
  {
    if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
      v9 = MiCapturePageFileInfoInline(v29 + 16, 0LL, 1LL);
    MiInsertPageInFreeOrZeroedList(v54);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v50) = 2;
    MiUnlockProtoPoolPage(a3, v50);
  }
  if ( v9 )
    MiReleasePageFileInfo(v53, v9, 1LL);
  return 0LL;
}
