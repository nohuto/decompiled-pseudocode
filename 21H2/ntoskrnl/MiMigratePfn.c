/*
 * XREFs of MiMigratePfn @ 0x1402BCEF0
 * Callers:
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiCanPageMove @ 0x140259930 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     MiComputeFaultNode @ 0x1402E3950 (MiComputeFaultNode.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiMigratePfn(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int *p_PageColor; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // rdi
  int v9; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // r13d
  int v12; // r14d
  unsigned int v13; // ebx
  ULONG_PTR v14; // r12
  unsigned int v15; // r13d
  unsigned int *v16; // r14
  unsigned int *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned int v21; // r11d
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  ULONG_PTR Page; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v28; // r14
  __int64 v29; // kr00_8
  unsigned int *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned int v33; // ebx
  _QWORD *v34; // r15
  __int64 v35; // rax
  __int64 updated; // rbx
  struct _KPRCB *v37; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v39; // zf
  ULONG_PTR v40; // rbx
  __int16 v41; // bx
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-68h] BYREF
  int v44; // [rsp+24h] [rbp-64h] BYREF
  __int64 v45; // [rsp+28h] [rbp-60h]
  ULONG_PTR v46; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h]
  __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49; // [rsp+48h] [rbp-40h]
  int v50; // [rsp+90h] [rbp+8h] BYREF
  int v51; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  p_PageColor = (unsigned int *)a1[7];
  v49 = *a1;
  v46 = a1[2];
  if ( (*(_QWORD *)(a2 + 40) & 0x2000000000000LL) != 0
    || byte_140C5209E
    && _bittest64((const signed __int64 *)qword_140C525C8, (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9)
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
    || !MiCanPageMove(a2) )
  {
    return a2;
  }
  v8 = 0LL;
  v48 = 0LL;
  v9 = MiComputeFaultNode(v7, 0LL, &v48);
  if ( v9 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v9 - 1) << byte_140C4DECC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v12 = (1 << byte_140C4DECD) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v13 = NodeShiftedColor >> byte_140C4DECC;
  v14 = (a2 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v14;
  if ( v13 == *(_DWORD *)(MiSearchNumaNodeTable(v14) + 8) )
    return a2;
  v45 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v15 = v12 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v16 = (unsigned int *)(qword_140C4DED8 + 4LL * v13 * (unsigned __int16)KeNumberNodes);
  v17 = &v16[(unsigned __int16)KeNumberNodes];
  if ( v16 < v17 )
  {
    while ( 1 )
    {
      v18 = MiSearchNumaNodeTable(v14);
      v19 = *v16;
      if ( (_DWORD)v19 == *(_DWORD *)(v18 + 8) )
        return a2;
      if ( *(_OWORD *)(*(_QWORD *)(v45 + 16) + 4544 * v19 + 4128) == 0LL && ++v16 < v17 )
        continue;
      break;
    }
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(a2) && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v22 = v21;
  }
  else
  {
    v22 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged() )
      v22 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v20, v21, v22) )
    return a2;
  v23 = 1;
  if ( (v46 & 1) != 0 && *(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v49) == 12 )
    v23 = 9;
  Page = MiGetPage(v45, v15, v23);
  v46 = Page;
  if ( Page == -1LL )
  {
    v25 = v22;
    v26 = v45;
LABEL_31:
    MiReturnFaultCharges(v26, 1uLL, v25);
    return a2;
  }
  v28 = 48 * Page - 0x58000000000LL;
  v29 = 48 * Page;
  if ( v13 != *(_DWORD *)(MiSearchNumaNodeTable((__int64)(48 * Page) / 48) + 8) )
  {
    v30 = (unsigned int *)(qword_140C4DED8 + 4LL * v13 * (unsigned __int16)KeNumberNodes);
    if ( v30 < v17 )
    {
      while ( *v30 != *(_DWORD *)(MiSearchNumaNodeTable(BugCheckParameter2) + 8) )
      {
        if ( *v30 != *(_DWORD *)(MiSearchNumaNodeTable(v29 / 48) + 8) && ++v30 < v17 )
          continue;
        goto LABEL_38;
      }
      goto LABEL_40;
    }
  }
LABEL_38:
  if ( a3 )
  {
    v31 = MiGetInPageSupportBlock(6LL);
    if ( !v31 )
    {
LABEL_40:
      MiLockNestedPageAtDpcInline(v28);
      MiReturnFreeZeroPage(v28, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v26 = v45;
      v25 = v22;
      goto LABEL_31;
    }
    v32 = v31;
  }
  else
  {
    v32 = 0LL;
  }
  v33 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v28);
  if ( *(unsigned __int8 *)(v28 + 34) >> 6 != v33 )
    MiChangePageAttribute(v28, v33, 1LL);
  MiSetPfnTbFlushStamp(v28, 0LL, 1LL);
  MiCopyPfnEntryEx(v28, a2);
  *(_WORD *)(v28 + 32) = 1;
  *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v32 )
  {
    *(_DWORD *)(v32 + 192) |= 0x20u;
    *(_BYTE *)(v28 + 34) |= 0x20u;
    *(_QWORD *)v28 = v32 + 32;
    *(_QWORD *)(v32 + 248) = v28;
  }
  v34 = (_QWORD *)(*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL);
  v35 = MI_READ_PTE_LOCK_FREE(v34);
  updated = MiUpdateTransitionPteFrame(v35, v46);
  if ( (unsigned int)MiPteInShadowRange(v34) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      if ( !HIBYTE(word_140C4E048) && (updated & 1) != 0 )
        updated |= 0x8000000000000000uLL;
      *v34 = updated;
      MiWritePteShadow((__int64)v34, updated);
      goto LABEL_57;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      updated |= 0x8000000000000000uLL;
    }
  }
  *v34 = updated;
LABEL_57:
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(a3, 3LL) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v52 = v32;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v37 = KeGetCurrentPrcb();
        SchedulerAssist = v37->SchedulerAssist;
        v39 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
    __writecr8(2uLL);
  }
  v40 = BugCheckParameter2;
  MiCopyPage(v46, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    MiLockProtoPoolPage(v34, 0LL);
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v43 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v43);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  *(_QWORD *)(a2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v40);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v44 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v44);
    while ( *(__int64 *)(v28 + 24) < 0 );
  }
  v41 = *(_WORD *)(v28 + 32);
  *(_BYTE *)(v28 + 34) &= ~0x20u;
  *(_QWORD *)v28 = 0LL;
  MiRemoveLockedPageCharge(v28);
  if ( !v32 )
    return v28;
  *(_DWORD *)(v32 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) == 0 )
    return v28;
  if ( v41 == 1 )
  {
    if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
      v8 = MiCapturePageFileInfoInline((unsigned __int64 *)(v28 + 16), 0, 1);
    MiInsertPageInFreeOrZeroedList(v46);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v42) = 2;
    MiUnlockProtoPoolPage(a3, v42);
  }
  if ( v8 )
    MiReleasePageFileInfo(v45, v8, 1);
  return 0LL;
}
