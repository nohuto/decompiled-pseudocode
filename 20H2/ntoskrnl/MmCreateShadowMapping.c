/*
 * XREFs of MmCreateShadowMapping @ 0x140795B8C
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403B4E50 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x1409A2120 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiCleanupPageTablePages @ 0x14024F6AC (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x14024F838 (MiInitializeColorBase.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiPageTablesNeeded @ 0x1403B45B0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x140795D54 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v10; // rdi
  struct _KPROCESS *Process; // r12
  char v12; // r14
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[38]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v16[3]; // [rsp+170h] [rbp+70h] BYREF
  char v17; // [rsp+1A0h] [rbp+A0h] BYREF

  v14 = 0LL;
  memset(v16, 0, sizeof(v16));
  memset(v15, 0, 0x128uLL);
  LODWORD(v15[8]) = 1;
  v15[4] = &MiSystemPartition;
  LODWORD(v15[7]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress, 0, (__int64)&v15[34]);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v15, v5, &v14) < 0 )
    return 0LL;
  v15[3] = v14;
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v6 = MiGetPteAddress(v4);
    *v7 = v6;
    v4 = v6;
    *(v7 - 1) = PteAddress;
  }
  while ( v8 != 1 );
  CurrentThread = KeGetCurrentThread();
  v10 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC48, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v17, 3, (__int64)v15);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    KiUnstackDetachProcess((__int64)v16, 0);
  MiCleanupPageTablePages((__int64)v15);
  return 1LL;
}
