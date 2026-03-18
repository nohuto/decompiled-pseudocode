/*
 * XREFs of MiMigratePfn @ 0x1402AAA90
 * Callers:
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiComputeFaultNode @ 0x14025EBC0 (MiComputeFaultNode.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUpdateTransitionPteFrame @ 0x14031C51C (MiUpdateTransitionPteFrame.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiCanPageMove @ 0x14031D380 (MiCanPageMove.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiMigratePfn(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int *p_PageColor; // r15
  unsigned __int64 *v7; // r10
  __int64 v8; // rdi
  int v9; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int NodeShiftedColor; // r13d
  int v12; // r14d
  unsigned int v13; // ebx
  ULONG_PTR v14; // r12
  unsigned int v15; // r13d
  unsigned int *v16; // r14
  unsigned int *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rcx
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
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  struct _KPRCB *v45; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v47; // zf
  ULONG_PTR v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int16 v58; // bx
  __int64 v59; // rdx
  int v60; // [rsp+20h] [rbp-68h] BYREF
  int v61; // [rsp+24h] [rbp-64h] BYREF
  __int64 v62; // [rsp+28h] [rbp-60h]
  ULONG_PTR v63; // [rsp+30h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-50h]
  __int64 **v65; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-40h]
  int v67; // [rsp+90h] [rbp+8h] BYREF
  int v68; // [rsp+98h] [rbp+10h] BYREF
  __int64 *v69; // [rsp+A8h] [rbp+20h]

  v69 = a4;
  p_PageColor = (unsigned int *)a1[7];
  v66 = *a1;
  v63 = a1[2];
  if ( (*(_QWORD *)(a2 + 40) & 0x2000000000000LL) != 0
    || byte_140C51E5E
    && _bittest64((const signed __int64 *)qword_140C52388, (unsigned __int64)((a2 + 0x58000000000LL) / 48) >> 9)
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a2 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
    || !(unsigned int)MiCanPageMove(a2) )
  {
    return a2;
  }
  v8 = 0LL;
  v65 = 0LL;
  v9 = MiComputeFaultNode(v7, 0LL, &v65);
  if ( v9 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v9 - 1) << byte_140C4DC8C;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v12 = (1 << byte_140C4DC8D) - 1;
  if ( !p_PageColor || (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v13 = NodeShiftedColor >> byte_140C4DC8C;
  v14 = (a2 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v14;
  if ( v13 == *((_DWORD *)MiSearchNumaNodeTable(v14) + 2) )
    return a2;
  v62 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a2 + 40) >> 39) & 0x3FFLL));
  v15 = v12 & _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) | NodeShiftedColor;
  v16 = (unsigned int *)(qword_140C4DC98 + 4LL * v13 * (unsigned __int16)KeNumberNodes);
  v17 = &v16[(unsigned __int16)KeNumberNodes];
  if ( v16 < v17 )
  {
    while ( 1 )
    {
      v18 = MiSearchNumaNodeTable(v14);
      v19 = *v16;
      if ( (_DWORD)v19 == *((_DWORD *)v18 + 2) )
        return a2;
      if ( *(_OWORD *)(*(_QWORD *)(v62 + 16) + 4544 * v19 + 4128) == 0LL && ++v16 < v17 )
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
    if ( (unsigned int)MiIsPfnCommitNotCharged(v20) )
      v23 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v21, v22, v23) )
    return a2;
  v24 = 1;
  if ( (v63 & 1) != 0 && *(_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (unsigned int)MiGetSystemRegionType(v66) == 12 )
    v24 = 9;
  Page = MiGetPage(v62, v15, v24);
  v63 = Page;
  if ( Page == -1LL )
  {
    v26 = v23;
    v27 = v62;
LABEL_31:
    MiReturnFaultCharges(v27, 1LL, v26);
    return a2;
  }
  v29 = 48 * Page - 0x58000000000LL;
  v30 = 48 * Page;
  if ( v13 != *((_DWORD *)MiSearchNumaNodeTable((__int64)(48 * Page) / 48) + 2) )
  {
    v31 = (unsigned int *)(qword_140C4DC98 + 4LL * v13 * (unsigned __int16)KeNumberNodes);
    if ( v31 < v17 )
    {
      while ( *v31 != *((_DWORD *)MiSearchNumaNodeTable(BugCheckParameter2) + 2) )
      {
        if ( *v31 != *((_DWORD *)MiSearchNumaNodeTable(v30 / 48) + 2) && ++v31 < v17 )
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
      v27 = v62;
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
  v36 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v35);
  updated = MiUpdateTransitionPteFrame(v36, v63);
  if ( MiPteInShadowRange((unsigned __int64)v35) )
  {
    if ( (unsigned int)MiPteHasShadow(v39, v38, v40, v41) )
    {
      if ( !HIBYTE(word_140C4DE08) && (updated & 1) != 0 )
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
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a3) || (unsigned int)MiChargeForLockedPage(a3, 3) )
      ++*(_WORD *)(a3 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v67 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v67, v42, v43, v44);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    *(_BYTE *)(a3 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a3, v42, v43, v44);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v69 = v33;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v45 = KeGetCurrentPrcb();
        SchedulerAssist = v45->SchedulerAssist;
        v47 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v47 )
          KiRemoveSystemWorkPriorityKick(v45);
      }
    }
    __writecr8(2uLL);
  }
  v48 = BugCheckParameter2;
  MiCopyPage(v63, BugCheckParameter2, 0LL, 2LL);
  if ( a3 )
  {
    MiLockProtoPoolPage((unsigned __int64)v35, 0LL);
    v68 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v68, v49, v50, v51);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(a3, v49, v50, v51);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v60 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v60, v52, v53, v54);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    MiLockPageInline(a2);
  }
  *(_QWORD *)(a2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v48, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v61 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v61, v55, v56, v57);
    while ( *(__int64 *)(v29 + 24) < 0 );
  }
  v58 = *(_WORD *)(v29 + 32);
  *(_BYTE *)(v29 + 34) &= ~0x20u;
  *(_QWORD *)v29 = 0LL;
  MiRemoveLockedPageCharge(v29);
  if ( !v33 )
    return v29;
  *(_DWORD *)(v33 + 192) &= ~0x20u;
  if ( (*(_QWORD *)(v29 + 24) & 0x4000000000000000LL) == 0 )
    return v29;
  if ( v58 == 1 )
  {
    if ( (*(_DWORD *)(v29 + 16) & 0x400LL) == 0 )
      v8 = MiCapturePageFileInfoInline(v29 + 16, 0LL);
    MiInsertPageInFreeOrZeroedList(v63, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v59) = 2;
    MiUnlockProtoPoolPage(a3, v59);
  }
  if ( v8 )
    MiReleasePageFileInfo(v62, v8, 1LL);
  return 0LL;
}
