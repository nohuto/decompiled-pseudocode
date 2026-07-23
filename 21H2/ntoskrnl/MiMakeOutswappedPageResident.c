/*
 * XREFs of MiMakeOutswappedPageResident @ 0x14052BD00
 * Callers:
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     SmPageRead @ 0x14022DCBC (SmPageRead.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiStoreFaultComplete @ 0x14024B0D0 (MiStoreFaultComplete.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiInitializePfnForOtherProcess @ 0x140296B58 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x14055C43C (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
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
  __int64 v16; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  char v21; // al
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v26; // eax
  _DWORD *SchedulerAssist; // r8
  signed __int32 v28; // eax
  unsigned int v29; // ebx
  __int64 Page; // rax
  __int64 v31; // rsi
  __int64 TransitionPte; // rbx
  int v33; // r15d
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
  bool v71; // zf
  unsigned int v73; // [rsp+48h] [rbp-C0h] BYREF
  char v74; // [rsp+4Ch] [rbp-BCh]
  __int16 v75; // [rsp+4Eh] [rbp-BAh]
  __int64 v76; // [rsp+50h] [rbp-B8h]
  __int64 v77; // [rsp+58h] [rbp-B0h]
  __int128 v78; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v79; // [rsp+70h] [rbp-98h]
  _QWORD *v80; // [rsp+78h] [rbp-90h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v73 = 0;
  v74 = 0;
  v78 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v80 = (_QWORD *)(a1 + 1432);
  v76 = *(_QWORD *)(qword_140C4E688 + 8 * v6);
  while ( 1 )
  {
    do
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    while ( !MiInvalidPteConforms(v8) );
    if ( (v9 & 0x800) == 0 )
      break;
    v12 = v9;
    if ( qword_140C4DF80 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v9 & ~qword_140C4DF80;
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
          v22 = *(_QWORD *)(v14 + 24) ^ ((*(_QWORD *)(v14 + 24) + 1LL) ^ *(_QWORD *)(v14 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_23:
          *(_QWORD *)(v14 + 24) = v22;
          v23 = MiCaptureDirtyBitToPfn(48 * v13 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v34 = (v26 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v26;
                if ( v34 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v15);
          if ( v23 )
            MiReleasePageFileInfo(v76, v23, 0);
          goto LABEL_87;
        }
        if ( (unsigned int)MiUnlinkPageFromList(48 * v13 - 0x58000000000LL, 0) )
        {
          v21 = *(_BYTE *)(v14 + 34);
          ++*(_WORD *)(v14 + 32);
          *(_BYTE *)(v14 + 34) = v21 & 0xF8 | 6;
          v22 = *(_QWORD *)(v14 + 24) & 0xC000000000000000uLL | 1;
          goto LABEL_23;
        }
        MiDiscardTransitionPteEx(48 * v13 - 0x58000000000LL, 0, v16);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && (unsigned __int8)v15 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
            v34 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
        }
      }
      __writecr8(v15);
    }
  }
  MiInitializePageColorBase(0LL, a5, (__int64)&v78);
  v28 = _InterlockedExchangeAdd((volatile signed __int32 *)v78, 1u);
  v29 = DWORD2(v78) & v28 | HIDWORD(v78);
  while ( 1 )
  {
    Page = MiGetPage(v76, v29, 512LL);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v76);
  }
  v31 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v8 >> 5) & 0x1F);
  v33 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v33 = 1;
      if ( !HIBYTE(word_140C4E048) )
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
  if ( v33 )
    MiWritePteShadow((__int64)v7, TransitionPte);
  MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, v13, 2560);
  v35 = (__int64 *)(v31 + 16);
  *(_QWORD *)(v31 + 16) = v8;
  v75 = 56;
  v36 = 0;
  v79 = 0xFFFFF6FB7DBED000uLL;
  v77 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v37 = *v35;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    IsPteInStore = MiIsPteInStore(v76, v37);
    v40 = v39 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
    v41 = (unsigned __int8)HIBYTE(*(_WORD *)v35) >> 4;
    *(_DWORD *)&BugCheckParameter2[192] = v40;
    PagingFileOffset = MiGetPagingFileOffset((__int64)v35);
    if ( (v40 & 0x100) != 0 )
      *(_QWORD *)&BugCheckParameter2[96] = PagingFileOffset | ((unsigned __int64)(unsigned int)v41 << 60);
    else
      *(_QWORD *)&BugCheckParameter2[96] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v31, 0xFFFF800000000030uLL, 0);
    v43 = 0;
    *(_WORD *)&BugCheckParameter2[280] = v75;
    *(_QWORD *)&BugCheckParameter2[304] = v79;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_DWORD *)&BugCheckParameter2[316] = v36;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v13;
    v44 = *(_QWORD *)(v76 + 8 * v41 + 6944);
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
    v73 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v73);
      v50 = (unsigned __int8)MiLockPageInline(v31, v47, v48, v49);
      if ( HIWORD(v73) )
        v73 = (unsigned __int16)v73 | ((HIWORD(v73) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
      v43 = v73;
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
    MiSetPageTablePfnBuddy(v31, 0LL, 0);
    if ( v55 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v55, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v55, v55, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v43 & 1) != 0 )
    {
      v36 = v77;
      v35 = (__int64 *)(v31 + 16);
      if ( (v43 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v36 = v77;
    v35 = (__int64 *)(v31 + 16);
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v55, (unsigned int)v41, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v59 = MiLockPageInline(v31, v56, v57, v58);
  v60 = *(_QWORD *)(v31 + 16);
  v61 = v59;
  v62 = MiSwizzleInvalidPte(128LL);
  v63 = *(_BYTE *)(v31 + 34);
  *(_QWORD *)(v31 + 16) = v62;
  *(_BYTE *)(v31 + 34) = v63 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  MiReleasePageFileInfo(v76, v60, 0);
  v7 = v80;
LABEL_87:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v13, -2147483644);
  v69 = ValidPte;
  v70 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v70 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_95;
      v71 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_95;
      v71 = (ValidPte & 1) == 0;
    }
    if ( !v71 )
      v69 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_95:
  *v7 = v69;
  if ( v70 )
    MiWritePteShadow((__int64)v7, v69);
  return ValidPte;
}
