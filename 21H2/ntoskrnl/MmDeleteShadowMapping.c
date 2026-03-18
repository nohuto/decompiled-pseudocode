/*
 * XREFs of MmDeleteShadowMapping @ 0x140978B04
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x140A5A148 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140A69E6C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x14027FCE4 (MiInitializeTbFlushList.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1403853B0 (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rbp
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  _DWORD *v9; // r9
  PEPROCESS v10; // rdi
  $CEA84C04E3712D858E5667A507841A2A *v11; // rax
  _OWORD v14[3]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v15[192]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v15, 0, 20);
  MiInsertTbFlushEntry((__int64)v15, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v14, v9);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v15);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50628);
  LOBYTE(v11) = KeAbPostRelease((ULONG_PTR)&qword_140C50628);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v11 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v11->ApcState.ApcListHead[0].Flink != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery();
  }
  if ( Process != v10 )
    LOBYTE(v11) = KiUnstackDetachProcess((__int64)v14, 0LL);
  return (char)v11;
}
