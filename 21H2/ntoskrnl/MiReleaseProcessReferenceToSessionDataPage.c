/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x140682FC4
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140682D54 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1408C8BB0 (MiSessionObjectDelete.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x1402CF02C (MiReturnPfnReferenceCount.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x14053E120 (MiUnlinkSessionList.c)
 */

char __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  char result; // al
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r8
  _QWORD *PteAddress; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+44h] [rbp-44h]
  unsigned __int64 *v18; // [rsp+48h] [rbp-40h] BYREF
  int v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+54h] [rbp-34h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = v2 - 1;
  if ( v3 )
  {
    MiUnlinkSessionList((_QWORD *)a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 430));
    v7 = 48LL * *(_QWORD *)(a1 + 32) - 0x58000000000LL;
    MiLockAndDecrementShareCount(v7, 1LL, v8);
    MiLockAndDecrementShareCount(v7, 0LL, v9);
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v17 = 0;
      v20 = 0;
      v18 = &v15;
      v16 = v5;
      v15 = a1;
      v19 = 12;
      EtwTraceKernelEvent((int)&v18, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, 1u);
    MiReturnPfnReferenceCount(v11, v12, v13);
    PsDereferencePartition(*(_QWORD *)(v6 + 176));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDB8, 0LL);
    _bittestandreset((signed __int32 *)qword_140C4EF10->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DDB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DDB8);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
