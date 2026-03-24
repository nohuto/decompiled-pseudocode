/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14052BAC0
 * Callers:
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     MiInitializeInPageSupport @ 0x14023EFE0 (MiInitializeInPageSupport.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiIsRetryIoStatus @ 0x1402558E4 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     SmPageRead @ 0x1402AF95C (SmPageRead.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiStoreFaultComplete @ 0x1402CCA70 (MiStoreFaultComplete.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E5808 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E5B84 (MiSetPageTablePfnBuddy.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x14055D71C (MiValidatePagefilePageHash.c)
 */

unsigned __int64 __fastcall MiMakeOutswappedPageResident(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  _QWORD *v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  char v20; // al
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  __int64 Page; // rax
  __int64 v30; // rsi
  __int64 TransitionPte; // rbx
  int v32; // r15d
  __int64 v33; // r8
  bool v34; // zf
  __int64 *v35; // r13
  int v36; // edi
  __int64 v37; // rdx
  int IsPteInStore; // eax
  int v39; // r9d
  unsigned int v40; // ebx
  __int64 v41; // r15
  unsigned int PagingFileOffset; // eax
  char v43; // bl
  __int64 v44; // r13
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *v49; // r9
  unsigned __int64 v50; // rbx
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  NTSTATUS v55; // edi
  __int64 v56; // rdx
  __int64 v57; // r8
  _DWORD *v58; // r9
  unsigned __int8 v59; // al
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  char v63; // cl
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  int v66; // eax
  _DWORD *v67; // r8
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v69; // rbx
  int v70; // esi
  __int64 v71; // r8
  bool v72; // zf
  unsigned int v74; // [rsp+48h] [rbp-C0h] BYREF
  char v75; // [rsp+4Ch] [rbp-BCh]
  __int16 v76; // [rsp+4Eh] [rbp-BAh]
  __int64 v77; // [rsp+50h] [rbp-B8h]
  __int64 v78; // [rsp+58h] [rbp-B0h]
  __int128 v79; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v80; // [rsp+70h] [rbp-98h]
  _QWORD *v81; // [rsp+78h] [rbp-90h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v74 = 0;
  v75 = 0;
  v79 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v81 = (_QWORD *)(a1 + 1432);
  v77 = *(_QWORD *)(qword_140C4E648 + 8 * v6);
  while ( 1 )
  {
    do
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    while ( !MiInvalidPteConforms(v8) );
    if ( (v9 & 0x800) == 0 )
      break;
    v12 = v9;
    if ( qword_140C4DF40 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v9 & ~qword_140C4DF40;
    }
    v13 = (v12 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
    {
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = (unsigned __int8)MiLockPageInline(v14, 0x4000000000000LL, v10, v11);
      if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)v7) == v8 )
      {
        if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
        {
          v21 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) + 1LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_23:
          *(_QWORD *)(v14 + 24) = v21;
          v22 = MiCaptureDirtyBitToPfn(48 * v13 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v34 = (v25 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v25;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v15);
          if ( v22 )
            MiReleasePageFileInfo(v77, v22, 0);
          goto LABEL_87;
        }
        if ( (unsigned int)MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0) )
        {
          v20 = *(_BYTE *)(v14 + 34);
          ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 34) = v20 & 0xF8 | 6;
          v21 = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_23;
        }
        MiDiscardTransitionPteEx(48 * v13 - 0x58000000000LL, 0);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v34 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
      }
      __writecr8(v15);
    }
  }
  MiInitializePageColorBase(0LL, a5, (__int64)&v79);
  v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v79, 1u);
  v28 = DWORD2(v79) & v27 | HIDWORD(v79);
  while ( 1 )
  {
    Page = MiGetPage(v77, v28, 512LL);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v77);
  }
  v30 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v8 >> 5) & 0x1F);
  v32 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v34 = (TransitionPte & 1) == 0;
        goto LABEL_41;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v34 = (TransitionPte & 1) == 0;
