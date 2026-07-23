/*
 * XREFs of MiAddPhysicalMemory @ 0x1408C76D0
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1408C7C6C (MiAddPhysicalMemoryChunks.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x1402636E0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140263AA0 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryShared @ 0x1402FFEF0 (MiUnlockDynamicMemoryShared.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     MiLockDynamicMemoryShared @ 0x14030A6AC (MiLockDynamicMemoryShared.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiDereferencePageRuns @ 0x14037E940 (MiDereferencePageRuns.c)
 *     MiDescribePageRun @ 0x1403AB018 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1405010CC (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x140511208 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x14052C560 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x14052CF38 (MiPerformMemoryChange.c)
 *     MiDeleteExtentPfns @ 0x14053EC80 (MiDeleteExtentPfns.c)
 *     MiSplitMirrorBitMap @ 0x140772D00 (MiSplitMirrorBitMap.c)
 *     MiSplitPfnBitMaps @ 0x1407B4B14 (MiSplitPfnBitMaps.c)
 *     MiComputeNodeMemory @ 0x1407C8DE0 (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1408C8010 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     MiIsExtentDangling @ 0x1408D2938 (MiIsExtentDangling.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  NTSTATUS v17; // ebx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r13
  unsigned int v23; // ebx
  PVOID v24; // r15
  __int64 v25; // rax
  __int64 v26; // r8
  _DWORD *v27; // r9
  int v28; // eax
  PVOID v29; // rcx
  __int64 v30; // rax
  PVOID P[3]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v32; // [rsp+58h] [rbp-80h] BYREF
  char *v33; // [rsp+60h] [rbp-78h] BYREF
  __int64 v34; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *v35; // [rsp+70h] [rbp-68h]
  __int128 v36; // [rsp+78h] [rbp-60h] BYREF
  __int128 v37; // [rsp+88h] [rbp-50h]
  __int64 v38; // [rsp+98h] [rbp-40h]

  v36 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
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
  if ( ((unsigned __int64)qword_140C4DDC0 >> 12) - 1 < 0xFFFFFFFFFLL )
    v8 = ((unsigned __int64)qword_140C4DDC0 >> 12) - 1;
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
  if ( (_QWORD)v6 + *((_QWORD *)&v6 + 1) >= qword_140C4E820 && (unsigned __int64)v6 < qword_140C4E820 + 2048
    || (_QWORD)v6 + *((_QWORD *)&v6 + 1) >= 0xFFFFFFFFAuLL )
  {
    return 3221225496LL;
  }
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  v32 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
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
  if ( (v13 & 2) != 0 || byte_140C4C9B0 )
  {
    IsExtentDangling = MiIsExtentDangling(v6, *((_QWORD *)&v6 + 1), v13);
    if ( IsExtentDangling >= (unsigned __int64)v6 && IsExtentDangling < v7 )
    {
LABEL_25:
      v17 = -1073741800;
      goto LABEL_72;
    }
    if ( (v13 & 2) != 0 )
    {
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v18 = 0LL;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v19 = (char *)MmPhysicalMemoryBlock + 24;
        do
        {
          v20 = *(v19 - 1);
          if ( *v19 )
          {
            if ( (unsigned __int64)v6 >= v20 )
            {
              if ( (unsigned __int64)v6 < *v19 + v20 )
              {
LABEL_32:
                MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
                goto LABEL_25;
              }
            }
            else if ( v7 > v20 )
            {
              goto LABEL_32;
            }
          }
          ++v18;
          v19 += 2;
        }
        while ( v18 < *(unsigned int *)MmPhysicalMemoryBlock );
      }
      byte_140C4C9B0 = 1;
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
LABEL_59:
      v17 = MiMapNewPfns(v6, a5);
      if ( v17 >= 0 )
      {
        *(_QWORD *)a3 = *((_QWORD *)&v6 + 1) << 12;
        if ( !v14 )
        {
          MiPerformMemoryChange(v6, *((__int64 *)&v6 + 1), (void **)&v33, &v32, v13);
          MiComputeNodeMemory(&MiSystemPartition, 1, v26, v27);
          v28 = -1;
          if ( qword_140C52710 <= 0xFFFFFFFF )
            v28 = qword_140C52710;
          MEMORY[0xFFFFF780000002E8] = v28;
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
          KePulseEvent(qword_140C50D48, 0, 0);
        }
        v17 = 0;
      }
LABEL_72:
      if ( v14 )
        goto LABEL_76;
      goto LABEL_75;
    }
  }
  v21 = qword_140C52710 + *((_QWORD *)&v6 + 1);
  if ( qword_140C52710 + *((_QWORD *)&v6 + 1) > qword_140C4DD70 )
    v7 = v6 + qword_140C4DD70 - qword_140C52710;
  *((_QWORD *)&v6 + 1) = qword_140C4DD70 - qword_140C52710;
  if ( v21 <= qword_140C4DD70 )
    *((_QWORD *)&v6 + 1) = v9;
  v34 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u, v21, v15);
  v22 = v34;
  if ( (unsigned __int64)v6 < v7 )
  {
    if ( (v13 & 0x404) == 0 )
    {
      v17 = KeConfigureDynamicMemory(v6, v7 - 1, 0);
      if ( v17 < 0 )
        goto LABEL_75;
    }
    if ( (unsigned int)MiDescribePageRun((__int64)P, v6, *((__int64 *)&v6 + 1)) )
    {
      *(_QWORD *)&v36 = 0LL;
      v37 = v6;
      v17 = MiConfigureMemoryInsertion(&v33, MmPhysicalMemoryBlock, &v36);
      if ( v17 < 0 )
        goto LABEL_75;
      if ( (unsigned int)MiSplitPfnBitMaps(&MiSystemPartition, v6, *((__int64 *)&v6 + 1)) )
      {
        v23 = 0;
        while ( (unsigned int)MiSplitMirrorBitMap(
                                (unsigned __int64 *)&qword_140C4E590[2 * v23],
                                v6,
                                *((__int64 *)&v6 + 1)) )
        {
          if ( ++v23 >= 2 )
          {
            while ( 1 )
            {
              v24 = P[0];
              if ( P[0] == P )
                break;
              if ( *((PVOID **)P[0] + 1) != P || (v25 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
LABEL_85:
                __fastfail(3u);
              P[0] = *(PVOID *)P[0];
              *(_QWORD *)(v25 + 8) = P;
              v17 = MiConfigureMemoryInsertion(&v32, v22, v24);
              ExFreePoolWithTag(v24, 0);
              if ( v22 != v34 )
                ExFreePoolWithTag((PVOID)(v22 - 16), 0);
              if ( v17 < 0 )
              {
                v14 = v13 & 2;
                goto LABEL_75;
              }
              v22 = v32;
            }
            v14 = v13 & 2;
            goto LABEL_59;
          }
        }
      }
    }
    v17 = -1073741670;
    goto LABEL_75;
  }
  v17 = -1073741585;
LABEL_75:
  MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)v35);
LABEL_76:
  if ( v33 )
    ExFreePoolWithTag(v33 - 16, 0);
  if ( !v32 )
    goto LABEL_81;
  v29 = (PVOID)(v32 - 16);
  while ( 1 )
  {
    ExFreePoolWithTag(v29, 0);
LABEL_81:
    v29 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P )
      goto LABEL_85;
    v30 = *(_QWORD *)P[0];
    if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
      goto LABEL_85;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v30 + 8) = P;
  }
  if ( !v14 )
  {
    if ( v34 )
      MiDereferencePageRuns(v34);
    if ( v17 >= 0 )
      IoUpdateDumpPhysicalRanges();
  }
  return (unsigned int)v17;
}
