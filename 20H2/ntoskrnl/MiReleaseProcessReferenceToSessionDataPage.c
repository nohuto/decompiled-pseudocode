/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14065EABC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140660164 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1408CB3F0 (MiSessionObjectDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiPartitionIdToPointer @ 0x14031EF60 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x14032D51C (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x14053C620 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
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
  result = (unsigned int)(v2 - 1);
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
      EtwTraceKernelEvent((__int64)&v14, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    MiReleasePtes((__int64)&qword_140C4EDC0, PteAddress, 1u);
    MiReturnPfnReferenceCount(v9);
    PsDereferencePartition(*(_QWORD *)(v6 + 176));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC38, 0LL);
    _bittestandreset((signed __int32 *)qword_140C4ED90->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC38);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DC38);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
