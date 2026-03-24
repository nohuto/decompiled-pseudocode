/*
 * XREFs of HalpDmaFreeChildAdapter @ 0x14036D1C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     MmFreeContiguousMemory @ 0x140295F20 (MmFreeContiguousMemory.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     MiFreePagesFromMdl @ 0x1402FF4EC (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140379460 (HalpMmAllocCtxFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpLeaveDmaDomain @ 0x1404C4EAC (HalpLeaveDmaDomain.c)
 *     HalpDmaReturnPageToSource @ 0x1404C7FC4 (HalpDmaReturnPageToSource.c)
 *     HalpIommuDeleteDevice @ 0x140864C50 (HalpIommuDeleteDevice.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall HalpDmaFreeChildAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  struct _MDL *v4; // rcx
  __int64 *v5; // rbx
  KIRQL v6; // al
  __int64 **v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rbx
  void *v21; // rcx
  unsigned int i; // ebx
  __int64 *v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rbx
  void *v29; // rbx
  void *v30; // rcx
  __int64 v31; // rdx

  v4 = *(struct _MDL **)(a1 + 296);
  if ( v4 )
  {
    IoFreeMdl(v4);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v5 = (__int64 *)(a1 + 456);
  if ( *(_QWORD *)(a1 + 456) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&HalpDmaAdapterListLock);
    v7 = *(__int64 ***)(a1 + 464);
    v8 = v6;
    v9 = (__int64 *)*v5;
    if ( *(__int64 **)(*v5 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = (__int64)v7;
    KxReleaseSpinLock(&HalpDmaAdapterListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)v14 & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  if ( *(_QWORD *)(a1 + 504) )
  {
    *(_BYTE *)(a1 + 516) = 0;
    HalpLeaveDmaDomain(a1);
  }
  v10 = *(_QWORD *)(a1 + 536);
  if ( v10 )
  {
    HalpIommuDeleteDevice();
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 432) && !*(_BYTE *)(a1 + 337) )
  {
    if ( !*(_BYTE *)(a1 + 434) )
    {
      v16 = *(__int64 **)(a1 + 40);
      v17 = v16[2];
      if ( (*(_BYTE *)(v17 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *((_DWORD *)v16 + 2); ++i )
            HalpDmaReturnPageToSource(a1);
          v23 = (__int64 *)*v16;
          HalpMmAllocCtxFree(v10, v16);
          v16 = v23;
        }
        while ( v23 );
      }
      else
      {
        HalpMmAllocCtxFree(v10, v17);
        HalpMmAllocCtxFree(v18, v16);
        v20 = *(void **)(a1 + 320);
        if ( *(_BYTE *)(a1 + 336) )
        {
          if ( v20 )
          {
            v21 = *(void **)(a1 + 328);
            if ( v21 )
              MmUnmapLockedPages(v21, *(PMDL *)(a1 + 320));
            MiFreePagesFromMdl((ULONG_PTR)v20, 0, v19);
            ExFreePoolWithTag(v20, 0);
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 320));
        }
      }
      v24 = *(_QWORD *)(a1 + 16);
      goto LABEL_43;
    }
    v25 = *(_DWORD *)(a1 + 32);
    v26 = *(_QWORD *)(a1 + 24);
    if ( v25 )
    {
      v27 = v25;
      do
      {
        v28 = *(_QWORD *)(v26 + 8);
        HalpDmaReturnPageToSource(a1);
        v26 = v28;
        --v27;
      }
      while ( v27 );
    }
    v29 = *(void **)(a1 + 320);
    if ( v29 )
    {
      v30 = *(void **)(a1 + 328);
      if ( v30 )
        MmUnmapLockedPages(v30, *(PMDL *)(a1 + 320));
      MiFreePagesFromMdl((ULONG_PTR)v29, 0, a3);
      ExFreePoolWithTag(v29, 0);
    }
    v31 = *(_QWORD *)(a1 + 48);
    if ( v31 )
    {
      HalpMmAllocCtxFree(v10, *(_QWORD *)(v31 + 16));
      v24 = *(_QWORD *)(a1 + 48);
LABEL_43:
      HalpMmAllocCtxFree(v10, v24);
    }
  }
}
