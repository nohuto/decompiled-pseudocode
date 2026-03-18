/*
 * XREFs of MiFreePagesFromMdl @ 0x14034E438
 * Callers:
 *     MmFreePagesFromMdl @ 0x14032E320 (MmFreePagesFromMdl.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14035A68C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     EtwpFreeTraceBuffer @ 0x1403604A4 (EtwpFreeTraceBuffer.c)
 *     EtwpAllocateTraceBuffer @ 0x140360E40 (EtwpAllocateTraceBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     MmFreePagesFromMdlEx @ 0x1403819D0 (MmFreePagesFromMdlEx.c)
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039BCB4 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CD264 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C4650 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferThin @ 0x1404C93E0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     MiReturnMdlExcess @ 0x1405326AC (MiReturnMdlExcess.c)
 *     MiFreePhysicalPageChain @ 0x14054A0E8 (MiFreePhysicalPageChain.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059A1E0 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AEC08 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AECC8 (EtwpFreePartitionMemory.c)
 *     MiFreeCombineMdls @ 0x140722FD4 (MiFreeCombineMdls.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DD1B8 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140A4BD40 (KiComputeNumaCosts.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140295370 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiFreeMdlPageRun @ 0x14034E304 (MiFreeMdlPageRun.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 *     MiRetardMdl @ 0x14052F1F0 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x140532598 (MiLogMdlRangeEvent.c)
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
  __int64 *v10; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v12; // rbx
  __int16 v13; // ax
  ULONG_PTR *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rsi
  int v19; // r13d
  ULONG_PTR v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  ULONG_PTR *v26; // rax
  unsigned __int8 v27; // al
  unsigned __int64 v28; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned int v34; // r15d
  int v35; // r15d
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  ULONG_PTR v40; // rcx
  ULONG_PTR *v41; // rcx
  ULONG_PTR *result; // rax
  __int64 v43; // rbx
  ULONG_PTR *v44; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v45; // [rsp+38h] [rbp-50h]
  __int64 v46; // [rsp+40h] [rbp-48h]
  ULONG_PTR *v47; // [rsp+48h] [rbp-40h]
  unsigned __int8 v48; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v49; // [rsp+98h] [rbp+10h]
  __int64 v50; // [rsp+A0h] [rbp+18h]
  int v51; // [rsp+A8h] [rbp+20h]

  v49 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v48 = 0;
  v44 = 0LL;
  v4 = 1;
  v51 = 1;
  if ( (v2 & 0x200) != 0 )
  {
    v49 = a2 & 0xFFFFFFFE;
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
    v10 = (__int64 *)(BugCheckParameter2 + 48);
    for ( i = ((unsigned __int64)((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
             + v9
             + 4095) >> 12; i; --i )
    {
      v12 = MiMapPageInHyperSpaceWorker(*v10, &v48, 0x80000000, v8);
      KeZeroPages(v12, 4096LL);
      MiUnmapPageInHyperSpaceWorker(v12, v48, 0x80000000);
      ++v10;
    }
  }
LABEL_11:
  v13 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v13 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v13 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v13 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v13, 0LL);
  v14 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v15 = 0LL;
  v16 = (*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF;
  v17 = (v16 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(
      BugCheckParameter2 + 48,
      633LL,
      (v16 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12);
  v18 = 0LL;
  v19 = 1;
  if ( !v17 )
    goto LABEL_67;
  do
  {
    v20 = *v14;
    v47 = v14;
    v21 = 48 * *v14;
    v46 = v21;
    v22 = v21 - 0x58000000000LL;
    v23 = *(_QWORD *)(v21 - 0x58000000000LL + 40);
    v50 = v21 - 0x58000000000LL;
    if ( (v23 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v14, v20);
    v24 = (v23 >> 39) & 0x3FF;
    v25 = v23 >> 60;
    LOBYTE(v25) = v25 & 7;
    v26 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * v24);
    v45 = v26;
    if ( (_BYTE)v25 == 3 )
    {
      v27 = MiLockPageInline(v22, v25, v21, (_DWORD *)v22);
      v22 = v50;
      v28 = v27;
      *(_QWORD *)(v50 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v27 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v27 + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v22 = v50;
          }
        }
      }
      __writecr8(v28);
      _InterlockedDecrement64(&qword_140C4DE80);
      v4 = v51;
      v21 = v46;
      v26 = v45;
    }
    if ( v18 )
    {
      LODWORD(v50) = 0;
      if ( v44 != v26 )
      {
        v35 = 1;
        goto LABEL_52;
      }
      v36 = (_QWORD *)qword_140C4ED00;
      if ( qword_140C4ED00 && ((*(_QWORD *)(v22 + 40) >> 60) & 7) == 1 )
      {
        v37 = v21 / 48;
        while ( v36 )
        {
          v38 = v36[3];
          if ( v37 < v38 )
          {
            v36 = (_QWORD *)*v36;
          }
          else
          {
            if ( v37 - v38 < v36[4] )
              goto LABEL_51;
            v36 = (_QWORD *)v36[1];
          }
        }
      }
      if ( *(unsigned __int8 *)(v22 + 34) >> 6 == v4 )
      {
        v39 = *(v14 - 1);
        if ( *v14 == v39 + 1 )
        {
          if ( v18 != 1 && v19 != 1 )
          {
            v35 = v50;
            goto LABEL_55;
          }
          v19 = 1;
LABEL_46:
          ++v18;
          goto LABEL_64;
        }
        if ( *v14 == v39 - 1 && (v18 == 1 || !v19) )
        {
          v19 = 0;
          goto LABEL_46;
        }
      }
LABEL_51:
      v35 = v50;
LABEL_52:
      if ( v19 == 1 )
      {
        v40 = v14[-v18];
LABEL_56:
        v15 += MiFreeMdlPageRun(v40, v18, v49);
        if ( v35 )
        {
          if ( v15 )
          {
            if ( v44 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_140C4EE38, -v15);
            v15 = 0LL;
          }
          v44 = v45;
        }
        v18 = 1LL;
        v34 = *(unsigned __int8 *)(v46 - 0x58000000000LL + 34);
        goto LABEL_63;
      }
LABEL_55:
      v40 = *(v14 - 1);
      goto LABEL_56;
    }
    v34 = *(unsigned __int8 *)(v22 + 34);
    v18 = 1LL;
    v44 = v26;
LABEL_63:
    v4 = v34 >> 6;
    v51 = v4;
LABEL_64:
    ++v14;
    --v17;
  }
  while ( v17 );
  if ( v19 == 1 )
  {
LABEL_67:
    v41 = &v14[-v18];
    goto LABEL_68;
  }
  v41 = v47;
LABEL_68:
  result = (ULONG_PTR *)MiFreeMdlPageRun(*v41, v18, v49);
  v43 = (__int64)result + v15;
  if ( v43 )
  {
    result = &MiSystemPartition;
    if ( v44 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140C4EE38, -v43);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
