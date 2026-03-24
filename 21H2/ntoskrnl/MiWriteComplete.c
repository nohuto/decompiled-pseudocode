/*
 * XREFs of MiWriteComplete @ 0x140255170
 * Callers:
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1402D2AD0 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     FsRtlReleaseFileForModWrite @ 0x140254F94 (FsRtlReleaseFileForModWrite.c)
 *     MiFreeModWriterEntry @ 0x1402557E8 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140255824 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x1402558E4 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140255928 (MmIsWriteErrorFatal.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x1402CA5E4 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x1402D00F4 (MiMakePagefileWriterEntryAvailable.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402D0220 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1402D25A0 (MiStoreCheckCompleteWriteBatch.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 *     MiWriteCompletePfn @ 0x140325C80 (MiWriteCompletePfn.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiDereferenceControlAreaFile @ 0x1403571E4 (MiDereferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x140357284 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x140357408 (MiDecrementModifiedWriteCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x14052AA14 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x140530CF0 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, unsigned int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  CSHORT MdlFlags; // ax
  int v9; // esi
  unsigned int v10; // edx
  unsigned __int64 v11; // r14
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // r14
  __int64 updated; // rdi
  struct _MDL *p_Size; // rax
  struct _MDL *Next; // rax
  ULONG_PTR v22; // r14
  __int64 v23; // r14
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
  struct _FILE_OBJECT *v37; // rax
  struct _KPRCB *v38; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v40; // zf
  signed __int32 v41; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  __int64 Pool; // rdi
  _QWORD *v47; // rcx
  volatile LONG *v48; // r14
  KIRQL v49; // al
  unsigned __int8 v50; // cl
  unsigned __int64 v51; // rsi
  KIRQL v52; // al
  unsigned __int8 v53; // cl
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  int v58; // [rsp+30h] [rbp-78h]
  __int64 v59; // [rsp+38h] [rbp-70h]
  struct _KEVENT *Event; // [rsp+40h] [rbp-68h]
  struct _MDL *v61; // [rsp+48h] [rbp-60h]
  unsigned __int64 v62; // [rsp+50h] [rbp-58h]
  __int64 v63; // [rsp+58h] [rbp-50h] BYREF
  ULONG_PTR v64; // [rsp+60h] [rbp-48h]
  unsigned __int8 v65; // [rsp+B0h] [rbp+8h]
  struct _FILE_OBJECT *v66; // [rsp+B0h] [rbp+8h]
  int v67; // [rsp+B8h] [rbp+10h]
  int v69; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v69 = *(_DWORD *)(a1 + 136);
  v7 = 0;
  v58 = 0;
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
  v67 = v10;
  v59 = *(_QWORD *)(a1 + 160);
  if ( !v59 )
  {
    v63 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v63, 5, 0, v10);
    v10 = v67;
  }
  v61 = v3 + 1;
  v62 = (unsigned __int64)&v3[1] + 8 * ((v69 & 0xFFF) != 0) + 8 * (v69 >> 12);
  if ( v11 )
  {
    v37 = *(struct _FILE_OBJECT **)(a1 + 152);
    v66 = v37;
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(v37->SectionObjectPointer, *(_QWORD *)(a1 + 176), (unsigned int)v69, v10);
      v37 = v66;
    }
    FsRtlReleaseFileForModWrite(v37, (struct _ERESOURCE *)v11);
    MiDereferenceControlAreaFile(v59, v66);
  }
  if ( v67 >= 0 )
  {
    v13 = v59;
    goto LABEL_13;
  }
  v12 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v59 != 0, v12, (unsigned int)v67) )
    goto LABEL_10;
  if ( !v59 )
    KeBugCheckEx(0x7Au, 0x20uLL, v67, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v59 + 56) & 0x10) != 0 )
    goto LABEL_11;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v67, v69) && v12 && v62 > (unsigned __int64)&v3[1].Size )
  {
LABEL_10:
    v9 = 1;
  }
  else
  {
    v7 = 1;
    v58 = 1;
  }
LABEL_11:
  v13 = v59;
  if ( v59 )
    *(_DWORD *)(v5 + 680) = v67;
  else
    *(_DWORD *)(v5 + 676) = v67;
LABEL_13:
  Event = 0LL;
  if ( v7 )
    MiSetDeleteOnClose(v13, 1LL);
  v14 = MiSwizzleInvalidPte(0LL);
  v18 = *(_QWORD *)(a1 + 144);
  updated = v14;
  if ( v18 )
    updated = MiTransferSoftwarePte(v14, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12, 1LL);
  p_Size = v61;
  if ( (unsigned __int64)v61 < v62 )
  {
    do
    {
      Next = p_Size->Next;
      if ( Next == (struct _MDL *)qword_140C4ED68 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v5, updated, 0LL);
        v34 = updated;
        if ( qword_140C4DF40 && (updated & 0x10) == 0 )
          v34 = updated & ~qword_140C4DF40;
        v25 = HIDWORD(v34) + 1;
      }
      else
      {
        v22 = 48LL * (_QWORD)Next - 0x58000000000LL;
        v64 = v22;
        v65 = MiLockPageInline(v22, v15, v16);
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
          v32 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v22 + 40) >> 39) & 0x3FFLL));
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
        v23 = MiWriteCompletePfn(v22);
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v65 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << (v65 + 1));
              v40 = (v45 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v45;
              if ( v40 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v65);
        if ( v23 )
          MiReleasePageFileInfo(v5, v23, 0LL);
        v24 = updated;
        if ( qword_140C4DF40 && (updated & 0x10) == 0 )
          v24 = updated & ~qword_140C4DF40;
        v25 = HIDWORD(v24) + 1;
      }
      updated = MiUpdatePageFileHighInPte(updated, v25);
      p_Size = (struct _MDL *)&v61->Size;
      v61 = p_Size;
    }
    while ( (unsigned __int64)p_Size < v62 );
    v18 = *(_QWORD *)(a1 + 144);
    v7 = v58;
  }
  v26 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v26 )
  {
    v17 = *(unsigned int *)(a1 + 140);
    if ( v18 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v38 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v38->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v26 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v26 >= 0x80000 )
                break;
              v41 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v38->CachedResidentAvailable,
                      v26 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v40 = (_DWORD)CachedResidentAvailable == v41;
              LODWORD(CachedResidentAvailable) = v41;
              if ( v40 )
                goto LABEL_31;
            }
            while ( v41 != -1 && v26 + v41 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v38->CachedResidentAvailable,
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
      MiReleaseWriteInProgressCharges(v5, *(unsigned int *)(a1 + 140), 1LL, v17);
    }
  }
LABEL_31:
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v5 + 692);
    MiMakePagefileWriterEntryAvailable(a1);
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
  if ( v59 )
  {
    if ( v7 )
    {
      Pool = MiAllocatePool(64LL, 56LL, 1885629773LL, v17);
      if ( Pool )
      {
        *(_QWORD *)(Pool + 32) = MiReferenceControlAreaFile(v59);
        *(_DWORD *)(Pool + 40) = v67;
        *(_BYTE *)(Pool + 48) = 1;
        *(_QWORD *)(Pool + 16) = MiLdwPopupWorker;
        *(_QWORD *)(Pool + 24) = Pool;
        *(_QWORD *)Pool = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool, DelayedWorkQueue);
      }
    }
    v27 = MiDecrementModifiedWriteCount(v59, 0LL);
    if ( v27 )
      MiReleaseControlAreaWaiters(v27);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 624));
    v28 = *(void **)(a1 + 200);
    if ( v28 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v28, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v47 = *(_QWORD **)(v5 + 640);
      if ( *v47 != v5 + 632 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 632;
      *(_QWORD *)(a1 + 8) = v47;
      *v47 = a1;
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
    v29 = 1003LL;
  }
  else
  {
    v29 = 1000LL;
  }
  if ( v67 >= 0 )
  {
    if ( v59 )
      *(_BYTE *)(v5 + 1032) = 0;
    if ( *(_BYTE *)(v29 + v5) )
    {
      v48 = (volatile LONG *)(v5 + 996);
      v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v50 = *(_BYTE *)(v29 + v5);
      v51 = v49;
      if ( !v50 )
        goto LABEL_136;
      if ( *(_BYTE *)(v29 + v5 + 2) )
      {
        if ( v50 <= 1u )
          goto LABEL_136;
        *(_BYTE *)(v29 + v5 + 2) = 0;
      }
      else
      {
        v40 = (*(_BYTE *)(v29 + v5 + 1))-- == 1;
        if ( !v40 )
          goto LABEL_136;
        if ( v50 <= 1u )
          goto LABEL_135;
      }
      *(_BYTE *)(v29 + v5) = 0;
      goto LABEL_136;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v67, v69);
    if ( a3 )
    {
      if ( v7 || IsRetryIoStatus )
        goto LABEL_46;
      goto LABEL_45;
    }
    if ( v67 == -1073741740 )
    {
LABEL_45:
      *(_BYTE *)(v5 + 1032) = 1;
      goto LABEL_46;
    }
    if ( IsRetryIoStatus )
    {
      v48 = (volatile LONG *)(v5 + 996);
      v52 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v53 = *(_BYTE *)(v29 + v5);
      v51 = v52;
      if ( !v53 )
      {
        *(_WORD *)(v29 + v5) = 4112;
        goto LABEL_136;
      }
      if ( v53 > 1u )
        *(_BYTE *)(v29 + v5) = v53 >> 1;
      if ( *(_BYTE *)(v29 + v5 + 2) )
        goto LABEL_136;
      v40 = (*(_BYTE *)(v29 + v5 + 1))-- == 1;
      if ( !v40 )
        goto LABEL_136;
LABEL_135:
      *(_BYTE *)(v29 + v5 + 2) = 1;
LABEL_136:
      ExReleaseSpinLockExclusiveFromDpcLevel(v48);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && (unsigned __int8)v51 <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
            v40 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v40 )
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
      }
      __writecr8(v51);
    }
  }
LABEL_46:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
