/*
 * XREFs of MiCreateFileOnlyImageFixupList @ 0x14097023C
 * Callers:
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateControlAreaCommitCount @ 0x14026EC38 (MiUpdateControlAreaCommitCount.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiGetControlAreaPartition @ 0x14030EC14 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionFromPte @ 0x1405AE11C (MiGetSubsectionFromPte.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1406F3860 (MiDoesPageRequireRetpolineFixups.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateFileOnlyImageFixupList(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v4; // r15
  unsigned int v6; // r12d
  unsigned int v8; // edi
  unsigned int v9; // edx
  _QWORD *v10; // r9
  int v11; // r10d
  _QWORD *Pool; // r14
  unsigned __int64 v14; // r13
  unsigned int v15; // ebp
  unsigned int v16; // edi
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v22; // rsi
  __int64 v24; // [rsp+20h] [rbp-58h]
  __int64 ControlAreaPartition; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+88h] [rbp+10h]
  unsigned __int64 v29; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = (_QWORD *)(a2 + 96);
  *a3 = 0LL;
  v6 = *(_DWORD *)(a2 + 56);
  v8 = 0;
  v9 = 0;
  if ( !v6 )
    return 0LL;
  v10 = v4;
  v11 = 1;
  do
  {
    if ( *v10 || MiDoesPageRequireRetpolineFixups(a2 + 72, v9) )
      v8 += v11;
    v9 += v11;
    ++v10;
  }
  while ( v9 < v6 );
  if ( !v8 )
    return 0LL;
  Pool = MiAllocatePool(64, 8LL * (v8 + 1), 0x7052694Du);
  if ( Pool )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    v14 = v8;
    if ( (unsigned int)MiChargeCommit(ControlAreaPartition, v8, 0) )
    {
      v15 = 0;
      v16 = 0;
      v24 = *(_QWORD *)a1;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
      v27 = v17;
      while ( 1 )
      {
        if ( *v4 || MiDoesPageRequireRetpolineFixups(a2 + 72, v16) )
        {
          v29 = v17 + 8LL * v16;
          v18 = MI_READ_PTE_LOCK_FREE(v29);
          if ( (v18 & 0x400) != 0 )
          {
            v3 = -1073740023;
            goto LABEL_35;
          }
          if ( (v18 & 0x800) != 0 )
          {
            if ( qword_140C50780 )
            {
              if ( (v18 & 0x10) != 0 )
                v18 &= ~0x10uLL;
              else
                v18 &= ~qword_140C50780;
            }
            v19 = 48 * ((v18 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( (*(_DWORD *)(v19 + 16) & 0x400LL) == 0
              || (*(_BYTE *)(MiGetSubsectionFromPte(*(_QWORD *)(v19 + 16)) + 34) & 2) == 0 )
            {
              v20 = v15++;
              Pool[v20] = v29;
            }
          }
          v17 = v27;
        }
        ++v16;
        ++v4;
        if ( v16 >= v6 )
        {
          if ( v15 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            v22 = v24 + 40;
            ExAcquirePushLockExclusiveEx(v24 + 40, 0LL);
            MiUpdateControlAreaCommitCount(a1, v14);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v22);
            KeAbPostRelease(v22);
            if ( CurrentThread->SpecialApcDisable++ == -1
              && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            *a3 = Pool;
            return 0LL;
          }
LABEL_35:
          MiReturnCommit(ControlAreaPartition, v14);
          ExFreePoolWithTag(Pool, 0);
          return v3;
        }
      }
    }
    ExFreePoolWithTag(Pool, 0);
  }
  return 3221225626LL;
}
