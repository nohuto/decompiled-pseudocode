/*
 * XREFs of HalAllocateCommonBufferVector @ 0x1404C5940
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140294640 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14030A23C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaReferenceDomainObject @ 0x1403A1564 (HalpDmaReferenceDomainObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogical @ 0x1404C94B0 (HalpIommuDomainMapLogical.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalAllocateCommonBufferVector(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        MEMORY_CACHING_TYPE a4,
        int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9)
{
  int v9; // edi
  struct _MDL *v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // r15
  unsigned __int8 CurrentIrql; // al
  __int64 v17; // rcx
  void *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // r15
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rcx
  MEMORY_CACHING_TYPE v29; // eax
  struct _MDL *PartitionNodePagesForMdl; // rax
  char *v31; // rax
  __int64 v32; // r8
  char *v33; // rdi
  _QWORD *v34; // rax
  char *v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // r14
  int v38; // edx
  unsigned __int64 v39; // r9
  __int64 *v40; // rbx
  _QWORD *v41; // rbx
  __int64 v42; // rbp
  struct _MDL *v43; // r13
  struct _MDL *Next; // rax
  KIRQL v45; // al
  __int64 *v46; // rcx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v52; // eax
  bool v53; // zf
  __int64 v54; // rcx
  unsigned int Priority; // [rsp+28h] [rbp-90h]
  _QWORD *v56; // [rsp+40h] [rbp-78h]
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-70h]
  __int64 v58; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v59; // [rsp+60h] [rbp-58h]
  __int64 v61; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v62; // [rsp+D0h] [rbp+18h] BYREF
  MEMORY_CACHING_TYPE CacheType; // [rsp+D8h] [rbp+20h]

  CacheType = a4;
  v62 = a3;
  v61 = a2;
  v9 = a3;
  v10 = 0LL;
  v58 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = a2;
  v14 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( a6 )
    return 3221225485LL;
  BugCheckParameter3 = *(_QWORD *)(a1 + 504);
  if ( (int)HalpDmaReferenceDomainObject(BugCheckParameter3) < 0 )
    return 3221225626LL;
  v18 = (void *)HalpMmAllocCtxAlloc(v17, 72LL);
  v19 = (__int64)v18;
  if ( !v18 )
  {
    v33 = 0LL;
    goto LABEL_49;
  }
  memset(v18, 0, 0x48uLL);
  v20 = a7;
  v21 = a7;
  *(_QWORD *)(v19 + 32) = BugCheckParameter3;
  v22 = 16 * v21;
  v24 = (_QWORD *)HalpMmAllocCtxAlloc(v23, v22);
  v56 = v24;
  v11 = (__int64)v24;
  if ( !v24 )
    goto LABEL_47;
  memset(v24, 0, v22);
  *(_QWORD *)(v19 + 64) = v11;
  v25 = (a8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( *(_DWORD *)(BugCheckParameter3 + 64) != 2 )
  {
    v27 = 36;
    v28 = 0LL;
    while ( 1LL << v28 < v25 )
    {
      if ( (unsigned __int64)++v28 >= 0x40 )
        goto LABEL_15;
    }
    v25 = 1LL << v28;
LABEL_15:
    if ( 1LL << v28 == v25 )
    {
      v26 = v25;
      goto LABEL_17;
    }
    v11 = (__int64)v56;
LABEL_47:
    v33 = 0LL;
    goto LABEL_31;
  }
  v26 = 0LL;
  v27 = 20;
  v13 = 0;
  v9 = -1;
LABEL_17:
  *(_DWORD *)(v19 + 24) = a7;
  Priority = a5;
  v29 = CacheType;
  v59 = v25 * v20;
  *(_QWORD *)(v19 + 16) = v25;
  PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                              v13,
                                              v9,
                                              v26,
                                              v25 * v20,
                                              v29,
                                              Priority,
                                              v27,
                                              0LL);
  v10 = PartitionNodePagesForMdl;
  if ( !PartitionNodePagesForMdl )
  {
    v33 = 0LL;
    goto LABEL_30;
  }
  v31 = (char *)MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u);
  v33 = v31;
  if ( !v31 )
    goto LABEL_30;
  *(_QWORD *)(v19 + 40) = v10;
  *(_QWORD *)(v19 + 48) = v31;
  if ( v20 )
  {
    v34 = v56;
    v35 = v33;
    v36 = v20;
    do
    {
      *v34 = v35;
      v35 += v25;
      v34 += 2;
      --v36;
    }
    while ( v36 );
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 64) != 2 )
  {
    if ( v20 )
    {
      v41 = v56 + 1;
      v42 = 8 * (v25 >> 12);
      v43 = v10 + 1;
      do
      {
        Next = v43->Next;
        v43 = (struct _MDL *)((char *)v43 + v42);
        *v41 = (_QWORD)Next << 12;
        v41 += 2;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_35;
  }
  v37 = v59;
  if ( (int)HalpDomainLaAllocate(BugCheckParameter3, v59, v32, (int)&v61, (__int64)&v62, (__int64)&v58) < 0 )
  {
    v12 = v58;
    goto LABEL_30;
  }
  v39 = v37 + 4095;
  v12 = v58;
  if ( (int)HalpIommuDomainMapLogical(*(_QWORD *)(BugCheckParameter3 + 40), v38, (int)v10 + 48, v39 >> 12, v58) < 0 )
  {
LABEL_30:
    v11 = (__int64)v56;
LABEL_31:
    v14 = a1;
LABEL_49:
    HalpDmaDereferenceDomainObject((__int64 *)BugCheckParameter3);
    if ( v19 )
      HalpMmAllocCtxFree(v54, v19);
    if ( v11 )
      HalpMmAllocCtxFree(v54, v11);
    if ( v10 )
    {
      if ( v33 )
        MmUnmapLockedPages(v33, v10);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
    }
    if ( v12 )
      HalpDomainLaDelete(*(_QWORD *)(v14 + 504), v12);
    return 3221225626LL;
  }
  if ( v20 )
  {
    v40 = v56 + 1;
    do
    {
      *v40 = v12;
      v12 += v25;
      v40 += 2;
      --v20;
    }
    while ( v20 );
  }
LABEL_35:
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 120));
  v46 = (__int64 *)(BugCheckParameter3 + 104);
  v47 = v45;
  v48 = *(_QWORD *)(BugCheckParameter3 + 104);
  if ( *(_QWORD *)(v48 + 8) != BugCheckParameter3 + 104 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 8) = v46;
  *(_QWORD *)v19 = v48;
  *(_QWORD *)(v48 + 8) = v19;
  *v46 = v19;
  KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 120));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v49 = KeGetCurrentIrql();
      if ( v49 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v49 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
        v53 = (v52 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v52;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v47);
  *a9 = v19;
  return 0LL;
}
