/*
 * XREFs of MmManagePartitionNodeInformation @ 0x1408DBD88
 * Callers:
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmManagePartitionNodeInformation(__int64 a1, unsigned int *a2, char a3)
{
  void *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  SIZE_T v8; // r15
  PVOID Pool; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // r12
  _QWORD *v12; // r14
  unsigned int v13; // r15d
  signed __int64 *v14; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  PVOID v19; // [rsp+88h] [rbp+20h]

  v5 = 0LL;
  v19 = 0LL;
  if ( a2[1] || (v7 = *a2, (_DWORD)v7 != (unsigned __int16)KeNumberNodes) )
  {
    v6 = -1073741811;
    goto LABEL_20;
  }
  v8 = 72 * v7;
  v17 = 72 * v7;
  if ( a3 )
  {
    Pool = MiAllocatePool(64, 72 * v7, 0x694E694Du);
    v5 = Pool;
    v19 = Pool;
    if ( !Pool )
    {
      v6 = -1073741670;
      goto LABEL_20;
    }
    v10 = Pool;
    LODWORD(v7) = *a2;
  }
  else
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
  }
  CurrentThread = KeGetCurrentThread();
  v11 = *(_QWORD **)(*(_QWORD *)a1 + 16LL);
  if ( (_DWORD)v7 )
  {
    v12 = v10 + 7;
    v13 = 0;
    do
    {
      memset(v12 - 7, 0, 0x48uLL);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 537), 0LL);
      *(v12 - 7) = v11[522];
      *(v12 - 5) = v11[516];
      *(v12 - 6) = v11[517];
      *(v12 - 3) = v11[268];
      *(v12 - 4) = v11[269];
      *(v12 - 1) = v11[134];
      *(v12 - 2) = v11[135];
      v12[1] = *v11;
      *v12 = v11[1];
      v14 = v11 + 537;
      if ( _InterlockedCompareExchange64(v11 + 537, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v14);
        v14 = v11 + 537;
      }
      KeAbPostRelease((ULONG_PTR)v14);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( (unsigned __int64)(*(v12 - 5)
                            + ((*v12 + v12[1]) << 18)
                            + *(v12 - 6)
                            + 16 * (*(v12 - 3) + *(v12 - 4) + 32LL * (*(v12 - 1) + *(v12 - 2)))) <= *(v12 - 7) )
      {
        ++v13;
        v11 += 568;
        v12 += 9;
      }
    }
    while ( v13 < *a2 );
    v5 = v19;
    v8 = v17;
  }
  if ( a3 )
  {
    ProbeForWrite(*((volatile void **)a2 + 1), v8, 8u);
    memmove(*((void **)a2 + 1), v10, v8);
  }
  v6 = 0;
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
