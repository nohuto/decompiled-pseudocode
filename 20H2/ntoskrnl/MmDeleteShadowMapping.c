/*
 * XREFs of MmDeleteShadowMapping @ 0x1408D41A4
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B4E50 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x1409A2120 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1409B2D4C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiInitializeTbFlushList @ 0x140236A5C (MiInitializeTbFlushList.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402FE740 (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  PEPROCESS v9; // rdi
  _KPROCESS *v10; // rdx
  __int64 result; // rax
  _OWORD v12[3]; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v13[48]; // [rsp+50h] [rbp-F8h] BYREF

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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC48, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList(v13, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v9 )
    return KiUnstackDetachProcess((__int64)v12, 0);
  return result;
}
