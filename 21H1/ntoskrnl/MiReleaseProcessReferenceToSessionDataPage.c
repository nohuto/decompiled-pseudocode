/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1406E2D20
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14066299C (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x1408C4260 (MiSessionObjectDelete.c)
 * Callees:
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     MiReturnPfnReferenceCount @ 0x14031F084 (MiReturnPfnReferenceCount.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x140538600 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r8
  _DWORD *v9; // r9
  __int64 v10; // r8
  _DWORD *v11; // r9
  _QWORD *PteAddress; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+44h] [rbp-44h]
  unsigned __int64 *v23; // [rsp+48h] [rbp-40h] BYREF
  int v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+54h] [rbp-34h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList((_QWORD *)a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 430));
    v7 = 48LL * *(_QWORD *)(a1 + 32) - 0x58000000000LL;
    MiLockAndDecrementShareCount(v7, 1LL, v8, v9);
    MiLockAndDecrementShareCount(v7, 0LL, v10, v11);
    PteAddress = (_QWORD *)MiGetPteAddress(a1);
    v13 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v22 = 0;
      v25 = 0;
      v23 = &v20;
      v21 = v5;
      v20 = a1;
      v24 = 12;
      EtwTraceKernelEvent((__int64)&v23, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    MiReleasePtes((__int64)&qword_140C4EE80, PteAddress, 1u);
    MiReturnPfnReferenceCount(v13, v14, v15);
    PsDereferencePartition(*(_QWORD *)(v6 + 176));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DCF8, 0LL);
    _bittestandreset((signed __int32 *)qword_140C4EE50->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DCF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DCF8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DCF8);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
  }
  return result;
}
