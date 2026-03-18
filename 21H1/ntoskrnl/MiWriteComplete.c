/*
 * XREFs of MiWriteComplete @ 0x1403539D0
 * Callers:
 *     MiStoreWriteModifiedCompleteApc @ 0x1403222C0 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x14034FAC8 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x14028170C (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MI_PAGEFILE_WRITE @ 0x14031B094 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14031FDA4 (MiMakePagefileWriterEntryAvailable.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14031FED0 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x140321D80 (MiStoreCheckCompleteWriteBatch.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     MiFreeModWriterEntry @ 0x140354048 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140354084 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x140354144 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140354188 (MmIsWriteErrorFatal.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035422C (FsRtlReleaseFileForModWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  CSHORT MdlFlags; // ax
  int v9; // esi
  int v10; // edx
  __int64 v11; // r14
  unsigned int v12; // r14d
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // r14
  unsigned __int64 updated; // rdi
  struct _MDL *p_Size; // rax
  struct _MDL *Next; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  _QWORD *v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  void *v30; // rcx
  __int64 v31; // rdi
  int IsRetryIoStatus; // eax
  LONG result; // eax
  __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r9
  int v38; // r11d
  struct _KEVENT *v39; // rdi
  unsigned __int64 v40; // rax
  struct _KPRCB *v41; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v43; // zf
  signed __int32 v44; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v48; // eax
  struct _WORK_QUEUE_ITEM *Pool; // rdi
  __int64 *v50; // rcx
  volatile LONG *v51; // r14
  KIRQL v52; // al
  unsigned __int8 v53; // cl
  unsigned __int64 v54; // rsi
  KIRQL v55; // al
  unsigned __int8 v56; // cl
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  int v61; // [rsp+30h] [rbp-78h]
  __int64 v62; // [rsp+38h] [rbp-70h]
  struct _KEVENT *Event; // [rsp+40h] [rbp-68h]
  struct _MDL *v64; // [rsp+48h] [rbp-60h]
  unsigned __int64 v65; // [rsp+50h] [rbp-58h]
  __int64 v66; // [rsp+58h] [rbp-50h] BYREF
  __int64 v67; // [rsp+60h] [rbp-48h]
  unsigned __int8 v68; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v69; // [rsp+B0h] [rbp+8h]
  int v70; // [rsp+B8h] [rbp+10h]
  signed int v72; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v72 = *(_DWORD *)(a1 + 136);
  v7 = 0;
  v61 = 0;
  MdlFlags = v3->MdlFlags;
  v9 = 0;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    MdlFlags = v3->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 168);
  v70 = v10;
  v62 = *(_QWORD *)(a1 + 160);
  if ( !v62 )
  {
    v66 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, &v66, 5, 0, v10);
    v10 = v70;
  }
  v64 = v3 + 1;
  v65 = (unsigned __int64)&v3[1] + 8 * ((v72 & 0xFFF) != 0) + 8 * (v72 >> 12);
  if ( v11 )
  {
    v40 = *(_QWORD *)(a1 + 152);
    v69 = v40;
    if ( (v11 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v40 + 40), *(_QWORD *)(a1 + 176), v72, v10);
      v40 = v69;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v40);
    MiDereferenceControlAreaFile(v62, v69);
  }
  if ( v70 >= 0 )
  {
    v13 = v62;
    goto LABEL_13;
  }
  v12 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v62 != 0, v12, (unsigned int)v70) )
    goto LABEL_10;
  if ( !v62 )
    KeBugCheckEx(0x7Au, 0x20uLL, v70, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v62 + 56) & 0x10) != 0 )
    goto LABEL_11;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v70, v72) && v12 && v65 > (unsigned __int64)&v3[1].Size )
  {
LABEL_10:
    v9 = 1;
  }
  else
  {
    v7 = 1;
    v61 = 1;
  }
LABEL_11:
  v13 = v62;
  if ( v62 )
    *(_DWORD *)(v5 + 680) = v70;
  else
    *(_DWORD *)(v5 + 676) = v70;
LABEL_13:
  Event = 0LL;
  if ( v7 )
    MiSetDeleteOnClose(v13, 1LL);
  v14 = MiSwizzleInvalidPte(0LL);
  v18 = *(_QWORD *)(a1 + 144);
  updated = v14;
  if ( v18 )
    updated = MiTransferSoftwarePte(v14, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12);
  p_Size = v64;
  if ( (unsigned __int64)v64 < v65 )
  {
    do
    {
      Next = p_Size->Next;
      if ( Next == (struct _MDL *)qword_140C4ECA8 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v5, updated, 0);
        v36 = updated;
        if ( qword_140C4DE80 && (updated & 0x10) == 0 )
          v36 = updated & ~qword_140C4DE80;
        v25 = HIDWORD(v36) + 1;
      }
      else
      {
        v22 = 48LL * (_QWORD)Next - 0x58000000000LL;
        v67 = v22;
        v68 = MiLockPageInline(v22, v15, v16, v17);
        if ( (v9 & 1) == 0 )
        {
          if ( (*(_BYTE *)(v22 + 34) & 0x10) == 0 || (*(_DWORD *)(v22 + 16) & 0x400LL) != 0 )
            v9 &= ~2u;
          else
            v9 |= 2u;
        }
        v9 &= 0xFFFFFFF3;
        if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
        {
          v34 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL));
          if ( (v9 & 2) == 0 && (*(_QWORD *)(v22 + 24) & 0x4000000000000000LL) == 0 )
          {
            v35 = *(_BYTE *)(v22 + 34);
            if ( *(_WORD *)(v22 + 32) > 1u )
            {
              *(_BYTE *)(v22 + 34) = v35 | 0x10;
              v9 |= 2u;
            }
            else
            {
              *(_BYTE *)(v22 + 34) = v35 & 0xF8 | 2;
              if ( *(_DWORD *)(v34 + 1288) )
                v9 |= 4u;
              else
                v9 |= 8u;
            }
          }
        }
        v23 = MiWriteCompletePfn(v22, v9);
        _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v68 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << (v68 + 1));
              v43 = (v48 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v48;
              if ( v43 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v68);
        if ( v23 )
          MiReleasePageFileInfo(v5, v23, 0);
        v24 = updated;
        if ( qword_140C4DE80 && (updated & 0x10) == 0 )
          v24 = updated & ~qword_140C4DE80;
        v25 = HIDWORD(v24) + 1;
      }
      updated = MiUpdatePageFileHighInPte(updated, v25);
      p_Size = (struct _MDL *)&v64->Size;
      v64 = p_Size;
    }
    while ( (unsigned __int64)p_Size < v65 );
    v18 = *(_QWORD *)(a1 + 144);
    v7 = v61;
  }
  v26 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v26 )
  {
    v37 = *(unsigned int *)(a1 + 140);
    if ( v18 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v41 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v41->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v26 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v26 >= 0x80000 )
                break;
              v44 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v41->CachedResidentAvailable,
                      v26 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v43 = (_DWORD)CachedResidentAvailable == v44;
              LODWORD(CachedResidentAvailable) = v44;
              if ( v43 )
                goto LABEL_31;
            }
            while ( v44 != -1 && v26 + v44 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v41->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v37 = (int)CachedResidentAvailable - 192 + v26;
          }
        }
      }
      if ( v37 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v37);
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
    MiMakePagefileWriterEntryAvailable((_QWORD *)a1);
    v39 = (struct _KEVENT *)(v5 + 920);
    if ( *(_BYTE *)(v5 + 673) != 1 )
      v39 = 0LL;
    Event = v39;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 1180) += v38;
      Event = v39;
      if ( !*(_BYTE *)(v5 + 674) )
      {
        MiStoreCheckCompleteWriteBatch(v5);
        Event = v39;
      }
    }
  }
  if ( v62 )
  {
    if ( v7 )
    {
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
      if ( Pool )
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v62);
        LODWORD(Pool[1].List.Blink) = v70;
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        Pool->List.Flink = 0LL;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
      }
    }
    v27 = (_QWORD *)MiDecrementModifiedWriteCount(v62, 0);
    if ( v27 )
      MiReleaseControlAreaWaiters(v27);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 624));
    v30 = *(void **)(a1 + 200);
    if ( v30 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v30, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v50 = *(__int64 **)(v5 + 640);
      if ( *v50 != v5 + 632 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 632;
      *(_QWORD *)(a1 + 8) = v50;
      *v50 = a1;
      *(_QWORD *)(v5 + 640) = a1;
      if ( *(_BYTE *)(v5 + 672) == 1 )
      {
        *(_BYTE *)(v5 + 672) = 0;
        KeSignalGate(v5 + 648, 1LL, v28, v29);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
    v31 = 1003LL;
  }
  else
  {
    v31 = 1000LL;
  }
  if ( v70 >= 0 )
  {
    if ( v62 )
      *(_BYTE *)(v5 + 1032) = 0;
    if ( *(_BYTE *)(v31 + v5) )
    {
      v51 = (volatile LONG *)(v5 + 996);
      v52 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v53 = *(_BYTE *)(v31 + v5);
      v54 = v52;
      if ( !v53 )
        goto LABEL_135;
      if ( *(_BYTE *)(v31 + v5 + 2) )
      {
        if ( v53 <= 1u )
          goto LABEL_135;
        *(_BYTE *)(v31 + v5 + 2) = 0;
      }
      else
      {
        v43 = (*(_BYTE *)(v31 + v5 + 1))-- == 1;
        if ( !v43 )
          goto LABEL_135;
        if ( v53 <= 1u )
          goto LABEL_134;
      }
      *(_BYTE *)(v31 + v5) = 0;
      goto LABEL_135;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v70, v72);
    if ( a3 )
    {
      if ( v7 || IsRetryIoStatus )
        goto LABEL_46;
      goto LABEL_45;
    }
    if ( v70 == -1073741740 )
    {
LABEL_45:
      *(_BYTE *)(v5 + 1032) = 1;
      goto LABEL_46;
    }
    if ( IsRetryIoStatus )
    {
      v51 = (volatile LONG *)(v5 + 996);
      v55 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v56 = *(_BYTE *)(v31 + v5);
      v54 = v55;
      if ( !v56 )
      {
        *(_WORD *)(v31 + v5) = 4112;
        goto LABEL_135;
      }
      if ( v56 > 1u )
        *(_BYTE *)(v31 + v5) = v56 >> 1;
      if ( *(_BYTE *)(v31 + v5 + 2) )
        goto LABEL_135;
      v43 = (*(_BYTE *)(v31 + v5 + 1))-- == 1;
      if ( !v43 )
        goto LABEL_135;
LABEL_134:
      *(_BYTE *)(v31 + v5 + 2) = 1;
LABEL_135:
      ExReleaseSpinLockExclusiveFromDpcLevel(v51);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && (unsigned __int8)v54 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v59 = v58->SchedulerAssist;
            v60 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
            v43 = (v60 & v59[5]) == 0;
            v59[5] &= v60;
            if ( v43 )
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
      }
      __writecr8(v54);
    }
  }
LABEL_46:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
