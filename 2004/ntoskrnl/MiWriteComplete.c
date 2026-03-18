/*
 * XREFs of MiWriteComplete @ 0x1402F79F0
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F2788 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14035FBD0 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiFreeModWriterEntry @ 0x1402F8068 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F80A4 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x1402F8164 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402F81A8 (MmIsWriteErrorFatal.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F824C (FsRtlReleaseFileForModWrite.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x140358B44 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14035D854 (MiMakePagefileWriterEntryAvailable.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14035D980 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14035F730 (MiStoreCheckCompleteWriteBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x140525544 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, unsigned int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  CSHORT MdlFlags; // ax
  int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // r14
  unsigned int v12; // r14d
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 updated; // rdi
  struct _MDL *p_Size; // rax
  struct _MDL *Next; // rax
  ULONG_PTR v19; // r14
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // r10
  _QWORD *v24; // rax
  void *v25; // rcx
  __int64 v26; // rdi
  int IsRetryIoStatus; // eax
  LONG result; // eax
  __int64 v29; // rdx
  char v30; // al
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r9
  int v33; // r11d
  struct _KEVENT *v34; // rdi
  struct _FILE_OBJECT *v35; // rax
  struct _KPRCB *v36; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v38; // zf
  signed __int32 v39; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  struct _WORK_QUEUE_ITEM *Pool; // rdi
  _QWORD *v45; // rcx
  volatile LONG *v46; // r14
  KIRQL v47; // al
  unsigned __int8 v48; // cl
  unsigned __int64 v49; // rsi
  KIRQL v50; // al
  unsigned __int8 v51; // cl
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  int v56; // [rsp+30h] [rbp-78h]
  __int64 v57; // [rsp+38h] [rbp-70h]
  struct _KEVENT *Event; // [rsp+40h] [rbp-68h]
  struct _MDL *v59; // [rsp+48h] [rbp-60h]
  unsigned __int64 v60; // [rsp+50h] [rbp-58h]
  __int64 v61; // [rsp+58h] [rbp-50h] BYREF
  ULONG_PTR v62; // [rsp+60h] [rbp-48h]
  unsigned __int8 v63; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v64; // [rsp+B0h] [rbp+8h]
  int v65; // [rsp+B8h] [rbp+10h]
  int v67; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v67 = *(_DWORD *)(a1 + 136);
  v7 = 0;
  v56 = 0;
  MdlFlags = v3->MdlFlags;
  v9 = 0;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3, a2);
    MdlFlags = v3->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 168);
  v65 = v10;
  v57 = *(_QWORD *)(a1 + 160);
  if ( !v57 )
  {
    v61 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v61, 5, 0, v10);
    v10 = v65;
  }
  v59 = v3 + 1;
  v60 = (unsigned __int64)&v3[1] + 8 * ((v67 & 0xFFF) != 0) + 8 * (v67 >> 12);
  if ( v11 )
  {
    v35 = *(struct _FILE_OBJECT **)(a1 + 152);
    v64 = (unsigned __int64)v35;
    if ( (v11 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(v35->SectionObjectPointer, *(_QWORD *)(a1 + 176), (unsigned int)v67, v10);
      v35 = (struct _FILE_OBJECT *)v64;
    }
    FsRtlReleaseFileForModWrite(v35);
    MiDereferenceControlAreaFile(v57, v64);
  }
  if ( v65 >= 0 )
  {
    v13 = v57;
    goto LABEL_13;
  }
  v12 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v57 != 0, v12, (unsigned int)v65) )
    goto LABEL_10;
  if ( !v57 )
    KeBugCheckEx(0x7Au, 0x20uLL, v65, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v57 + 56) & 0x10) != 0 )
    goto LABEL_11;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v65, v67) && v12 && v60 > (unsigned __int64)&v3[1].Size )
  {
LABEL_10:
    v9 = 1;
  }
  else
  {
    v7 = 1;
    v56 = 1;
  }
LABEL_11:
  v13 = v57;
  if ( v57 )
    *(_DWORD *)(v5 + 680) = v65;
  else
    *(_DWORD *)(v5 + 676) = v65;
LABEL_13:
  Event = 0LL;
  if ( v7 )
    MiSetDeleteOnClose(v13, 1LL);
  v14 = MiSwizzleInvalidPte(0LL);
  v15 = *(_QWORD *)(a1 + 144);
  updated = v14;
  if ( v15 )
    updated = MiTransferSoftwarePte(v14, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12);
  p_Size = v59;
  if ( (unsigned __int64)v59 < v60 )
  {
    do
    {
      Next = p_Size->Next;
      if ( Next == (struct _MDL *)qword_140C4EB68 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v5, updated, 0);
        v31 = updated;
        if ( qword_140C4DD40 && (updated & 0x10) == 0 )
          v31 = updated & ~qword_140C4DD40;
        v22 = HIDWORD(v31) + 1;
      }
      else
      {
        v19 = 48LL * (_QWORD)Next - 0x58000000000LL;
        v62 = v19;
        v63 = MiLockPageInline(v19);
        if ( (v9 & 1) == 0 )
        {
          if ( (*(_BYTE *)(v19 + 34) & 0x10) == 0 || (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
            v9 &= ~2u;
          else
            v9 |= 2u;
        }
        v9 &= 0xFFFFFFF3;
        if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
        {
          v29 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v19 + 40) >> 39) & 0x3FFLL));
          if ( (v9 & 2) == 0 && (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) == 0 )
          {
            v30 = *(_BYTE *)(v19 + 34);
            if ( *(_WORD *)(v19 + 32) > 1u )
            {
              *(_BYTE *)(v19 + 34) = v30 | 0x10;
              v9 |= 2u;
            }
            else
            {
              *(_BYTE *)(v19 + 34) = v30 & 0xF8 | 2;
              if ( *(_DWORD *)(v29 + 1288) )
                v9 |= 4u;
              else
                v9 |= 8u;
            }
          }
        }
        v20 = MiWriteCompletePfn(v19, v9);
        _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v63 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v43 = ~(unsigned __int16)(-1LL << (v63 + 1));
              v38 = (v43 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v43;
              if ( v38 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v63);
        if ( v20 )
          MiReleasePageFileInfo(v5, v20, 0);
        v21 = updated;
        if ( qword_140C4DD40 && (updated & 0x10) == 0 )
          v21 = updated & ~qword_140C4DD40;
        v22 = HIDWORD(v21) + 1;
      }
      updated = MiUpdatePageFileHighInPte(updated, v22);
      p_Size = (struct _MDL *)&v59->Size;
      v59 = p_Size;
    }
    while ( (unsigned __int64)p_Size < v60 );
    v15 = *(_QWORD *)(a1 + 144);
    v7 = v56;
  }
  v23 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v23 )
  {
    v32 = *(unsigned int *)(a1 + 140);
    if ( v15 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v36 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v36->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v23 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v23 >= 0x80000 )
                break;
              v39 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v36->CachedResidentAvailable,
                      v23 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v38 = (_DWORD)CachedResidentAvailable == v39;
              LODWORD(CachedResidentAvailable) = v39;
              if ( v38 )
                goto LABEL_31;
            }
            while ( v39 != -1 && v23 + v39 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v36->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v32 = (int)CachedResidentAvailable - 192 + v23;
          }
        }
      }
      if ( v32 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v32);
    }
    else
    {
      MiReleaseWriteInProgressCharges(v5, *(unsigned int *)(a1 + 140), 1LL);
    }
  }
LABEL_31:
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v5 + 692);
    MiMakePagefileWriterEntryAvailable(a1);
    v34 = (struct _KEVENT *)(v5 + 920);
    if ( *(_BYTE *)(v5 + 673) != 1 )
      v34 = 0LL;
    Event = v34;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 1180) += v33;
      Event = v34;
      if ( !*(_BYTE *)(v5 + 674) )
      {
        MiStoreCheckCompleteWriteBatch(v5);
        Event = v34;
      }
    }
  }
  if ( v57 )
  {
    if ( v7 )
    {
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
      if ( Pool )
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v57);
        LODWORD(Pool[1].List.Blink) = v65;
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        Pool->List.Flink = 0LL;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
      }
    }
    v24 = (_QWORD *)MiDecrementModifiedWriteCount(v57, 0);
    if ( v24 )
      MiReleaseControlAreaWaiters(v24);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 624));
    v25 = *(void **)(a1 + 200);
    if ( v25 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v25, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v45 = *(_QWORD **)(v5 + 640);
      if ( *v45 != v5 + 632 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 632;
      *(_QWORD *)(a1 + 8) = v45;
      *v45 = a1;
      *(_QWORD *)(v5 + 640) = a1;
      if ( *(_BYTE *)(v5 + 672) == 1 )
      {
        *(_BYTE *)(v5 + 672) = 0;
        KeSignalGate(v5 + 648, 1LL);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
    v26 = 1003LL;
  }
  else
  {
    v26 = 1000LL;
  }
  if ( v65 >= 0 )
  {
    if ( v57 )
      *(_BYTE *)(v5 + 1032) = 0;
    if ( *(_BYTE *)(v26 + v5) )
    {
      v46 = (volatile LONG *)(v5 + 996);
      v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v48 = *(_BYTE *)(v26 + v5);
      v49 = v47;
      if ( !v48 )
        goto LABEL_135;
      if ( *(_BYTE *)(v26 + v5 + 2) )
      {
        if ( v48 <= 1u )
          goto LABEL_135;
        *(_BYTE *)(v26 + v5 + 2) = 0;
      }
      else
      {
        v38 = (*(_BYTE *)(v26 + v5 + 1))-- == 1;
        if ( !v38 )
          goto LABEL_135;
        if ( v48 <= 1u )
          goto LABEL_134;
      }
      *(_BYTE *)(v26 + v5) = 0;
      goto LABEL_135;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v65, v67);
    if ( a3 )
    {
      if ( v7 || IsRetryIoStatus )
        goto LABEL_46;
      goto LABEL_45;
    }
    if ( v65 == -1073741740 )
    {
LABEL_45:
      *(_BYTE *)(v5 + 1032) = 1;
      goto LABEL_46;
    }
    if ( IsRetryIoStatus )
    {
      v46 = (volatile LONG *)(v5 + 996);
      v50 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v51 = *(_BYTE *)(v26 + v5);
      v49 = v50;
      if ( !v51 )
      {
        *(_WORD *)(v26 + v5) = 4112;
        goto LABEL_135;
      }
      if ( v51 > 1u )
        *(_BYTE *)(v26 + v5) = v51 >> 1;
      if ( *(_BYTE *)(v26 + v5 + 2) )
        goto LABEL_135;
      v38 = (*(_BYTE *)(v26 + v5 + 1))-- == 1;
      if ( !v38 )
        goto LABEL_135;
LABEL_134:
      *(_BYTE *)(v26 + v5 + 2) = 1;
LABEL_135:
      ExReleaseSpinLockExclusiveFromDpcLevel(v46);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v52 = KeGetCurrentIrql();
          if ( v52 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v52 >= 2u )
          {
            v53 = KeGetCurrentPrcb();
            v54 = v53->SchedulerAssist;
            v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
            v38 = (v55 & v54[5]) == 0;
            v54[5] &= v55;
            if ( v38 )
              KiRemoveSystemWorkPriorityKick(v53);
          }
        }
      }
      __writecr8(v49);
    }
  }
LABEL_46:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
