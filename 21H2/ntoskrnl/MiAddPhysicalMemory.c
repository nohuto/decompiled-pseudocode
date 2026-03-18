/*
 * XREFs of MiAddPhysicalMemory @ 0x140968388
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 *     MiCreateFileOnlyPfns @ 0x1409704A0 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x14022B0E0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x14023502C (MiLockDynamicMemoryShared.c)
 *     MiDereferencePageRuns @ 0x14023FCF0 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x14023FF18 (MiReferencePageRuns.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14036071C (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140360A00 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x1403B7624 (MiDescribePageRun.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeConfigureDynamicMemory @ 0x14056AF98 (KeConfigureDynamicMemory.c)
 *     MiEnableNewPfns @ 0x1405827E0 (MiEnableNewPfns.c)
 *     MiLogAddPhysicalMemory @ 0x140583428 (MiLogAddPhysicalMemory.c)
 *     MiPerformMemoryChange @ 0x1405835E0 (MiPerformMemoryChange.c)
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiDeleteExtentPfns @ 0x14059E2C0 (MiDeleteExtentPfns.c)
 *     MiAddRangeToPartitionTree @ 0x1405BD66C (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x1405BDF64 (MiDeletePartitionPageNodes.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiSplitPfnBitMapsForPartitionHierarchy @ 0x1405BF6B4 (MiSplitPfnBitMapsForPartitionHierarchy.c)
 *     MiSplitMirrorBitMap @ 0x1407FD710 (MiSplitMirrorBitMap.c)
 *     MiComputeNodeMemory @ 0x14081DDB0 (MiComputeNodeMemory.c)
 *     MiSplitPfnBitMaps @ 0x14082AFE0 (MiSplitPfnBitMaps.c)
 *     MiConfigureMemoryInsertion @ 0x140969004 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MiIsExtentDangling @ 0x14097079C (MiIsExtentDangling.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  ULONG_PTR *v6; // r15
  unsigned int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ebx
  unsigned int v12; // edx
  ULONG_PTR v13; // rsi
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // r12
  unsigned int v16; // r15d
  unsigned __int64 IsExtentDangling; // rax
  struct _KTHREAD *v18; // rbx
  unsigned __int64 v19; // r8
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  PVOID v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // r13
  PVOID *i; // rdi
  int v31; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-D0h]
  __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  int v34; // [rsp+58h] [rbp-C0h]
  int v35; // [rsp+5Ch] [rbp-BCh]
  PVOID P[3]; // [rsp+60h] [rbp-B8h] BYREF
  int v37; // [rsp+78h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-98h]
  char *v39; // [rsp+88h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 *v41; // [rsp+98h] [rbp-80h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-78h]
  int v43; // [rsp+B0h] [rbp-68h]
  int v44; // [rsp+B4h] [rbp-64h]
  _QWORD v45[12]; // [rsp+B8h] [rbp-60h] BYREF

  v5 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = (ULONG_PTR *)a1;
  P[1] = P;
  v7 = a4;
  v8 = a3;
  P[0] = P;
  v9 = 0LL;
  v45[1] = 0LL;
  v10 = 0LL;
  v45[4] = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  P[2] = 0LL;
  v34 = 0;
  v35 = 0;
  if ( (*(_DWORD *)a2 & 0xFFF) != 0 )
  {
    v11 = -1073741585;
LABEL_3:
    v31 = v11;
    goto LABEL_97;
  }
  if ( (*(_DWORD *)a3 & 0xFFF) != 0 )
  {
    v11 = -1073741584;
    goto LABEL_3;
  }
  MiLogAddPhysicalMemory(a1, a2, a3, a4, 0LL);
  v7 |= 1u;
  v12 = v7;
  v13 = (unsigned __int64)*v5 >> 12;
  v14 = (unsigned __int64)*v8 >> 12;
  if ( (v7 & 0x10000) == 0 )
  {
LABEL_14:
    v15 = v13 + v14;
    if ( v13 >= v13 + v14 )
      goto LABEL_15;
    if ( v15 - 1 > qword_140C50840 )
    {
      if ( (v7 & 2) != 0 )
      {
        v11 = -1073741584;
        goto LABEL_16;
      }
      v15 = qword_140C50840 + 1;
      v14 = qword_140C50840 + 1 - v13;
      if ( v13 >= qword_140C50840 + 1 )
      {
LABEL_15:
        v11 = -1073741585;
LABEL_16:
        v31 = v11;
        v10 = 0LL;
LABEL_95:
        v5 = a2;
        goto LABEL_96;
      }
    }
    if ( v13 + v14 >= qword_140C52CE0 && v13 < qword_140C52CE0 + 2048 || v13 + v14 >= 0x3FFFFFFFFELL )
    {
      v11 = -1073741800;
      goto LABEL_16;
    }
    v7 |= 8u;
    if ( v6 == &MiSystemPartition )
      v7 = v12;
    v16 = v7;
    if ( (v7 & 0x1F2) != 0 && (v7 & 0x200) != 0 )
    {
      v11 = -1073741582;
      v10 = 0LL;
      v31 = -1073741582;
LABEL_94:
      v6 = (ULONG_PTR *)a1;
      goto LABEL_95;
    }
    v37 = v7 & 2;
    if ( (v7 & 2) != 0 )
    {
      MiDeleteExtentPfns(0LL);
    }
    else
    {
      if ( (v7 & 0x20000) == 0 )
      {
        v35 = 1;
        MiLockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      }
      if ( !byte_140C4F2E8 )
        goto LABEL_69;
    }
    IsExtentDangling = MiIsExtentDangling(v13, v14, v7);
    if ( IsExtentDangling >= v13 && IsExtentDangling < v15 )
    {
LABEL_36:
      v11 = -1073741800;
LABEL_37:
      v31 = v11;
LABEL_87:
      if ( v35 )
        MiUnlockDynamicMemoryExclusive((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( v39 )
        ExFreePoolWithTag(v39 - 16, 0);
      if ( v9 )
        ExFreePoolWithTag((PVOID)(v9 - 16), 0);
      v10 = v32;
      goto LABEL_94;
    }
    if ( (v7 & 2) != 0 )
    {
      v18 = CurrentThread;
      MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      v19 = 0LL;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v20 = (char *)MmPhysicalMemoryBlock + 24;
        do
        {
          v21 = *(v20 - 1);
          if ( *v20 )
          {
            if ( v13 >= v21 )
            {
              if ( v13 < *v20 + v21 )
              {
LABEL_44:
                MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)v18);
                goto LABEL_36;
              }
            }
            else if ( v15 > v21 )
            {
              goto LABEL_44;
            }
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < *(unsigned int *)MmPhysicalMemoryBlock );
      }
      byte_140C4F2E8 = 1;
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)v18);
LABEL_48:
      v31 = MiMapNewPfns(v13, v15, a5);
      v11 = v31;
      v7 = v16;
      if ( v31 >= 0 )
      {
        v22 = v37 == 0;
        *a3 = v14 << 12;
        if ( v22 )
        {
          MiPerformMemoryChange(v13, v14, (void **)&v39, &v33, v16, (__int64 ***)P);
          MiComputeNodeMemory(&MiSystemPartition, 1);
          if ( (v16 & 8) != 0 )
            MiComputeNodeMemory((ULONG_PTR *)a1, 1);
          _InterlockedAdd64(&qword_140C51850, 1uLL);
          if ( (v16 & 0x40000) != 0 )
          {
            v44 = 0;
            v41 = &v40;
            v43 = 257;
            v42 = 0LL;
            MiInsertPartitionPages((__int16 *)&MiSystemPartition, (__int64)a1, (__int64)&v41, v14, 1LL);
          }
          if ( (v16 & 0x100000) == 0 )
          {
            v23 = -1;
            if ( qword_140C590D0 <= 0xFFFFFFFF )
              v23 = qword_140C590D0;
            MEMORY[0xFFFFF780000002E8] = v23;
          }
          MiUpdateLargePageBitMap((__int64)a1, v13, v14, (v16 & 0x80) != 0, 0);
          if ( (v16 & 8) != 0 )
            MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v13, v14, 1, 0);
          if ( (v16 & 0x10000) != 0 )
            MiHotRemoveHugeRange(v13, v14, 0);
          if ( (v16 & 0x80) == 0 )
            MiEnableNewPfns((__int64)a1, v13, v15, v16);
          if ( stru_140C51E68.Header.SignalState && (MiFlags & 0x30u) >= 0x20 )
            ZwUpdateWnfStateData((__int64)&WNF_MM_PHYSICAL_MEMORY_CHANGE, 0LL);
          KePulseEvent(qword_140C550C8, 0, 0);
        }
        v11 = 0;
        v7 = v16;
        v31 = 0;
LABEL_86:
        v9 = v33;
        goto LABEL_87;
      }
      goto LABEL_84;
    }
LABEL_69:
    if ( (v7 & 0x100000) == 0 && qword_140C590D0 + v14 > qword_140C50730 )
    {
      if ( (v7 & 0x10000) != 0 )
        goto LABEL_72;
      v14 = qword_140C50730 - qword_140C590D0;
      v15 = v13 + qword_140C50730 - qword_140C590D0;
    }
    v32 = MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
    if ( v13 < v15 )
    {
      if ( (v7 & 0x800) == 0 )
      {
        v31 = KeConfigureDynamicMemory(v13, v15 - 1, 0LL);
        v11 = v31;
        if ( v31 < 0 )
          goto LABEL_87;
        v34 = 1;
      }
      if ( (unsigned int)MiDescribePageRun((__int64)P, v13, v14) )
      {
        v45[0] = 0LL;
        v45[2] = v13;
        v45[3] = v14;
        v31 = MiConfigureMemoryInsertion(&v39, MmPhysicalMemoryBlock, v45);
        v11 = v31;
        if ( v31 < 0 )
          goto LABEL_84;
        if ( (v7 & 8) != 0 )
          v24 = MiSplitPfnBitMapsForPartitionHierarchy((ULONG_PTR *)a1);
        else
          v24 = MiSplitPfnBitMaps(&MiSystemPartition, v13, v14);
        if ( v24 )
        {
          v27 = 0;
          while ( (unsigned int)MiSplitMirrorBitMap((unsigned __int64 *)&qword_140C52A10[2 * v27], v13, v14) )
          {
            if ( ++v27 >= 2 )
            {
              v28 = v32;
              for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
              {
                v11 = MiConfigureMemoryInsertion(&v33, v28, i);
                v31 = v11;
                if ( v28 != v32 )
                  ExFreePoolWithTag((PVOID)(v28 - 16), 0);
                if ( v11 < 0 )
                {
                  v7 = v16;
                  goto LABEL_84;
                }
                v28 = v33;
              }
              if ( (v16 & 0x40000) != 0 && !MiAddRangeToPartitionTree(&v40, v13, v14, 0) )
              {
                v7 = v16;
                break;
              }
              goto LABEL_48;
            }
          }
        }
      }
      v11 = -1073741670;
      v31 = -1073741670;
LABEL_84:
      if ( v34 )
        KeConfigureDynamicMemory(v13, v15 - 1, 8LL);
      goto LABEL_86;
    }
LABEL_72:
    v11 = -1073741585;
    goto LABEL_37;
  }
  if ( (v13 & 0x3FFFF) == 0 )
  {
    if ( (v14 & 0x3FFFF) != 0 )
    {
      v11 = -1073741584;
      goto LABEL_9;
    }
    if ( (v7 & 0x2000) == 0 )
    {
      v11 = -1073741582;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v11 = -1073741585;
LABEL_9:
  v31 = v11;
  v10 = 0LL;
LABEL_96:
  v8 = a3;
LABEL_97:
  while ( 1 )
  {
    v25 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v26 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v26 + 8) = P;
    ExFreePoolWithTag(v25, 0);
  }
  MiDeletePartitionPageNodes(&v40);
  if ( (v7 & 2) == 0 && v10 )
    MiDereferencePageRuns(v10);
  MiLogAddPhysicalMemory((unsigned __int16 *)v6, v5, v8, v7, (__int64)&v31);
  return (unsigned int)v11;
}
