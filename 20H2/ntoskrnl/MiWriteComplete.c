/*
 * XREFs of MiWriteComplete @ 0x140346420
 * Callers:
 *     MiStoreWriteModifiedCompleteApc @ 0x140330960 (MiStoreWriteModifiedCompleteApc.c)
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiDecrementModifiedWriteCount @ 0x14029F534 (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14029F5F4 (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     MI_PAGEFILE_WRITE @ 0x140328EB0 (MI_PAGEFILE_WRITE.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x14032E414 (MiMakePagefileWriterEntryAvailable.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14032E540 (CcNotifyOfMappedWriteComplete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403304A0 (MiStoreCheckCompleteWriteBatch.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     FsRtlReleaseFileForModWrite @ 0x140344298 (FsRtlReleaseFileForModWrite.c)
 *     MmIsWriteErrorFatal @ 0x140344468 (MmIsWriteErrorFatal.c)
 *     MiIsRetryIoStatus @ 0x14034450C (MiIsRetryIoStatus.c)
 *     MiFreeModWriterEntry @ 0x140344D2C (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140344D68 (MiReleaseWriteInProgressCharges.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x140528F14 (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rdi
  __int64 v5; // r13
  int v7; // r15d
  CSHORT MdlFlags; // ax
  int v9; // esi
  int v10; // edx
  unsigned __int64 v11; // r14
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
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
  __int64 v25; // r8
  _DWORD *v26; // r9
  void *v27; // rcx
  __int64 v28; // rdi
  BOOL IsRetryIoStatus; // eax
  LONG result; // eax
  __int64 v31; // rdx
  char v32; // al
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r9
  int v35; // r11d
  struct _KEVENT *v36; // rdi
  unsigned __int64 v37; // rax
  struct _KPRCB *v38; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v40; // zf
  signed __int32 v41; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  struct _WORK_QUEUE_ITEM *Pool; // rdi
  __int64 *v47; // rcx
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
  unsigned __int64 v66; // [rsp+B0h] [rbp+8h]
  NTSTATUS v67; // [rsp+B8h] [rbp+10h]
  signed int v69; // [rsp+C8h] [rbp+20h]

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
    MI_PAGEFILE_WRITE(a1, &v63, 5, 0, v10);
    v10 = v67;
  }
  v61 = v3 + 1;
  v62 = (unsigned __int64)&v3[1] + 8 * ((v69 & 0xFFF) != 0) + 8 * (v69 >> 12);
  if ( v11 )
  {
    v37 = *(_QWORD *)(a1 + 152);
    v66 = v37;
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(*(_QWORD *)(v37 + 40), *(_QWORD *)(a1 + 176), v69, v10);
      v37 = v66;
    }
    FsRtlReleaseFileForModWrite((PFILE_OBJECT)v37, (struct _ERESOURCE *)v11);
    MiDereferenceControlAreaFile(v59, v66);
  }
  if ( v67 >= 0 )
  {
    v13 = v59;
    goto LABEL_13;
  }
  v12 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !MmIsWriteErrorFatal(v59 != 0, v12, v67) )
    goto LABEL_10;
  if ( !v59 )
    KeBugCheckEx(0x7Au, 0x20uLL, v67, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v59 + 56) & 0x10) != 0 )
    goto LABEL_11;
  if ( MiIsRetryIoStatus(v67, v69) && v12 && v62 > (unsigned __int64)&v3[1].Size )
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
  v15 = *(_QWORD *)(a1 + 144);
  updated = v14;
  if ( v15 )
    updated = MiTransferSoftwarePte(v14, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12, 1LL);
  p_Size = v61;
  if ( (unsigned __int64)v61 < v62 )
  {
    do
    {
      Next = p_Size->Next;
      if ( Next == (struct _MDL *)qword_140C4EBE8 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v5, updated, 0);
        v33 = updated;
        if ( qword_140C4DDC0 && (updated & 0x10) == 0 )
          v33 = updated & ~qword_140C4DDC0;
        v22 = HIDWORD(v33) + 1;
      }
      else
      {
        v19 = 48LL * (_QWORD)Next - 0x58000000000LL;
        v64 = v19;
        v65 = MiLockPageInline(v19);
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
          v31 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v19 + 40) >> 39) & 0x3FFLL));
          if ( (v9 & 2) == 0 && (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) == 0 )
          {
            v32 = *(_BYTE *)(v19 + 34);
            if ( *(_WORD *)(v19 + 32) > 1u )
            {
              *(_BYTE *)(v19 + 34) = v32 | 0x10;
              v9 |= 2u;
            }
            else
            {
              *(_BYTE *)(v19 + 34) = v32 & 0xF8 | 2;
              if ( *(_DWORD *)(v31 + 1288) )
                v9 |= 4u;
              else
                v9 |= 8u;
            }
          }
        }
        v20 = MiWriteCompletePfn(v19, v9);
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
        if ( v20 )
          MiReleasePageFileInfo(v5, v20, 0);
        v21 = updated;
        if ( qword_140C4DDC0 && (updated & 0x10) == 0 )
          v21 = updated & ~qword_140C4DDC0;
        v22 = HIDWORD(v21) + 1;
      }
      updated = MiUpdatePageFileHighInPte(updated, v22);
      p_Size = (struct _MDL *)&v61->Size;
      v61 = p_Size;
    }
    while ( (unsigned __int64)p_Size < v62 );
    v15 = *(_QWORD *)(a1 + 144);
    v7 = v58;
  }
  v23 = *(unsigned int *)(a1 + 140);
  if ( (_DWORD)v23 )
  {
    v34 = *(unsigned int *)(a1 + 140);
    if ( v15 )
    {
      if ( (ULONG_PTR *)v5 == &MiSystemPartition )
      {
        v38 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v38->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v23 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v23 >= 0x80000 )
                break;
              v41 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v38->CachedResidentAvailable,
                      v23 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v40 = (_DWORD)CachedResidentAvailable == v41;
              LODWORD(CachedResidentAvailable) = v41;
              if ( v40 )
                goto LABEL_31;
            }
            while ( v41 != -1 && v23 + v41 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&v38->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v34 = (int)CachedResidentAvailable - 192 + v23;
          }
        }
      }
      if ( v34 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 7168), v34);
    }
    else
    {
      MiReleaseWriteInProgressCharges(v5, *(unsigned int *)(a1 + 140), 1);
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
  if ( v59 )
  {
    if ( v7 )
    {
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
      if ( Pool )
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v59);
        LODWORD(Pool[1].List.Blink) = v67;
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        Pool->List.Flink = 0LL;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
      }
    }
    v24 = (_QWORD *)MiDecrementModifiedWriteCount(v59, 0);
    if ( v24 )
      MiReleaseControlAreaWaiters(v24);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 624));
    v27 = *(void **)(a1 + 200);
    if ( v27 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v27, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v47 = *(__int64 **)(v5 + 640);
      if ( *v47 != v5 + 632 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 632;
      *(_QWORD *)(a1 + 8) = v47;
      *v47 = a1;
      *(_QWORD *)(v5 + 640) = a1;
      if ( *(_BYTE *)(v5 + 672) == 1 )
      {
        *(_BYTE *)(v5 + 672) = 0;
        KeSignalGate(v5 + 648, 1LL, v25, v26);
      }
    }
    else
    {
      MiFreeModWriterEntry((_QWORD *)a1, 1u);
    }
    v28 = 1003LL;
  }
  else
  {
    v28 = 1000LL;
  }
  if ( v67 >= 0 )
  {
    if ( v59 )
      *(_BYTE *)(v5 + 1032) = 0;
    if ( *(_BYTE *)(v28 + v5) )
    {
      v48 = (volatile LONG *)(v5 + 996);
      v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 996));
      v50 = *(_BYTE *)(v28 + v5);
      v51 = v49;
      if ( !v50 )
        goto LABEL_136;
      if ( *(_BYTE *)(v28 + v5 + 2) )
      {
        if ( v50 <= 1u )
          goto LABEL_136;
        *(_BYTE *)(v28 + v5 + 2) = 0;
      }
      else
      {
        v40 = (*(_BYTE *)(v28 + v5 + 1))-- == 1;
        if ( !v40 )
          goto LABEL_136;
        if ( v50 <= 1u )
          goto LABEL_135;
      }
      *(_BYTE *)(v28 + v5) = 0;
      goto LABEL_136;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus(v67, v69);
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
      v53 = *(_BYTE *)(v28 + v5);
      v51 = v52;
      if ( !v53 )
      {
        *(_WORD *)(v28 + v5) = 4112;
        goto LABEL_136;
      }
      if ( v53 > 1u )
        *(_BYTE *)(v28 + v5) = v53 >> 1;
      if ( *(_BYTE *)(v28 + v5 + 2) )
        goto LABEL_136;
      v40 = (*(_BYTE *)(v28 + v5 + 1))-- == 1;
      if ( !v40 )
        goto LABEL_136;
LABEL_135:
      *(_BYTE *)(v28 + v5 + 2) = 1;
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
