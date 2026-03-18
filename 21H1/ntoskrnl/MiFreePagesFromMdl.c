/*
 * XREFs of MiFreePagesFromMdl @ 0x140346FD4
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1402DEEBC (EtwpAllocateTraceBuffer.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402FE1E4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MmFreePagesFromMdl @ 0x14031FCB0 (MmFreePagesFromMdl.c)
 *     EtwpFreeTraceBuffer @ 0x14033FF1C (EtwpFreeTraceBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x14036A1F0 (HalpDmaFreeChildAdapter.c)
 *     MmFreePagesFromMdlEx @ 0x14037F2B0 (MmFreePagesFromMdlEx.c)
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140399064 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403C9844 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C03A0 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C0CC0 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferThin @ 0x1404C59D0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C5F10 (HalpAllocateCommonBufferThin.c)
 *     MiReturnMdlExcess @ 0x14052E68C (MiReturnMdlExcess.c)
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140596050 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AA9B8 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AAA78 (EtwpFreePartitionMemory.c)
 *     MiFreeCombineMdls @ 0x140712C88 (MiFreeCombineMdls.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140A4027C (KiComputeNumaCosts.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14027DBC0 (MmUnmapLockedPages.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFreeMdlPageRun @ 0x1403468F8 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     MiRetardMdl @ 0x14052B1D0 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x14052E578 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  int v4; // r15d
  __int64 v5; // rdx
  PVOID v6; // rcx
  PVOID v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int16 v14; // ax
  ULONG_PTR *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rsi
  int v20; // r13d
  ULONG_PTR v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  ULONG_PTR *v27; // rax
  unsigned __int8 v28; // al
  unsigned __int64 v29; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned int v35; // r15d
  int v36; // r15d
  _QWORD *v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR *v42; // rcx
  ULONG_PTR *result; // rax
  __int64 v44; // rbx
  ULONG_PTR *v45; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v46; // [rsp+38h] [rbp-50h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  ULONG_PTR *v48; // [rsp+48h] [rbp-40h]
  char v49; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+98h] [rbp+10h]
  __int64 v51; // [rsp+A0h] [rbp+18h]
  int v52; // [rsp+A8h] [rbp+20h]

  v50 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v49 = 0;
  v45 = 0LL;
  v4 = 1;
  v52 = 1;
  if ( (v2 & 0x200) != 0 )
  {
    v50 = a2 & 0xFFFFFFFE;
    MiRetardMdl(BugCheckParameter2);
    goto LABEL_11;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      v5 = *(unsigned int *)(BugCheckParameter2 + 40);
      v6 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_8:
      KeZeroPages(v6, v5);
      goto LABEL_11;
    }
    v7 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
    v9 = *(unsigned int *)(BugCheckParameter2 + 40);
    if ( v7 )
    {
      v5 = (unsigned int)v9;
      v6 = v7;
      goto LABEL_8;
    }
    v10 = (_QWORD *)(BugCheckParameter2 + 48);
    for ( i = ((unsigned __int64)((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
             + v9
             + 4095) >> 12; i; --i )
    {
      v12 = MiMapPageInHyperSpaceWorker(*v10, &v49, 0x80000000LL, v8);
      KeZeroPages(v12, 4096LL);
      LOBYTE(v13) = v49;
      MiUnmapPageInHyperSpaceWorker(v12, v13, 0x80000000);
      ++v10;
    }
  }
LABEL_11:
  v14 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v14 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v14 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v14 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v14, 0LL);
  v15 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v16 = 0LL;
  v17 = (*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF;
  v18 = (v17 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(
      BugCheckParameter2 + 48,
      633LL,
      (v17 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12);
  v19 = 0LL;
  v20 = 1;
  if ( !v18 )
    goto LABEL_67;
  do
  {
    v21 = *v15;
    v48 = v15;
    v22 = 48 * *v15;
    v47 = v22;
    v23 = v22 - 0x58000000000LL;
    v24 = *(_QWORD *)(v22 - 0x58000000000LL + 40);
    v51 = v22 - 0x58000000000LL;
    if ( (v24 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v15, v21);
    v25 = (v24 >> 39) & 0x3FF;
    v26 = v24 >> 60;
    LOBYTE(v26) = v26 & 7;
    v27 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v25);
    v46 = v27;
    if ( (_BYTE)v26 == 3 )
    {
      v28 = MiLockPageInline(v23, v26, v22, (_DWORD *)v23);
      v23 = v51;
      v29 = v28;
      *(_QWORD *)(v51 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v28 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (v28 + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v23 = v51;
          }
        }
      }
      __writecr8(v29);
      _InterlockedDecrement64(&qword_140C4DF40);
      v4 = v52;
      v22 = v47;
      v27 = v46;
    }
    if ( v19 )
    {
      LODWORD(v51) = 0;
      if ( v45 != v27 )
      {
        v36 = 1;
        goto LABEL_52;
      }
      v37 = (_QWORD *)qword_140C4EDC0;
      if ( qword_140C4EDC0 && ((*(_QWORD *)(v23 + 40) >> 60) & 7) == 1 )
      {
        v38 = v22 / 48;
        while ( v37 )
        {
          v39 = v37[3];
          if ( v38 < v39 )
          {
            v37 = (_QWORD *)*v37;
          }
          else
          {
            if ( v38 - v39 < v37[4] )
              goto LABEL_51;
            v37 = (_QWORD *)v37[1];
          }
        }
      }
      if ( *(unsigned __int8 *)(v23 + 34) >> 6 == v4 )
      {
        v40 = *(v15 - 1);
        if ( *v15 == v40 + 1 )
        {
          if ( v19 != 1 && v20 != 1 )
          {
            v36 = v51;
            goto LABEL_55;
          }
          v20 = 1;
LABEL_46:
          ++v19;
          goto LABEL_64;
        }
        if ( *v15 == v40 - 1 && (v19 == 1 || !v20) )
        {
          v20 = 0;
          goto LABEL_46;
        }
      }
LABEL_51:
      v36 = v51;
LABEL_52:
      if ( v20 == 1 )
      {
        v41 = v15[-v19];
LABEL_56:
        v16 += MiFreeMdlPageRun(v41, v19, v50);
        if ( v36 )
        {
          if ( v16 )
          {
            if ( v45 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_140C4EEF8, -v16);
            v16 = 0LL;
          }
          v45 = v46;
        }
        v19 = 1LL;
        v35 = *(unsigned __int8 *)(v47 - 0x58000000000LL + 34);
        goto LABEL_63;
      }
LABEL_55:
      v41 = *(v15 - 1);
      goto LABEL_56;
    }
    v35 = *(unsigned __int8 *)(v23 + 34);
    v19 = 1LL;
    v45 = v27;
LABEL_63:
    v4 = v35 >> 6;
    v52 = v4;
LABEL_64:
    ++v15;
    --v18;
  }
  while ( v18 );
  if ( v20 == 1 )
  {
LABEL_67:
    v42 = &v15[-v19];
    goto LABEL_68;
  }
  v42 = v48;
LABEL_68:
  result = (ULONG_PTR *)MiFreeMdlPageRun(*v42, v19, v50);
  v44 = (__int64)result + v16;
  if ( v44 )
  {
    result = &MiSystemPartition;
    if ( v45 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140C4EEF8, -v44);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
