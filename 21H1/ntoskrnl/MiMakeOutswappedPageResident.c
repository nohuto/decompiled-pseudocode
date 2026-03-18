/*
 * XREFs of MiMakeOutswappedPageResident @ 0x140525FA0
 * Callers:
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiInitializeInPageSupport @ 0x140224D70 (MiInitializeInPageSupport.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiStoreFaultComplete @ 0x14031CE70 (MiStoreFaultComplete.c)
 *     SmPageRead @ 0x14031D378 (SmPageRead.c)
 *     MiInitializePfnForOtherProcess @ 0x140328FB8 (MiInitializePfnForOtherProcess.c)
 *     MiSetPageTablePfnBuddy @ 0x1403292B4 (MiSetPageTablePfnBuddy.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiIsRetryIoStatus @ 0x140354144 (MiIsRetryIoStatus.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     MiValidatePagefilePageHash @ 0x140557C2C (MiValidatePagefilePageHash.c)
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
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int8 CurrentIrql; // al
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  signed __int32 v27; // eax
  unsigned int v28; // ebx
  __int64 Page; // rax
  __int64 v30; // rsi
  __int64 TransitionPte; // rbx
  int v32; // r15d
  bool v33; // zf
  __int64 *v34; // r13
  int v35; // edi
  __int64 v36; // rdx
  int IsPteInStore; // eax
  int v38; // r9d
  unsigned int v39; // ebx
  __int64 v40; // r15
  unsigned int PagingFileOffset; // eax
  char v42; // bl
  __int64 v43; // r13
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned __int64 v49; // rbx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  NTSTATUS v54; // edi
  __int64 v55; // rdx
  __int64 v56; // r8
  _DWORD *v57; // r9
  unsigned __int8 v58; // al
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  char v62; // cl
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  int v65; // eax
  _DWORD *v66; // r8
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v68; // rbx
  int v69; // esi
  bool v70; // zf
  unsigned int v72; // [rsp+48h] [rbp-C0h] BYREF
  char v73; // [rsp+4Ch] [rbp-BCh]
  __int16 v74; // [rsp+4Eh] [rbp-BAh]
  __int64 v75; // [rsp+50h] [rbp-B8h]
  __int64 v76; // [rsp+58h] [rbp-B0h]
  __int128 v77; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-98h]
  _QWORD *v79; // [rsp+78h] [rbp-90h]
  _BYTE BugCheckParameter2[448]; // [rsp+88h] [rbp-80h] BYREF

  v72 = 0;
  v73 = 0;
  v77 = 0LL;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v6 = *(unsigned __int16 *)(a1 + 1838);
  v7 = (_QWORD *)(a1 + 1432);
  v79 = (_QWORD *)(a1 + 1432);
  v75 = *(_QWORD *)(qword_140C4E588 + 8 * v6);
  while ( 1 )
  {
    do
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v7);
    while ( !MiInvalidPteConforms(v8) );
    if ( (v9 & 0x800) == 0 )
      break;
    v12 = v9;
    if ( qword_140C4DE80 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v9 & ~qword_140C4DE80;
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
                v33 = (v25 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v25;
                if ( v33 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v15);
          if ( v22 )
            MiReleasePageFileInfo(v75, v22, 0);
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
            v33 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick((__int64)v17);
          }
        }
      }
      __writecr8(v15);
    }
  }
  MiInitializePageColorBase(0LL, a5, (__int64)&v77);
  v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v77, 1u);
  v28 = DWORD2(v77) & v27 | HIDWORD(v77);
  while ( 1 )
  {
    Page = MiGetPage(v75, v28, 512LL);
    v13 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(v75);
  }
  v30 = 48 * Page - 0x58000000000LL;
  TransitionPte = MiMakeTransitionPte(Page, (v8 >> 5) & 0x1F);
  v32 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v33 = (TransitionPte & 1) == 0;
        goto LABEL_41;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v33 = (TransitionPte & 1) == 0;
LABEL_41:
      if ( !v33 )
        TransitionPte |= 0x8000000000000000uLL;
    }
  }
  *v7 = TransitionPte;
  if ( v32 )
    MiWritePteShadow((__int64)v7, TransitionPte);
  MiInitializePfnForOtherProcess(v13, 0xFFFFF6FB7DBEDF68uLL, v13, 2560LL);
  v34 = (__int64 *)(v30 + 16);
  *(_QWORD *)(v30 + 16) = v8;
  v74 = 56;
  v35 = 0;
  v78 = 0xFFFFF6FB7DBED000uLL;
  v76 = 0LL;
  while ( 1 )
  {
    MiInitializeInPageSupport((ULONG_PTR)BugCheckParameter2, 0);
    v36 = *v34;
    *(_DWORD *)&BugCheckParameter2[192] |= 0x200000u;
    IsPteInStore = MiIsPteInStore(v75, v36);
    v39 = v38 & 0xFFFFFEFF | (IsPteInStore != 0 ? 0x100 : 0);
    v40 = (unsigned __int8)HIBYTE(*(_WORD *)v34) >> 4;
    *(_DWORD *)&BugCheckParameter2[192] = v39;
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)v34);
    if ( (v39 & 0x100) != 0 )
      *(_QWORD *)&BugCheckParameter2[96] = PagingFileOffset | ((unsigned __int64)(unsigned int)v40 << 60);
    else
      *(_QWORD *)&BugCheckParameter2[96] = (unsigned __int64)PagingFileOffset << 12;
    MiSetPageTablePfnBuddy(v30, 0xFFFF800000000030uLL, 0LL);
    v42 = 0;
    *(_WORD *)&BugCheckParameter2[280] = v74;
    *(_QWORD *)&BugCheckParameter2[304] = v78;
    *(_WORD *)&BugCheckParameter2[282] = 16386;
    *(_QWORD *)&BugCheckParameter2[272] = 0LL;
    *(_DWORD *)&BugCheckParameter2[316] = v35;
    *(_DWORD *)&BugCheckParameter2[312] = 4096;
    *(_DWORD *)&BugCheckParameter2[184] = 4096;
    *(_QWORD *)&BugCheckParameter2[320] = v13;
    v43 = *(_QWORD *)(v75 + 8 * v40 + 6944);
    if ( (*(_WORD *)(v43 + 204) & 0x800) == 0 )
    {
      if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = 0;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        v44 = SmPageRead((union _MM_STORE_KEY *)&BugCheckParameter2[96], (unsigned __int64)&BugCheckParameter2[272]);
      }
      else
      {
        v44 = IoPageReadEx(
                *(PFILE_OBJECT *)(v43 + 56),
                (struct _MDL *)&BugCheckParameter2[272],
                &BugCheckParameter2[96],
                (struct _KEVENT *)&BugCheckParameter2[32],
                (struct _IO_STATUS_BLOCK *)&BugCheckParameter2[80],
                0,
                0LL);
      }
      if ( v44 < 0 )
      {
        *(_DWORD *)&BugCheckParameter2[80] = v44;
        *(_QWORD *)&BugCheckParameter2[88] = 0LL;
        KeSetEvent((PRKEVENT)&BugCheckParameter2[32], 0, 0);
      }
    }
    KeWaitForSingleObject(&BugCheckParameter2[32], WrPageIn, 0, 0, 0LL);
    v45 = *(_DWORD *)&BugCheckParameter2[192];
    v72 = 0;
    if ( (*(_WORD *)&BugCheckParameter2[192] & 0x100) != 0 )
    {
      MiStoreFaultComplete((ULONG_PTR)BugCheckParameter2, &v72);
      v49 = (unsigned __int8)MiLockPageInline(v30, v46, v47, v48);
      if ( HIWORD(v72) )
        v72 = (unsigned __int16)v72 | ((HIWORD(v72) - 1) << 16);
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v50 = KeGetCurrentIrql();
          if ( v50 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
            v33 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick((__int64)v51);
          }
        }
      }
      __writecr8(v49);
      v42 = v72;
      v45 = *(_DWORD *)&BugCheckParameter2[192];
    }
    v54 = *(_DWORD *)&BugCheckParameter2[80];
    if ( *(int *)&BugCheckParameter2[80] >= 0 && *(_QWORD *)(v43 + 216) )
    {
      *(_DWORD *)&BugCheckParameter2[192] = v45 | 0x400000;
      v54 = MiValidatePagefilePageHash(BugCheckParameter2);
    }
    if ( (BugCheckParameter2[282] & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)&BugCheckParameter2[296], (PMDL)&BugCheckParameter2[272]);
    MiSetPageTablePfnBuddy(v30, 0LL, 0LL);
    if ( v54 >= 0 )
      break;
    if ( !MiIsRetryIoStatus(v54, 0x1000uLL) )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x77u, v54, v54, (unsigned int)v40, *(unsigned int *)&BugCheckParameter2[96]);
    }
    if ( (v42 & 1) != 0 )
    {
      v35 = v76;
      v34 = (__int64 *)(v30 + 16);
      if ( (v42 & 2) == 0 )
        continue;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    v35 = v76;
    v34 = (__int64 *)(v30 + 16);
  }
  if ( *(_QWORD *)&BugCheckParameter2[88] != 4096LL )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, 2uLL, v54, (unsigned int)v40, *(unsigned int *)&BugCheckParameter2[96]);
  }
  v58 = MiLockPageInline(v30, v55, v56, v57);
  v59 = *(_QWORD *)(v30 + 16);
  v60 = v58;
  v61 = MiSwizzleInvalidPte(128LL);
  v62 = *(_BYTE *)(v30 + 34);
  *(_QWORD *)(v30 + 16) = v61;
  *(_BYTE *)(v30 + 34) = v62 | 0x10;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        v33 = (v65 & v66[5]) == 0;
        v66[5] &= v65;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick((__int64)v64);
      }
    }
  }
  __writecr8(v60);
  MiReleasePageFileInfo(v75, v59, 0);
  v7 = v79;
LABEL_87:
  ValidPte = MiMakeValidPte(0xFFFFF6FB7DBEDF68uLL, v13, 2147483652LL, (__int64)CurrentPrcb);
  v68 = ValidPte;
  v69 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v69 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_95;
      v70 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_95;
      v70 = (ValidPte & 1) == 0;
    }
    if ( !v70 )
      v68 = ValidPte | 0x8000000000000000uLL;
  }
LABEL_95:
  *v7 = v68;
  if ( v69 )
    MiWritePteShadow((__int64)v7, v68);
  return ValidPte;
}
