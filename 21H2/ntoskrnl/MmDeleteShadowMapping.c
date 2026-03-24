/*
 * XREFs of MmDeleteShadowMapping @ 0x1408D1964
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B64D0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14099F9F4 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1409AFC4C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiInitializeTbFlushList @ 0x14026DF5C (MiInitializeTbFlushList.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402A8920 (MiReadWriteAnyLevelShadowPte.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 */

char __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  _DWORD *v9; // r9
  PEPROCESS v10; // rdi
  _KPROCESS *v11; // rdx
  char result; // al
  _OWORD v13[3]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v14[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v13, 0, sizeof(v13));
  memset(v14, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v14, 0, 20);
  MiInsertTbFlushEntry((__int64)v14, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v13, v9);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0LL, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v14, v11);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DDC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    return KiUnstackDetachProcess((__int64)v13, 0);
  return result;
}
