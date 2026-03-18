/*
 * XREFs of MiFreePagesFromMdl @ 0x140317C94
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x1402FF6F0 (EtwpAllocateTraceBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x1402FFAEC (EtwpFreeTraceBuffer.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140301CF8 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     MmFreePagesFromMdl @ 0x14035D760 (MmFreePagesFromMdl.c)
 *     HalpDmaFreeChildAdapter @ 0x14036ABB0 (HalpDmaFreeChildAdapter.c)
 *     MmFreePagesFromMdlEx @ 0x14037FC10 (MmFreePagesFromMdlEx.c)
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403997F4 (BgpFwAllocateMemory.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403CA624 (PpmHeteroInitializeHgsSupport.c)
 *     HalAllocateCommonBufferVector @ 0x1404C0810 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C1130 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferThin @ 0x1404C5E80 (HalFreeCommonBufferThin.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C63C0 (HalpAllocateCommonBufferThin.c)
 *     MiReturnMdlExcess @ 0x14052ECDC (MiReturnMdlExcess.c)
 *     MiFreePhysicalPageChain @ 0x140546718 (MiFreePhysicalPageChain.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140596740 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AB0A8 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1405AB168 (EtwpFreePartitionMemory.c)
 *     MiFreeCombineMdls @ 0x14071500C (MiFreeCombineMdls.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408D7378 (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140A45AA0 (KiComputeNumaCosts.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140224B70 (MmUnmapLockedPages.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiFreeMdlPageRun @ 0x1403175B8 (MiFreeMdlPageRun.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     MiRetardMdl @ 0x14052B820 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x14052EBC8 (MiLogMdlRangeEvent.c)
 */

