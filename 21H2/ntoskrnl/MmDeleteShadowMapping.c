/*
 * XREFs of MmDeleteShadowMapping @ 0x1408D1AC4
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B6640 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x1409A0924 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1409B0B7C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiReadWriteAnyLevelShadowPte @ 0x140226A60 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInitializeTbFlushList @ 0x14025BEFC (MiInitializeTbFlushList.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  PEPROCESS v9; // rdi
  _KPROCESS *v10; // rdx
  char result; // al
  _OWORD v12[3]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v13[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v13, 0, 20);
  MiInsertTbFlushEntry((__int64)v13, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v9 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v12);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DE08, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v13, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DE08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v9 )
    return KiUnstackDetachProcess((__int64)v12, 0LL);
  return result;
}
