/*
 * XREFs of MiFreePagesFromMdl @ 0x14030A23C
 * Callers:
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14022B358 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     EtwpFreeTraceBuffer @ 0x140246724 (EtwpFreeTraceBuffer.c)
 *     MmFreePagesFromMdl @ 0x14024E380 (MmFreePagesFromMdl.c)
 *     EtwpAllocateTraceBuffer @ 0x14029E818 (EtwpAllocateTraceBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x14036D370 (HalpDmaFreeChildAdapter.c)
 *     MmFreePagesFromMdlEx @ 0x140381C20 (MmFreePagesFromMdlEx.c)
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CDDB4 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C6260 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferThin @ 0x1404CAFF0 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 *     MiReturnMdlExcess @ 0x1405343EC (MiReturnMdlExcess.c)
 *     MiFreePhysicalPageChain @ 0x14054BE28 (MiFreePhysicalPageChain.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14059BE40 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     EtwpAllocatePartitionMemory @ 0x1405B0838 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405B08F8 (EtwpFreePartitionMemory.c)
 *     MiFreeCombineMdls @ 0x140726F18 (MiFreeCombineMdls.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140A4E2E0 (KiComputeNumaCosts.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     MiRetardMdl @ 0x140530F30 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1405342D8 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int16 v2; // ax
  int v4; // r15d
  __int64 v5; // rdx
  PVOID v6; // rcx
  PVOID v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r14
  unsigned __int64 i; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int16 v13; // ax
  ULONG_PTR *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  int v19; // r13d
  ULONG_PTR v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  ULONG_PTR *v24; // rax
  unsigned __int8 v25; // al
  unsigned __int64 v26; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r15d
  int v33; // r15d
  _QWORD *v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  ULONG_PTR v38; // rcx
  ULONG_PTR *v39; // rcx
  ULONG_PTR *result; // rax
  __int64 v41; // rbx
  ULONG_PTR *v42; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  ULONG_PTR *v45; // [rsp+48h] [rbp-40h]
  char v46; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v47; // [rsp+98h] [rbp+10h]
  __int64 v48; // [rsp+A0h] [rbp+18h]
  int v49; // [rsp+A8h] [rbp+20h]

  v47 = a2;
  v2 = *(_WORD *)(BugCheckParameter2 + 10);
  v46 = 0;
  v42 = 0LL;
  v4 = 1;
  v49 = 1;
  if ( (v2 & 0x200) != 0 )
  {
    v47 = a2 & 0xFFFFFFFE;
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
    v8 = *(unsigned int *)(BugCheckParameter2 + 40);
    if ( v7 )
    {
      v5 = (unsigned int)v8;
      v6 = v7;
      goto LABEL_8;
    }
    v9 = (_QWORD *)(BugCheckParameter2 + 48);
    for ( i = ((unsigned __int64)((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
             + v8
             + 4095) >> 12; i; --i )
    {
      v11 = MiMapPageInHyperSpaceWorker(*v9, &v46, 0x80000000LL);
      KeZeroPages(v11, 4096LL);
      LOBYTE(v12) = v46;
      MiUnmapPageInHyperSpaceWorker(v11, v12, 0x80000000LL);
      ++v9;
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
    v45 = v14;
    v21 = 48 * *v14;
    v44 = v21;
    v22 = v21 - 0x58000000000LL;
    v23 = *(_QWORD *)(v21 - 0x58000000000LL + 40);
    v48 = v21 - 0x58000000000LL;
    if ( (v23 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v14, v20);
    v24 = *(ULONG_PTR **)(qword_140C4E688 + 8 * ((v23 >> 39) & 0x3FF));
    v43 = v24;
    if ( ((v23 >> 60) & 7) == 3 )
    {
      v25 = MiLockPageInline(v22);
      v22 = v48;
      v26 = v25;
      *(_QWORD *)(v48 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v25 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v30 = ~(unsigned __int16)(-1LL << (v25 + 1));
            v31 = (v30 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v30;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v22 = v48;
          }
        }
      }
      __writecr8(v26);
      _InterlockedDecrement64(&qword_140C4E040);
      v4 = v49;
      v21 = v44;
      v24 = v43;
    }
    if ( v18 )
    {
      LODWORD(v48) = 0;
      if ( v42 != v24 )
      {
        v33 = 1;
        goto LABEL_52;
      }
      v34 = (_QWORD *)qword_140C4EEC0;
      if ( qword_140C4EEC0 && ((*(_QWORD *)(v22 + 40) >> 60) & 7) == 1 )
      {
        v35 = v21 / 48;
        while ( v34 )
        {
          v36 = v34[3];
          if ( v35 < v36 )
          {
            v34 = (_QWORD *)*v34;
          }
          else
          {
            if ( v35 - v36 < v34[4] )
              goto LABEL_51;
            v34 = (_QWORD *)v34[1];
          }
        }
      }
      if ( *(unsigned __int8 *)(v22 + 34) >> 6 == v4 )
      {
        v37 = *(v14 - 1);
        if ( *v14 == v37 + 1 )
        {
          if ( v18 != 1 && v19 != 1 )
          {
            v33 = v48;
            goto LABEL_55;
          }
          v19 = 1;
LABEL_46:
          ++v18;
          goto LABEL_64;
        }
        if ( *v14 == v37 - 1 && (v18 == 1 || !v19) )
        {
          v19 = 0;
          goto LABEL_46;
        }
      }
LABEL_51:
      v33 = v48;
LABEL_52:
      if ( v19 == 1 )
      {
        v38 = v14[-v18];
LABEL_56:
        v15 += MiFreeMdlPageRun(v38);
        if ( v33 )
        {
          if ( v15 )
          {
            if ( v42 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_140C4EFF8, -v15);
            v15 = 0LL;
          }
          v42 = v43;
        }
        v18 = 1LL;
        v32 = *(unsigned __int8 *)(v44 - 0x58000000000LL + 34);
        goto LABEL_63;
      }
LABEL_55:
      v38 = *(v14 - 1);
      goto LABEL_56;
    }
    v32 = *(unsigned __int8 *)(v22 + 34);
    v18 = 1LL;
    v42 = v24;
LABEL_63:
    v4 = v32 >> 6;
    v49 = v4;
LABEL_64:
    ++v14;
    --v17;
  }
  while ( v17 );
  if ( v19 == 1 )
  {
LABEL_67:
    v39 = &v14[-v18];
    goto LABEL_68;
  }
  v39 = v45;
LABEL_68:
  result = (ULONG_PTR *)MiFreeMdlPageRun(*v39);
  v41 = (__int64)result + v15;
  if ( v41 )
  {
    result = &MiSystemPartition;
    if ( v42 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140C4EFF8, -v41);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
