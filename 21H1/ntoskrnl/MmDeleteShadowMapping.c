/*
 * XREFs of MmDeleteShadowMapping @ 0x1408CD014
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403AC860 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14099A884 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1409ABF7C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiInitializeTbFlushList @ 0x1402AC8CC (MiInitializeTbFlushList.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14033BD80 (MiReadWriteAnyLevelShadowPte.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  _DWORD *v9; // r9
  PEPROCESS v10; // rdi
  _KPROCESS *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  _OWORD v18[3]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v19[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v19, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v19, 0, 20);
  MiInsertTbFlushEntry((__int64)v19, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v18, v9);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DD08, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v19, v11);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DD08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
  if ( Process != v10 )
    return KiUnstackDetachProcess((__int64)v18, 0LL, v16, v17);
  return result;
}