ULONG_PTR *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int16 v3; // ax
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rdx
  PVOID v8; // rcx
  PVOID v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 *v12; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  __int16 v16; // ax
  ULONG_PTR *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rsi
  int v22; // r13d
  ULONG_PTR v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  ULONG_PTR *v29; // rax
  unsigned __int8 v30; // al
  unsigned __int64 v31; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  bool v36; // zf
  unsigned int v37; // r15d
  int v38; // r15d
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  ULONG_PTR v43; // rcx
  ULONG_PTR *v44; // rcx
  ULONG_PTR *result; // rax
  __int64 v46; // rbx
  ULONG_PTR *v47; // [rsp+30h] [rbp-58h]
  ULONG_PTR *v48; // [rsp+38h] [rbp-50h]
  __int64 v49; // [rsp+40h] [rbp-48h]
  ULONG_PTR *v50; // [rsp+48h] [rbp-40h]
  unsigned __int8 v51; // [rsp+90h] [rbp+8h] BYREF
  int v52; // [rsp+98h] [rbp+10h]
  __int64 v53; // [rsp+A0h] [rbp+18h]
  int v54; // [rsp+A8h] [rbp+20h]

  v52 = a2;
  v3 = *(_WORD *)(BugCheckParameter2 + 10);
  v51 = 0;
  v47 = 0LL;
  v5 = 1;
  v54 = 1;
  if ( (v3 & 0x200) != 0 )
  {
    v6 = a2 & 0xFFFFFFFE;
    v52 = v6;
    MiRetardMdl(BugCheckParameter2, v6);
    goto LABEL_11;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (v3 & 1) != 0 )
    {
      v7 = *(unsigned int *)(BugCheckParameter2 + 40);
      v8 = *(PVOID *)(BugCheckParameter2 + 24);
LABEL_8:
      KeZeroPages(v8, v7, a3);
      goto LABEL_11;
    }
    v9 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter2, 0, MmCached, 0LL, 0, 0x40000020u);
    v11 = *(unsigned int *)(BugCheckParameter2 + 40);
    if ( v9 )
    {
      v7 = (unsigned int)v11;
      v8 = v9;
      goto LABEL_8;
    }
    v12 = (__int64 *)(BugCheckParameter2 + 48);
    for ( i = ((unsigned __int64)((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
             + v11
             + 4095) >> 12; i; --i )
    {
      v14 = MiMapPageInHyperSpaceWorker(*v12, &v51, 0x80000000, v10);
      KeZeroPages(v14, 4096LL, v15);
      MiUnmapPageInHyperSpaceWorker(v14, v51, 0x80000000);
      ++v12;
    }
  }
LABEL_11:
  v16 = *(_WORD *)(BugCheckParameter2 + 10);
  if ( (v16 & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter2 + 24), (PMDL)BugCheckParameter2);
    v16 = *(_WORD *)(BugCheckParameter2 + 10);
  }
  if ( (v16 & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, BugCheckParameter2, v16, 0LL);
  v17 = (ULONG_PTR *)(BugCheckParameter2 + 48);
  v18 = 0LL;
  v19 = (*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF;
  v20 = (v19 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(
      BugCheckParameter2 + 48,
      633LL,
      (v19 + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) + 4095) >> 12);
  v21 = 0LL;
  v22 = 1;
  if ( !v20 )
    goto LABEL_67;
  do
  {
    v23 = *v17;
    v50 = v17;
    v24 = 48 * *v17;
    v49 = v24;
    v25 = v24 - 0x58000000000LL;
    v26 = *(_QWORD *)(v24 - 0x58000000000LL + 40);
    v53 = v24 - 0x58000000000LL;
    if ( (v26 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v17, v23);
    v27 = (v26 >> 39) & 0x3FF;
    v28 = v26 >> 60;
    LOBYTE(v28) = v28 & 7;
    v29 = *(ULONG_PTR **)(qword_140C4E448 + 8 * v27);
    v48 = v29;
    if ( (_BYTE)v28 == 3 )
    {
      v30 = MiLockPageInline(v25, v28, v24, (_DWORD *)v25);
      v25 = v53;
      v31 = v30;
      *(_QWORD *)(v53 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v30 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (v30 + 1));
            v36 = (v35 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v35;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v25 = v53;
          }
        }
      }
      __writecr8(v31);
      _InterlockedDecrement64(&qword_140C4DE00);
      v5 = v54;
      v24 = v49;
      v29 = v48;
    }
    if ( v21 )
    {
      LODWORD(v53) = 0;
      if ( v47 != v29 )
      {
        v38 = 1;
        goto LABEL_52;
      }
      v39 = (_QWORD *)qword_140C4EC80;
      if ( qword_140C4EC80 && ((*(_QWORD *)(v25 + 40) >> 60) & 7) == 1 )
      {
        v40 = v24 / 48;
        while ( v39 )
        {
          v41 = v39[3];
          if ( v40 < v41 )
          {
            v39 = (_QWORD *)*v39;
          }
          else
          {
            if ( v40 - v41 < v39[4] )
              goto LABEL_51;
            v39 = (_QWORD *)v39[1];
          }
        }
      }
      if ( *(unsigned __int8 *)(v25 + 34) >> 6 == v5 )
      {
        v42 = *(v17 - 1);
        if ( *v17 == v42 + 1 )
        {
          if ( v21 != 1 && v22 != 1 )
          {
            v38 = v53;
            goto LABEL_55;
          }
          v22 = 1;
LABEL_46:
          ++v21;
          goto LABEL_64;
        }
        if ( *v17 == v42 - 1 && (v21 == 1 || !v22) )
        {
          v22 = 0;
          goto LABEL_46;
        }
      }
LABEL_51:
      v38 = v53;
LABEL_52:
      if ( v22 == 1 )
      {
        v43 = v17[-v21];
LABEL_56:
        v18 += MiFreeMdlPageRun(v43, v21, v52);
        if ( v38 )
        {
          if ( v18 )
          {
            if ( v47 == &MiSystemPartition )
              _InterlockedExchangeAdd64(&qword_140C4EDB8, -v18);
            v18 = 0LL;
          }
          v47 = v48;
        }
        v21 = 1LL;
        v37 = *(unsigned __int8 *)(v49 - 0x58000000000LL + 34);
        goto LABEL_63;
      }
LABEL_55:
      v43 = *(v17 - 1);
      goto LABEL_56;
    }
    v37 = *(unsigned __int8 *)(v25 + 34);
    v21 = 1LL;
    v47 = v29;
LABEL_63:
    v5 = v37 >> 6;
    v54 = v5;
LABEL_64:
    ++v17;
    --v20;
  }
  while ( v20 );
  if ( v22 == 1 )
  {
LABEL_67:
    v44 = &v17[-v21];
    goto LABEL_68;
  }
  v44 = v50;
LABEL_68:
  result = (ULONG_PTR *)MiFreeMdlPageRun(*v44, v21, v52);
  v46 = (__int64)result + v18;
  if ( v46 )
  {
    result = &MiSystemPartition;
    if ( v47 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_140C4EDB8, -v46);
  }
  *(_WORD *)(BugCheckParameter2 + 10) &= ~2u;
  return result;
}
