/*
 * XREFs of MiWriteComplete @ 0x14028C230
 * Callers:
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x140389E00 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402590D8 (CcNotifyOfMappedWriteComplete.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14025B8B0 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14025D7D0 (MiStoreCheckCompleteWriteBatch.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140287A8C (MiDecrementModifiedWriteCount.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiFreeModWriterEntry @ 0x14028C978 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x14028D2D8 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x14028D31C (MmIsWriteErrorFatal.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MI_PAGEFILE_WRITE @ 0x14037E43C (MI_PAGEFILE_WRITE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x140584530 (MiRetardMdl.c)
 *     MiSetDeleteOnClose @ 0x14058C1D4 (MiSetDeleteOnClose.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  unsigned int v4; // ebx
  signed int v5; // r8d
  int v6; // esi
  __int64 v7; // r12
  CSHORT MdlFlags; // ax
  ULONG_PTR v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 CachedResidentAvailable; // r8
  ULONG_PTR v18; // rcx
  __int64 updated; // rdi
  struct _MDL *p_Size; // rax
  ULONG_PTR v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  struct _KEVENT *v27; // rdi
  __int64 *v28; // rax
  void *v29; // rcx
  __int64 v30; // rsi
  int IsRetryIoStatus; // eax
  __int64 v32; // rdx
  char v33; // al
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r9
  __int64 v36; // rax
  struct _KPRCB *v37; // r10
  bool v38; // zf
  signed __int32 v39; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  struct _WORK_QUEUE_ITEM *Pool; // rsi
  _QWORD *v45; // rcx
  KIRQL v46; // al
  unsigned __int8 v47; // cl
  unsigned __int64 v48; // rbx
  KIRQL v49; // al
  unsigned __int8 v50; // cl
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  unsigned __int64 v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-58h]
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-58h]
  ULONG_PTR BugCheckParameter3b; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h] BYREF
  __int64 v61; // [rsp+50h] [rbp-48h]
  signed int v62; // [rsp+A0h] [rbp+8h]
  int v63; // [rsp+A8h] [rbp+10h]
  struct _MDL *v65; // [rsp+B8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 136);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 192);
  BugCheckParameter3 = (ULONG_PTR)v3;
  MdlFlags = v3->MdlFlags;
  v62 = v5;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    MdlFlags = v3->MdlFlags;
    v5 = v62;
  }
  if ( (MdlFlags & 1) != 0 )
  {
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
    v5 = v62;
  }
  v11 = *a2;
  v12 = *(_QWORD *)(a1 + 160);
  v13 = *(_QWORD *)(a1 + 168);
  v63 = v11;
  v56 = v13;
  v61 = v12;
  if ( !v12 )
  {
    v60 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v60, 5, 0, v11);
    v13 = v56;
    v5 = v62;
  }
  v65 = v3 + 1;
  v55 = (unsigned __int64)&v3[1] + 8 * ((v5 & 0xFFF) != 0) + 8 * (v5 >> 12);
  if ( !v13 )
    goto LABEL_8;
  v34 = *(_QWORD *)(a1 + 152);
  if ( (v13 & 1) == 0 )
    CcNotifyOfMappedWriteComplete(*(_QWORD *)(v34 + 40), *(_QWORD *)(a1 + 176), v5, v11);
  FsRtlReleaseFileForModWrite((PFILE_OBJECT)v34);
  ObFastDereferenceObjectDeferDelete((signed __int64 *)(v12 + 64), v34, 0x63536D4Du);
  if ( (v11 & 0x80000000) != 0LL )
  {
LABEL_8:
    if ( (v11 & 0x80000000) != 0LL )
    {
      v14 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
      if ( (unsigned int)MmIsWriteErrorFatal(v12 != 0, v14, (unsigned int)v11) )
      {
        if ( !v12 )
          KeBugCheckEx(0x7Au, 0x20uLL, v11, BugCheckParameter3, 0LL);
        if ( (*(_DWORD *)(v12 + 56) & 0x10) == 0 )
        {
          if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v11, v62, v15) && v14 && v55 > BugCheckParameter3 + 56 )
            v6 = 1;
          else
            v4 = 1;
        }
      }
      else
      {
        v6 = 1;
        if ( !v12 )
        {
          *(_DWORD *)(v7 + 700) = v11;
          goto LABEL_13;
        }
      }
      *(_DWORD *)(v7 + 704) = v11;
      if ( v4 )
        MiSetDeleteOnClose(v12, 1LL);
    }
  }
LABEL_13:
  v16 = MiSwizzleInvalidPte(0LL, v13);
  v18 = *(_QWORD *)(a1 + 144);
  updated = v16;
  BugCheckParameter3a = v18;
  if ( v18 )
  {
    v36 = MiTransferSoftwarePte(v16, v18, *(_QWORD *)(a1 + 176) >> 12, 1LL);
    v18 = BugCheckParameter3a;
    updated = v36;
    if ( _bittest16((const signed __int16 *)(BugCheckParameter3a + 204), 0xBu) )
      v4 |= 2u;
  }
  p_Size = v65;
  if ( (unsigned __int64)v65 < v55 )
  {
    while ( p_Size->Next == (struct _MDL *)qword_140C53278 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
        MiReleasePageFileInfo(v7, updated, 0LL);
      v24 = qword_140C50780;
      v25 = updated;
      if ( !qword_140C50780 || (updated & 0x10) != 0 )
        goto LABEL_25;
LABEL_24:
      v25 = updated & ~v24;
LABEL_25:
      updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v25) + 1);
      p_Size = (struct _MDL *)&v65->Size;
      v65 = p_Size;
      if ( (unsigned __int64)p_Size >= v55 )
      {
        v18 = *(_QWORD *)(a1 + 144);
        LODWORD(v11) = v63;
        v12 = v61;
        goto LABEL_27;
      }
    }
    v21 = 48 * (__int64)p_Size->Next - 0x220000000000LL;
    BugCheckParameter3b = v21;
    v22 = (unsigned __int8)MiLockPageInline(v21);
    if ( (v6 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v21 + 34) & 0x10) == 0 || (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
        v6 &= ~2u;
      else
        v6 |= 2u;
    }
    v6 &= 0xFFFFFFF3;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      v32 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
      if ( (v6 & 2) == 0 && (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) == 0 )
      {
        v33 = *(_BYTE *)(v21 + 34);
        if ( *(_WORD *)(v21 + 32) > 1u )
        {
          *(_BYTE *)(v21 + 34) = v33 | 0x10;
          v6 |= 2u;
          goto LABEL_19;
        }
        *(_BYTE *)(v21 + 34) = v33 & 0xF8 | 2;
        if ( *(_DWORD *)(v32 + 1304) )
        {
          v6 |= 4u;
          goto LABEL_19;
        }
        goto LABEL_51;
      }
    }
    else if ( v4 >= 2 && (v6 & 3) == 0 && (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) == 0 )
    {
LABEL_51:
      v6 |= 8u;
    }
LABEL_19:
    v23 = MiWriteCompletePfn(v21);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter3b + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v38 = (v43 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v43;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
    if ( v23 )
      MiReleasePageFileInfo(v7, v23, 0LL);
    v24 = qword_140C50780;
    v25 = updated;
    if ( !qword_140C50780 || (updated & 0x10) != 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_27:
  v26 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v26 )
  {
    v35 = *(unsigned int *)(a1 + 140);
    if ( v18 )
    {
      if ( (ULONG_PTR *)v7 == &MiSystemPartition )
      {
        v37 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v37->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v26 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v26 >= 0x80000 )
                break;
              v39 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v37->CachedResidentAvailable,
                      v26 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v38 = (_DWORD)CachedResidentAvailable == v39;
              CachedResidentAvailable = v39;
              if ( v38 )
                goto LABEL_28;
            }
            while ( v39 != -1 && v26 + v39 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v37->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v35 = (int)CachedResidentAvailable - 192 + v26;
          }
        }
      }
      if ( v35 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 16960), v35);
    }
    else
    {
      MiReleaseWriteInProgressCharges(v7, v26, 1LL);
    }
  }
LABEL_28:
  v27 = 0LL;
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v7 + 716);
    MiMakePagefileWriterEntryAvailable((_QWORD *)a1);
    if ( *(_BYTE *)(v7 + 697) )
      v27 = (struct _KEVENT *)(v7 + 944);
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      --*(_DWORD *)(v7 + 1196);
      if ( !*(_BYTE *)(v7 + 698) )
        MiStoreCheckCompleteWriteBatch(v7);
    }
  }
  if ( v12 )
  {
    if ( (v4 & 1) != 0 )
    {
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
      if ( Pool )
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFileWithTag(v12, 1682730317LL);
        LODWORD(Pool[1].List.Blink) = v11;
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        Pool->List.Flink = 0LL;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
      }
    }
    v28 = (__int64 *)MiDecrementModifiedWriteCount(v12, 0);
    if ( v28 )
      MiReleaseControlAreaWaiters(v28);
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 648));
    v29 = *(void **)(a1 + 200);
    if ( v29 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v29, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v45 = *(_QWORD **)(v7 + 664);
      if ( *v45 != v7 + 656 )
        __fastfail(3u);
      *(_QWORD *)a1 = v7 + 656;
      *(_QWORD *)(a1 + 8) = v45;
      *v45 = a1;
      *(_QWORD *)(v7 + 664) = a1;
      if ( *(_BYTE *)(v7 + 696) )
      {
        *(_BYTE *)(v7 + 696) = 0;
        KeSignalGate((_DWORD *)(v7 + 672), 1);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
    v30 = 1027LL;
  }
  else
  {
    v30 = 1024LL;
  }
  if ( (v11 & 0x80000000) == 0LL )
  {
    if ( v12 )
      *(_BYTE *)(v7 + 1056) = 0;
    if ( *(_BYTE *)(v7 + v30) )
    {
      v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1020));
      v47 = *(_BYTE *)(v7 + v30);
      v48 = v46;
      if ( !v47 )
        goto LABEL_137;
      if ( *(_BYTE *)(v7 + v30 + 2) )
      {
        if ( v47 > 1u )
        {
          *(_BYTE *)(v7 + v30 + 2) = 0;
          *(_BYTE *)(v7 + v30) = 0;
        }
        goto LABEL_137;
      }
      v38 = (*(_BYTE *)(v7 + v30 + 1))-- == 1;
      if ( !v38 )
      {
LABEL_137:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 1020));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
              v38 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(v48);
        goto LABEL_43;
      }
      if ( v47 > 1u )
      {
        *(_BYTE *)(v7 + v30) = 0;
        goto LABEL_137;
      }
LABEL_136:
      *(_BYTE *)(v7 + v30 + 2) = 1;
      goto LABEL_137;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v11, v62, CachedResidentAvailable);
    if ( a3 )
    {
      if ( (v4 & 1) != 0 || IsRetryIoStatus )
        goto LABEL_43;
      goto LABEL_42;
    }
    if ( (_DWORD)v11 == -1073741740 )
    {
LABEL_42:
      *(_BYTE *)(v7 + 1056) = 1;
      goto LABEL_43;
    }
    if ( IsRetryIoStatus )
    {
      v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1020));
      v50 = *(_BYTE *)(v7 + v30);
      v48 = v49;
      if ( !v50 )
      {
        *(_WORD *)(v7 + v30) = 4112;
        goto LABEL_137;
      }
      if ( v50 > 1u )
        *(_BYTE *)(v7 + v30) = v50 >> 1;
      if ( *(_BYTE *)(v7 + v30 + 2) )
        goto LABEL_137;
      v38 = (*(_BYTE *)(v7 + v30 + 1))-- == 1;
      if ( !v38 )
        goto LABEL_137;
      goto LABEL_136;
    }
  }
LABEL_43:
  if ( v27 )
    KeSetEvent(v27, 0, 0);
}
