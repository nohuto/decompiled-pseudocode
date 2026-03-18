/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x140513870
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaReturnPageToSource @ 0x140513BCC (HalpDmaReturnPageToSource.c)
 *     HalpLeaveDmaDomain @ 0x14051541C (HalpLeaveDmaDomain.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 *v3; // rbx
  KIRQL v4; // al
  __int64 **v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rbx
  void *v18; // rcx
  unsigned int i; // ebx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rbx
  void *v26; // rbx
  void *v27; // rcx
  __int64 v28; // rdx

  v2 = *(struct _MDL **)(a1 + 296);
  if ( v2 )
  {
    IoFreeMdl(v2);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v3 = (__int64 *)(a1 + 456);
  if ( *(_QWORD *)(a1 + 456) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v5 = *(__int64 ***)(a1 + 464);
    v6 = v4;
    v7 = (__int64 *)*v3;
    if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = (__int64)v5;
    KxReleaseSpinLock(&HalpDmaAdapterListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  if ( *(_QWORD *)(a1 + 504) )
  {
    *(_BYTE *)(a1 + 516) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v13 = *(_QWORD *)(a1 + 536);
  if ( v13 )
  {
    ((void (*)(void))qword_140C4BE18)();
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 432) && !*(_BYTE *)(a1 + 337) )
  {
    if ( !*(_BYTE *)(a1 + 434) )
    {
      v14 = *(_QWORD *)(a1 + 40);
      v15 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)(v15 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v14 + 8); ++i )
            HalpDmaReturnPageToSource(a1);
          v20 = *(_QWORD *)v14;
          HalpMmAllocCtxFree(v13, v14);
          v14 = v20;
        }
        while ( v20 );
      }
      else
      {
        HalpMmAllocCtxFree(v13, v15);
        HalpMmAllocCtxFree(v16, v14);
        if ( *(_BYTE *)(a1 + 336) )
        {
          v17 = *(void **)(a1 + 320);
          if ( v17 )
          {
            v18 = *(void **)(a1 + 328);
            if ( v18 )
              MmUnmapLockedPages(v18, *(PMDL *)(a1 + 320));
            MiFreePagesFromMdl((ULONG_PTR)v17, 0);
            ExFreePoolWithTag(v17, 0);
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 320));
        }
      }
      v21 = *(_QWORD *)(a1 + 16);
      goto LABEL_42;
    }
    v22 = *(_DWORD *)(a1 + 32);
    v23 = *(_QWORD *)(a1 + 24);
    if ( v22 )
    {
      v24 = v22;
      do
      {
        v25 = *(_QWORD *)(v23 + 8);
        HalpDmaReturnPageToSource(a1);
        v23 = v25;
        --v24;
      }
      while ( v24 );
    }
    v26 = *(void **)(a1 + 320);
    if ( v26 )
    {
      v27 = *(void **)(a1 + 328);
      if ( v27 )
        MmUnmapLockedPages(v27, *(PMDL *)(a1 + 320));
      MiFreePagesFromMdl((ULONG_PTR)v26, 0);
      ExFreePoolWithTag(v26, 0);
    }
    v28 = *(_QWORD *)(a1 + 48);
    if ( v28 )
    {
      HalpMmAllocCtxFree(v13, *(_QWORD *)(v28 + 16));
      v21 = *(_QWORD *)(a1 + 48);
LABEL_42:
      HalpMmAllocCtxFree(v13, v21);
    }
  }
}
