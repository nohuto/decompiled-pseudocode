/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14061D27C (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1408C55B0 (MiSessionObjectDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiPartitionIdToPointer @ 0x14035A294 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x14035CB94 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140538C50 (MiUnlinkSessionList.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+44h] [rbp-44h]
  unsigned __int64 *v17; // [rsp+48h] [rbp-40h] BYREF
  int v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+54h] [rbp-34h]

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
      v16 = 0;
      v19 = 0;
      v17 = &v14;
      v15 = v5;
      v14 = a1;
      v18 = 12;
      EtwTraceKernelEvent((int)&v17, 1, 0x20400000u, 590, 4200450);
    }
    MiReleasePtes((__int64)&qword_140C4ED40, PteAddress, 1u);
    MiReturnPfnReferenceCount(v9, v10, v11, v12);
    PsDereferencePartition(*(_QWORD *)(v6 + 176));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DBB8, 0LL);
    _bittestandreset((signed __int32 *)qword_140C4ED10->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DBB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DBB8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DBB8);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
