/*
 * XREFs of MiWriteComplete @ 0x1402766E0
 * Callers:
 *     MiStoreWriteModifiedCompleteApc @ 0x140251050 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x140248ED4 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14024E474 (MiMakePagefileWriterEntryAvailable.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14024E5A0 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x140250970 (MiStoreCheckCompleteWriteBatch.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     FsRtlReleaseFileForModWrite @ 0x140276504 (FsRtlReleaseFileForModWrite.c)
 *     MiFreeModWriterEntry @ 0x140276D58 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140276D94 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x140276E54 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140276E98 (MmIsWriteErrorFatal.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140362158 (MiDecrementModifiedWriteCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x14052AC54 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  CSHORT MdlFlags; // ax
  unsigned int v9; // esi
  int v10; // edx
  unsigned __int64 v11; // r14
  unsigned int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  struct _KPRCB *v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // r14
  __int64 updated; // rdi
  struct _MDL *p_Size; // rax
  struct _MDL *Next; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  void *v28; // rcx
  __int64 v29; // rdi
  int IsRetryIoStatus; // eax
  LONG result; // eax
  __int64 v32; // rdx
  char v33; // al
  unsigned __int64 v34; // rdx
  int v35; // r11d
  struct _KEVENT *v36; // rdi
  __int64 v37; // rax
  __int64 CachedResidentAvailable; // rdx
  bool v39; // zf
  signed __int32 v40; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  __int64 Pool; // rdi
  __int64 *v46; // rcx
  volatile LONG *v47; // r14
  KIRQL v48; // al
  unsigned __int8 v49; // cl
  unsigned __int64 v50; // rsi
  KIRQL v51; // al
  unsigned __int8 v52; // cl
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  int v57; // [rsp+30h] [rbp-78h]
  __int64 v58; // [rsp+38h] [rbp-70h]
  struct _KEVENT *Event; // [rsp+40h] [rbp-68h]
  struct _MDL *v60; // [rsp+48h] [rbp-60h]
  unsigned __int64 v61; // [rsp+50h] [rbp-58h]
  __int64 v62; // [rsp+58h] [rbp-50h] BYREF
  __int64 v63; // [rsp+60h] [rbp-48h]
  unsigned __int8 v64; // [rsp+B0h] [rbp+8h]
  __int64 v65; // [rsp+B0h] [rbp+8h]
  int v66; // [rsp+B8h] [rbp+10h]
  signed int v68; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v68 = *(_DWORD *)(a1 + 136);
  v7 = 0;
  v57 = 0;
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
  v66 = v10;
  v58 = *(_QWORD *)(a1 + 160);
  if ( !v58 )
  {
    v62 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, &v62, 5, 0, v10);
    v10 = v66;
  }
  v60 = v3 + 1;
  v61 = (unsigned __int64)&v3[1] + 8 * ((v68 & 0xFFF) != 0) + 8 * (v68 >> 12);
  if ( v11 )
  {
    v37 = *(_QWORD *)(a1 + 152);
    v65 = v37;
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v37 + 40), *(_QWORD *)(a1 + 176), v68, v10);
      v37 = v65;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v37, (struct _ERESOURCE *)v11);
    MiDereferenceControlAreaFile(v58, v65);
  }
  if ( v66 >= 0 )
  {
    v14 = v58;
    goto LABEL_13;
  }
  v12 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v58 != 0, v12, (unsigned int)v66) )
    goto LABEL_10;
  if ( !v58 )
    KeBugCheckEx(0x7Au, 0x20uLL, v66, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v58 + 56) & 0x10) != 0 )
    goto LABEL_11;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v66, v68, v13) && v12 && v61 > (unsigned __int64)&v3[1].Size )
  {
LABEL_10:
    v9 = 1;
  }
  else
  {
    v7 = 1;
    v57 = 1;
  }
LABEL_11:
  v14 = v58;
  if ( v58 )
    *(_DWORD *)(v5 + 680) = v66;
  else
    *(_DWORD *)(v5 + 676) = v66;
LABEL_13:
  Event = 0LL;
  if ( v7 )
    MiSetDeleteOnClose(v14, 1LL);
  v15 = MiSwizzleInvalidPte(0LL);
  v18 = *(_QWORD *)(a1 + 144);
  updated = v15;
  if ( v18 )
    updated = MiTransferSoftwarePte(v15, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12);
  p_Size = v60;
  if ( (unsigned __int64)v60 < v61 )
  {
    do
    {
      Next = p_Size->Next;
      if ( Next == (struct _MDL *)qword_140C4EDA8 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v5, updated, 0);
        v34 = updated;
        if ( qword_140C4DF80 && (updated & 0x10) == 0 )
          v34 = updated & ~qword_140C4DF80;
        v25 = HIDWORD(v34) + 1;
      }
      else
      {
        v22 = 48LL * (_QWORD)Next - 0x58000000000LL;
        v63 = v22;
        v64 = MiLockPageInline(v22);
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
          v32 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL));
          if ( (v9 & 2) == 0 && (*(_QWORD *)(v22 + 24) & 0x4000000000000000LL) == 0 )
          {
            v33 = *(_BYTE *)(v22 + 34);
            if ( *(_WORD *)(v22 + 32) > 1u )
            {
              *(_BYTE *)(v22 + 34) = v33 | 0x10;
              v9 |= 2u;
            }
            else
            {
              *(_BYTE *)(v22 + 34) = v33 & 0xF8 | 2;
              if ( *(_DWORD *)(v32 + 1288) )
                v9 |= 4u;
              else
                v9 |= 8u;
            }
          }
        }
        v23 = MiWriteCompletePfn(v22, v9);
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v64 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (v64 + 1));
              v39 = (v44 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v44;
              if ( v39 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v64);
        if ( v23 )
          MiReleasePageFileInfo(v5, v23, 0);
        v24 = updated;
        if ( qword_140C4DF80 && (updated & 0x10) == 0 )
          v24 = updated & ~qword_140C4DF80;
        v25 = HIDWORD(v24) + 1;
      }
      updated = MiUpdatePageFileHighInPte(updated, v25);
      p_Size = (struct _MDL *)&v60->Size;
      v60 = p_Size;
    }
    while ( (unsigned __int64)p_Size < v61 );
    v18 = *(_QWORD *)(a1 + 144);
    v7 = v57;
  }
  v26 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v26 )
  {
    v17 = *(unsigned int *)(a1 + 140);
    if ( v18 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v16 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v16->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v26 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v26 >= 0x80000 )
                break;
              v40 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v16->CachedResidentAvailable,
                      v26 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v39 = (_DWORD)CachedResidentAvailable == v40;
              LODWORD(CachedResidentAvailable) = v40;
              if ( v39 )
                goto LABEL_31;
            }
            while ( v40 != -1 && v26 + v40 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v16->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v17 = (int)CachedResidentAvailable - 192 + v26;
          }
        }
      }
      if ( v17 )
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v17);
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
    v36 = (struct _KEVENT *)(v5 + 920);
    if ( *(_BYTE *)(v5 + 673) != 1 )
      v36 = 0LL;
    Event = v36;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 1180) += v35;
      Event = v36;
      if ( !*(_BYTE *)(v5 + 674) )
      {
        MiStoreCheckCompleteWriteBatch(v5);
        Event = v36;
      }
    }
  }
  if ( v58 )
  {
    if ( v7 )
    {
      Pool = MiAllocatePool(64LL, 56LL, 1885629773LL, v17);
      if ( Pool )
      {
        *(_QWORD *)(Pool + 32) = MiReferenceControlAreaFile(v58);
        *(_DWORD *)(Pool + 40) = v66;
        *(_BYTE *)(Pool + 48) = 1;
        *(_QWORD *)(Pool + 16) = MiLdwPopupWorker;
        *(_QWORD *)(Pool + 24) = Pool;
        *(_QWORD *)Pool = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool, DelayedWorkQueue);
      }
    }
    v27 = MiDecrementModifiedWriteCount(v58, 0LL);
    if ( v27 )
      MiReleaseControlAreaWaiters(v27);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 624));
    v28 = *(void **)(a1 + 200);
    if ( v28 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v28, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v46 = *(__int64 **)(v5 + 640);
      if ( *v46 != v5 + 632 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 632;
      *(_QWORD *)(a1 + 8) = v46;
      *v46 = a1;
      *(_QWORD *)(v5 + 640) = a1;
      if ( *(_BYTE *)(v5 + 672) == 1 )
      {
        *(_BYTE *)(v5 + 672) = 0;
        KeSignalGate(v5 + 648, 1);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
    v29 = 1003LL;
  }
  else
  {
    v29 = 1000LL;
  }
  if ( v66 >= 0 )
  {
    if ( v58 )
      *(_BYTE *)(v5 + 1032) = 0;
    if ( *(_BYTE *)(v29 + v5) )
    {
      v47 = (volatile LONG *)(v5 + 996);
      v48 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v49 = *(_BYTE *)(v29 + v5);
      v50 = v48;
      if ( !v49 )
        goto LABEL_136;
      if ( *(_BYTE *)(v29 + v5 + 2) )
      {
        if ( v49 <= 1u )
          goto LABEL_136;
        *(_BYTE *)(v29 + v5 + 2) = 0;
      }
      else
      {
        v39 = (*(_BYTE *)(v29 + v5 + 1))-- == 1;
        if ( !v39 )
          goto LABEL_136;
        if ( v49 <= 1u )
          goto LABEL_135;
      }
      *(_BYTE *)(v29 + v5) = 0;
      goto LABEL_136;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v66, v68, v16);
    if ( a3 )
    {
      if ( v7 || IsRetryIoStatus )
        goto LABEL_46;
      goto LABEL_45;
    }
    if ( v66 == -1073741740 )
    {
LABEL_45:
      *(_BYTE *)(v5 + 1032) = 1;
      goto LABEL_46;
    }
    if ( IsRetryIoStatus )
    {
      v47 = (volatile LONG *)(v5 + 996);
      v51 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v52 = *(_BYTE *)(v29 + v5);
      v50 = v51;
      if ( !v52 )
      {
        *(_WORD *)(v29 + v5) = 4112;
        goto LABEL_136;
      }
      if ( v52 > 1u )
        *(_BYTE *)(v29 + v5) = v52 >> 1;
      if ( *(_BYTE *)(v29 + v5 + 2) )
        goto LABEL_136;
      v39 = (*(_BYTE *)(v29 + v5 + 1))-- == 1;
      if ( !v39 )
        goto LABEL_136;
LABEL_135:
      *(_BYTE *)(v29 + v5 + 2) = 1;
LABEL_136:
      ExReleaseSpinLockExclusiveFromDpcLevel(v47);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v53 = KeGetCurrentIrql();
          if ( v53 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v53 >= 2u )
          {
            v54 = KeGetCurrentPrcb();
            v55 = v54->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
            v39 = (v56 & v55[5]) == 0;
            v55[5] &= v56;
            if ( v39 )
              KiRemoveSystemWorkPriorityKick(v54);
          }
        }
      }
      __writecr8(v50);
    }
  }
LABEL_46:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
