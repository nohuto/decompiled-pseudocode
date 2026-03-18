/*
 * XREFs of MmDeleteShadowMapping @ 0x1408CE364
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B24E0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14099C020 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1409ACDDC (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiInitializeTbFlushList @ 0x14025389C (MiInitializeTbFlushList.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403619F0 (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v12);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DBC8, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v13, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DBC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DBC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DBC8);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v9 )
    return KiUnstackDetachProcess((__int64)v12, 0LL);
  return result;
}
