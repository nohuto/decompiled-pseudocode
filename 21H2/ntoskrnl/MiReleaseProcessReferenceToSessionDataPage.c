/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1408C8D10 (MiSessionObjectDelete.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x14024D52C (MiReturnPfnReferenceCount.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x14053E360 (MiUnlinkSessionList.c)
 */

char __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  char result; // al
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rdi
  _QWORD *PteAddress; // r14
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-48h]
  int v13; // [rsp+44h] [rbp-44h]
  unsigned __int64 *v14; // [rsp+48h] [rbp-40h] BYREF
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = v2 - 1;
  if ( v3 )
  {
    MiUnlinkSessionList((_QWORD *)a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 430));
    v7 = 48LL * *(_QWORD *)(a1 + 32) - 0x58000000000LL;
    MiLockAndDecrementShareCount(v7, 1);
    MiLockAndDecrementShareCount(v7, 0);
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v13 = 0;
      v16 = 0;
      v14 = &v11;
      v12 = v5;
      v11 = a1;
      v15 = 12;
      EtwTraceKernelEvent((int)&v14, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_140C4EF80, PteAddress, 1u);
    MiReturnPfnReferenceCount(v9);
    PsDereferencePartition(*(_QWORD *)(v6 + 176));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDF8, 0LL);
    _bittestandreset((signed __int32 *)qword_140C4EF50->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DDF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DDF8);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
