/*
 * XREFs of MiReapplyImportOptimizationForDriverVerifier @ 0x1405A216C
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140A81214 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1405A29F8 (MiUnlockAndFreeDvPatchImage.c)
 *     MmHasImageBeenImportOptimized @ 0x1406EB784 (MmHasImageBeenImportOptimized.c)
 *     MiEnumerateBasePatches @ 0x140761F24 (MiEnumerateBasePatches.c)
 *     MiInitializeDriverPatchState @ 0x140761F70 (MiInitializeDriverPatchState.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140933454 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     MiLockAndMapEntireDriver @ 0x140970AB4 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140970D2C (MiUnlockEntireDriver.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14097F73C (MiCheckVerifierFunctionsCfgState.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReapplyImportOptimizationForDriverVerifier(ULONG_PTR a1, int *a2, unsigned int a3)
{
  __int64 v4; // r14
  int v6; // edx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // r12d
  unsigned int v15; // r10d
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  char *v23; // r15
  char *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // r14d
  unsigned __int16 **v30; // rdx
  __int64 v31; // r9
  _OWORD *Pool; // rax
  unsigned int v33; // r14d
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int16 *v36; // rdx
  unsigned int v37; // ebx
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v43; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v45; // r8
  int v46; // eax
  bool v47; // zf
  void *v48; // rcx
  __int64 v49; // rax
  __int64 v51; // [rsp+30h] [rbp-D0h]
  _OWORD *v52; // [rsp+38h] [rbp-C8h]
  ULONG_PTR Context[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h]
  _BYTE v55[160]; // [rsp+A0h] [rbp-60h] BYREF
  int v56; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+168h] [rbp+68h] BYREF

  v4 = a3;
  memset(v55, 0, 0x68uLL);
  v58 = 0;
  v56 = 0;
  memset(Context, 0, sizeof(Context));
  Context[8] = (ULONG_PTR)&Context[7];
  Context[7] = (ULONG_PTR)&Context[7];
  MiInitializeDriverPatchState(a1, v55);
  Context[2] = a1;
  if ( !(unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    v8 = -1073741436;
    goto LABEL_72;
  }
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
    goto LABEL_4;
  if ( *(_QWORD *)(a1 + 296) != a1 + 296 )
  {
    MiEnumerateBasePatches(v7, MiLockPatchIatForDV, Context);
    v8 = Context[9];
    if ( SLODWORD(Context[9]) < 0 )
      goto LABEL_72;
  }
  LOBYTE(v6) = 1;
  v9 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v6, 12, (int)&v58);
  v10 = *(_QWORD *)(a1 + 112);
  v11 = 0LL;
  v51 = v9;
  v12 = v9;
  v52 = 0LL;
  if ( v10 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v10) + 96) + 32LL);
    if ( v13 )
    {
      v11 = *(_OWORD **)(v13 + 88);
      v52 = v11;
    }
    v12 = v51;
  }
  else
  {
    v11 = *(_OWORD **)(a1 + 320);
    v52 = v11;
  }
  v14 = *(_DWORD *)(a1 + 64) >> 12;
  if ( !v11 )
  {
LABEL_4:
    v8 = -1073741637;
    goto LABEL_72;
  }
  v15 = 0;
  if ( (_DWORD)v4 )
  {
    v16 = (unsigned __int64 *)(a2 + 2);
    do
    {
      v17 = *v16;
      v18 = *(_QWORD *)(v12 + 8LL * *((int *)v16 - 2));
      v19 = *(_QWORD *)(a1 + 48);
      v20 = *v16 <= v19 ? v19 + *(unsigned int *)(a1 + 64) - v17 : v17 - v19;
      if ( v20 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      {
        v21 = *(_QWORD *)(a1 + 48);
        v22 = v18 <= v21 ? v21 + *(unsigned int *)(a1 + 64) - v18 : v18 - v21;
        if ( v22 > 0x7FFFFFFF )
          goto LABEL_4;
      }
      v12 = v51;
      ++v15;
      v16 += 3;
    }
    while ( v15 < (unsigned int)v4 );
  }
  v8 = MiLockAndMapEntireDriver(a1, v55, &Context[3]);
  if ( v8 >= 0 )
  {
    if ( (*(_BYTE *)(Context[3] + 10) & 5) != 0 )
      v23 = *(char **)(Context[3] + 24);
    else
      v23 = (char *)MmMapLockedPagesSpecifyCache((PMDL)Context[3], 0, MmCached, 0LL, 1u, 0x20u);
    v24 = &v23[v51 - *(_QWORD *)(a1 + 48)];
    if ( (MiFlags & 0x8000) != 0 )
    {
      v8 = MiCheckVerifierFunctionsCfgState(a2, (unsigned int)v4);
      if ( v8 >= 0 )
      {
        v8 = VslReapplyImportOptimizationForDriverVerifier(a1, a2, (unsigned int)v4);
        if ( v8 >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v25 = v4;
            do
            {
              v26 = *a2;
              v27 = *((_QWORD *)a2 + 1);
              a2 += 6;
              *(_QWORD *)&v24[8 * v26] = v27;
              --v25;
            }
            while ( v25 );
          }
        }
      }
    }
    else
    {
      v28 = 8 * v14 + 56;
      HIDWORD(Context[1]) = v28;
      if ( v14 )
      {
        v29 = 0;
        v30 = (unsigned __int16 **)v11 + 7;
        v31 = v14;
        do
        {
          if ( *v30 )
            v29 += ((*v30)[1] >> 1) + ((*v30)[2] >> 1) + (**v30 >> 2);
          ++v30;
          --v31;
        }
        while ( v31 );
        v56 = v29;
        LODWORD(v4) = a3;
      }
      Pool = MiAllocatePool(64, v28 + 4 * (v14 + v56 + 2 * v14), 0x66766D4Du);
      Context[4] = (ULONG_PTR)Pool;
      if ( Pool )
      {
        *Pool = *v11;
        Pool[1] = v11[1];
        Pool[2] = v11[2];
        *(_QWORD *)(Context[4] + 48) = Context[4] + v28;
        if ( v14 )
        {
          v33 = 0;
          v34 = 56LL;
          v35 = v14;
          v54 = v14;
          do
          {
            v36 = *(unsigned __int16 **)((char *)v52 + v34);
            if ( v36 )
            {
              v37 = v36[1] + 12 + v36[2] + *v36;
              v38 = (void *)(*(_QWORD *)(Context[4] + 48) + v33);
              *(_QWORD *)(Context[4] + v34) = v38;
              memmove(v38, v36, v37);
              v35 = v54;
              v33 += v37;
            }
            v34 += 8LL;
            v54 = --v35;
          }
          while ( v35 );
          LODWORD(v4) = a3;
          v11 = v52;
        }
        *(_DWORD *)(Context[4] + 8) = v51 - *(_DWORD *)(a1 + 48);
        *(_QWORD *)(Context[4] + 24) = v24;
        *(_QWORD *)(Context[4] + 16) = 0LL;
        *(_QWORD *)(Context[4] + 32) = *(_QWORD *)(a1 + 48);
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
          *(_QWORD *)(Context[4] + 40) = MiIsTargetFullyRetpolined;
        Context[5] = (ULONG_PTR)a2;
        LODWORD(Context[6]) = 24 * v4;
        v39 = *((_QWORD *)v11 + 2);
        if ( (_DWORD)v4 )
        {
          v40 = (unsigned int)v4;
          do
          {
            if ( v39 )
            {
              if ( (KiSpeculationFeatures & 0x20000000000LL) == 0
                || _bittest64(
                     (const signed __int64 *)qword_140C4F418,
                     (unsigned __int64)(*((_QWORD *)a2 + 1) + 0x800000000000LL) >> 16) )
              {
                *(_DWORD *)(v39 + 4LL * *a2) = a2[2] - *(_DWORD *)(a1 + 48);
              }
              else
              {
                *(_DWORD *)(v39 + 4LL * *a2) = 0;
              }
            }
            a2 += 6;
            --v40;
          }
          while ( v40 );
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
        }
        HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
        LODWORD(Context[0]) = HIDWORD(Context[0]);
        v8 = KeIpiGenericCall(MiReapplyImportOptimizationWorker, (ULONG_PTR)Context);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v43 = KeGetCurrentIrql();
            if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v45 = CurrentPrcb->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v47 = (v46 & v45[5]) == 0;
              v45[5] &= v46;
              if ( v47 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
LABEL_72:
  MiUnlockEntireDriver(v55, Context[3]);
  while ( 1 )
  {
    v48 = (void *)Context[7];
    if ( (ULONG_PTR *)Context[7] == &Context[7] )
      break;
    v49 = *(_QWORD *)Context[7];
    if ( *(ULONG_PTR **)(Context[7] + 8) != &Context[7] || *(_QWORD *)(v49 + 8) != Context[7] )
      __fastfail(3u);
    Context[7] = *(_QWORD *)Context[7];
    *(_QWORD *)(v49 + 8) = &Context[7];
    MiUnlockAndFreeDvPatchImage(v48);
  }
  if ( Context[4] )
    ExFreePoolWithTag((PVOID)Context[4], 0);
  return (unsigned int)v8;
}
