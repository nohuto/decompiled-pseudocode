/*
 * XREFs of MiAddPhysicalMemory @ 0x1408C4FF0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1408C558C (MiAddPhysicalMemoryChunks.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1402253FC (MiLockDynamicMemoryShared.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1402745E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x1402749A0 (MiLockDynamicMemoryExclusive.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403B1088 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140502BCC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x140512F88 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x14052E2A0 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x14052EC78 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x1405409C0 (MiDeleteExtentPfns.c)
 *     MiSplitMirrorBitMap @ 0x140777890 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407B9C94 (MiSplitPfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1408C5930 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     MiIsExtentDangling @ 0x1408D0258 (MiIsExtentDangling.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddPhysicalMemory(ULONG_PTR *a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  __int128 v6; // rdi
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // r13
  int v12; // r12d
  unsigned int v13; // r12d
  int v14; // r15d
  _DWORD *v15; // r9
  unsigned __int64 IsExtentDangling; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  NTSTATUS v19; // ebx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  unsigned int v25; // ebx
  PVOID v26; // r15
  __int64 v27; // rax
  __int64 v28; // r8
  _DWORD *v29; // r9
  int v30; // eax
  PVOID v31; // rcx
  __int64 v32; // rax
  PVOID P[3]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v34; // [rsp+58h] [rbp-80h] BYREF
  char *v35; // [rsp+60h] [rbp-78h] BYREF
  __int64 v36; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v37; // [rsp+70h] [rbp-68h]
  __int128 v38; // [rsp+78h] [rbp-60h] BYREF
  __int128 v39; // [rsp+88h] [rbp-50h]
  __int64 v40; // [rsp+98h] [rbp-40h]

  v38 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  *(_QWORD *)&v6 = *(_QWORD *)a2 >> 12;
  *((_QWORD *)&v6 + 1) = *(_QWORD *)a3 >> 12;
  v7 = v6 + *((_QWORD *)&v6 + 1);
  if ( (unsigned __int64)v6 >= (_QWORD)v6 + *((_QWORD *)&v6 + 1) )
    return 3221225711LL;
  v8 = 0xFFFFFFFFFLL;
  if ( ((unsigned __int64)qword_140C4DF80 >> 12) - 1 < 0xFFFFFFFFFLL )
    v8 = ((unsigned __int64)qword_140C4DF80 >> 12) - 1;
  if ( v7 - 1 > v8 )
  {
    if ( (a4 & 2) == 0 )
    {
      v7 = v8 + 1;
      *((_QWORD *)&v6 + 1) = v8 + 1 - v6;
      goto LABEL_9;
    }
    return 3221225712LL;
  }
LABEL_9:
  v9 = *((_QWORD *)&v6 + 1);
  if ( (unsigned __int64)v6 >= v7 )
    return 3221225711LL;
  if ( (_QWORD)v6 + *((_QWORD *)&v6 + 1) >= qword_140C4E9E0 && (unsigned __int64)v6 < qword_140C4E9E0 + 2048
    || (_QWORD)v6 + *((_QWORD *)&v6 + 1) >= 0xFFFFFFFFAuLL )
  {
    return 3221225496LL;
  }
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  v34 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  P[2] = 0LL;
  P[1] = P;
  P[0] = P;
  v12 = 5;
  if ( a1 == &MiSystemPartition )
    v12 = 1;
  v13 = a4 | v12;
  if ( (v13 & 0xFE) != 0 && (v13 & 0x100) != 0 )
    return 3221225714LL;
  v14 = v13 & 2;
  if ( (v13 & 2) != 0 )
    MiDeleteExtentPfns(0LL, (__int64)a2);
  else
    MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (v13 & 2) != 0 || byte_140C4CB70 )
  {
    IsExtentDangling = MiIsExtentDangling(v6, *((_QWORD *)&v6 + 1), v13);
    if ( IsExtentDangling >= (unsigned __int64)v6 && IsExtentDangling < v7 )
    {
LABEL_25:
      v19 = -1073741800;
      goto LABEL_72;
    }
    if ( (v13 & 2) != 0 )
    {
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v20 = 0LL;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v21 = (char *)MmPhysicalMemoryBlock + 24;
        do
        {
          v22 = *(v21 - 1);
          if ( *v21 )
          {
            if ( (unsigned __int64)v6 >= v22 )
            {
              if ( (unsigned __int64)v6 < *v21 + v22 )
              {
LABEL_32:
                MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
                goto LABEL_25;
              }
            }
            else if ( v7 > v22 )
            {
              goto LABEL_32;
            }
          }
          ++v20;
          v21 += 2;
        }
        while ( v20 < *(unsigned int *)MmPhysicalMemoryBlock );
      }
      byte_140C4CB70 = 1;
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
LABEL_59:
      v19 = MiMapNewPfns(v6, a5);
      if ( v19 >= 0 )
      {
        *(_QWORD *)a3 = *((_QWORD *)&v6 + 1) << 12;
        if ( !v14 )
        {
          MiPerformMemoryChange(v6, *((__int64 *)&v6 + 1), (void **)&v35, &v34, v13);
          MiComputeNodeMemory(&MiSystemPartition, 1, v28, v29);
          v30 = -1;
          if ( qword_140C528D0 <= 0xFFFFFFFF )
            v30 = qword_140C528D0;
          MEMORY[0xFFFFF780000002E8] = v30;
          if ( (v13 & 0x40) == 0 )
            MiUpdateLargePageBitMap(
              (__int64)&MiSystemPartition,
              v6,
              ((v7 + 511) >> 9) - ((unsigned __int64)v6 >> 9),
              0,
              0);
          if ( (v13 & 4) == 0 )
            MiEnableNewPfns(v6, v7, v13);
          if ( (MiFlags & 0x10000000) != 0 && (MiFlags & 0x30u) >= 0x20 )
            ZwUpdateWnfStateData(&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL, 0, 0LL, 0LL, 0, 0);
          KePulseEvent(qword_140C50F08, 0, 0);
        }
        v19 = 0;
      }
LABEL_72:
      if ( v14 )
        goto LABEL_76;
      goto LABEL_75;
    }
  }
  v23 = qword_140C528D0 + *((_QWORD *)&v6 + 1);
  if ( qword_140C528D0 + *((_QWORD *)&v6 + 1) > qword_140C4DF30 )
    v7 = v6 + qword_140C4DF30 - qword_140C528D0;
  *((_QWORD *)&v6 + 1) = qword_140C4DF30 - qword_140C528D0;
  if ( v23 <= qword_140C4DF30 )
    *((_QWORD *)&v6 + 1) = v9;
  v36 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v23, v15);
  v24 = v36;
  if ( (unsigned __int64)v6 < v7 )
  {
    if ( (v13 & 0x404) == 0 )
    {
      v19 = KeConfigureDynamicMemory(v6, v7 - 1, 0);
      if ( v19 < 0 )
        goto LABEL_75;
    }
    if ( (unsigned int)MiDescribePageRun((__int64)P, v6, *((__int64 *)&v6 + 1)) )
    {
      *(_QWORD *)&v38 = 0LL;
      v39 = v6;
      v19 = MiConfigureMemoryInsertion(&v35, MmPhysicalMemoryBlock, &v38);
      if ( v19 < 0 )
        goto LABEL_75;
      if ( (unsigned int)MiSplitPfnBitMaps(&MiSystemPartition, v6, *((__int64 *)&v6 + 1)) )
      {
        v25 = 0;
        while ( (unsigned int)MiSplitMirrorBitMap(
                                (unsigned __int64 *)&qword_140C4E750[2 * v25],
                                v6,
                                *((__int64 *)&v6 + 1)) )
        {
          if ( ++v25 >= 2 )
          {
            while ( 1 )
            {
              v26 = P[0];
              if ( P[0] == P )
                break;
              if ( *((PVOID **)P[0] + 1) != P || (v27 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_85:
                __fastfail(3u);
              P[0] = *(PVOID *)P[0];
              *(_QWORD *)(v27 + 8) = P;
              v19 = MiConfigureMemoryInsertion(&v34, v24, v26);
              ExFreePoolWithTag(v26, 0);
              if ( v24 != v36 )
                ExFreePoolWithTag((PVOID)(v24 - 16), 0);
              if ( v19 < 0 )
              {
                v14 = v13 & 2;
                goto LABEL_75;
              }
              v24 = v34;
            }
            v14 = v13 & 2;
            goto LABEL_59;
          }
        }
      }
    }
    v19 = -1073741670;
    goto LABEL_75;
  }
  v19 = -1073741585;
LABEL_75:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v37);
LABEL_76:
  if ( v35 )
    ExFreePoolWithTag(v35 - 16, 0);
  if ( !v34 )
    goto LABEL_81;
  v31 = (PVOID)(v34 - 16);
  while ( 1 )
  {
    ExFreePoolWithTag(v31, 0);
LABEL_81:
    v31 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_85;
    v32 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_85;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v32 + 8) = P;
  }
  if ( !v14 )
  {
    if ( v36 )
      MiDereferencePageRuns(v36);
    if ( v19 >= 0 )
      IoUpdateDumpPhysicalRanges((__int64)v31, v17, v18, (__int64)v15);
  }
  return (unsigned int)v19;
}
