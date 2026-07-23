/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14036D370
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpLeaveDmaDomain @ 0x1404C50EC (HalpLeaveDmaDomain.c)
 *     HalpDmaReturnPageToSource @ 0x1404C8204 (HalpDmaReturnPageToSource.c)
 *     HalpIommuDeleteDevice @ 0x140864DB0 (HalpIommuDeleteDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1)
{
  struct _MDL *v2; // rcx
  __int64 *v3; // rbx
  KIRQL v4; // al
  __int64 **v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rbx
  void *v18; // rcx
  unsigned int i; // ebx
  __int64 *v20; // rbx
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
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
  v8 = *(_QWORD *)(a1 + 536);
  if ( v8 )
  {
    HalpIommuDeleteDevice();
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 432) && !*(_BYTE *)(a1 + 337) )
  {
    if ( !*(_BYTE *)(a1 + 434) )
    {
      v14 = *(__int64 **)(a1 + 40);
      v15 = v14[2];
      if ( (*(_BYTE *)(v15 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *((_DWORD *)v14 + 2); ++i )
            HalpDmaReturnPageToSource(a1);
          v20 = (__int64 *)*v14;
          HalpMmAllocCtxFree(v8, v14);
          v14 = v20;
        }
        while ( v20 );
      }
      else
      {
        HalpMmAllocCtxFree(v8, v15);
        HalpMmAllocCtxFree(v16, v14);
        v17 = *(void **)(a1 + 320);
        if ( *(_BYTE *)(a1 + 336) )
        {
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
      goto LABEL_43;
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
      HalpMmAllocCtxFree(v8, *(_QWORD *)(v28 + 16));
      v21 = *(_QWORD *)(a1 + 48);
LABEL_43:
      HalpMmAllocCtxFree(v8, v21);
    }
  }
}