LABEL_41:
      if ( !v34 )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  *v7 = TransitionPte;
  if ( v32 )
    MiWritePteShadow((__int64)v7, TransitionPte, v33);
  MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, v13, 2560LL);
  v35 = (__int64 *)(v30 + 16);
  *(_QWORD *)(v30 + 16) = v8;
  v76 = 56;
  v36 = 0;
  v80 = 0xFFFFF6FB7DBED000uLL;
  v78 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v37 = *v35;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    IsPteInStore = MiIsPteInStore(v77, v37);
    v40 = v39 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
    v41 = (unsigned __int8)HIBYTE(*(_WORD *)v35) >> 4;
    *(_DWORD *)&BugCheckParameter2[192] = v40;
    PagingFileOffset = MiGetPagingFileOffset((__int64)v35);
    if ( (v40 & 0x100) != 0 )
      *(_QWORD *)&BugCheckParameter2[96] = PagingFileOffset | ((unsigned __int64)(unsigned int)v41 << 60);
    else
      *(_QWORD *)&BugCheckParameter2[96] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v30, 0xFFFF800000000030uLL, 0LL);
    v43 = 0;
    *(_WORD *)&BugCheckParameter2[280] = v76;
    *(_QWORD *)&BugCheckParameter2[304] = v80;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_DWORD *)&BugCheckParameter2[316] = v36;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v13;
    v44 = *(_QWORD *)(v77 + 8 * v41 + 6944);
    if ( (*(_WORD *)(v44 + 204) & 0x800) == 0 )
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v45 = SmPageRead((union _MM_STORE_KEY *)&BugCheckParameter2[96], (int)&BugCheckParameter2[272]);
      }
      else
      {
        v45 = IoPageReadEx(
                *(PFILE_OBJECT *)(v44 + 56),
                (__int64)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (__int64)&BugCheckParameter2[32],
                (__int64)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v45 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v45;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v46 = *(_DWORD *)&BugCheckParameter2[192];
    v74 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v74);
      v50 = (unsigned __int8)MiLockPageInline(v30, v47, v48, v49);
      if ( HIWORD(v74) )
        v74 = (unsigned __int16)v74 | ((HIWORD(v74) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v51 = KeGetCurrentIrql();
          if ( v51 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v51 >= 2u )
          {
            v52 = KeGetCurrentPrcb();
            v53 = v52->SchedulerAssist;
            v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
            v34 = (v54 & v53[5]) == 0;
            v53[5] &= v54;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v52);
          }
        }
      }
      __writecr8(v50);
      v43 = v74;
      v46 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v55 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v44 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v46 | 0x400000;
      v55 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    MiSetPageTablePfnBuddy(v30, 0LL, 0LL);
    if ( v55 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v55, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v55, v55, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v43 & 1) != 0 )
    {
      v36 = v78;
      v35 = (__int64 *)(v30 + 16);
      if ( (v43 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v36 = v78;
    v35 = (__int64 *)(v30 + 16);
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v55, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v59 = MiLockPageInline(v30, v56, v57, v58);
  v60 = *(_QWORD *)(v30 + 16);
  v61 = v59;
  v62 = MiSwizzleInvalidPte(128LL);
  v63 = *(_BYTE *)(v30 + 34);
  *(_QWORD *)(v30 + 16) = v62;
  *(_BYTE *)(v30 + 34) = v63 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v64 = KeGetCurrentIrql();
      if ( v64 <= 0xFu && (unsigned __int8)v61 <= 0xFu && v64 >= 2u )
      {
        v65 = KeGetCurrentPrcb();
        v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v61 + 1));
        v67 = v65->SchedulerAssist;
        v34 = (v66 & v67[5]) == 0;
        v67[5] &= v66;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick((__int64)v65);
      }
    }
  }
  __writecr8(v61);
  MiReleasePageFileInfo(v77, v60, 0);
  v7 = v81;
LABEL_87:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v13, -2147483644);
  v69 = ValidPte;
  v70 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v70 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_95;
      v72 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_95;
      v72 = (ValidPte & 1) == 0;
    }
    if ( !v72 )
      v69 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_95:
  *v7 = v69;
  if ( v70 )
    MiWritePteShadow((__int64)v7, v69, v71);
  return ValidPte;
}
