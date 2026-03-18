/*
 * XREFs of MiMigratePfn @ 0x140217F80
 * Callers:
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiComputeFaultNode @ 0x1402B7BF0 (MiComputeFaultNode.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14034B85C (MiUpdateTransitionPteFrame.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
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
  __int64 v16; // r8
  signed __int32 v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r13d
  unsigned int *v20; // r14
  unsigned int *v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r10
  unsigned int v25; // r11d
  unsigned int v26; // r12d
  unsigned int v27; // r14d
  ULONG_PTR Page; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v32; // r14
  __int64 v33; // kr00_8
  unsigned int *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r12
  unsigned int v37; // ebx
  _QWORD *v38; // r15
  __int64 v39; // rax
  __int64 updated; // rbx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct _KPRCB *v44; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v46; // zf
  ULONG_PTR v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int16 v50; // bx
  __int64 v51; // rdx
  int v52; // [rsp+20h] [rbp-68h] BYREF
  int v53; // [rsp+24h] [rbp-64h] BYREF
  __int64 v54; // [rsp+28h] [rbp-60h]
  ULONG_PTR v55; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h]
  __int64 v57; // [rsp+40h] [rbp-48h] BYREF
  __int64 v58; // [rsp+48h] [rbp-40h]
  int v59; // [rsp+90h] [rbp+8h] BYREF
  int v60; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v61; // [rsp+A8h] [rbp+20h]

  v61 = a4;
  p_PageColor = (unsigned int *)a1[7];
  v58 = *a1;
  v55 = a1[2];
  if ( (*(_QWORD *)(a2 + 40) & 0x2000000000000LL) != 0 )
    return a2;
  v7 = 0x2AAAAAAAAAAAAAABLL;
  if ( byte_140C51F5E )
  {
    v7 = (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9;
    if ( _bittest64((const signed __int64 *)qword_140C52488, v7) )
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
  v57 = 0LL;
  v10 = MiComputeFaultNode(v8, 0LL, &v57);
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v10 - 1) << byte_140C4DDCC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140C4DDCD) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v14 = NodeShiftedColor >> byte_140C4DDCC;
  v15 = (a2 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v15;
  if ( v14 == *(_DWORD *)(MiSearchNumaNodeTable(v15) + 8) )
    return a2;
  v54 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v17 = _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u);
  v18 = (unsigned __int16)KeNumberNodes;
  v19 = v13 & v17 | NodeShiftedColor;
  v20 = (unsigned int *)(qword_140C4DDD8 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
  v21 = &v20[(unsigned __int16)KeNumberNodes];
  if ( v20 < v21 )
  {
    while ( 1 )
    {
      v22 = MiSearchNumaNodeTable(v15);
      v23 = *v20;
      if ( (_DWORD)v23 == *(_DWORD *)(v22 + 8) )
        return a2;
      if ( *(_OWORD *)(*(_QWORD *)(v54 + 16) + 4544 * v23 + 4128) == 0LL && ++v20 < v21 )
        continue;
      break;
    }
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(a2, v18, v16) && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    v26 = v25;
  }
  else
  {
    v26 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged() )
      v26 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v24, v25, v26) )
    return a2;
  v27 = 1;
  if ( (v55 & 1) != 0 && *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v58) == 12 )
    v27 = 9;
  Page = MiGetPage(v54, v19, v27);
  v55 = Page;
  if ( Page == -1LL )
  {
    v29 = v26;
    v30 = v54;
LABEL_31:
    MiReturnFaultCharges(v30, 1LL, v29);
    return a2;
  }
  v32 = 48 * Page - 0x58000000000LL;
  v33 = 48 * Page;
  if ( v14 != *(_DWORD *)(MiSearchNumaNodeTable((__int64)(48 * Page) / 48) + 8) )
  {
    v34 = (unsigned int *)(qword_140C4DDD8 + 4LL * v14 * (unsigned __int16)KeNumberNodes);
    if ( v34 < v21 )
    {
      while ( *v34 != *(_DWORD *)(MiSearchNumaNodeTable(BugCheckParameter2) + 8) )
      {
        if ( *v34 != *(_DWORD *)(MiSearchNumaNodeTable(v33 / 48) + 8) && ++v34 < v21 )
          continue;
        goto LABEL_38;
      }
      goto LABEL_40;
    }
  }
LABEL_38:
  if ( a3 )
  {
    v35 = MiGetInPageSupportBlock(6LL);
    if ( !v35 )
    {
LABEL_40:
      MiLockNestedPageAtDpcInline(v32);
      MiReturnFreeZeroPage(v32, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v30 = v54;
      v29 = v26;
      goto LABEL_31;
    }
    v36 = v35;
  }
  else
  {
    v36 = 0LL;
  }
  v37 = *(unsigned __int8 *)(a2 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v32);
  if ( *(unsigned __int8 *)(v32 + 34) >> 6 != v37 )
    MiChangePageAttribute(v32, v37, 1LL);
  MiSetPfnTbFlushStamp(v32, 0LL, 1LL);
  MiCopyPfnEntryEx(v32, a2);
  *(_WORD *)(v32 + 32) = 1;
  *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
  if ( v36 )
  {
    *(_DWORD *)(v36 + 192) |= 0x20u;
    *(_BYTE *)(v32 + 34) |= 0x20u;
    *(_QWORD *)v32 = v36 + 32;
    *(_QWORD *)(v36 + 248) = v32;
  }
  v38 = (_QWORD *)(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
  v39 = MI_READ_PTE_LOCK_FREE(v38);
  updated = MiUpdateTransitionPteFrame(v39, v55);
  if ( (unsigned int)MiPteInShadowRange(v38, v41) )
  {
    if ( (unsigned int)MiPteHasShadow(v43, v42) )
    {
      if ( !HIBYTE(word_140C4DF48) && (updated & 1) != 0 )
        updated |= 0x8000000000000000uLL;
      *v38 = updated;
      MiWritePteShadow(v38, updated);
      goto LABEL_57;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      updated |= 0x8000000000000000uLL;
    }
  }
  *v38 = updated;
LABEL_57:
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(a3, 3LL) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v59 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v59);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v61 = v36;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v44 = KeGetCurrentPrcb();
        SchedulerAssist = v44->SchedulerAssist;
        v46 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v46 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    __writecr8(2uLL);
  }
  v47 = BugCheckParameter2;
  MiCopyPage(v55, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    MiLockProtoPoolPage(v38, 0LL);
    v60 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v52 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2, v48, v49);
  }
  *(_QWORD *)(a2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v47);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v53 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v53);
    while ( *(__int64 *)(v32 + 24) < 0 );
  }
  v50 = *(_WORD *)(v32 + 32);
  *(_BYTE *)(v32 + 34) &= ~0x20u;
  *(_QWORD *)v32 = 0LL;
  MiRemoveLockedPageCharge(v32);
  if ( !v36 )
    return v32;
  *(_DWORD *)(v36 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) == 0 )
    return v32;
  if ( v50 == 1 )
  {
    if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
      v9 = MiCapturePageFileInfoInline(v32 + 16, 0LL);
    MiInsertPageInFreeOrZeroedList(v55);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v51) = 2;
    MiUnlockProtoPoolPage(a3, v51);
  }
  if ( v9 )
    MiReleasePageFileInfo(v54, v9, 1LL);
  return 0LL;
}
